#include<iostream>
//#include<vector>
using namespace std;

void swap(short &a,short &b)
{
    short temp;
    temp=a;
        a=b;b=temp;
}
int partition(short *arr,int low,int high)
{
    int i=low,j=high;
    short pivot=arr[low];
    for(i=0;i<j;i++){
       if(arr[i]>pivot)
       {
         if(arr[j]<=pivot){
         swap(arr[i],arr[j]);
         j--;
         }
         else {j--;i--;}
        }
     }if(arr[j]<pivot)
    swap(arr[j],arr[low]);
    else swap(arr[--j],arr[low]);
    return j;
}
void quicksort(short *arr,int p,int q,int n)
{
 if(p<q){
   int t=partition(arr,p,q);
      quicksort(arr,p,t-1,n);
      quicksort(arr,t+1,q,n);
   }
   return ;
}

int main(){
     int n,i,j,k;
     cin >> n;
     int *arr=new int[n];
     short **arr1=new short *[n];
     short **arr2=new short*[n];
     
     for(i=0;i<n;i++){
        cin >>arr[i];
        k=arr[i];
        arr1[i]=new short[k];
        arr2[i]=new short[k];
        for(j=0;j<k;j++)
           cin>> arr1[i][j];
       for(j=0;j<k;j++)  cin >>arr2[i][j];
       
      }
      for(i=0;i<n;i++){
      k=arr[i];
         quicksort(arr1[i],0,k-1,k-1);
         quicksort(arr2[i],0,k-1,k-1);
      }
      /*for(i=0;i<n;i++){
          for(j=0;j<arr[i];j++)  cout <<arr1[i][j] <<" ";
          cout <<endl;
          for(j=0;j<arr[i];j++) cout <<arr2[i][j] <<" ";
          cout <<endl <<endl;
      }*/
      cout <<endl <<endl;
      for(i=0;i<n;i++){
      int sum=0;
         for(j=0;j<arr[i];j++) sum+=arr1[i][j]*arr2[i][j];
         cout <<sum <<endl;
      }
      return 0;
}
