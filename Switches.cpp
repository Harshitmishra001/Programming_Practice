//Switches 
#include <iostream>
using namespace std;
int main(){
    //Use This For Normal
    char button;
    cout<<"Input A character: ";
    cin>>button;
    // if(button=='a'){
    //    cout<<"Hello"<<endl;
    // }
    // else if(button=='b'){
    //     cout<<"Namaste"<<endl;
    // }
    // else if(button=='c'){
    //     cout<<"Konichiwwa"<<endl;
    // }
    // else if(button=='d'){
    //     cout<<"Hola"<<endl;
    // }
    // else if(button=='e'){
    //     cout<<"Bonjour"<<endl;
    // }
    // else{
    //     cout<<"i am still Learning more.....\n";
    // }

switch(button)
{
    case 'a':
        cout<<"Hello"<<endl;
        break;
    case 'b':
        cout<<"Namaste"<<endl;
        break;
    case 'c':
        cout<<"konichiwaa"<<endl;
        break;
    case 'd':
        cout<<"Hola"<<endl;
        break;
    case 'e':
        cout<<"Bonjour"<<endl;
        break;
    default:
    cout<<"I am still Learninng Codes\n";
}

    return 0;
}