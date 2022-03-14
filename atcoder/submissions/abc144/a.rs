use proconio::input;
use proconio::marker::Chars;

fn main() {
    input!{
        a: i32,
        b: i32,
    }
    if (a < 10) && (b < 10) {
        println!("{}", a * b);
    } else {
        println!("-1");
    }
}
