#include<iostream>
#include<cstdio>

int main()
{
    int i,j;
    scanf("%d",&i);
    int array[i];
    for(int k=0;k<i;k++){
        scanf("%d",&j);
        array[k] = j;
    }

    for(int k=i-1;k>=0;k--){
        printf("%d ",array[k]);
    }

    return 0;
}