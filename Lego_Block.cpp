/*
 hackkerank problem
 link of the question given below
 https://www.hackerrank.com/challenges/lego-blocks/problem
*/
#include<bits/stdc++.h>
#define MOD 1000000007
#define MAX 1001
using namespace std;

int T;
long long single_row[MAX];
long long raw_answer[MAX];
long long answer[MAX];

long long modadd(long long a,long long b){
    return (a+b)%MOD;
}
long long modmul(long long a, long long b){
    return (a*b)%MOD;
}
long long modsub(long long a,long long b){
    return (MOD+a-b)%MOD;
}
long long solve(int n,int m){
    //initialize single row array using dp method
    memset(single_row,0,sizeof(single_row));
    single_row[1]=1;
    single_row[2]=2;
    single_row[3]=4;
    single_row[4]=8;
    
    //filling the rest of the blocks
    for(int i=5;i<=m;i++){
        for(int j=1;j<=4;j++){
            single_row[i]=modadd(single_row[i],single_row[i-j]);
        }
    }
    // calculate the raw answer
    for(int i=1;i<=m;i++){
        long long res=1;
        for(int j=1;j<=n;j++){
            res=modmul(res,single_row[i]);
        }
        raw_answer[i]=res;
    }
    //calculate the final answer;
    answer[1]=raw_answer[1];
    for(int i=2;i<=m;i++){
        answer[i]=raw_answer[i];
        for(int j=1;j<i;j++){
            answer[i]=modsub(answer[i],modmul(answer[j],raw_answer[i-j]));
        }
    }
    return answer[m];
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int n,m;
        cin>>n>>m;
        cout<<solve(n,m)<<endl;
    }
    return 0;
}
