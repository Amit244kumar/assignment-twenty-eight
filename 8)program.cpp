#include<conio.h>
#include<iostream>

using namespace std;

class coordinate3D
{
    private:
       int x,y,z;
    public:
        coordinate3D(int i,int j,int h)
        {
            x=i;
            y=j;
            z=h;
        }
        coordinate3D(){}

        void display()
        {
            cout<<"x= "<<x<<" y= "<<y<<" z= "<<z<<endl;
        }
        coordinate3D  operator,(coordinate3D c)
        {
            coordinate3D c1;
            c1.x=c.z;
            c1.y=c.y;
            c1.z=c.x;
            return c1;
        }

};

int main()
{
    coordinate3D c1(1,2,3),c2(5,7,6);
    coordinate3D c3;
    c3=(c1,c2);
    c3.display();
    getch();
    return 0;

}
