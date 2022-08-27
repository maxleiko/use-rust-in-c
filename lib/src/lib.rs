#[no_mangle]
pub extern "C" fn hello() {
    println!("hello world");
}

#[no_mangle]
pub extern "C" fn add(a: u64, b: u64) -> u64 {
    a + b
}
