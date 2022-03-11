#include <stdio.h>
#include<limits.h>
int main()
{
  int arr[]={1,2,3,4,5};
  int n=sizeof(arr)/sizeof(arr[0]);
  int i,l,s;
  l=INT_MAX;
  s=INT_MAX;
 
  for(i=0;i<n;i++){
      if(arr[i]<l){
          s=l;
          l=arr[i];
          
      }
      else if(arr[i]<s&&arr[i]>l){
          s=arr[i];
           }
  }
  printf("the second smallest number is %d",s);
}
