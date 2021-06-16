use proconio::input;
use proconio::marker::Chars;

fn main() {
    input!{
        k: i32,
        a: i32,
        b: i32,
    }
    let maxt = (b / k) * k;
    if a <= maxt {
        println!("OK");
    } else {
        println!("NG");
    }
}
