#include <iostream>
using namespace std;

int factorial(int n){
    int fact = 1;

    for(int i = 1; i <=n ; i++){
        fact +=1;

    }
    return fact;

}
int nCr(int n , int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nar = factorial(n-r);

    return fact_n /(fact_r * fact_nar);
}
int main(){
    int n = 8 , r = 2;
    nCr(n , r);
}