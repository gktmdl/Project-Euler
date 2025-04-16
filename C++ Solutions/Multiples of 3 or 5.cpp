#include<iostream>
using namespace std;

int sum = 0;
int main() {
    for (int i = 1; i<1000; i++){
        if (!((i%3)*(i%5))){
            sum += i;
        }
    }
    cout << sum;
}