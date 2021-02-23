#include<stdio.h>

int search(int x, int arr[],int l,int r)
{
	if(l>r) return r+1;
	int mid=(l+r)/2;
	if(x==arr[mid]) return mid+1;
	else if(x<arr[mid]) return search(x,arr,l,mid-1);
	else if(x>arr[mid]) return search(x,arr,mid+1,r);
}

void merge(int arr[], int l, int r, int mid) 
{ 
    int k=l;
    int a=mid-l+1; 
    int b= r-mid; 
    int L[a], R[b]; 
    for(int i=0;i<a;i++)  L[i] = arr[l+i]; 
    for(int i=0;i<b;i++) R[i] = arr[mid+1+i];
    int i=0,j=0;
    while (i<a&&j<b) 
    { 
        if(L[i]<=R[j]) 
        { 
            arr[k]=L[i]; 
            i++; 
        } 
        else
        { 
            arr[k]=R[j]; 
            j++; 
        } 
        k++; 
    } 
    while(i<a) 
    { 
        arr[k]=L[i]; 
        i++; 
        k++; 
    } 
    while (j<b) 
    { 
        arr[k]=R[j]; 
        j++; 
        k++; 
    } 
} 
void mergeSort(int arr[],int l,int r) 
{ 
    if (l<r) 
    { 
        int mid=l+(r-l)/2; 
        mergeSort(arr,l,mid); 
        mergeSort(arr,mid+1,r); 
        merge(arr,l,r,mid); 
    } 
} 
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	mergeSort(arr,0,n-1);
	for(int i=0;i<m;i++)
	{
		int x;
		scanf("%d",&x);
		printf("%d\n",search(x,arr,0,n-1));
	}
	return 0;
}
