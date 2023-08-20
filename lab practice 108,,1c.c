#include <stdio.h>
void printnumbers (int start,int end ){
    if (start >end ){
        return ;
}
printf ("%d " ,start);
printnumbers (start+1,end);
}

int main ()
{
    int start =1;
    int end =10;
    printf ("number from %d to %d :\n",  start,end);
    printnumbers(start,end);
    return 0;
}
