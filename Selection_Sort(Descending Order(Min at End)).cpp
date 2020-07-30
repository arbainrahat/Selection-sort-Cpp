#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter Array\n";
	int a[5];
	int i,j,loc,min,swap;
	for(int l=0;l<5;l++){
		cin>>a[l];
	}
	i=4;
	while(i>=0){
		j=0;
		min=a[j];												
		while(j<=i){
			if(a[j]<=min){
				loc=j;
				min=a[j];
			}
			j=j+1;
		}
		swap=a[i];
		a[i]=a[loc];
		a[loc]=swap;
		i=i-1;
	}
	cout<<"Selection Sort(Decending Order(Min Value at End))\n";
	for(int l=0;l<5;l++){
		cout<<a[l]<<"	";
	}
	cin.get();
	system("pause");
}
