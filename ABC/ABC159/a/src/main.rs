use proconio::input;
use proconio::marker::Chars;

fn main() {
    input!{
        n: i32,
        m: i32,
    }
    print!("{}",n*(n-1)/2 + m*(m-1)/2);
}
