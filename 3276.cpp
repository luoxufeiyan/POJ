#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int n;
int dir[5005];//牛的方向（0：F， 1：B）
int f[5005];//区间[i，i+k-1]是否进行反转

//固定k，求对应的最小操作回数
//无解的话则返回-1
int cal(int k){
    memset(f,0,sizeof(f));
    int res = 0;
    int sum = 0;//f的和
    for(int i = 0; i+k <= n; i++){
        //计算区间[i,i+k-1]
        if((dir[i]+sum)%2 != 0){
            //前端的牛面朝后方
            res++;
            f[i] = 1;
        }
        sum += f[i];
        if(i - k +1 >= 0){
            sum -= f[i-k+1];
        }
    }

    //检查剩下的牛是否有朝后方的情况
    for(int i = n-k+1; i < n; i++){
        if((dir[i]+sum)%2 != 0){
            //无解
            return -1;
        }
        if(i-k+1 >= 0){
            sum -= f[i-k+1];
        }
    }
    return res;
}

void solve(){
    int K = 1,M = n;
    for(int k = 1; k <= n; k++){
        int m = cal(k);
        if(m >= 0 && M > m){
            M = m;
            K = k;
        }
    }
    printf("%d %d\n",K,M);
}

int main(){
    while(~scanf("%d",&n)){
        char ch;
        for(int i = 0; i < n; i++){
            getchar();
            scanf("%c",&ch);
        if(ch == 'F')
            dir[i] = 0;
        else
            dir[i] = 1;
        }
        solve();
    }
    return 0;
}

