#include <stdio.h>

int main(){
    int num = 123;
    char str[10];
    
    long rev = 0, temp = num; 
    for(; temp; temp /= 10) 
        rev = rev * 10 + (temp % 10);
        printf("%ld", rev);
    return (num >= 0) && (num == rev);
}