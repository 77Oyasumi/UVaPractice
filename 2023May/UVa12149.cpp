/*
F(1) = 1

F(2) = 5
     = 4 + 1
     = 2^2 + F(1)

F(3) = 14
     = 9 + 4 + 1
     = 3^2 + F(2)

F(4) = 30
     = 16 + 9 + 4 + 1
     = 4^2 + F(3)
*/

#include <iostream>

using namespace std;

int main(){
    int N;
    while(cin>>N){
        if(N == 0){
            break;
        }else if(N == 1){
            cout << "1\n";
        }else{
            int F = 1;
            for(int i = 2; i <= N; i++){
                F += i*i;
            }
            cout << F << '\n';
        }
    }
    return 0;
}