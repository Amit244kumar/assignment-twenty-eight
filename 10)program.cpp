#include<conio.h>
#include<iostream>
using namespace std;

class Distance
{
    private:
      int feet,inches;
    public:
        Distance()
        {

        }
        Distance(int f,int i)
        {
           feet=f;
           inches=i;
        }
        void operator()(int a,int b,int c)
        {
            feet=a+c+5;
            inches=a+b+15;
        }

        void show()
        {
            cout<<feet<<endl;
            cout<<inches<<endl;
        }
};

int main()
{
    Distance d1,d2(3,4);
    d1(3,4,6);
    d1.show();
    d2.show();
    getch();
    return 0;
}
