use proconio::input;
use proconio::marker::Chars;
use std::collections::HashSet;

fn main() {
    input ! {
        n: i64,
        v: [f64; n],
    }

    let manh_d = {
        let mut d = 0.;
        for &x in &v {
            d += x.abs();
        }
        d
    };
    
    let eu_d = {
        let mut d = 0.;
        for &x in &v {
            d += x * x;
        }
        d.sqrt()
    };
    
    let ch_d = {
        let mut d = 0.;
        for &x in &v {
         d = x.abs().max(d);   
        }
        d
    };

    println!("{}", manh_d);
    println!("{}", eu_d);
    println!("{}", ch_d);
}

