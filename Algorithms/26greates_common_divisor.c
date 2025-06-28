/*
It looks like none of beginner's courses on programming avoids practicing Euclid's algorithm
 for calculation of the greatest common divisor of two numbers.

Greatest Common Divisor or GCD of a and b is such an integer value c that both of a, b are divisible by it
 (e.g. leave no remainder) - and also c is the largest possible. For example gcd(20, 35) = 5 and gcd(13, 28) = 1. 
 Euclid's algorithm is quite simple - we keep on subtracting smaller value (of a and b) from larger -
  and repeat this operation until values become equal - this last value will be gcd. For speeding up the process we 
  can use modulo operation instead of subtraction.

For example:

20      35      - subtract first from second
20      15      - subtract second from first
5       15      - now subtract first from second twice
5       5       - and here is GCD
Least Common Multiple (or LCM) of a and b is such an integer d that it is divisible by both of them (and is the smallest of all possible). It can be found with the following rule:

lcm(a, b) = a * b / gcd(a, b)
By the way, if this task feels too easy, check the advanced LCM of a range version!

The task
Input data contain number of test-cases in the first line.
Then lines with test-cases follow, each containing two numbers - for A and B.
*/

#include <stdio.h>

int GCD(int a, int b){
    if (a == 0)
    {
        return b;
    }
    return GCD(b%a, a);
}


int main(){
    int a = 25;
    int b = 100;
    int c = 2;
    int result = GCD(a, b);
    printf("The GCD is %d\n", result);
    printf("The LCM is %d\n", (a*b)/result);
    return 0;
}