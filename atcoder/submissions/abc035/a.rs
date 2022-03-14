use std::cmp::*;
use proconio::input;
use proconio::marker::Chars;

fn main() {
    input!{
        w:i32,
        h:i32,
    }
    if w % 16 == 0 && h % 9 == 0 {
        println!("16:9");
    } else {
        println!("4:3");
    }
}
