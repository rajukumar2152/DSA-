#include <iostream>
#include <cstdio>
using namespace std;
  void fun (int i){

        switch(i){
           case 1:
           cout <<"one"<<endl<<"odd"<<endl;
           break;
        case 2:
            cout <<"two"<<endl<<"even"<<endl;
            break;
        case 3:
           cout <<"three"<<endl<<"odd"<<endl;
           break;
        case 4:
           cout <<"four"<<endl<<"even"<<endl;
           break;
        case 5:
           cout <<"five"<<endl<<"odd"<<endl;
           break;
        case 6:
           cout <<"six"<<endl<<"even"<<endl;
           break;
        case 7:
           cout <<"seven"<<endl<<"odd"<<endl;
           break;
         case 8:
           cout <<"eight"<<endl<<"even"<<endl;
           break;
        case 9:
           cout <<"nine"<<endl<<"odd"<<endl;
           break;
        case  10:
            if (i>9&&i%2==0){
            cout <<"even"<<endl;
            }

        default:
            if (i>9&&i%2==0){
            cout <<"even"<<endl;
            }
            else{
                cout<<"odd"<<endl;
            }

   }
  }
 int main(){

      fun (4);


    return 0;
}
