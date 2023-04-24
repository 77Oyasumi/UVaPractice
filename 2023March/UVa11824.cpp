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

        // "0LL"的作用是初始化變量"ans"為0，同時指定變量類型為"long long"
        long long ans = 0LL, pow;

        for(int i = n-1; i >= 0; --i){
            pow = 2LL;
            for(int j = n; j > i; --j){
                pow = pow*L[i];
            }
            ans += pow;
        }
        if ( ans > 5000000){
            printf("Too expensive\n");
        }else{
            printf("%lld\n", ans);
        }
    }
    return 0;
}