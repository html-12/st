# include<stdio.h> 
int main() 
{ 
int n,i,key,low,high,mid,f=0,pos; 
float a[10]; 
printf("Enter the no. of elements\n"); 
scanf("%d",&n); 
printf("enter the elements in  the ascending order\n"); 
for(i=0;i<n;i++) 
scanf("%f",&a[i]); 
printf("Enter the key element to be searched\n"); 
scanf("%d",&key); 
low=0; 
high=n-1; 
while(low<=high) 
{ 
mid=(low+high)/2; 
if(key==a[mid]) 
{ 
f=1; 
pos=mid; 
break; 
} 
if(key>a[mid]) 
low=mid+1; 
else 
high=mid-1; 
} 
if(f==1) 
{ 
printf("search successfull\n"); 
printf("key %d is at location %d",key,pos+1); 
} 
else 
/* 
printf("search unsuccessfull\nkey not found"); 
return 0;  
}