#include<iostream>
#include<math.h>

using namespace std;
int main(){
    int row, col, i, j;
    cout<<"Enter row of array: ";
    cin>>row;
    cout<<"Enter col of array: ";
    cin>>col;
    int a[row][col];
    cout<<"----==getting input==----\n\n"<<endl;
    for(i = 0; i<row; i++){
        for(j=0; j<col; j++){
            printf("Enter data for row %d & col %d: ", i, j);
            cin>>a[i][j];
        }
    }
    cout<<"--==Displaying the data==----\n\n"<<endl;

    for(i = 0; i<row; i++){
        for(j=0; j<col; j++){
            //printf("Enter data for row %d & col %d", i, j);
            cout<<a[i][j]<<"\t";
        }
    }
    cout<<endl;

    cout<<"Enter data for search: ";
    int temp, hold, peek;
    cin>>temp;
    hold = temp;
    
    for(i = 0; i<row; i++){
        for(j=0; j<col; j++){
            if(a[i][j]==temp){
                peek = temp;        
            }
        } 
    }
    if(peek == hold){
        cout<<"Data is match in doble arry"<<endl;
    }
    else{
        cout<<"Data not match in doble array";
    }
    
}