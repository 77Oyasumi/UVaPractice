#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int comp(const void *a, const void *b){
    return strcmp((char*)a, (char*)b);
}

int main(){
    int n, i, j, k;
    char dict[2000][80];
    scanf("%d\n, &n");
    for(i = 0; i<n; i++){
        //讀入第i個字串
        gets(dict[i]);
        //找到空白字元, 更換成\0
        for(j=0; dict[i][j]!=' '; j++){
            dict[i][j] = '\0';
        }
    }
    qsort(dict,n,80,comp) // qsort(陣列名稱, 元素個數, 單一元素size, 比較函式)
}