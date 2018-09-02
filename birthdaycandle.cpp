#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int max=0;
    int counter=0;
    int i =0;
    while(i< n){
        cin >> arr[i];
        if (arr[i] > max){
            max = arr[i];
            counter++;
        } else if (arr[i] == max){
            counter++;
        }
        i++;
    }
    cout << counter;
    return 0;
}
