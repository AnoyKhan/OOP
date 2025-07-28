//----------------HackerRank Problem---------------
#include <iostream>
using namespace std;
int main() {
/*
    Example Input type-
    4
    1 4 3 2
*/
    int x;
    cin>>x;
    int arry[x];
    for(int i=0; i<x; i++){
        cin>>arry[i];
    }
    //reverse order
    for(int j=x-1; j>=0; j--){
        cout<<arry[j]<<" ";
    }
    return 0;
}