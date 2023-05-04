/*

乘一個x, 再加後面一項

y = a[0] * n;
for(int i = 1; i < n; i++){
    // 每次乘上 x 後, 再加下一項
    y = y*x+a[i]*(n-i);
}

*/

/*

#include <iostream>

using namespace std;

int a[500000];
int main(){

    int i, n, x, y;

    // 如果有讀取到第一行的x, 就繼續計算
    while(scanf("%d", &x) != EOF){
        getchar();
        // 讀取第二行多個係數, 並計算出n
        for(n = 0;;n++){ // n 沒有終止條件, 直到讀到換行符號
            scanf("%d", &a[n]);
            if(getchar()=='\n'){ // 讀到換行符號
                break;
            }
        }

        // y 的初值設定
        y = a[0] * n;
        for(i = 1; i<n; i++){
            y = y * x + a[i] * (n - i);
        }
        printf("%d\n", y);
    }
    return 0;
}

*/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int a[1000000];

void derivative(int length,int x){

	long long int sum=0,exp=1;

	for(int i=length-1;i>=0;i--){
		sum+=a[i]*exp*(length-i);
		exp*=x;
		
	}
	cout<<sum<<endl;
}

int main () {

	int x,n;

	while(scanf("%d",&x)!=EOF){
		for(n=0;;n++){
			scanf("%d",&a[n]);
			if(getchar()=='\n'){
				break;
			}
		}
		derivative(n,x);
	}
    return 0;
}