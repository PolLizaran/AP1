int sum_of_digits(int x){
    if(x / 10 == 0) return x;
    return sum_of_digits(x / 10) + x % 10;
}

bool is_multiple_3(int n){
    return sum_of_digits(n) % 3 == 0;
}
