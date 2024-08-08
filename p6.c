#include <stdio.h>

int main() 
{ 
    int n, i, low, high, mid, f = 0, pos; 
    float key, a[10]; 

    printf("Enter the number of elements\n"); 
    scanf("%d", &n); 

    printf("Enter the elements in ascending order\n"); 
    for(i = 0; i < n; i++) 
        scanf("%f", &a[i]); 

    printf("Enter the key element to be searched\n"); 
    scanf("%f", &key); 

    low = 0; 
    high = n - 1; 

    while(low <= high) 
    { 
        mid = (low + high) / 2; 

        if(key == a[mid]) 
        { 
            f = 1; 
            pos = mid; 
            break; 
        } 
        if(key > a[mid]) 
            low = mid + 1; 
        else 
            high = mid - 1; 
    } 

    if(f == 1) 
    { 
        printf("Search successful\n"); 
        printf("Key %.2f is at location %d\n", key, pos + 1); 
    } 
    else 
    { 
        printf("Search unsuccessful\nKey not found\n"); 
    } 

    return 0; 
}
