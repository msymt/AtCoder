use proconio::input;
fn main() {
    input!{
        a: i32,
        b: i32,
        c: i32,
    }
    if (c - (a - b)) < 0 {
        println!("{}", 0);
    } else {
        println!("{}", c - (a - b));
    }
}
