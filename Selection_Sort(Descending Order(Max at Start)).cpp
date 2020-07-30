#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter Array\n";
	int a[5];
	int i,j,loc,max,swap;
	for(int l=0;l<5;l++){
		cin>>a[l];
	}
	i=0;
	while(i<=4){
		j=i;
		max=a[j];
		while(j<=4){
			if(a[j]>=max){
				loc=j;
				max=a[j];
			}
			j=j+1;
		}
		swap=a[i];
		a[i]=a[loc];
		a[loc]=swap;
		i=i+1;
	}
	cout<<"Selection Sort(Decending Order(Max Value at Start))\n";
	for(int l=0;l<5;l++){
		cout<<a[l]<<"	";
	}
	cin.get();
	system("pause");
}
