bool is_increasing(int n){
    if(n / 10 == 0) return true; // means that just one dígit is left
    else if (n % 10 < (n % 100 - (n % 10))/ 10) return false;
    return is_increasing(n / 10);
}
