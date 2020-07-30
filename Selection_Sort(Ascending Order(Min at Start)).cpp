#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter Array of 5 Numbers\n";
	int a[5];
	int i,j,swap,min,loc;
	for(int l=0;l<5;l++){
		cin>>a[l];
	}
	i=0;
	while(i<=4)
	{
		j=i;
		min=a[j];
		while(j<=4)
		{
			if(a[j]<=min)
			{
				loc=j;
				min=a[j];
			}
			j=j+1;
		}
		swap=a[i];
		a[i]=a[loc];
		a[loc]=swap;
		i=i+1;
	}
	cout<<"Selection Sort(Ascending Order(Min at Start))\n";
	for(int l=0;l<5;l++){
		cout<<a[l]<<"	";
	}
	cin.get();
	system("pause");
}
