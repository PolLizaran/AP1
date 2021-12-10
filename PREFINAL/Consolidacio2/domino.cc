#include <iostream>
#include <vector>
using namespace std;

char qui_guanya(string word)
{
    string primera;
    cin >> primera;
    char ultima = primera[(primera.size() - 1)];
    char guanyador = '=';
    for (int i = 1; i < 10; ++i) {
        cin >> word;
        if (guanyador == '=' and word[0] != ultima) {
            if (i % 2 == 0) //si la posicio es imparella guanya A, sino B
                guanyador = 'B';
            else
                guanyador = 'A';
        }
        ultima = word[(word.size() - 1)];
    }
    return guanyador;
}

int main()
{
    int nombre_partides;
    string word;
    cin >> nombre_partides;
    while (nombre_partides > 0) {
        cout << qui_guanya(word) << endl;
        --nombre_partides;
    }
}
