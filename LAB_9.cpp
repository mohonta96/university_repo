#include<iostream>
using namespace std;

void  main_str(){
    char c[100];
    cout<<"Enter your sentence: ";
    for(int i = 0; c[i]!='\0'; i++){
        scanf("%c", &c[i]);
    }
    for(int i = 0; c[i]!='\0'; i++){
        printf("%c", c[i]);
    }
}

int main(){
    main_str();
}