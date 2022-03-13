use std::cmp::*;
use proconio::input;
use proconio::marker::Chars;

fn main() {
    input!{
        a:i32,
        b:i32,
        n:i32,
    }
    let mut c = n;
    loop {
        if c % a == 0 && c % b == 0 {
            break;
        } else {
            c = c + 1;
        }
    }
    println!("{}", c);
}
