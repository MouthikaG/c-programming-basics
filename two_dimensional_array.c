
#include <stdio.h>

int main() {
   int i,j;
   int a[4][4]={10,20,30,40};
   for(i=0;i<4;i++) {
       for(j=0;j<2;j++) {
           printf("Value of a[%d] [%d]: %d\n",i,j,a[i][j]);
       }
   }
    return 0;
}
