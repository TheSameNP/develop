#pragma hdrstop
#pragma argsused
#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<string>
#ifdef _WIN32
#include <stdlib.h>
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

#include <stdio.h>

	int _tmain(int argc, _TCHAR* argv[])
	{
	int n,tmp,counter=0,q,k,s=0,sum=0,sum1=0;
	int **a = new int *[n];
	int const v=4;
	int array[v][v];
	int *size = (int*)calloc(k, sizeof(int));
	cout<<"\t\t***Laba4**\n";
	while(counter!=-1)
		{
		cout<<"\n\n\t\tInput number 1-5 z = ";
		cin>>n;
		switch(n)
			{
			case 1:
			cout<<"Enter k: ";
			cin>>k;
			if(size == 0) exit(1);
			for(int i = 0; i < k; i++)
				{
				cout<<"number "<<i<<" :";
				cin>>size[i];
				}
			for(int i = 0; i < k; i++)
				{
				s = 0;
				for(int j = 0; j < k; j++)
					{
					if(size[i] == size[j]) s++;
					}
				if(s == 1)
					{
					cout<<" "<<size[i];
					}
				}
			delete [] size;
			break;
			case 2:
			for(int i=0;i<v;i++)
				{
				for(int j=0;j<v;j++)
					{
					cout<<"array["<<i<<"]"<<"["<<j<<"]= ";
					cin>>array[i][j];
					}
				}
			cout<<"\n\t\tMatrix A";
			for(int i=0;i<v;i++)
				{
				for(int j=0;j<v;j++)

					cout<<array[i][j]<<"\t";
					cout<<endl;

				}
			for(int i=0,j=0;i<v,j<v;i++,j++)
				{
				sum=sum+array[i][j];
				}
			cout<<"sum= "<<sum;
				for(int i=3,j=3;i>0,j>0;i--,j--)
				{
				sum1=sum+array[i][j];
				}
			cout<<"sum= "<<sum1;
			break;
			case 3:
			cout<<"size Matrix: ";
			cin>>q;
			for(int i = 0; i<q; i++)
				 {
				  a[i] = new int [q];
				 }
			for(int i = 0; i<q; i++)
				 {
				 for(int j = 0; j<q; j++)
					  {
					   a[i][j] =1+ rand()%100;
					  }
				 }
			cout << endl <<"Matrix: "<<endl;
			for (int i = 0; i < q; i++)
				 {
				 for (int j = 0; j < q; j++)
					   {
						cout.width (3);
						cout << a[i][j];
					   }
				  cout << endl;
				 }
			for(int i = 0; i < q; ++i )
				 {
				 for( int j = 0; j < i; ++j )
					  {
					   tmp = a[i][j];
					   a[i][j] = a[j][i];
					   a[j][i] = tmp;
					  }
				 }
			cout << "Matrix transposition : "<<endl;
			for (int i = 0; i < q; i++)
				 {
				 for (int j = 0; j < q; j++)
					   {
						cout.width (3);
						cout << a[i][j];
					   }
				 cout << endl;
				 }
			break;
			case 4: ;break;
			case 5: ;break;
			default:cout<<"\n input 1-5...\n";
			}
		}
		return 0;
	}
