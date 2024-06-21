use std::io::{self, BufRead, BufReader, Write, BufWriter};
 
const MOD: i64 = 1000000007;
const PHI: i64 = MOD - 1; // Euler's totient function value for MOD
 
#[inline(always)]
fn power(mut a: i64, mut b: i64, p: i64) -> i64 {
    let mut result: i64 = 1;
    while b > 0 {
        if b & 1 != 0 {
            result = (result * a) % p;
        }
        a = (a * a) % p;
        b >>= 1;
    }
    result
}
 
fn main() {
    let stdin = io::stdin();
    let stdout = io::stdout();
    let reader = BufReader::new(stdin.lock());
    let mut writer = BufWriter::new(stdout.lock());
 
    let mut lines = reader.lines();
    let n: usize = lines.next().unwrap().unwrap().trim().parse().unwrap();
 
    for line in lines.take(n) {
        let line = line.unwrap();
        let mut nums = [0i64; 3];
        let mut idx = 0;
        let mut current_num = 0i64;
 
        for byte in line.bytes() {
            if byte.is_ascii_digit() {
                current_num = 10 * current_num + (byte - b'0') as i64;
            } else if byte == b' ' || byte == b'\n' {
                nums[idx] = current_num;
                idx += 1;
                current_num = 0;
            }
        }
        nums[idx] = current_num;
 
        let ans = power(nums[0], power(nums[1], nums[2], PHI), MOD);
        writeln!(writer, "{}", ans).unwrap();
    }
}
