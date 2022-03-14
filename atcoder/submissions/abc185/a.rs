use std::cmp::*;
use proconio::input;
use proconio::marker::Chars;

fn main() {
  input! {
    a1:i32,
    a2:i32,
    a3:i32,
    a4:i32,
  }
  println!("{}", min(min(min(a1, a2), a3), a4));
}
