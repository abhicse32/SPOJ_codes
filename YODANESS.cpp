#include <cstdio>
#define gc getchar_unlocked
char char_arr1[30002][22];
char char_arr2[30002][22];
long long inv=0;
void merge(int arr[], int l, int m, int r)
{
    int i, j, k=m+1;
    int n1 = m - l + 1;
    int n2 =  r - m;
    int min,max;
    min=n1>=n2?n2:n1;
    max=n2>n1?n2:n1;
    for(i = 0; i < min; i++)
        {L[i] = arr[l + i];R[i]=arr[k+i];}
    if(n1==max)for(;i<max;i++)L[i]=arr[l+i];
    else for(;i<max;i++) R[i]=arr[k+i];
    for(j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
 
    i = 0; j = 0; k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
            arr[k] = L[i++];
        else
        {
            arr[k] = R[j++];
            	inv+=n1-i;
        }
        k++;
    }
     while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}
 void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2; //Same as (l+r)/2, but avoids overflow for large l and h
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}
int main(){
	int N,i,M,j,k;
    char ch;
   scanf("%d",&N);
	while(N--){
		inv=0;
		scanf("%d",&M);
    ch=gc();
		for(i=0;i<M;i++){
            j=0;
          while((ch=gc())>96){char_arr1[i][j++]=ch;}
        }
        for(i=0;i<M;i++){
            j=0;
        while((ch=gc())>96){char_arr2[i][j++]=ch;}
        }
       mergeSort(arr,0,M-1);
    printf("%lld\n",inv);
	}
   return 0;
}
 
Close