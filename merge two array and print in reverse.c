// writw a program to merge two intger array, also display merged array in reverse order

#include<stdio.h>
void read_myarray(int myarray[], int);
void merge_array(int myarray3[], int myarray2[], int myarray1[], int , int);
void display(int myarray[],int);
void reverse_array(int myarray[],int);
void main()
{
    int m,n,t;
    int arr1[10], arr2[10], arr3[20];
    printf("\n Enter the element of first array: ");
    scanf("%d",&m);
    read_myarray(arr1,m);
    printf("\n Enter the element of second array: ");
    scanf("%d",&n);
    read_myarray(arr2,n);
    t = m + n;
    merge_array(arr3,arr2,arr1,m,n);
    printf("\n Merged array is : ");
    display_array(arr3,t);
    printf("\n Meged array in reverse order is ");
    reverse_array(arr3,t);
}

void read_myarray(int myarray[10],int n)
{
    int i;
    for(i=0;i<n;i++){
        printf("\n Enter the %d element: ",i+1);
        scanf("%d",&myarray[i]);
    }
}

void merge_array(int myarray3[], int myarray2[], int myarray1[], int m, int n)
{
    int i,j=0;
    for(i=0;i<m;i++)
    {
        myarray3[j] = myarray1[i];
        j++;
    }
    for(i=0;i<n;i++)
    {
        myarray3[j] = myarray2[i];
        j++;
    }
}

void display_array(int myarray[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\n %d",myarray[i]);
    }
}
void reverse_array(int myarray[], int n)
{
    int i;
    for(i=n-1; i>=0; i--)
    {
        printf("\n %d",myarray[i]);
    }
}
