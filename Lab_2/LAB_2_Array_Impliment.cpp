#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of arry: ";
    cin>>size;

    int a[size];
    //input programe;
    for(int i = 0; i<=size-1; i++){
        printf("Enter index %d: ", i);
        cin>>a[i];
    }

    int position;
    cout<<"Enter your position you wana delete: ";
    cin>>position;
    position--;

    for(int i=position; i<size; i++){
        int temp = a[i];
        a[i] = a[i+1];
        a[i+1] = temp;
    }

    //output program;
    cout<<"output: ";
    for(int i=0; i<size-1; i++){
        cout<<a[i]<<"  ";
    }
}