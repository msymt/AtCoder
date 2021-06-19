use proconio::input;
use proconio::marker::Chars;

fn main() {
    input!{
        a:i32,
        b:i32,
        h:i32,
    }
    print!("{}", (a+b)*h/2);
}
