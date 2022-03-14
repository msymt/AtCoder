use std::cmp::*;
use proconio::input;
use proconio::marker::Chars;

fn main() {
    input!{
      v:i32,
      t:i32,
      s:i32,
      d:i32,
    }
    if v*t <= d && d <= v*s {
      println!("No");
    } else {
      println!("Yes");
    }
}
