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

        int i, j, k;

        long long sum = 0, flag = 0, tmp;

        for(i = n-1, j = 1; i >= 0; i--, j++) {
            tmp = 1;
            for(k = 1; k <= j; k++) {
                tmp *= L[i];
                if(sum + 2*tmp > 5000000) {
                    flag = 1;
                    break;
                }
            }
            
            if(flag)    break;
            sum += 2*tmp;
        }
        if(flag)
            puts("Too expensive");
        else
            printf("%lld\n", sum);
    }
    return 0;
}