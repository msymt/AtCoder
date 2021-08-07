use std::cmp::*;
use proconio::input;
use proconio::marker::Chars;

fn main() {
  input! {
    n: usize,
    av: [usize; n],
    bv: [usize; n],
  }
  let mut res = 0;
  for x in 1..=1000 {
    let ok = (0..n).all(|i| x >= av[i] && x <= bv[i]);
    if ok { res += 1;}
  }
  println!("{}", res);
}
