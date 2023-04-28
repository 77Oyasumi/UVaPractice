#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, m, k, i;
    double p, q, s, d;
    scanf("%d", &n); // 讀入 n 組資料
    while(n--){
        scanf("%d%lf%d", &m, &p, &k); // 共 m 人, 獲勝機率 p , 第 k 人獲勝的機率
        q = 1 - p;
        if(p == 0){ // 如果 p =0, 獲勝機率為 0
            s = 0.0;
        }else{ // p != 0 用公式計算
            s = pow(q, (double)k-1)*p / (1 - pow(q, (double)m));
        }

        printf("%.4lf\n", s); // 輸出四位小數
    }
    return 0;
}