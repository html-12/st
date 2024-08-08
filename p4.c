#include<stdio.h> 
#include<math.h> 
int main() 
{ 
int a,b,c,match; 
printf("Enter 3 integers which are sides of a triangle); 
scanf("%d%d%d",&a,&b,&c); 
printf("side A is %d\n",a); 
printf("side B is %d\n",b); 
printf("side C is %d\n",c); 
match=0; 
if(a==b) 
match=match+1; 
if(a==c) 
match=match+2; 
if(b==c) 
match=match+3; 
if(match==0) 
{ 
if((a+b)<=c) 
printf("not a triangle\n"); 
else if((b+c)<=a) 
printf("not a traingle\n"); 
else if((a+c)<+b) 
printf("NOT A TRAINGLE\n"); 
else 
printf("scalene"); 
} 
if(match==1) 
{ 
if((a+c)<=b) 
printf("not a triangle\n"); 
else  
printf("isosceles"); 
} 
else if(match==2) 
{ 
if((a+c)<=b) 
printf("not a trianlge\n"); 
else
printf("isosceles\n"); 
} 
else if(match==3) 
{ 
if((b+c)<=a) 
printf("not a triangle\n"); 
else 
printf("isosceles\n"); 
} 
else 
printf("Equilateral\n"); 
}