#include <iostream>
#include <math.h>
using namespace std;
bool running=true;
class safearray{
    int n;
    int *arr = new int[n + 1];
public:
    void putel(int z, int y){
        n=z;
        int size = trunc(log10(y))+1;
        if(z>size){
            for(int i=0;i<size+1;i++){
                arr[i]=y%10;
                y/=10;
            }
        }
        else{
            cout<<"Error! Index is larger than the number's digit count."<<endl;
            running=false;
        }
    }
    void getel(){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{
    safearray s;
    s.putel(8,124589);
    if(running==true){
        s.getel();
    }
}