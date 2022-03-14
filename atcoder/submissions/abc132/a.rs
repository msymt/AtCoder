use proconio::input;
use proconio::marker::Chars;
use std::collections::HashSet;

fn main() {
    input ! {
        mut s: Chars
    }
    let mut chk = HashSet::new();
    for i in 0..s.len() {
        chk.insert(s[i]);
    }
    if chk.len() == 2 {
        println!("Yes");
    } else {
        println!("No");
    }
}
