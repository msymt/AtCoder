use std::cmp::*;
use proconio::input;
use proconio::marker::Chars;

fn main() {
    let s:String = read();
    let mut cnt = 0;
    if s == "RRR" {
      cnt = 3;
    } else if s == "RRS" || s == "SRR" {
      cnt = 2;
    } else if s == "SSS" {
      cnt = 0;
    } else {
      cnt = 1;
    }
    println!("{}", cnt);
}

fn read<T: std::str::FromStr>() -> T {
    let mut buf = String::new();
    std::io::stdin().read_line(&mut buf).ok();
    buf.trim().parse::<T>().ok().unwrap()
}
