use proconio::input;
fn main() {
    input!{
        a: i32,
        b: i32,
        c: i32,
    }
    let mut cnt:i32 = 0;

    if a == b && b == c {
        cnt = 1;
    } else if (((a == b) && (b != c)) || ((a == c) && (b != c)) || ((b == c) && (a != c))) {
        cnt = 2;
    } else {
        cnt = 3;
    }
    println!("{}", cnt);
}
