/*小明同学把1到n这n个数字按照一定的顺序放入了一个队列Q中。现在他对队列Q执行了如下程序：
while(!Q.empty())              //队列不空，执行循环

{

    int x=Q.front();            //取出当前队头的值x

    Q.pop();                 //弹出当前队头

    Q.push(x);               //把x放入队尾

    x = Q.front();              //取出这时候队头的值

    printf("%d\n",x);          //输出x

    Q.pop();                 //弹出这时候的队头

}

做取出队头的值操作的时候，并不弹出当前队头。
小明同学发现，这段程序恰好按顺序输出了1,2,3,...,n。现在小明想让你构造出原始的队列，你能做到吗？*/

#include <iostream>
#include <queue>
#include <string.h>

using namespace std;

const int nmax = 1e5;
int main(){
    int T,n;
    cin>>T;
    queue<int> q1,q2;
    while(T--){
        int num[nmax];
        memset(num,0,sizeof(num));
        cin>>n;
        for(int i=1;i<=n;i++){
            q1.push(i);
        }
        while(!q1.empty()){
            int x = q1.front();
            q1.pop();
            q1.push(x);
            x = q1.front();
            q2.push(x);
            q1.pop();
        }
        for(int i=1;i<=n;i++){
            int x = q2.front();
            num[x] = i;
            q2.pop();
        }
        for(int i=1;i<n;i++){
            cout<<num[i]<<" ";
        }
        cout<<num[n]<<endl;
    }
    return 0;
}