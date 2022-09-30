#include<conio.h>
#include<iostream>

using namespace std;

class Array
{
    private:
     int arr[100];
    public:
        void set(int index,int value)
        {
            arr[index]=value;
        }
        int operator[](int index)
        {
            if(index>100)
            {
                cout<<endl<<"Index is out of range";
                exit(0);
            }
            return arr[index];
        }

};

int main()
{
    Array a1;
    a1.set(10,50);
    cout<<a1[10];
    cout<<a1[101];
    getch();
    return 0;
}
