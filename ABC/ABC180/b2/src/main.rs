use proconio::input;

fn abs(x: &i64) -> i64 { x.abs() }

fn sq(x: &i64) -> f64 { let x = *x as f64; x * x }

fn main() {
    input!{
        n: i32,
        v: [i64; n],
    }
    println!("{}", v.iter().map(abs).sum::<i64>());
    println!("{}", v.iter().map(sq).sum::<f64>().sqrt());
    println!("{}", v.iter().map(abs).max().unwrap());
}
