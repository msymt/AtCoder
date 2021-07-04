use std::cmp::*;
use proconio::input;
use proconio::marker::Chars;

fn main() {
    input!{
        s:String,
        n:u32,
    }
    let mut vec:Vec<String> = Vec::new();
    let sc = s.chars().collect::<Vec<char>>();
    for i in 0..sc.len() {
        for j in 0..sc.len() {
            let si = sc[i].to_string();
            let sj = sc[j].to_string();
            let str = format!("{}{}", si, sj);
            vec.push(str)
        }
    }
    // println!("{}", vec.len());
    println!("{}", vec[(n - 1) as usize]);

}
