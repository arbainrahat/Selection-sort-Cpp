#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter Array of 5 Numbers\n";
	int a[5];
	int i,j,temp,max,loc;
	for(int l=0;l<5;l++){
		cin>>a[l];
	}
	i=4;
	while(i>=0)
	{
		j=0;
		max=a[j];
		while(j<=i)
		{
			if(a[j]>=max)
			{
				loc=j;
				max=a[j];
			}
			j=j+1;
		}
		temp=a[i];
		a[i]=a[loc];
		a[loc]=temp;
		i=i-1;
	}
	cout<<"Selection Sort(Ascending Order(Max at End))\n";
	for(int l=0;l<5;l++){
		cout<<a[l]<<"	";
	}
	cin.get();
	system("pause");
}
