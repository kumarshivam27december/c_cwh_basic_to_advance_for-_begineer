#include <stdio.h>

int main(){
    printf("hello world\n");
    int a=1232;
    int b=6333;
    int c=474838;
    float d=62627.8373;
    double floatd=6363738.826262829272;
    long double floatedd=62527726272.82726282772827;
    int k= a+b;
    printf("%d",k) ;
    if(a>b){
        printf("\na is greater than b");
    }else{
        printf("\na is less than b or b is greater than a");
    };
    char l[]="i am a good boy";
    printf("%s",l[2,14]);
}