
#include <stdio.h>
void printnumbers (int start,int end ){
    if (end >start ){
        return ;
}
printf ("%d " ,start);
printnumbers (start-1,end);
}

int main ()
{
    int start =10;
    int end =1;
    printf ("number from %d to %d :\n",  start,end);
    printnumbers(start,end);
    return 0;
}
