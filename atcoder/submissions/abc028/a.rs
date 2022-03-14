use std::cmp::*;
use proconio::input;
use proconio::marker::Chars;

fn main() {
    input!{
        n:i32,
    }
    if n <= 59 {
        println!("Bad");
    } else if n <= 89 {
        println!("Good");
    } else if n <= 99 {
        println!("Great");
    } else {
        println!("Perfect");
    }
}
