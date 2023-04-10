#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//提供比較函數給 qsort 使用
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
        for(j = 0; dict[i][j] != ' '; j++){
            dict[i][j] = '\0';
        }
    }
    qsort(dict,n,80,comp); // qsort(陣列名稱, 元素個數, 單一元素size, 比較函式)
    //位置 K 從第一個國家開始, i 則遞增檢查下去
    k = 0;
    for(i = 0; i < n; i++){
        // dict[i] != dict[k], 計算國家的數量, i - k
        // 如果返回值<0，則表明str1小於str2
        // 如果返回值，如果> 0，則表明str2 小於 str1
        //如果返回值= 0，則表明str1 等於str2
        if(strcmp(dict[i],dict[k]) != 0){
            // 如果第 i 個國家是一個新國家, 就輸出前一個國家, 以及人數
            printf("%s %d\n", dict[k], i - k);
            // 將 k 移到 i (新國家開頭)
            k = i;
        }
    }
    // 輸出最後一個國家與人數
    printf("%s %d\n", dict[k], i - k);
    return 0;
}