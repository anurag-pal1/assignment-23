#include<iostream>
#define PI 3.14
using namespace std;
class Area
{
public:
    float r;
    area()
    {
        return PI*r*r;
    }
};
int main()
{
    Area a;
    cout<<"Radius of circle:";
    cin>>a.r;
    float z=a.area();
    cout<<endl<<"Area of circle is:"<<z;
    return 0;
}
