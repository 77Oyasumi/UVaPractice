#include <iostream>

using namespace std;

int main(){
    int v, t;
    int d = 0;
    while((cin >> v >> t) && !cin.eof()){
        d = 2 *v * t;
        cout << d << endl;
    }
    return 0;
}