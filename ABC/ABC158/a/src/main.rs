use proconio::input;
use proconio::marker::Chars;

fn main() {
    input!{
        s: String,
    }
    let sc = s.chars().collect::<Vec<char>>();
    for i in 0..sc.len() - 1 {
        if sc[i] != sc[i + 1] {
            print!("Yes");
            return;
        }
    }
    print!("No");
}
