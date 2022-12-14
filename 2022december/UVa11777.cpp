#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int testCase = 0;

    scanf("%d", &testCase);
    int info[2048][7];
    for(int i = 0; i < testCase; i++){
        for(int j =0; j <7; j++){
            scanf("%d", &info[i][j]);
        }
    }

    int sum = 0;

    for(int i = 0; i < testCase; i++){
        for(int j = 0; j < 7; j++){
            sum += info[i][j];
        }
        sort(info[i]+4, info[i]+7);
        sum -= info[i][4];
        info[i][4] = (info[i][5] + info[i][6]) / 2;
        sum -= info[i][4];
        if(sum >= 90){
            printf("Case %d: A\n", i+1); 
        }else if(sum >= 80 && sum != 90){
            printf("Case %d: B\n", i+1);
        }else if(sum >= 70 && sum != 80){
            printf("Case %d: C\n", i+1);
        }else if(sum >= 60 && sum != 70){
            printf("Case %d: D\n", i+1);
        }else{
            printf("Case %d: F\n", i+1);
        }
        sum = 0;
    }
    return 0;
}
/*
盡量用加法 用減法有可能會少減掉被捨去的小數 導致錯誤 96 - 16 = 80 (B), 96 - 16.5 = 79.5 = 79 (C)
*/

/*
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int T;
    scanf("%d", &T);
    
    int classTests[3];
    
    for (int t = 1; t <= T; ++t)
    {
        int t1, t2, final, attendance;
        scanf("%d %d %d %d %d %d %d", &t1, &t2, &final, &attendance, classTests, classTests + 1, classTests + 2);
        
        // Sorted 0 <= 1 <= 2
        sort(classTests, classTests + 3);
        
        int total = t1 + t2 + final + attendance + (classTests[1] + classTests[2]) / 2;
        char grade;
        
        if (total >= 90)
            grade = 'A';
        else if (total >= 80)
            grade = 'B';
        else if (total >= 70)
            grade = 'C';
        else if (total >= 60)
            grade = 'D';
        else
            grade = 'F';
        
        printf("Case %d: %c\n", t, grade);
    }
}
*/