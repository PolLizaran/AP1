#include<iostream>
#include<vector>
using namespace std;
using Matrix = vector<vector<int>>;

void print_row_col(const Matrix& A, bool is_row){
    int position;
    cin >> position;
    int num_row = A.size();
    int num_col = A[0].size();
    if(is_row){
        cout << "row " << position << ":";
        for(int k = 1; k < num_col; ++k) cout << ' ' << A[position][k];
    }else{
        cout << "column " << position << ":";
        for(int k = 1; k < num_row; ++k) cout << ' ' << A[k][position];
    }
    cout << endl;
}

int main(){
    int n, m;
    cin >> n >> m; //n = rows, m = columns

    //vector<vector<int>>v(m, vector<int>(n));
    Matrix A(n + 1, vector<int>(m + 1));
    for(int i = 1; i < n + 1; ++i){
        for(int j = 1; j < m + 1; ++j){
            cin >> A[i][j];
        }
    }
    string command;
    while(cin >> command){
        if(command == "row"){
            print_row_col(A, true);
        }else if(command == "column"){
            print_row_col(A, false);
        }else if(command == "element"){
            int x, y;
            cin >> x >> y;
            cout << "element " << x << ' ' << y << ": " << A[x][y] << endl;
        }
    }
}
