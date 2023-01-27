#include<iostream>
using namespace std;
class Addition
{
public:
    int x,y;
    add()
    {
        return x+y;
    }
};
int main()
{
    Addition a;
    cout<<"Enter two numbers:";
    cin>>a.x>>a.y;
    int z=a.add();
    cout<<endl<<"Addition of two numbers is:"<<z;
    return 0;
}
