/* Enter your solutions in this file */
#include <stdio.h>
int max( int a[], int b){
  int check =a[0];
  for(int i=0;i<b;i++)
  {
    if(check<a[i]){
      check=a[i];
      
      
    }
    
  }
  return check;
}

int min ( int c[], int d){
  int check1=c[0];
  for(int j=0;j<d;j++)
  {
    if(c[i]< check1){
      check1= c[j];
    }
  }
  return check1;
}

  
