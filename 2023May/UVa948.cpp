// 費氏數列
// 0 1 1 2 3 5 8 13 21 34 55 89

//  n    費氏數  新的 n 值   輸出        disp0
//  12  <  21     12         0(不輸出)    0  
//  12  <  13     12         0(不輸出)    0
//  12  >   8     12-8=4     1           1 (開始輸出)
//  4   <   5      4         0(要輸出)    1
//  4   >=  3      4-3=1     1           1
//  1   <   2      1         0(要輸出)    1
//  1   >=  1      1-1=0     1           1 結束 

// output = 1 0 1 0 1 (fib)
//          8 5 3 2 1

#include <iostream>

using namespace std;

int main(){
    int disp0, n, m, i;
    int f[40];

    f[0] = 1; f[1] = 2;
    for(i = 2; i < 39; i++){
        f[i] = f[i-1] + f[i-2];
    }

    cin>>m;
    while(m--){
        cin>>n;
        if(n == 0){
            cout<<"0 = (fib)\n";
        }else{
            cout<<n<<' '<<'='<<' ';
            disp0 = 0;
            for(i = 38; i >= 0; i--){
                if(n >= f[i]){
                    cout<<1;
                    n -= f[i];
                    disp0 = 1;
                }else{
                    if(disp0 == 1){
                        cout<<0;
                    }
                }
            }
            cout<<" (fib)\n";
        }
    }
    return 0;
}