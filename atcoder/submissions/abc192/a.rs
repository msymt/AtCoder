use std::cmp::*;
use proconio::input;
use proconio::marker::{Bytes, Chars, Usize1};

fn main() {
  let x:i32 = read();
  let ans = 100 - x % 100;
  if ans == 0 {
    println!("100");
  } else {
    println!("{}", ans);
  }
}

fn read<T: std::str::FromStr>() -> T {
  let mut buf = String::new();
  std::io::stdin().read_line(&mut buf).ok();
  buf.trim().parse::<T>().ok().unwrap()
}

