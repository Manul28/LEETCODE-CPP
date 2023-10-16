#include<bits/stdc++.h>
using namespace std;

bool NotinRow(char arr[][9],int row){
    set<int> st;
    for(int i=0;i<9;i++){
        if(st.find(arr[row][i])!=st.end()){
            return false;
        }
        if(arr[row][i]!='.'){
            st.insert(arr[row][i]);
        }
    }
    return true;
}
bool NotinCol(char arr[][9],int col){
    set<int> st;
    for(int i=0;i<9;i++){
        if(st.find(arr[i][col])!=st.end()){
            return false;
        }
        if(arr[i][col]!='.'){
            st.insert(arr[i][col]);
        }
    }
    return true;
}
bool NotinBox(char arr[][9],int startRow,int startCol){
    set<int> st;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            char curr=arr[startRow+i][startCol+j];
            if(st.find(curr)!=st.end()){
                return false;
            }
            if(curr!='.'){
                st.insert(curr);
            }
        }
    }
    return true;
}
bool isValid(char arr[][9],int row,int col){
    return NotinRow(arr,row) && NotinCol(arr,col) && NotinBox(arr,row-row%3,col-col%3);
}
bool isValidConfig(char arr[][9],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(!isValid(arr,i,j)){
                return false;
            }
        }
    }
    return true;
}
int main()
{
    char board[9][9]
        = { { '5', '3', '.', '.', '7', '.', '.', '.', '.' },
            { '6', '.', '.', '1', '9', '5', '.', '.', '.' },
            { '.', '9', '8', '.', '.', '.', '.', '6', '.' },
            { '8', '.', '.', '.', '6', '.', '.', '.', '3' },
            { '4', '.', '.', '8', '.', '3', '.', '.', '1' },
            { '7', '.', '.', '.', '2', '.', '.', '.', '6' },
            { '.', '6', '.', '.', '.', '.', '2', '8', '.' },
            { '.', '.', '.', '4', '1', '9', '.', '.', '5' },
            { '.', '.', '.', '.', '8', '.', '.', '7',
              '9' } };
 
    // Function call
    cout << (isValidConfig(board, 9) ? "YES\n" : "NO\n");
    return 0;
}
