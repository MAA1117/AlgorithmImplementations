// Doesnt work
use std::io::{self, BufRead, BufReader, Write, BufWriter};

const N: usize = 200_000;
const X: u64 = 100_000_0000;

pub struct UnsafeScanner<R> {
    reader: R,
    buf_str: Vec<u8>,
    buf_iter: std::str::SplitAsciiWhitespace<'static>,
}
 
impl<R: std::io::BufRead> UnsafeScanner<R> {
    pub fn new(reader: R) -> Self {
        Self {
            reader,
            buf_str: vec![],
            buf_iter: "".split_ascii_whitespace(),
        }
    }
 
    pub fn token<T: std::str::FromStr>(&mut self) -> T {
        loop {
            if let Some(token) = self.buf_iter.next() {
                return token.parse().ok().expect("Failed parse");
            }
            self.buf_str.clear();
            self.reader
                .read_until(b'\n', &mut self.buf_str)
                .expect("Failed read");
            self.buf_iter = unsafe {
                let slice = std::str::from_utf8_unchecked(&self.buf_str);
                std::mem::transmute(slice.split_ascii_whitespace())
            }
        }
    }
}

//fn getint<R: Read>(stdin: &mut R) -> Result<i32, std::io::Error> {
//    let mut buffer = [0; 1];
//    let mut num_str = String::new();
//
//    loop {
//        stdin.read_exact(&mut buffer)?;
//        let ch = buffer[0] as char;
//        if ch.is_ascii_digit() || ch == '-' {
//            num_str.push(ch);
//            break;
//        }
//    }
//
//    loop {
//        match stdin.read_exact(&mut buffer) {
//            Ok(_) => {
//                let ch = buffer[0] as char;
//                if ch.is_ascii_digit() {
//                    num_str.push(ch);
//                } else {
//                    break;
//                }
//            }
//            Err(e) => {
//                if e.kind() == std::io::ErrorKind::UnexpectedEof {
//                    break;
//                } else {
//                    return Err(e);
//                }
//            }
//        }
//    }
//
//    num_str.parse::<i32>().map_err(|e| std::io::Error::new(std::io::ErrorKind::InvalidData, e))
//}

fn sort_morton(x: &mut [u64], t: &mut [u64]) {
    let mut freq = [[0usize; 256]; 8];

    for &v in x.iter() {
        for p in 0..8 {
            let index = ((v >> (28 + p * 4)) & 0xF | (v >> (p * 4)) & 0xF) as usize;
            freq[p][index] += 1;
        }
    }

    for p in 0..8 {
        let (src, dst) = if p % 2 == 0 { (x.as_mut(), &mut *t) } else { (&mut *t, x.as_mut()) };

        let mut cumsum = 0;
        for i in 0..256 {
            let temp = freq[p][i];
            freq[p][i] = cumsum;
            cumsum += temp;
        }

        for &v in src.iter() {
            let index = ((v >> (28 + p * 4)) & 0xF | (v >> (p * 4)) & 0xF) as usize;
            dst[freq[p][index]] = v;
            freq[p][index] += 1;
        }
    }
}

fn sort_masked(x: &mut [u64], t: &mut [u64], mask: u64) {
    let mut freq = [[0usize; 256]; 8];

    for &v in x.iter() {
        let v_masked = v & mask;
        for p in 0..8 {
            let index = (v_masked >> (p * 8) & 0xFF) as usize;
            freq[p][index] += 1;
        }
    }

    for p in 0..8 {
        let (src, dst) = if p % 2 == 0 { (x.as_mut(), &mut *t) } else { (&mut *t, x.as_mut()) };

        let mut cmsum = 0;
        for i in 0..256 {
            let temp = freq[p][i];
            freq[p][i] = cmsum;
            cmsum += temp;
        }

        for &v in src.iter() {
            let index = ((v & mask) >> (p * 8)) as usize & 0xFF;
            dst[freq[p][index]] = v;
            freq[p][index] += 1;
        }
    }
}

fn d2(a: u64, b: u64) -> i64 {
    let dx = ((a & 0xFFFFFFFF) as i64) - ((b & 0xFFFFFFFF) as i64);
    let dy = ((a >> 32) as i64) - ((b >> 32) as i64);
    dx * dx + dy * dy
}

fn main() {
    let stdin = io::stdin();
    let stdout = io::stdout();
    let reader = BufReader::new(stdin.lock());
    let mut writer = BufWriter::new(stdout.lock());
    let mut scanner = UnsafeScanner::new(reader);
    let n: usize = scanner.token();
    
//Example usage
//fn main() {
//    let stdin = io::stdin();
//    let stdout = io::stdout();
//    let reader = BufReader::new(stdin.lock());
//    let mut writer = BufWriter::new(stdout.lock());
//    let mut scanner = UnsafeScanner::new(reader);
//    let n: usize = scanner.token();
//    for _ in 0..n {
//        let a: i64 = scanner.token();
//        let b: i64 = scanner.token();
//        let c: i64 = scanner.token();
//        let ans = power(a, power(b, c, 0x3B9ACA06, MU_3B9ACA06), 0x3B9ACA07, MU_3B9ACA07);
//        
//        writeln!(writer, "{}", ans).unwrap();
//    }
//}


    let mut xy = vec![0u64; N];
    let mut t = vec![0u64; N];

    for i in 0..n {
        let x: u64 = scanner.token();
        let y: u64 = scanner.token();

        xy[i] = x + (y << 32);
    }

    sort_morton(&mut xy[..n], &mut t[..n]);

    let mut minw = !0u64;
    for i in 1..n {
        let w = xy[i - 1] ^ xy[i];
        if w < minw {
            minw = w;
        }
    }

    let c = 63 - minw.leading_zeros();
    let gs = 1u64 << c;
    let m = !0u64 << c & 0xFFFFFFFF | (!0u64 << c & 0xFFFFFFFF) << 32;

    sort_masked(&mut xy[..n], &mut t[..n], m);

    let mut r = i64::MAX;
    for i in 0..n-1 {
        for j in i+1..n {
            let d = d2(xy[i], xy[j]);
            if d < r {
                r = d;
            }
        }
    }

    println!("{}", r);
}

