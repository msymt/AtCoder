use proconio::input;
use proconio::marker::Chars;

fn main() {
    input!{
        s: String,
        t: String,
        a: i32,
        b: i32,
        u: String,
    }
    if u == s {
        println!("{} {}", a - 1, b);
    } else {
        println!("{} {}", a, b - 1);
    }
}
