use std::cmp::*;
use proconio::input;
use proconio::marker::Chars;

fn main() {
    let n:i32 = read();
    if n % 2 == 0 {
      println!("White");
    } else {
      println!("Black");
    }
}

fn read<T: std::str::FromStr>() -> T {
    let mut buf = String::new();
    std::io::stdin().read_line(&mut buf).ok();
    buf.trim().parse::<T>().ok().unwrap()
}

