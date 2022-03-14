use proconio::input;
use proconio::marker::Chars;

fn main() {
    input!{
        n: i32,
        m: i32,
    }
    if n == m {
        println!("Yes");
    } else {
        println!("No");
    }
}
