use proconio::input;
use proconio::marker::Chars;

fn main() {
    input!{
        s: String,
    }
    let days = ["SUN","MON","TUE","WED","THU","FRI","SAT"];
    println!("{}", 7 - days.into_iter().position(|&d| d == s).unwrap());
}
