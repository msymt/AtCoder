use proconio::input;
use proconio::marker::Chars;

fn main() {
    input!{
        c: char,
    }
    println!("{}", ((c as u8)+ 1) as char)
}
