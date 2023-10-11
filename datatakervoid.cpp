#include <iostream>
using namespace std;
class person{
    char name [50];
    int age,m1,m2,m3,m4,m5;
    string s1,s2,s3,s4,s5,reg;
    public:
    void getdata(void);
    void display(void);
};
void person :: getdata(void){
    cout<<"Enter name";
    cin>>name;
    cout<<"Enter reg no.";
    cin>>reg;
    cout<<"Enter all Subjects";
    cin>>s1>>s2>>s3>>s4>>s5;
    cout<<"Enter Marks";
    cin>>m1>>m2>>m3>>m4>>m5;
}
void person ::display(void){
    cout<<"Hi!"<<name<<endl;
    cout<<"Your subjects and marks are:";
    cout<<s1<<":"<<m1;
    cout<<s2<<":"<<m2;
    cout<<s3<<":"<<m3;
    cout<<s4<<":"<<m4;
    cout<<s5<<":"<<m5;
}
int main(){
    person p,q,r,s,e;
    p.getdata();
    q.getdata();
    r.getdata();
    s.getdata();
    e.getdata();
    p.display();
    q.display();
    r.display();
    s.display();
    e.display();
    return 0 ;
}