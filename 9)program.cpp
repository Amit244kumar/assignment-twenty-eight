#include<conio.h>
#include<iostream>

using namespace std;

class Integer
{
   private:
      int n;
   public:
    Integer()
    {

    }
    Integer(int i):n(i)
    {

    }
    void display()
    {
        cout<<n<<endl;
    }

};

int main()
{
    Integer i1=3;
    Integer i2;
    i1.display();
    i2=4;
    i2.display();
    getch();
    return 0;
}
