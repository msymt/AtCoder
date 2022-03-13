use std::cmp::*;
use proconio::input;
use proconio::marker::Chars;

fn main() {
    let n:f64 = read();
    if ((n * 1.08) as i64) < 206 {
      println!("Yay!");
    } else if ((n * 1.08) as i64) == 206 {
      println!("so-so");
    } else {
      println!(":(");
    }
}

fn read<T: std::str::FromStr>() -> T {
    let mut buf = String::new();
    std::io::stdin().read_line(&mut buf).ok();
    buf.trim().parse::<T>().ok().unwrap()
  }
