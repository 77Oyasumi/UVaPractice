#include <stdio.h>
#include <algorithm>

using namespace std;

int main(){
    
    int T;
    int L[50];

    scanf("%d", &T);

    while(T--){
        int n = 0;
        while(scanf("%d", &L[n]) && L[n]){
            n++;
        }

        sort(L, L+n);

        
    }
    return 0;
}