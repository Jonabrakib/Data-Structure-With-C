#include<stdio.h>
#include<stdlib.h>
int search, start, end, mid, found=0;
int binarysearch(int *array[], int *item)
{
    int count=0;
    while(start<=end){
        count++;
        mid=(start+end)/2;
        if(array[mid]==*item){
            return count;
        }
        else if(*item>array[mid]){
            start=mid+1;
    }
    else if(*item<array[mid]){
        end=mid-1;
    }
}
if(start<end){
    found ++;
    return count;
}
}
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10},search;
    int count;
    start=0;
    end=9;
    scanf("%d",&search);
    count=binarysearch(&a,&search);
    if(found==0){
            printf("item not found %d \n complexity %d",found,count);
    }

    else{
        printf("item found %d \n complexity %d ",found,count);
    }
    return 0;
    }
