#include <iostream>
#include <string>

using namespace std;

void replace_simbols(string& result, const int& i, const int& size){
    int units = size - 1 - i;
    if(units > 0){
        if(units == 1){
            for(int i = 0; i < result.size(); ++i){
                if(result[i] == 'I') result[i] = 'X';
                else if(result[i] == 'V') result[i] = 'L';
                else if(result[i] == 'X') result[i] = 'C';
            }
        }else if(units == 2){
            for(int i = 0; i < result.size(); ++i){
                if(result[i] == 'I') result[i] = 'C';
                else if(result[i] == 'V') result[i] = 'D';
                else if(result[i] == 'X') result[i] = 'M';
            }
        }else if(units == 3){
            for(int i = 0; i < result.size(); ++i){
                if(result[i] == 'I') result[i] = 'M';
            }
        }
    }
}


string roman_value (int number){
    string expression;
    if(number >= 1 and number <= 3){
        int j = number;
        while(j--) expression += 'I';
    }else if(number >= 5 and number <= 8){
        int j = number - 5;
        expression = 'V';
        while(j--) expression += 'I';
    }else if(number == 4) expression = "IV";
    else if(number == 9) expression = "IX";
    return expression;
}



string to_roman(string x){
    string final_result;
    int size = x.size();
    for(int i = size - 1; i >= 0; --i){
        int number = x[i] - '0'; // we convert a char to an integer
        //cout << number << "     " << x.size() - i - 1 << endl;
        string value = roman_value(number);
        replace_simbols(value, i, size);
        final_result = value + final_result;
    }
    return final_result;
}


int main(){
    int x;
    while(cin >> x){
        cout << x << " = " << to_roman(to_string(x)) << endl;
    }
}
