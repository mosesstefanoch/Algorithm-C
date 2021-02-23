#include <stdio.h>
#include <string.h>

int main ()
{
	FILE *fp;
	int tt;
	int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;
	char huruf[1001];
	
	fp = fopen("testdata.in","r");
	
	while (!feof(fp))
	{
		fscanf(fp,"%d\n", &tt);
//		getchar();
		for(int ii=1 ; ii<=tt ; ii++)
		{
			fscanf(fp,"%[^\n]\n", &huruf);
//			getchar();
			for(int jj=0 ; jj<strlen(huruf) ; jj++)
			{
				if(huruf[jj] == 'a' || huruf[jj] =='A')
				{
					a++;
				}
				if(huruf[jj] == 'b' || huruf[jj] =='B')
				{
					b++;
				}
				if(huruf[jj] == 'c' || huruf[jj] =='C')
				{
					c++;
				}
				if(huruf[jj] == 'd' || huruf[jj] =='D')
				{
					d++;
				}
				if(huruf[jj] == 'e' || huruf[jj] =='E')
				{
					e++;
				}
				if(huruf[jj] == 'f' || huruf[jj] =='F')
				{
					f++;
				}
				if(huruf[jj] == 'g' || huruf[jj] =='G')
				{
					g++;
				}
				if(huruf[jj] == 'h' || huruf[jj] =='H')
				{
					h++;
				}
				if(huruf[jj] == 'i' || huruf[jj] =='I')
				{
					i++;
				}
				if(huruf[jj] == 'j' || huruf[jj] =='J')
				{
					j++;
				}
				if(huruf[jj] == 'k' || huruf[jj] =='K')
				{
					k++;
				}
				if(huruf[jj] == 'l' || huruf[jj] =='L')
				{
					l++;
				}
				if(huruf[jj] == 'm' || huruf[jj] =='M')
				{
					m++;
				}
				if(huruf[jj] == 'n' || huruf[jj] =='N')
				{
					n++;
				}
				if(huruf[jj] == 'o' || huruf[jj] =='O')
				{
					o++;
				}
				if(huruf[jj] == 'p' || huruf[jj] =='P')
				{
					p++;
				}
				if(huruf[jj] == 'q' || huruf[jj] =='Q')
				{
					q++;
				}
				if(huruf[jj] == 'r' || huruf[jj] =='R')
				{
					r++;
				}
				if(huruf[jj] == 's' || huruf[jj] =='S')
				{
					s++;
				}
				if(huruf[jj] == 't' || huruf[jj] =='T')
				{
					t++;
				}
				if(huruf[jj] == 'u' || huruf[jj] =='U')
				{
					u++;
				}
				if(huruf[jj] == 'v' || huruf[jj] =='V')
				{
					v++;
				}
				if(huruf[jj] == 'w' || huruf[jj] =='W')
				{
					w++;
				}
				if(huruf[jj] == 'x' || huruf[jj] =='X')
				{
					x++;
				}
				if(huruf[jj] == 'y' || huruf[jj] =='Y')
				{
					y++;
				}
				if(huruf[jj] == 'z' || huruf[jj] =='Z')
				{
					z++;
				}
			}
			printf("Case #%d:\n", ii);
			printf("A : %d, B : %d, C : %d, D : %d, E : %d\n",a,b,c,d,e);
			printf("F : %d, G : %d, H : %d, I : %d, J : %d\n",f,g,h,i,j);
			printf("K : %d, L : %d, M : %d, N : %d, O : %d\n",k,l,m,n,o);
			printf("P : %d, Q : %d, R : %d, S : %d, T : %d\n",p,q,r,s,t);
			printf("U : %d, V : %d, W : %d, X : %d, Y : %d\n",u,v,w,x,y);
			printf("Z : %d\n",z);
			a=b=c=d=e=f=g=h=i=j=k=l=m=n=o=p=q=r=s=t=u=v=w=x=y=z=0;
			
			printf("\n");
		}
	}
	
	fclose(fp);

	return 0;
}
