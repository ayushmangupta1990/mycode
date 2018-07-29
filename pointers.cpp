#include<iostream>
#include<cstdio>


void function(int *p, int *q)
{
    int a,b;
    a  = *p + *q;
    b  = *p - *q;
    *p = a;
    *q = b;
}



int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    function(&a,&b);
    if (b<0){
        b = -b;
    }
    printf("%d\n%d",a,b);
    return 0;
}