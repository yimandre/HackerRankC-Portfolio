#include <cstdio>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int maxScore = arr[0];
    int maxScoreCounter = 0;
    int minScoreCounter = 0;
    int minScore = arr[0];
    for (int i = 1; i<n; i++){
        if(arr[i]> maxScore && arr[i] != maxScore){
            maxScore = arr[i];
            maxScoreCounter++;
        } else if (arr[i]< minScore && arr[i]!= minScore){
            minScore = arr[i];
            minScoreCounter++;
        }
    }
    cout << maxScoreCounter << " " << minScoreCounter;
    return 0;
}
