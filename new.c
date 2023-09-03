#include <stdio.h>
//fibonacci
int main() {
    int n=10;
    int i,f=0,s=1,t;

    for ( i = f; i <=n; i++)
    {
        t=f+s;
        f=s;
        s=t;

        if (t==0)
        {
            continue;
        }else{
           printf(" %d ",t);
    }
        }
        
    
    
    return 0;
}
