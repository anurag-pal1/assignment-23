#include<iostream>
using namespace std;
class Average
{
public:
    int x,y,z;
    average()
    {
        return (x+y+z)/3;
    }
};
int main()
{
    Average a;
    cout<<"Enter three numbers:";
    cin>>a.x>>a.y>>a.z;
    int r=a.average();
    cout<<endl<<"Average of given numbers are:"<<r;
    return 0;
}
