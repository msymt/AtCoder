use proconio::input;

fn main() {
    input!{
        n: i32,
        a: i32,
        b: i32,
    }
    println!("{}", b.min(n * a));
    
    // let taxi: i32 = n * a;
    // if taxi > b {
    //     println!("{}", b);
    // } else {
    //     println!("{}", taxi);
    // }
}
