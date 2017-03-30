#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    while(getline(cin,str)){
        int pos = str.find('-');
        string str1 = str.substr(0,pos);
        string str2 = str.substr(pos+1,str.npos);
        cout<<str1.length()<<endl<<str2.length()<<endl;
        if(str1=="joker JOKER"||str2=="joker JOKER") cout<<"joker JOKER"<<endl;
        else if(str1.length()== str2.length() && str1.length()==7 && (str1[0] == str1[2] || str2[0]==str2[2])) {
            if(str1[0] == str1[2] && str2[0]==str2[2]) cout<<(str1>str2?str1:str2)<<endl;
            else if (str1[0] == str1[2]) cout << str1 << endl;
            else cout << str2 << endl;
        }
        else if(str1.length()==str2.length()){
            string stmp = str1>str2?str1:str2;
            cout<<stmp<<endl;
        }
        else cout<<"ERROR"<<endl;
    }
    return 0;
}