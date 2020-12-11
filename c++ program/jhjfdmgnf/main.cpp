#include <stdio.h>

void update(int *a,int *b) {
    int *c ;
    int *d;
    *c = *a + *b;
    printf("%d\n",*c);
    if (*a>*b)
    {
        (*d) = (*a)- (*b);
        printf("%d\n",*d);
    }
    else
    {    *d = *b- *a;
        printf("%d\n",*d);
    }
                                        ///solv  nahi hua baad me solve karta hun
    // Complete this function
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
     printf("%d\n%d", a, b);

    update(pa, pb);


    return 0;
}
