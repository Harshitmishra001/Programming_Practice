#include <iostream>
using namespace std;
class students{
    private:
    int marks,rollno,rav;
    string name;
    public:
        string anshuma(){
            cout<<"Name: "<<name<<" Roll no "<<rollno<<" Marks "<<marks<<"\n rav : "<<rav<<endl;
        }
        void getdata(void);
};
void students::getdata(void){
    cout<<"Enter Name: "<<endl;
    cin>>name;
    cout<<"Roll no :"<<endl;
    cin>>rollno;
    cout<<"Marks:"<<endl;
    cin>>marks;
}
int main(){
    students a,b;
    a.getdata();
    b.getdata();
    a.anshuma();
    b.anshuma();
}   