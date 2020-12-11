#include <iostream>

using namespace std;
class  Book {
     public:
        string title;
        string author ;
        int page ;
        Book (){ cout<< "raju kumar"<<endl;

        }

};

int main()
{
    Book b1;
    b1.title= "hc verma " ;
    b1.author ="harish chandra ";
    cout << b1.title << endl;
    cout<< b1.author<< endl ;
    Book b2;
    return 0;
 }

