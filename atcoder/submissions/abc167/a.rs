use proconio::input;
use proconio::marker::Chars;

fn main() {
    input!{
        s: String,
        t: String,
    }
    let sc = s.chars().collect::<Vec<char>>();
    let tc = t.chars().collect::<Vec<char>>();
    for i in 0..sc.len() {
        if sc[i] != tc[i] {
            println!("No");
            return;
        }
    }
    print!("Yes");
}
