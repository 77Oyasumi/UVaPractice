// 訣竅 : 使用一維陣列觀點來看問題

#include <iostream>

using namespace std;

int main(){
    int m, i, j, n, c=0;
    //矩陣最大 100*100=10000個元素
    long long a[10000];
    // 讀入資料組數 m, 以及其後的換行符號
    scanf("%d\n", &m);
    // 針對每一組資料檢查是否為對稱矩陣
    for(c = 1; c <= m; c++){
        scanf(" N = %d", &n);
        // 讀入 n*n 個元素到 a 陣列視為一維陣列
        for ( i = 0; i < n*n; i++){
            scanf("%lld", &a[i]);
        }
        i = 0; j = n*n-1;
        // i 仍然在 j 之前, 繼續比對, 直到 i > j 或提前跳離 while
        while(i <= j){
            // 元素不相等, 提前跳出
            if(a[i] != a[j]){
                break;
            }
            if(a[i] < 0){
                break;
            }
            i++;
            j--;
        }
        // 輸出比對的結果 : i > j 表示有比對到最後, 是對稱矩陣, 否則不是
        if (i > j){
            printf("Test #%d: Symmetric.\n", c);
        }else{
            printf("Test #%d: Non-symmetric.\n", c);
        }
    }
    return 0;
}