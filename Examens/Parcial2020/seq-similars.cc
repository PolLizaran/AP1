#include <iostream>
using namespace std;

bool es_similar(int sumatori, int suma_digits, int darrer, int ultim)
{
    return (sumatori == suma_digits) and (darrer == ultim);
}

int main()
{
    int n, suma_digits = 0, darrer;
    while (cin >> n and n != 0) {
        suma_digits += n;
        darrer = n;
    }
    int sumatori = 0, ultim = 0;
    int similars = 1;
    bool last_zero = false, para = false;
    while (para == false and cin >> n) {
        if (n == 0) {
            if (not last_zero) {
                if (es_similar(sumatori, suma_digits, darrer, ultim)) {
                    ++similars;
                }
            } else {
                para = true;
            }
            sumatori = 0, ultim = 0;
            last_zero = true;
        } else {
            sumatori += n;
            ultim = n;
            last_zero = false;
        }
    }
    cout << similars << endl;
}
