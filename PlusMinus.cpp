#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int a,b,c;
    cin >> n;
    int arr[n];
    int pos = 0;
    int neg = 0; 
    int z = 0;
    for (int i = 0; i<n; i++){
        cin >> arr[i];
        if (arr[i] >= 1){
            pos++;
        } else if (arr[i] < 0){
            neg++;
        } else {
            z++;
        }
    }
    cout << (float)pos/n << endl;
    cout << (float)neg/n << endl;
    cout << (float)z/n << endl;
    return 0;
}
