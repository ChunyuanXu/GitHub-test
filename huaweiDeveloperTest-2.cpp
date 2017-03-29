#include <iostream>
#include <cstring>

using namespace std;

const int N=1001;

int main(){
    int num[N];
    int a,len;
    while(cin>>len) {
        memset(num, 0, sizeof(num));
        for (int i = 0; i < len; i++) {
            cin >> a;
            num[a]++;
        }
        for (int i = 1; i < N; i++) {
            if (num[i] > 0) cout << i << endl;
        }
    }
    return 0;
}