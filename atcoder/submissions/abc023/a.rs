use std::cmp::*;
use proconio::input;
use proconio::marker::Chars;

fn main() {
    input!{
        x:u32,
    }
    println!("{}", x / 10 + x % 10);
}
