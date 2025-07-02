/**
 * 
 * Write a program in C to demonstrate how to handle pointers in a program.
 * Expected Output :
 Address of m : 0x7ffcc3ad291c
 Value of m : 29                                                                                              
 Now ab is assigned with the address of m.                                                                    
 Address of pointer ab : 0x7ffcc3ad291c                                                                       
 Content of pointer ab : 29                                                                                   
                                                                                                              
 The value of m assigned to 34 now.                                                                           
 Address of pointer ab : 0x7ffcc3ad291c                                                                       
 Content of pointer ab : 34                                                                                   
                                                                                                              
 The pointer variable ab is assigned with the value 7 now.                                                    
 Address of m : 0x7ffcc3ad291c                                                                                
 Value of m : 7 
 */

 #include <stdio.h>

int main()
{
    int m = 29;
    int *p = &m;

    printf("Address od p is %p \n", p);
    printf("value of p is: %d \n", *p);

    m = 34;

    printf("Address of p is %p \n", p);
    printf("value of p is: %d \n", *p);

    *p = 7;

    printf("Address of m is %p \n", &m);
    printf("value of m is: %d \n", m);

    return 0;
}
