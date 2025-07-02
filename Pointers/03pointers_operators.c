/*
Write a program in C to demonstrate the use of the &(address of) and *(value at address) operators.

Expected Output :

Pointer : Demonstrate the use of & and * operator :                                                          
--------------------------------------------------------                                                      
 m = 300                                                                                                      
 fx = 300.600006                                                                                              
 cht = z                                                                                                      
                                                                                                              
 Using & operator :                                                                                           
-----------------------                                                                                       
 address of m = 0x7ffda2eeeec8                                                                                
 address of fx = 0x7ffda2eeeecc                                                                               
 address of cht = 0x7ffda2eeeec7                                                                              
                                                                                                              
 Using & and * operator :                                                                                     
-----------------------------                                                                                 
 value at address of m = 300                                                                                  
 value at address of fx = 300.600006                                                                          
 value at address of cht = z                      

Using only pointer variable :                                                                                
----------------------------------                                                                            
 address of m = 0x7ffda2eeeec8                                                                                
 address of fx = 0x7ffda2eeeecc                                                                               
 address of cht = 0x7ffda2eeeec7                                                                              
                                                                                                              
 Using only pointer operator :                                                                                
----------------------------------                                                                            
 value at address of m = 300                                                                                  
 value at address of fx= 300.600006                                                                           
 value at address of cht= z   
*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    __uint8_t m=200, *p;
    float fx = 200.024, *f;
    char cht = 'z', *c;

    printf("The address of m is %p \n fx: %p \n and cht: %p\n", &m, &fx, &cht);

    printf(" value at address of m = %d\n", *(&m));   // Print the value at the address of m
    printf(" value at address of fx = %f\n", *(&fx)); // Print the value at the address of fx
    printf(" value at address of cht = %c\n", *(&cht)); // Print the value at the address of cht
    
    p = &m;
    f = &fx;
    c = &cht;

    printf("The address of m is %p \n fx: %p \n and cht: %p\n", p, f, c);

    return 0;
}
