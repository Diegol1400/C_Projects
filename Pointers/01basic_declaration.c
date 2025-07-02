/**
 * Write a program in C to show the basic declaration of a pointer.

Expected Output :

 Pointer : Show the basic declaration of pointer :                                                            
-------------------------------------------------------                                                       
 Here is m=10, n and o are two integer variable and *z is an integer                                          
                                                                                                              
 z stores the address of m  = 0x7ffd40630d44                                                                  
                                                                                                              
 *z stores the value of m = 10                                                                                
                                                                                                              
 &m is the address of m = 0x7ffd40630d44                                                                      
                                                                                                              
 &n stores the address of n = 0x7ffd40630d48                                                                  
                                                                                                              
 &o  stores the address of o = 0x7ffd40630d4c                                                                 
                                                                                                              
 &z stores the address of z = 0x7ffd40630d50    
 */
#include <stdio.h>

 int main()
 {
    int m = 10;
    int *z = &m;

    printf("The address of z is %p\n", z);
    printf("The value of m is %d\n", *z);
    printf("The address of m is %p\n", &m);
    *z = 20;
    printf("The value of m is %d\n", m);
    return 0;
 }
 