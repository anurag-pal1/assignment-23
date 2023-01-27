#include<iostream>
using namespace std;
class Volume{
public:
    int l,b,h;
    volume()
    {
        return l*b*h;
    }
};
int main()
{
    Volume v;
    cout<<"Enter length, breadth, height:";
    cin>>v.l>>v.b>>v.h;
    int z=v.volume();
    cout<<endl<<"Volume of cuboid is:"<<z;
    return 0;
}
