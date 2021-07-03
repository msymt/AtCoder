use std::cmp::*;
use proconio::input;
use proconio::marker::Chars;

fn main() {
    input!{
        a:f64,
        b:f64,
        c:f64,
        d:f64,
    }
    let tak:f64 = b / a;
    let aok:f64 = d / c;
    if tak > aok {
        println!("TAKAHASHI");
    } else if tak < aok {
        println!("AOKI");
    } else {
        println!("DRAW");
    }
}
