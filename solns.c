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
/*
int factors( int fact, int f[]){
  int a=0;
  int c=0;
  for(int i=2;i<=fact;i++){
    if( fact%i==0){
      c=1;
      
      for( int j =2;j<=i;j++){
        if( i%j==0){
          c=0;
          break;
        }
        a++;
      }
      if(c==1){
        for( int k =0; k<fact;k++){
          f[k]=i;}
      }
    }*/

    int factor( int fact, int f[]){
      int i, j, num, isPrime;
     int k=0;

    for(i=2; i<=fact; i++)
    {
        /* Check 'i' for factor of num */
        if(fact%i==0)
        {
            /* Check 'i' for Prime */
            isPrime = 1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    isPrime = 0;
                    break;
                }
            }

            /* If 'i' is Prime number and factor of num */
            if(isPrime==1)
            {
                printf("%d, ", i);
              k++;
              
            }
        }
    }

    return k;
}
          
          
         
      
      
  
      
     
  
