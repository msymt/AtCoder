use proconio::input;
use proconio::marker::Chars;

// https://zenn.dev/toga/books/rust-atcoder/viewer/23-string

fn main() {
    input!{
        c: char,
    }
    println!("{}", ((c as u8)+ 1) as char)
}
