use proconio::input;
use proconio::marker::Chars;

fn main() {
    input!{
        s: String,
    }
    let b = "ABC";
    let r = "ARC";
    if s == b {
        println!("{}", r);
    } else {
        println!("{}", b);
    }
}
