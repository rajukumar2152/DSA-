
#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    
    cin >> n;
    
    if(n=1){
        print("one ");
    }
    else if (n=2) {
        print ("two");
    
    }
    else if (n =3) {
      print("three");
    }
    else if (n=4) {
       print("four");
    }
    else if (n=5) {
       print("five");
    }
    else if (n=6) {
       print("six");
    }else if (n=7) {
       print("seven");
    }else if (n=8) {
       print("eight");
    }
    else{
        print("grater than 9");
    }

    // Write Your Code Here

    return 0;
}



#include <iostream>

using namespace std;
class book {
      public:
          string  name;
          int page ;
          string author ;

          book (string aname , int apage , string aauthor ){
          name = aname ;
          page = apage ;
          author= aauthor;

          }




};

int main()
{   book b1("hc verma a", 4000, "jbfvjd"  ) ; //() bracket me joo hain wo constructor hain n

    cout << b1.name <<endl;
    cout<<b1.author<<endl;
    cout<<b1.page<<endl ;   //constructor

     book b2("rs agrwal", 3000, "ramesh singh "  ) ;

    cout << b2.name <<endl;
    cout<<b2.author<<endl;
    cout<<b2.page ;
    return 0;
}
