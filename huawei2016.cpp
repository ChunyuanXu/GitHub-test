//
// Created by Chunyuan Xu on 2017/3/28.
//

#include <iostream>

using namespace std;
const int MAX_STUDENT = 30000;

int findHighestScore(int num[],int len, int a, int b){
    int tmp1 = a<b?a:b;
    int tmp2 = a>b?a:b;
    int maxval = num[tmp1];
    for(int i=tmp1;i<=tmp2 && i<len;i++){
        if(num[i]>maxval) maxval=num[i];
    }
    return maxval;
}

int main(){
    int N,M;
    int num[MAX_STUDENT];
    while(cin>>N>>M) {
        for (int i = 0; i < N; i++) cin >> num[i];
            for (int i = 0; i < M; i++) {
                char stdopt;
                int op1, op2;
                cin >> stdopt >> op1 >> op2;
                if (stdopt == 'Q') cout << findHighestScore(num, N, op1-1, op2-1) << endl;
                else num[op1-1] = op2;
            }
    }
    return 0;
}