//print  common elements in two arrays 
#include <stdio.h>

int main() {
    
   int a[]={1,2,3,4,5};
   int b[]={2,9,3,4,7};
   int s1=sizeof(a)/sizeof(a[1]);
   int s2=sizeof(b)/sizeof(b[2]);
   for(int i=0;i<s1;i++)
   {
       for(int j=0;j<s2;j++){
           if(a[i]==b[j]){
               printf("%2d",a[i]);
               break;
           }
       }
   }

    return 0;
}