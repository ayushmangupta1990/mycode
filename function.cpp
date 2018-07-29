#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>

using namespace std;


int max_all(int a,int b, int c, int d){

    if (a>b && a>c && a>d){
        return a;
    }
    if (b>a && b>c && b>d){
        return b;
    }
    if (c>b && c>a && c>d){
        return c;
    }
    else{
        return d;
    }
}


int main(){
int a,b,c,d,max=0;
scanf("%d %d %d %d",&a,&b,&c,&d);
max = max_all(a,b,c,d);
printf("%d",max);


return 0;
}