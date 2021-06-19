use proconio::input;
use proconio::marker::Chars;

fn main() {
    input!{
        n:i32,
        k:i32,
        x:i32,
        y:i32,
    }
    let mut sumt = 0;
    if n <= k {
        sumt += n*x;
    } else {
        sumt += k*x;
        sumt += (n - k)*y;
    }
    println!("{}", sumt);
}
