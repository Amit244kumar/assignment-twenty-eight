#include<conio.h>
#include<iostream>
using namespace std;

class integer
{
     private:
       int n;
     public:
        integer()
        {
            n=0;
        }
        void operator=(int c)
        {
            n=c;
        }
        friend ostream& operator<<(ostream&,integer);
        int operator!()
        {
            if(n)
                return 0;
            else
                return 1;
        }
};

ostream& operator<<(ostream &os,integer x)
{
    os<<x.n<<endl;
    return os;
}

int main()
{
    integer n1,n2;
    n1=3;
    n2=0;
    if(!n1)
    {
        cout<<"hello"<<endl;
    }
    if(!n2)
    {
        cout<<"bye"<<endl;
    }
    cout<<n1<<n2;
    getch();
    return 0;
}
