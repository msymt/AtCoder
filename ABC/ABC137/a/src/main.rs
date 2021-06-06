use proconio::input;
fn main() {
    input!{
        a: i32,
        b: i32,
    }
    let maxt = (a+b).max(a-b);
    println!("{}", maxt.max(a*b));
}
