use std::cmp::*;
use proconio::input;
use proconio::marker::Chars;

fn main() {
    let x:i32= read();
    println!("{}", (x - 1).abs());
}

fn read<T: std::str::FromStr>() -> T {
    let mut buf = String::new();
    std::io::stdin().read_line(&mut buf).ok();
    buf.trim().parse::<T>().ok().unwrap()
}
