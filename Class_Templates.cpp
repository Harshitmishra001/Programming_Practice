#include <iostream> 
using namespace std;
template <typename H> class sorting{
    private:
    int* arr;
    int i,k,n,j;
    public:
    void ArrayTaker(int n){
        this->n=n;
        arr=new int(n);
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
    }
    void Sorter(){
    int counter=1;
        while(counter<n){
            for(i=0;i<n-counter;i++){
                if(arr[i]>arr[i+1]){
                    k=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=k;
                }
            }
            counter++;
        }
        for(i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    sorting<int> a;
    int n;
    cout<<"Enter size of array\n";
    cin>>n;
    a.ArrayTaker(n);
    a.Sorter();
}