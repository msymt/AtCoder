use proconio::input;
use proconio::marker::Chars;

fn main() {
    input!{
        a: i32,
        b: i32,
    }
    if (a - b * 2) < 0 {
        println!("0");
    } else {
        println!("{}",a - b*2);
    }
}
