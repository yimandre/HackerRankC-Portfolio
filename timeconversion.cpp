#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <sstream>
using namespace std;

int main(){
    int hh, mm, ss;
    char c[2];
    scanf("%d:%d:%d%s", &hh, &mm, &ss, &c);
    if(!strcmp(c, "PM")&& hh!=12){
        hh += 12;
    } else if (!strcmp(c,"AM") && hh == 12){
        hh =0;
    }
    printf("%02d:%02d:%02d", hh,mm,ss);
    return 0;
}
