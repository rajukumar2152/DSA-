#include <iostream>

using namespace std;
int rear =-1, front= -1;
int arr[4];
bool isempty()
{
    if (rear = front =-1)
    {
        return true ;}
     else
        return false ;

}
void add(int val){
    if (front<4)
    {
      front++;
      arr[front]= val;
      cout <<arr[front];
     };
}
int pop(int rear)
{
    int t;
    rear++;
    arr[rear]=0;
    t= arr[rear];
    return t;
}

int main()
{
    add(45);
    add(46);
    add(47);
    add(48);
    add(49);
    add(50);
    cout<<pop(5)<<endl;
    cout<<pop(1);
    cout<<pop(2);
    cout<<pop(3);
    cout<<pop(4);
    cout<<pop(5);
    return 0;
}
