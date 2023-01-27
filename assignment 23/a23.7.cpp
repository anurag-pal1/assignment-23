#include<iostream>
using namespace std;
class Square
{
public:
    int x;
    square()
    {
        return x*x;
    }
};
int main()
{
    Square s;
    cout<<"Enter a number: ";
    cin>>s.x;
    int r=s.square();
    cout<<endl<<"Square of given number is:"<<r;
    return 0;
}
