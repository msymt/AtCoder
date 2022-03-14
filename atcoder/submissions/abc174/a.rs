use std::cmp::*;
use proconio::input;
use proconio::marker::Chars;

fn main() {
    let a:i32 = read();
    if a >= 30 {
      println!("Yes");
    } else {
      println!("No");
    }
}

fn read<T: std::str::FromStr>() -> T {
    let mut buf = String::new();
    std::io::stdin().read_line(&mut buf).ok();
    buf.trim().parse::<T>().ok().unwrap()
}
