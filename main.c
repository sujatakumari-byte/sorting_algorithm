#include <stdio.h>
#include <stdlib.h>
int a[100],c[100];
void mergesort(int,int);
void merge(int,int,int);
int main()
{
    int l=0,h,i,k; /*taking the input value*/
    printf("enter the size of array: ");
    scanf("%d",&h);
    printf("\nenter the elements of array : ");
    for(i=0;i<h;i++)
        scanf("%d",&a[i]);
    mergesort(l,h-1); /*passing the first and last index of array*/
    printf("\nafter merge sort\n");
     for(k=0;k<h;k++)
        printf("%d\t",a[k]);/*printing the final value after merge sort*/
    return 0;
}
void mergesort(int l,int h)
{
    int mid;
    if(l<h) /*checking if l is less than h*/
    {
    mid=(l+h)/2; /*defines the current array in two parts*/
    mergesort(l,mid); /*sort the first array*/
    mergesort(mid+1,h);/*sort the second array*/
    merge(l,mid,h);/*merge the both parts of array*/

}
}
void merge(int l,int mid,int h)
{
    int i=l,j=mid+1,k=l,p=0;
    while(i<=mid&&j<=h) /*checking i is less than equal to mid and j is less than equal to h*/
    {
        if(a[i]<a[j])/*checking if a[i] is less than a[j]*/
            c[k++]=a[i++];
        else  /*if a[i] is greater and equal to a[j]*/
            c[k++]=a[j++];
    }

    for(;i<=mid;i++)
        c[k++]=a[i];/*adding remaining element in a[i] */
    for(;j<=h;j++)
        c[k++]=a[j];/*adding remaining element in a[j] */
    for(i=0;i<=h;i++)
        a[i]=c[p++];/*putting all value of c array is in a array*/
}
