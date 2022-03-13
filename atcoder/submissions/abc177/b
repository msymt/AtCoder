use std::cmp::*;
use proconio::input;
use proconio::marker::{Bytes, Chars, Usize1};

fn main() {
  input! {
      s: Bytes,
      t: Bytes,
  }
  let mut ans = t.len();
  for i in 0..s.len() - t.len() + 1 {
      let mut diff = 0;
      for j in 0..t.len() {
          if t[j] != s[i + j] {
            diff += 1;
          }
      }
      ans = min(ans, diff);
  }

  println!("{}", ans);
}

fn read<T: std::str::FromStr>() -> T {
  let mut buf = String::new();
  std::io::stdin().read_line(&mut buf).ok();
  buf.trim().parse::<T>().ok().unwrap()
}

