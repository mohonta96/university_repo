#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    int arr[size];
    for(int i=0; i<size; i++){
        cout<<"Enter data to arrray: ";
        cin>>arr[i];
    }

    cout<<"---=Displaying array=-----"<<endl;

    for(int i=0; i<size; i++){
        //cout<<"Enter data to arrray: ";
        cout<<arr[i]<<"\t\t";
    }
    cout<<endl;

    cout<<"Enter your element for serching data to array: ";
    int temp, hold, pick;
    cin>>temp;
    hold = temp;
    for(int i=0; i<size; i++){
        if(temp == arr[i]){
            pick = temp;
        }
    }
    if(pick==hold){
        cout<<"match"<<endl;
    }
    else{
        cout<<"not math";
    }
}