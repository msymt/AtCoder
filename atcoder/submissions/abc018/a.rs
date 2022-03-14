use std::cmp::*;
use proconio::input;
use proconio::marker::Chars;

fn main() {
    input!{
        a:i32,
        b:i32,
        c:i32
    }
    let mut vec: Vec<i32> = Vec::new();
    let mut ans: Vec<i32> = Vec::new();
    vec.push(a);
    vec.push(b);
    vec.push(c);
    // vec.sort();
    if vec[0] > vec[1] && vec[0] > vec[2] {
        println!("1");
    } else if vec[0] > vec[1] || vec[0] > vec[2] {
        println!("2");
    } else {
        println!("3");
    }

    if vec[1] > vec[0] && vec[1] > vec[2] {
        println!("1");
    } else if vec[1] > vec[0] || vec[1] > vec[2] {
        println!("2");
    } else {
        println!("3");
    }

    if vec[2] > vec[0] && vec[2] > vec[1] {
        println!("1");
    } else if vec[2] > vec[0] || vec[2] > vec[1] {
        println!("2");
    } else {
        println!("3");
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

  fn read_tuple<T1: std::str::FromStr, T2: std::str::FromStr, T3: std::str::FromStr>() -> (T1, T2, T3) {
    let mut buf = String::new();
    std::io::stdin().read_line(&mut buf).ok();
    let mut it = buf.trim().split_whitespace();
    let x = it.next().unwrap().parse::<T1>().ok().unwrap();
    let y = it.next().unwrap().parse::<T2>().ok().unwrap();
    let z = it.next().unwrap().parse::<T3>().ok().unwrap();
    (x, y, z)
  }
