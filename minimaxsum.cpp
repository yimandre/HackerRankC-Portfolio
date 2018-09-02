#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[5];
    for (int i=0; i < 5; i++){
        cin >> arr[i];
    }
    int maxValue = arr[0];
    int minValue = arr[0];
    long long sum = arr[0];
    for(int i = 1; i < 5;i++){
        maxValue = max(maxValue, arr[i]);
        minValue = min(minValue, arr[i]);
        sum += arr[i];
    }
    cout << sum - maxValue << " " << sum - minValue << endl;
    return 0;
}
