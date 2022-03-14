use std::cmp::*;
use proconio::input;
use proconio::marker::Chars;

fn main() {
    let n:i32 = read();
    println!("{}", n - 1);
}

fn read<T: std::str::FromStr>() -> T {
    let mut buf = String::new();
    std::io::stdin().read_line(&mut buf).ok();
    buf.trim().parse::<T>().ok().unwrap()
}
