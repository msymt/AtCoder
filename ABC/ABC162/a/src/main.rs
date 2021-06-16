use proconio::input;
use proconio::marker::Chars;

fn main() {
    input!{
        n: String,
    }
    let sc = n.chars().collect::<Vec<char>>();
    for i in 0..sc.len() {
        if sc[i] == '7' {
            print!("Yes");
            return;
        }
    }
    print!("No");
}
