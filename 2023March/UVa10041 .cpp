#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int t, r;
    scanf("%d\n", &t);
    while(t--){
        scanf("%d", &r);
        int fam[r];
        for(int i = 0; i < r; i++){
            scanf("%d", &fam[i]);
        }
        sort(fam, fam + r);
        int middle = fam[r/2];
        int sum = 0;
        for(int i = 0; i < r; i++){
            sum += abs(fam[i] - middle);
        }
        printf("%d\n", sum);
    }
    return 0;
}