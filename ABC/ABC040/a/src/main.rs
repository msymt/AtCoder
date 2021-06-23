use std::cmp::*;
use proconio::input;
use proconio::marker::Chars;

fn main() {
    input!{
        n:i32,
        x:i32,
    }
    println!("{}", min(n - x, x - 1));
}
