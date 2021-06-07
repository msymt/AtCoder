use proconio::{input, marker::Usize1};
use std::env;

use std::cmp::*;
use std::collections::*;

fn main() {
    input!{
        s: String,
    }
    let sc = s.chars().collect::<Vec<char>>();
    let mut cnt = 0;
    let mut maxv = 0;
    for i in 0..sc.len() {
        match sc[i] {
            'A' | 'C' | 'T' | 'G' => {
                cnt += 1;
                maxv = max(maxv, cnt);
            }
            other => cnt = 0,
        }
    }

    println!("{}", maxv);
}
