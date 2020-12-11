#include <iostream>

using namespace std;
arp(int r, float*a)
{
   *a=3.14*r*r;

}

int main()
{
    int a=3,*b;
    b= &a;
    int r;
    float area ;
    cin>>r;
    cout<<arp(r ,&area );
    cout << a << " " <<&b<<endl;
    cout<<&a<<endl;
    return 0;
}
