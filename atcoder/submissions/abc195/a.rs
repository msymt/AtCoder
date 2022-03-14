use std::cmp::*;
use proconio::input;
use proconio::marker::{Bytes, Chars, Usize1};

fn main() {
  let (m, h):(i32,i32) = reads_tuple();
  if h % m == 0 {
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

  fn reads<T: std::str::FromStr>(n: usize) -> Vec<T> {
    let mut vec: Vec<T> = vec![];
    for _ in 0 .. n {
      vec.push(read());
    }
    vec
  }

  fn reads_tuple<T1: std::str::FromStr, T2: std::str::FromStr>() -> (T1, T2) {
    let mut buf = String::new();
    std::io::stdin().read_line(&mut buf).ok();
    let mut it = buf.trim().split_whitespace();
    let x = it.next().unwrap().parse::<T1>().ok().unwrap();
    let y = it.next().unwrap().parse::<T2>().ok().unwrap();
    (x, y)
  }

  fn read_tuple<T1: std::str::FromStr, T2: std::str::FromStr, T3: std::str::FromStr>() -> (T1, T2, T3) {
    let mut buf = String::new();
    std::io::stdin().read_line(&mut buf).ok();
    let mut it = buf.trim().split_whitespace();
    let x = it.next().unwrap().parse::<T1>().ok().unwrap();
    let y = it.next().unwrap().parse::<T2>().ok().unwrap();
    let z = it.next().unwrap().parse::<T3>().ok().unwrap();
    (x, y, z)
  }
