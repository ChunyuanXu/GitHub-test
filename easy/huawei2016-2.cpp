#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main(){
    map<string,int> mp;
    string str;
    int num;
    int numcnt;
    while(cin>>str>>num){
        if(str=="end") break;
        int pos = str.rfind('\\');
        string filestr = str.substr(pos+1);
        string numstr;
        while(num){
            numstr += '0'+num%10;
            num/=10;
        }
        reverse(numstr.begin(),numstr.end());
        filestr = filestr + " " + numstr;
//        cout<<filestr<<endl;
//        cout<<mp.size()<<endl;
        if(mp.find(filestr)==mp.end()) mp[filestr] = 1;
        else mp[filestr]++;
    }
    int iternum = 0;
    for(auto iter = mp.begin();iter!=mp.end() && iternum<8;iter++){
        iternum++;
        int pos = (iter->first).find(' ');
        string strtmp = (iter->first).substr(0,pos);
        int len = strtmp.length();
        if(len>16) cout<<(iter->first).substr(len-16)<<" "<<iter->second<<endl;
        else cout<<(iter->first)<<" "<<iter->second<<endl;
    }
    return 0;
}
