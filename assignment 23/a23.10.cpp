#include<iostream>
using namespace std;
class Sum
{
    public:
    int arr[10];
    int sum_of_array()
    {
        int i,sum=0;
        for(i=0;i<10;i++)
        {
            sum=sum+arr[i];
        }
        return sum;
    }
};
int main()
{
    Sum s;
    int j;
    cout<<"Enter 10 numbers: ";
    for(j=0;j<10;j++)
    {
        cin>>s.arr[j];
    }
    int r=s.sum_of_array();
    cout<<endl<<"Sum of elements in given array is: "<<r;
    return 0;
}
