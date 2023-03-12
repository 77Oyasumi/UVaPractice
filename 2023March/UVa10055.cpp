#include <iostream>

int main(){
    long long a, b;
    while(scanf("%lld %lld", &a, &b) == 2){ //只要輸入兩個整數, 繼續計算, 讀不到兩個, 結束迴圈
        if(a > b){
            printf("%lld\n", a - b);
        }else{
            printf("%lld\n", b - a);
        }
    }
    return 0;
}