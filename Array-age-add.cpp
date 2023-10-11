#include <iostream>
using namespace std;
class aggeadd{
    int n,i,sum;
    public:
    void getdata(void);
};
void aggeadd::getdata(void){
    cout<<"Enter numbers of People You will add age for :";
    cin>>n;
    int *arr=new int(n);
    for(i=0;i<n;i++){
        cout<<"Enter the number "<<i<<" for array:\n";
        cin>>arr[i];
    }
    cout<<"your ages entered is:\n";
    for (i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    for(i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<"\nSum of Ages is:\n"<<sum;
}
int main(){
    aggeadd a;
    a.getdata();
    return 0;
}