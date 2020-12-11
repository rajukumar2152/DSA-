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
{   book b1("hc verma a", 4000, "jbfvjd"  ) ;

    cout << b1.name <<endl;
    cout<<b1.author<<endl;
    cout<<b1.page<<endl ;

     book b2("rs agrwal", 3000, "ramesh singh  "  ) ;

    cout << b2.name <<endl;
    cout<<b2.author<<endl;
    cout<<b2.page <<endl;
    cout << "hello world ";
    return 0;
}
