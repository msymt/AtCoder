use std::cmp::*;
use proconio::input;
use proconio::marker::Chars;

fn main() {
    let n:i32 = read();
    if n % 1000 == 0 {
        println!("0");
    } else {
        println!("{}", ((n / 1000) + 1) * 1000 - n);
    }
}

fn read<T: std::str::FromStr>() -> T {
    let mut buf = String::new();
    std::io::stdin().read_line(&mut buf).ok();
    buf.trim().parse::<T>().ok().unwrap()
}
