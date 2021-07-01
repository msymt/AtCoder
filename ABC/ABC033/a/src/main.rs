use std::cmp::*;
use proconio::input;
use proconio::marker::Chars;

fn main() {
    input!{
        s:String,
    }
    let sc = s.chars().collect::<Vec<char>>();
    for i in 1..sc.len() {
        if sc[0] != sc[i] {
            println!("DIFFERENT");
            return;
        }
    }
    println!("SAME");
}
