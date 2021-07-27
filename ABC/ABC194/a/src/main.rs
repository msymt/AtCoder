use std::cmp::*;
use proconio::input;
use proconio::marker::{Bytes, Chars, Usize1};

fn main() {
  let (a, b):(i32,i32) = reads_tuple();
  let ab:i32 = a + b;
  if ab >= 15 && b >=8 {
    println!("1");
  } else if ab >= 10 && b >= 3 {
    println!("2");
  } else if ab >= 3 {
    println!("3");
  } else {
    println!("4");
  }
}

  fn reads_tuple<T1: std::str::FromStr, T2: std::str::FromStr>() -> (T1, T2) {
    let mut buf = String::new();
    std::io::stdin().read_line(&mut buf).ok();
    let mut it = buf.trim().split_whitespace();
    let x = it.next().unwrap().parse::<T1>().ok().unwrap();
    let y = it.next().unwrap().parse::<T2>().ok().unwrap();
    (x, y)
  }
