#include <iostream>
#include <vector>
using namespace std;

struct Triplet {
    int i;
    int j;
    int x;
};

using MatriuDispersa = vector<Triplet>;

MatriuDispersa suma(const MatriuDispersa& a, const MatriuDispersa& b)
{
    MatriuDispersa m = {};
    int l = 0, k = 0;
    while ((l < a.size()) and (k < b.size())) {
        if ((a[l].i == b[k].i) and (a[l].j == b[k].j)) {
            m.push_back({ a[l].i, a[l].j, a[l].x + a[k].x });
            ++l;
            ++k;
        } else if (a[l].i == a[k].i) {
            if (a[l].j < b[k].j) {
                m.push_back({ a[l].i, a[l].j, a[l].x });
                ++l;
            } else {
                m.push_back({ b[l].i, b[l].j, b[l].x });
                ++k;
            }
        } else {
            if (a[l].j < b[k].j) {
                m.push_back({ a[l].i, a[l].j, a[l].x });
                ++l;
            } else {
                m.push_back({ b[l].i, b[l].j, b[l].x });
                ++k;
            }
        }
    }
    while (l < a.size()) {
        m.push_back({ a[l].i, a[l].j, a[l].x });
        ++l;
    }
    while (k < a.size()) {
        m.push_back({ b[l].i, b[l].j, b[l].x });
        ++k;
    }
    return m;
}

int main()
{
    int n;
    cin >> n;
}
