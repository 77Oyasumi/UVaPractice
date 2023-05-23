#include <iostream>
using namespace std;
 
int main() {
    int n;
    long long f[100] = {0};
    f[0] = 1;
    f[1] = 1;
    for (int i=2; i<100; i++) {
        f[i] = f[i-1] + f[i-2];
    }
     
    while (cin >> n) {
        cout << f[n] << endl;
    }
    return 0;
}

// 酷酷的做法
/*

#include <iostream>
using namespace std;
 
int main() {
    int n;
    while (cin >> n){
        long long a = 1, b = 1;
        for (int i = 0; i < n; i++){
            b = a + b;
            a = b - a;
        }
        cout << a << "\n";
    }
}

*/