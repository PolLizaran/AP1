
#include <iostream>
#include <vector>
using namespace std;

double producte_escalar(const vector<double>& u, const vector<double>& v)
{
    double res_prod = 0;
    for (int k = 0; k < u.size(); ++k)
        res_prod += u[k] * v[k];
    return res_prod;
}
