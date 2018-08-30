

#include <iostream>
#include <string>
using namespace std;

int main() {
   string string1, string2, string3 ,temp;
    int a,b;
    char temp1, temp2;

    cin >> string1;
    cin >> string2;

    a = string1.size();
    b = string2.size();

    temp = string1 + string2;
    string3 = temp;

    temp1 = string3[0];
    temp2 = string3[a];

    string3[0] = temp1;
    string3[a] = temp2;

    cout << a << " " << b << endl;
    cout << temp << endl;

    for(int i = 0; i < a;i++){
        cout << string3[i];
    }
    cout << " ";

    for(int i= a; i < string3.size(); i++){
        cout << string3[i];
    }
    cout << endl;

    return 0;
}
