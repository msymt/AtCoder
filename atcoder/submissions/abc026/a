use std::cmp::*;
use proconio::input;
use proconio::marker::Chars;

fn main() {
    input!{
        a:u32,
    }
    let mut maxt = 0;
    for i in 1..a {
        for j in 1..a {
            let tmp = i + j;
            if tmp == a {
                maxt = max(maxt, i * j);
            }
        }
    }
    println!("{}", maxt);
}
