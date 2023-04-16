#include <iostream>

using namespace std;

int main(){
    int n, s;
    scanf("%d", &n);
    //輸入資料不為 0, 計算總和
    while(n){
        // 當 n 超過 1 位數, 繼續將所有數字加總起來
        while (n>9){
            //總和 s 清除為 0
            s = 0;
            // 當 n 還有數字(n != 0), 繼續加總
            while(n){
                s += n % 10;
                n /=10;
            }
            // 將總和 s 當做新的 n, 繼續計算
            n = s;
        }
        // 輸出最後的一位數字
        printf("%d\n", n);
        // 輸入下一個資料
        scanf("%d", &n);
    }
    return 0;
}