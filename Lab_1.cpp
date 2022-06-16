#include<bits/stdc++.h>
#include<list>
using namespace std;

void display(list<int> &lst){
    list<int>::iterator i;
    for(i = lst.begin(); i!=lst.end(); i++){
        cout<<*i<<"  ";
    }
}

int main(){
    list<int> mark;
    mark.push_back(45);
    mark.push_back(88);
    mark.push_back(99);
    mark.push_back(88);
    mark.push_back(15);
    mark.push_back(10);
    mark.push_back(99);

    mark.remove(99);
    mark.pop_front();
    mark.pop_back();

    display(mark);
}