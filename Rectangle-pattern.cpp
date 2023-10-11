#include <iostream>
using namespace std;
int main(){
    cout<<"Enter The Function: \n";
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
            
        }
        default:
        cout<<"Not valid\n";
    }
    return 0;
}