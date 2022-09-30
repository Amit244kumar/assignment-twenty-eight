#include<iostream>
#include<conio.h>
using namespace std;

class Complex
{
    private:
       int real,img;
    public:
       friend ostream& operator<<(ostream&,Complex);
       friend istream& operator>>(istream&,Complex&);
};

ostream& operator<<(ostream &os,Complex c)
{
    os<<c.real<<"+"<<c.img<<"i"<<endl;
    return os;
}
istream& operator>>(istream &in,Complex &c)
{
    cout<<"Enter real part"<<endl;
    in>>c.real;
    cout<<"Enter imaginary part"<<endl;
    in>>c.img;
    return in;
}


int main()
{
    Complex c1,c2;
    cin>>c1>>c2;
    cout<<"The both Complex number are"<<endl;
    cout<<c1<<c2;
    getch();
    return 0;
}
