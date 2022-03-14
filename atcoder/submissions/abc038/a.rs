use std::cmp::*;
use proconio::input;
use proconio::marker::Chars;

fn main() {
    input!{
        s:String,
    }
    let sc = s.chars().collect::<Vec<char>>();
    if sc[sc.len() - 1] == 'T' {
        println!("{}", "YES");
    } else {
        println!("{}", "NO");
    }
}
