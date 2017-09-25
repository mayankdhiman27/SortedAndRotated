#include<stdio.h>

//Global array
int a[]={8,9,10,11,12,13,6,7};

//Pivot element in sorted and rotated array
int pivot(){

int low=0,p=0;
int high=(sizeof(a)/sizeof(int))-1;
int mid=(low+high)/2;
while(low<=high){
mid=(low+high)/2;
if(a[mid]>a[mid+1] && a[mid-1]<a[mid]){
p=mid;
break;
}
else{
if(a[mid]<a[mid+1] && a[mid]>a[mid-1]){
low=mid+1;
}
else{
high=mid-1;
}
}
}
}

//Binary search
void binarysearch(int pivot,int key){
int low=0,high=(sizeof(a)/sizeof(int))-1;
while(low<=high){
if(a[pivot]==key){
printf("Found at %d\n",pivot);
break;
}
else{
if(key<a[pivot] && key>=a[low]){
high=pivot-1;
pivot=(low+high)/2;
}
else{
low=pivot+1;
pivot=(low+high)/2;
}
}
}
}

void main(){
int key;
scanf("%d",&key);
int piv=pivot();
printf("%d\n",piv);
binarysearch(piv,key);
}
