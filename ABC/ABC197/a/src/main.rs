use std::cmp::*;
use proconio::input;
use proconio::marker::Chars;

fn main() {
    let s:String = read();
    let sc = s.chars().collect::<Vec<char>>();
    println!("{}{}{}", sc[1],sc[2],sc[0]);
}

fn read<T: std::str::FromStr>() -> T {
    let mut buf = String::new();
    std::io::stdin().read_line(&mut buf).ok();
    buf.trim().parse::<T>().ok().unwrap()
  }
