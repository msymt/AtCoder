use proconio::input;
use proconio::marker::Chars;
use std::collections::HashSet;

fn main() {
    input ! {
        n: i32,
        a: i32,
        b: i32
    }
    let ans = n - a + b;
    println!("{}", ans);
}
