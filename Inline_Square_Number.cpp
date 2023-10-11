#include<iostream>
using namespace std;

class sqa
{
        private:
                int n,r;
        public:
                void input();
        void calc();
                void display();
};
inline void sqa::input()
{
        cout<<"Enter number ";
        cin>>n;
}

inline void sqa::calc()
{
        r=n*n;
}

inline void sqa::display()
{
        cout<<"\nSquare of integer [ "<<n<<" ] = "<<r<<"\n";
}

int main ()
{
        sqa s;
        s.input();
        s.calc();
        s.display();

        return 0;
}