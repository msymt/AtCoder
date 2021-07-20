use std::cmp::*;
use proconio::input;
use proconio::marker::Chars;

fn main() {
    let (a,b):(String,String) = reads_tuple();
    let ac = a.chars().collect::<Vec<char>>();
    let bc = b.chars().collect::<Vec<char>>();
    let suma: i32 = (ac[0] as i32 - 48) + (ac[1] as i32 - 48) + (ac[2] as i32 - 48);
    let sumb: i32 = (bc[0] as i32 - 48) + (bc[1] as i32 - 48) + (bc[2] as i32 - 48);
    println!("{}", max(suma, sumb));
}

  fn reads_tuple<T1: std::str::FromStr, T2: std::str::FromStr>() -> (T1, T2) {
    let mut buf = String::new();
    std::io::stdin().read_line(&mut buf).ok();
    let mut it = buf.trim().split_whitespace();
    let x = it.next().unwrap().parse::<T1>().ok().unwrap();
    let y = it.next().unwrap().parse::<T2>().ok().unwrap();
    (x, y)
  }
