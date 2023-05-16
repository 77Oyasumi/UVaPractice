// floor(x) : 向下取整
// ceil(x) : 向上取整
// sqrt 開根號
// #include <cmath>

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a, b;
    int x, y;
    // 如果輸入 a, b 成功, 就繼續計算
    while (scanf("%d%d", &a,&b) != EOF)
    {
        // 若 ab 都是 0, 跳離 while
        if(a==0 && b==0){
            break;
        }
        // +-0.1 開根號的小數問題 先減, 再開根號
        // 計算 >= a 的最小平方數
        x = ceil(sqrt(a-0.1));
        // 計算 <= b 的最大平方數
        y = floor(sqrt(b+0.1));
        // 輸出共有幾個平方數
        printf("%d\n", y-x+1);
    }
    return 0;
}