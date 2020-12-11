#include <iostream>
#include<string>

using namespace std;
struct Person {
    string name ;
    int age ;
    double salery ;





};

int main()
{
    Person p[2];

    for (int i=0; i<2; i++){
    cout <<" enter person detal"<<(i+1)<<"enter person name "<<endl ;

    cout<<"enter the name "<<endl;
    cin >> p[i].name  >>endl ;
    cout <<"enter the age "<<endl ;
    cin>>p[i].age;
    cout <<"enter the salary "<<endl ;
    cin>>p[i].salery;
    }
    cout<<"output of the perrson detail" <<endl;
    for (int i=0;i<2;i++){
     cout <<"detail of "<< (i+1)<< endl;
     cout <<p[i].name<<endl;
     cout <<p[i].age<<endl;
     cout <<p[i].salery<<endl;

    }





    return 0;

}
