#![feature(core_intrinsics)]
use std::cmp::Ordering;
use std::io::{stdin, stdout, BufRead, BufReader, BufWriter, Write};
use std::intrinsics::{unchecked_add, unchecked_mul, unchecked_sub};

const BUFFER_SIZE: usize = 2048 * 1024;

pub struct UnsafeScanner<R> {
    reader: R,
    buf_str: Vec<u8>,
    buf_iter: std::str::SplitAsciiWhitespace<'static>,
}

impl<R: BufRead> UnsafeScanner<R> {
    pub fn new(reader: R) -> Self {
        Self {
            reader,
            buf_str: vec![],
            buf_iter: "".split_ascii_whitespace(),
        }
    }

    #[inline]
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

fn main() {
    let stdin = stdin();
    let stdout = stdout();
    let reader = BufReader::new(stdin.lock());
    let mut writer = BufWriter::with_capacity(BUFFER_SIZE, stdout.lock());
    let mut scanner = UnsafeScanner::new(reader);
    let t: i32 = scanner.token();

    for _ in 0..t {
        let x1: i64 = scanner.token();
        let y1: i64 = scanner.token();
        let x2: i64 = scanner.token();
        let y2: i64 = scanner.token();
        let x3: i64 = scanner.token();
        let y3: i64 = scanner.token();

        let d = unsafe {
            let dx1 = unchecked_sub(x3, x1);
            let dy1 = unchecked_sub(y2, y1);
            let dx2 = unchecked_sub(x2, x1);
            let dy2 = unchecked_sub(y3, y1);

            unchecked_sub(unchecked_mul(dx1, dy1), unchecked_mul(dx2, dy2))
        };

        match d.cmp(&0i64) {
            Ordering::Greater => writeln!(writer, "RIGHT").unwrap(),
            Ordering::Less => writeln!(writer, "LEFT").unwrap(),
            Ordering::Equal => writeln!(writer, "TOUCH").unwrap(),
        }
    }
}

