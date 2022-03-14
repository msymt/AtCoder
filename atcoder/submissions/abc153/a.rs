use proconio::input;
use proconio::marker::Chars;

fn main() {
    input!{
        h: i32,
        a: i32,
    }
    if (h % a) ==0 {
        println!("{}", h / a)
    }
    else {
        println!("{}", h / a + 1)
    }
}
