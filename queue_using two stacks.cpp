#include<bits/stdc++.h>
using namespace std;

class MyQueue{
    private:
    stack<int> input,output;
    public:
    MyQueue(){};

    void enqueue(int x){
        input.push(x);
    }
    void dequeue(void){
        int top=front();
        output.pop();
        return;
    }
    int front(void){
        if(!output.empty()){
            return output.top();

        }
        if(input.empty()){ return -1;}

        if(!input.empty()){
            output.push(input.top());
            input.pop();
        }
        return output.top();
    }
};
int main(){
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    MyQueue myQ;
    int x,type,q;
    cin>>q;
    while(--q>=0){
        cin>>type;
        if(type==1){
            cin>>x;
            myQ.enqueue(x);
        }
        else if(type==2){
            myQ.dequeue();
        }
        else if(type==3){
            myQ.front();
        }
    }
    return 0;
}
