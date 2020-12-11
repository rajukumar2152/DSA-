#include <iostream>

using namespace std;
class stack1
{
     public:

     int arr[5];
     int top ;
     stack1()
     {
        for (int i=0; i<5 ;i++)
        {
            top = -1;
            arr[i]= 0;
        }
     }
     bool isempty ()
     {
        if (top==-1)
            return true;
        else
            return false ;
     }

     void push (int val)
     {
         top ++;
         arr[top]=val;
         cout <<arr[top]<<endl ;
     }




};
int main(){
    s1.push(43);
    s1.push(44);
    s1.push(45);
    s1.push(46);
    s1.push(47);
    s1.push(48);
    s1.push(49);
    s1.push(50);
    stack1 s1;

    cout<<s1.isempty();
    return 0;
}
