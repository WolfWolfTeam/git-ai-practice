#include<iostream>
using namespace std;

const int N=1e6+10;
int n;
int a[N];

void quick_sort(int q[],int l,int r){
	if(l>=r)return;
	int x=q[(l+r)/2],i=l-1,j=r+1;
	while(i<j){
		do i++;while(q[i]<x);
		do j--;while(q[j]>x);
		if(i<j)swap(q[i],q[j]);
	}
	quick_sort(q,l,j);
	quick_sort(q,j+1,r);
}

int main(){
	
printf("This is the merged version from both sides.\n");
	
	scanf("%d",&n);
	for(int i=0;i<n;i++)scanf("%d",&a[i]);
	quick_sort(a,0,n-1);
	for(int i=0;i<n-1;i++)printf("%d ",a[i]);
	printf("%d",a[n-1]);
	return 0;
}

