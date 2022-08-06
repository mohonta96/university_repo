#include<iostream>
#define size 5
using namespace std;

int arry[size];
int i, postion, temp=0;

void create(){
    cout<<"Arry created succesfuly!."<<endl;
}


int insert(){
    cout<<"---inserting element----\n"<<endl;
    for(i = 0; i<size; i++){
        cout<<"Enter element to index "<<i<<" Is:  ";
        cin>>arry[i];
    }
}

void del(int postion){
    for(i=postion; i<size; i++){
        temp = arry[i];
        arry[i] = arry[i+1];
        arry[i+1] = temp;
    }
}


void display(){
    int ch;
    cout<<"1.for diplay before delete element in array"<<endl;
    cout<<"2.for display after delete element in array"<<endl;
    cin>>ch;
    if(ch==1){
        cout<<"----Before delete displaying element-----"<<endl;
        for(i = 0; i<size; i++){
            cout<<arry[i]<<"   ";
        }
        cout<<endl;
    }
    if(ch==2){
        cout<<"----After delete displaying element-----"<<endl;
        for(i = 0; i<size-1; i++){
        cout<<arry[i]<<"   ";
        }
        cout<<endl; 
    }
    
}

int main(){
    int t=1, temp;
    
    while(t--){
        int choice;
        cout<<"1. create"<<endl;
        cout<<"2. insert"<<endl;
        cout<<"3. delete"<<endl;
        cout<<"4. display"<<endl;
        cin>>choice;

        switch(choice){
            case 1:
                create();
                break;
            case 2:
                insert();
                break;
            case 3:
                int postion;
                cout<<"Enter positon to delete: ";
                cin>>postion;
                del(postion);
                break;
            case 4:
                display();
                break;
            default:
                cout<<"invleid key press! \a"<<endl;
                break;
        }
        cout<< "1. Run agin"<<endl;
        cout<< "0. Terminate the programe"<<endl;
        cin>>temp;
        switch(temp){
            case 0:
                t = temp;
                break;
            case 1:
                t= temp;
                break;
            default:
                cout<<"Invalid typing"<<endl;
            break;
        }
    }
}