#include"paixu.h"

int main(int argc,char *argv[]){
	int a[N],i;
	srand(time(0));

	for(i=0;i<N;i++)
		a[i]=rand()%100;
	printf("初始数值为:");

	for(i=0;i<N;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("冒泡排序后:");
	Bubble1(a,N);
	printf("插入排序后:");
	InsertSort(a,N);
	printf("选择排序后:");
	SelectSort(a,N);	
	printf("快速排序后:");
	QuickSort(a,N);
}
