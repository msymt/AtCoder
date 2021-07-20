use std::cmp::*;
use proconio::input;
use proconio::marker::Chars;

fn main() {
    let a:i32 = read();
    if a < 0 {
      println!("0");
    } else {
      println!("{}", a);
    }
}

fn read<T: std::str::FromStr>() -> T {
    let mut buf = String::new();
    std::io::stdin().read_line(&mut buf).ok();
    buf.trim().parse::<T>().ok().unwrap()
}
