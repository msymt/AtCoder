use proconio::input;
use proconio::marker::Chars;

fn main() {
    input!{
        n: u64,
    }
    if n % 2 == 0 {
        println!("0.5");
    } else {
        let odd = (n / 2) + (n % 2);
        let ans = ((odd as f64) / (n as f64)) as f64;
        println!("{}", ans);
    }
}
