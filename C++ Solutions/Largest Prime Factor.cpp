#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

bool isprime(long long n){
    long long bound = floor(sqrt(n)) ;
    for (int i = 2; i <= bound; i++){
        if (n%i == 0){
            return false;
        }
    }
    return true;
}

int main() {
    long long n = 600851475143;
    for (long long i = floor(sqrt(n)); i; i--){
        if (n%i == 0){
            if (isprime(n/i)){
                cout << n/i << endl;
            }
            if (isprime(i)){
                cout << i << endl;
            }
        }
    }
}