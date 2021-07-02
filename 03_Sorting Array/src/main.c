#include"header.h"
int main()
{
    int *arr,*arr_sorted;
    //number of elements be 6
    int n=6;
    arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++) *(arr+i)=rand()%50;
    //call selection sort function
    display(arr,n);
    arr_sorted=sort(arr,n);
    display(arr_sorted,n);
    return 0;
}
