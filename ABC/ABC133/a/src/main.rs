use proconio::input;

fn main() {
    input!{
        n: i32,
        a: i32,
        b: i32,
    }
    let taxi: i32 = n * a;
    if taxi > b {
        println!("{}", b);
    } else {
        println!("{}", taxi);
    }
    
}
