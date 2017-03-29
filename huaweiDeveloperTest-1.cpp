#include <iostream>

using namespace std;

int main(){
    int n;
    while(cin>>n){
        int totalbottle = 0;
        while(n>2){
            int changedbottle = n/3;
            int leavedbottle = n%3;
            n = changedbottle + leavedbottle;
            totalbottle += changedbottle;
        }
        if(n==2) totalbottle++;
        cout<<totalbottle<<endl;
    }
    return 0;
}