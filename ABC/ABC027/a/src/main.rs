use std::cmp::*;
use proconio::input;
use proconio::marker::Chars;

fn main() {
    input!{
        a:u32,
        b:u32,
        c:u32,
    }
    let mut vec: [u32; 3] = [a, b, c];
    vec.sort();
    if vec[0] == vec[1] {
        println!("{}", vec[2]);
    } else if vec[1] == vec[2] {
        println!("{}", vec[0]);
    }
}
