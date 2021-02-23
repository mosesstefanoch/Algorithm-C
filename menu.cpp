#include<stdio.h>
struct menu
{
	int harga,jumlah;
};

int search(int x,menu *arr,int l,int r)
{
	if(l>r) return 0;
	int mid=(l+r)/2;
	if(x==arr[mid].harga) return arr[mid].jumlah;
	else if(x<arr[mid].harga) return search(x,arr,l,mid-1);
	else if(x>arr[mid].harga) return search(x,arr,mid+1,r);
}


int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	menu arr[n+1];
	int l=0;
	for(int i=0;i<n;i++)
	{
		int x;
		scanf("%d",&x);
		if(arr[l].harga!=x) l++,arr[l].harga=x,arr[l].jumlah=1;
		else arr[l].jumlah++;
	}
	for(int i=0;i<m;i++)
	{
		int x;
		scanf("%d",&x);
		printf("%d\n",search(x,arr,0,n-1));
	}
	return 0;
}
