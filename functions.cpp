#include "functions.h"


int sumOfSquares(int n) 
{

    if (n <= 1)// Base case: if n is 0 or 1, return n squared 
    {
        return n * n;// Base case: if n is 0 or 1, return n squared
    }
    return (n * n) + sumOfSquares(n - 1);// Recursive call to calculate the sum of squares
}
// Task B: Recursive Factorial Function
int findFactorial(int n)
{
if (n <= 1)// Base case: if n is 0 or 1, return 1
 {
        return 1;     // Base case: if n is 0 or 1, return 1    
    }
    return n * findFactorial(n - 1);// Recursive call to calculate the factorial
}




