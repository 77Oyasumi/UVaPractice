/*
1 8
1 2 3 4 5 6 7 8 9 10
1 2 2 3 3 3 4 4 4 4 
1 2   3     4

=2 7
1 2 3 4 5 6 7 8 9
2 2 3 3 3 4 4 4 4
1   2     3

=3 5
1 2 3 4 5 6 7
3 3 3 4 4 4 4 
1     2

=4 2 
1 2 3 4
4 4 4 4
1
*/

#include <iostream>

using namespace std;

int main(){
    // n 為團員人數, day 是要計算第幾天
    long long n, day;

    // 只要有資料被讀取到, 就繼續
    while(scanf("%lld%lld", &n, &day) != EOF){
        // 團員人數 = 住的天數 n < 要計算天數 day, 就繼續
        while(n<day){
            day -= n;
            n++;
        }
        printf("%lld\n", n);
    }
    return 0;
}