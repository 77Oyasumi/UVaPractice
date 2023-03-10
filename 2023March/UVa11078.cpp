#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int A[200000];
    int Tc;
    scanf("%d", &Tc);
    while(Tc--){
        int n;
        scanf("%d", &n);
        for(int i = 0; i < n; i++){
            scanf("%d", &A[i]);
        }
        int ans = A[0] - A[1];
        int Bigone = A[0];
        for(int j = 1; j < n; j++){
            ans = max(ans, Bigone - A[j]);
            Bigone = max(Bigone, A[j]);
        }
        printf("%d\n", ans);
    }
    return 0;
}