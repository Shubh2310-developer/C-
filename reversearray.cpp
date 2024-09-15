#include<iostream>
using namespace std;


void reversearray(int arr[], int sz  ){
    int start = 0 , and end =sz -1;
    while(start <  end){
        swap(arr[start] , arr[end]);
        start++ , end--;
    }
}
int main(){
    int arr[]= {4,2,7,8,1,2,5};
    int sz =7;

    reversearray(arr, sz);
    
    for(int i = 0; i <= sz ; i++){
        cout << arr[i] << endl;
    }
    return 0;
}