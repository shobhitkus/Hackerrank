#include<stdio.h>
int main(){
    int n, num, min_num = 0, max_num = 0, result = 0;
    scanf("%d", &n);
    int i,j;
    int *a = (int*)calloc(100, sizeof(int));
    for(i = 0; i < n; i++) {
        scanf("%d", &num);
        if(!min_num || min_num > num)
            min_num = num;
        if(max_num < num)
            max_num = num;
        a[num]++;
    }
    
    result = a[min_num]; //if there's only one number 
    
    for( i = min_num; i < max_num; i++) {
        if(a[i] + a[i+1] > result)
            result = a[i] + a[i+1];
    }    
    
    printf("%d", result);
    return 0;
}
