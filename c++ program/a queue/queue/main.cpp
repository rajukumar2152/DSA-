#include <iostream>

using namespace std;

int arr [10];
int Front =2;
int Rear =-1;

 void enqueue (int x){


    if (Front ==-1&& Rear==-1)
    { Front = Front +1;
      Rear = Rear+1;
        arr [Rear ]=x;

    }
    else if ( Front = (Rear+1)%10 )
       return;
    else {
        Rear = Rear+i;
    }


 return 0;


}
