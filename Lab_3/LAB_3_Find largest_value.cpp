#include<bits/stdc++.h>
#define size  5
using namespace std;
int a[size];

int main(){

int max = a[0], loc;
    for(int i = 0; i<size; i++){
        cout<<"Enter your element into arry: ";
        cin>>a[i];
    }
    cout<<endl;
    cout<<"---=Displaying the array element=---"<<endl;
    for(int i = 0; i<size; i++){
        cout<<a[i]<<"  ";
    }
    cout<<endl;
    for(int i = 0; i<size; i++){
        if(max<a[i]){
            int temp = a[i];
            a[i] = max;
            max = temp;
            loc = i;
        }
    }
    cout<<"the index is: " << loc<<endl;
    cout<<"the max is: " << max<<endl;

}