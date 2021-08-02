use std::cmp::*;
use proconio::input;
use proconio::marker::Chars;

fn main() {
    let (a,b,c):(i32,i32,i32) = read_tuple();
    if a == b || b == c || a == c {
      if a == b {println!("{}", c);}
      else if b == c {println!("{}", a);}
      else {println!("{}", b);}
    } else {
      println!("0");
    }
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
