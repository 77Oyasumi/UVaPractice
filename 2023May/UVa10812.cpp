// (和 + 差) / 2 = 大數
// (和 - 差) / 2 = 小數

#include <iostream>

using namespace std;

int main(){
    int n, i, s, d;
    // 輸入資料的組數 n
    scanf("%d", &n);
    // 計算 n 組資料的結果
    for(i = 0; i < n; i++){
        //讀入兩隊的分數總和 s 和 差 d
        scanf("%d%d", &s, &d);
        // 檢查輸入資料如果有誤, 就輸出impossible, 錯誤狀況 :
        // (1) 和 < 差
        // (2) 和 < 0 or 差 < 0
        // (3) (和+差) = 奇數
        if(s<d||s<0||d<0||(s+d)%2==1){
            printf("impossible\n");
        }else{
            printf("%d %d\n", (s+d)/2, (s-d)/2);
        }
    }
    return 0;
}