use proconio::input;
use proconio::marker::Chars;

fn main() {
    input!{
        n:i32,
    }
    let mut sumt = 0;
    for i in 1..n+1 {
        sumt += i;
    }
    println!("{}", sumt);
}
