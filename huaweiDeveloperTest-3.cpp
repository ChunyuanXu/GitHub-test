/*华为研发工程师编程题3-进制转换-16进制转10进制*/
#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    while(getline(cin,str)){
        int num = 0;
        for(int i=2;i<str.length();i++){
            num *= 16;
            if(str[i]>='A') num += (str[i]-'A')+10;
            else num += (str[i]-'0');
        }
        cout<<num<<endl;
    }
    return 0;
}