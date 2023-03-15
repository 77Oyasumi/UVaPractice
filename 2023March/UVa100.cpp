#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, b;
    while(~scanf("%d %d\n", &a, &b)){
        printf("%d %d", a, b);
        int large = 0;
        for(int i = min(a,b); i <= max(a,b); i++){
            int count = 0;
            int num = i;
            while(num != 1){
                if(num % 2 == 1){
                    num = 3 * num + 1;
                }else{
                    num /= 2;
                }
                count ++;
            }
            count ++;
            if(large < count){
                large = count;
            }
        }
        printf(" %d\n", large);
    }
    return 0;
}