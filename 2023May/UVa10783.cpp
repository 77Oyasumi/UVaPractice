#include <iostream>

using namespace std;

int main(){
    int n, i, a, b, c=0, k, sum;
    // 輸入資料組數
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        // 輸入每組資料的起始與最終值
        scanf("%d%d", &a, &b);
        // 如果起始值 a 是奇數, 取 k = a
        if(a%2 == 1){
            k = a;
        }else{ // 否則 k = a + 1
            k = a + 1;
        }
        // 計算由 a 到 b 之間的奇數的和
        for(sum = 0; k <= b; k+=2){
            sum += k;
        }
        // 將 c 加 1 之後, 輸出資料編號與奇數的總和
        printf("Case %d: %d\n", ++c, sum);
    }
    return 0;
}