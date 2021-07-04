use std::cmp::*;
use proconio::input;
use proconio::marker::Chars;

fn main() {
    input!{
        a:u32,
        b:u32,
        c:u32,
        k:u32,
        s:u32,
        t:u32,
    }
    let ch = a * s;
    let ad = b * t;
    if (s + t) >= k {
        println!("{}", ch + ad - (s + t)*c);
    } else {
        println!("{}", ch + ad);
    }
}
