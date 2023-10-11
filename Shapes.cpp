#include <iostream>
using namespace std;
int main(){
    cout<<"Enter The Function: \n";
    cout<<"a. Rectangle\n";
    cout<<"b. Hollow Rectangle\n";
    char Fin;
    cin>>Fin;
    cout<<"Enter No. of rows and coloums\n";
    int rows,colum;
    cin>>rows>>colum;
    switch(Fin)
    {
        case 'a':
        {
            for(int i=1;i<=rows;i++){
                for(int j=1;j<=colum;j++){
                    cout<<"*";
            }
            cout<<endl;
            }
            break;
        }
        
        case 'b':
        {
            for(int i=1;i<=rows;i++){
                for(int j=1;j<=colum;j++){
                    if(i==1 || 1==rows || j==1 || j==colum)
                    {
                        cout<<"*";
                    }
                    else{
                        cout<<" ";
                    }
                }
                cout<<endl;
            }
        }
        default:{
        cout<<"Not valid\n";
    }
    return 0;
}
}