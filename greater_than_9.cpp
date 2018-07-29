#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>
#include<string>

using namespace std;

int main(){
    int k,j;
    scanf("%d %d",&k,&j);

    for(int i=k;i<=j;i++){
        if(i==8){
        printf("eight");
        }
        if(i==1){
        printf("one");
        }
        if(i==2){
        printf("two");
        }
        if(i==3){
        printf("three");
        }
        if(i==4){
        printf("four");
        }
        if(i==5){
        printf("five");
        }
      
        if(i==6){
        printf("six");
        }
        if(i==7){
        printf("seven");
        }
        if(i==9){
        printf("nine");
        }
        if(i>9 && i%2==0){
            printf("even");
        }
        if(i>9 && i%2==1){
            printf("odd");
        }
    printf("\n");
    }
    return 0;
}

