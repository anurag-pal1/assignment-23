#include<iostream>
using namespace std;
class Max
{
    public:
    int x,y;
    int maximum()
    {
        if(x>y)
        {
            return x;
        }
        else
        {
            return y;
        }
    }
};
int main()
{
    Max m;
    cout<<"Enter two numbers: ";
    cin>>m.x>>m.y;
    int r=m.maximum();
    cout<<endl<<"Maximum number is: "<<r;
    return 0;
}
