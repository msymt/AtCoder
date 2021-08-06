use std::cmp::*;
use proconio::input;
use proconio::marker::Chars;

fn main() {
  input!{
    n:i32,
    a:i32,
    x:i32,
    y:i32,
  }
  let mut ans:i32 = 0;
  ans += x * min(a, n);
  if a < n {
    ans += (n - a)*y;
  }
  println!("{}", ans);
}
