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
    if(c[j]< check1){
      check1= c[j];
    }
  }
  return check1;
}

float average( int arr[],int n){
  int sum =0;
  for(int k=0; k<n;k++){
    sum= sum+arr[k];
  }
  float avg = sum/n;
  return avg;
}

/*int mode( int arr1[], int m){
  int counts[50];
  
  for(int i=0;i<m;i++){
    int counts =0;
    for(int j=i;j<m;j++){
      if(arr1[i]==arr[j]){
        count++;
        counts[i]= count;
      }
      for(int k =0;*/
int mode(int ar[],int m) {
   int maxValue = 0, maxCount = 0, i, j;

   for (i = 0; i < m; ++i) {
      int count = 0;
      
      for (j = 0; j < m; ++j) {
         if (ar[j] == ar[i])
         ++count;
      }
      
      if (count > maxCount) {
         maxCount = count;
         maxValue = ar[i];
      }
   }

   return maxValue;
}
      
     
  
