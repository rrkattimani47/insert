#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>

int A[2000];

//Algorithm of Insertion sort
void insertionSort(int A[], int n)
{

	int i,j,key;
	for(j=1;j<n;j++)
	{

		key=A[j];
		i=j-1;
		while(i>=0 && A[i]>key)
		{
			A[i+1]=A[i];
			i=i-1;

		}
		A[i+1]=key;
	}
}


//Main function
int main()
{

	int i,j,n;
	double f;
	clock_t s,e; //s-start, e-end.
	printf("Enter the number of elements:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	
		A[i]=rand()%10000;

	printf("The elements are:\n");

	for(i=0;i<n;i++)
		printf("%d\t",A[i]);

	s=clock();
	for(i=0;i<100000;i++)
		insertionSort(A,n);

	e=clock();
	f=(double)(e-s)/sysconf(_SC_CLK_TCK);
	printf("T\nhe sorted elements are:\n");
	for(i=0;i<n;i++)
		printf("%d\t",A[i]);

	printf("The time is :%lf",(f)/10000);

}