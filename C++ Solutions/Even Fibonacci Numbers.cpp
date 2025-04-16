#include<iostream>
#include<vector>
using namespace std;

vector<vector<long>> matprod(vector<vector<long>> A, vector<vector<long>> B) {
    int n, m, l;
    n = A.size();
    m = B.size();
    l = B[0].size();

    vector<vector<long>> C(n, vector<long>(l, 0));
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            for (int k=0; k<l; k++){
                C[i][k] += A[i][j]*B[j][k];
            }
        }
    }
    return C;
}

// Even terms of fibonacci series are f_{z} s.t. z mod 3 = 2 with f_0 = 1, f_1 = 1.

int main() {
    vector<vector<long>> A(2, vector<long>(2, 1));
    A[1][1] = 0;
    vector<vector<long>> T = matprod(A, matprod(A, A)); // T = A^3
    vector<vector<long>> fn(2, vector<long>(1, 1)); // f1, f0
    fn = matprod(A, fn); //f2, f1
    long sum = 0;
    while (fn[0][0]<4000000){
        sum += fn[0][0];
        fn = matprod(T, fn);
    }
    cout << sum;
}