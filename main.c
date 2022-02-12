#include <stdio.h>
#include <stdlib.h>
int DECtoALL (){
  st:{
    long int x;
    long long int y=1,i=0;
    printf("enter the DEC number: \n");
    scanf("%ld",&x);
    if(x!=0){
        printf("HEX : %lX\n",x);
        printf("OCT : %lo\n",x);
        while(x!=0){
            i+=(x%2)*y;
            y*=10;
            x/=2;
        }
        printf("BIN : %lld\n",i);
        goto st;
    }
  }
}
int BINtoALL (){
 st:{
    long long int x,y=1,i=0;
    printf("enter the BIN number: \n");
    scanf("%lld",&x);
    if(x!=0){
      while(x!=0)
        i+=(x%10)*y,y*=2,x/=10;
      printf("DEC : %lld\n",i);
      printf("HEX : %llX\n",i);
      printf("OCT : %llo\n",i);
      goto st;
    }
  }
}
int HEXtoALL (){
  st:{
    long long int x,i=0,y=1;
    printf("Enter a HEX number\n");
    scanf("%llX",&x);
    if(x!=0){
      printf("DEC : %lld\n",x);
      printf("OCT : %llo\n",x);
      while(x!=0)
          i+=(x%2)*y,y*=10,x/=2;
      printf("BIN : %lld\n",i);
      goto st;
    }
  }
}
int OCTtoALL (){
  start:{
    long int x,y=1,i=0;
    printf("Enter a OCT number\n");
    scanf("%lo",&x);
    if(x!=0){
      printf("DEC : %ld\n",x);
      printf("HEX : %lX\n",x);
      while(x!=0){
        i+=(x%2)*y;
        y*=10;
        x/=2;
      }
      printf("BIN : %ld\n",i);
      goto start;
    }
  }
}
int main(void) {
  start:{
    int x;
    printf("choose your operation\n");
    printf("1_DEC to ALL\n");
    printf("2_BIN to ALL\n");
    printf("3_HEX to ALL\n");
    printf("4_OCT to ALL\n");
    scanf("%d",&x);
    switch(x){
      case 1 :
        DECtoALL ();
        break;
      case 2 :
        BINtoALL ();
        break;
      case 3 :
        HEXtoALL ();
        break;
      case 4 :
        OCTtoALL ();
        break;
      default:
        printf("Error !!!\n");
    }
    goto start;
  }
}
