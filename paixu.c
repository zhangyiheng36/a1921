#include"paixu.h"

void Bubble1(int a[],int n){
	int i,j,t;
	for(i=1;i<n;i++){
		for(j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	
	for(i=0;i<N;i++) printf("%d ",a[i]);
	printf("\n");
}

void InsertSort(int a[],int n){
	int i,j,temp;
	for(i=1;i<n;i++){
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	for(i=0;i<N;i++) printf("%d ",a[i]);
	printf("\n");
}

void SelectSort(int a[],int n){
	int i,j,k,m;
	for(i=0;i<n-1;i++){
		m=a[i];
		k=i;
		for(j=i+1;j<n;j++)
			if(a[j]<m){
				m=a[j];k=j;
			}
		a[k]=a[i];
		a[i]=m;
	}
	for(i=0;i<N;i++) printf("%d ",a[i]);
	printf("\n");
}

int Partition2(int a[],int low, int high){
	int i=low, j=high+1,x=a[low],t;
	while(i<j){
		do i++;while(a[i]<x);
		do j--;while(a[j]>x);
		if(i<j){
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	a[low]=a[j];
	a[j]=x;
	return j;
}

void QSort(int a[],int low,int high){
	if(low<high){
		int mid=Partition2(a,low,high);
		QSort(a,low,mid-1);
		QSort(a,mid+1,high);
	}
}

void QuickSort(int a[],int n){
	QSort(a,0,n-1);
	for(int i=0;i<N;i++) printf("%d ",a[i]);
	printf("\n");
}
