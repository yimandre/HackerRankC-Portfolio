#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;
int final;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if (arr[i] < 38){
            cout << arr[i] << endl;
        } else if (arr[i]%5 <= 3){
            cout << arr[i] + arr[i]%5 - 1 << endl;
        } else if (arr[i]%5 > 3 || arr[i]%5 == 3) {
            cout << arr[i] - 2 << endl;
        }
    }
    return 0;
}
