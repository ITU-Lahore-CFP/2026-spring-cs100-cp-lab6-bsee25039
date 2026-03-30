#include "functions.h"


int main() {
    int choice;
    int n;
    cout <<"Menu : \n1. Sum of squares\n2. Factorial\n";// Display the menu options
    cout<<"\nEnter your choice : ";// Prompt the user to enter their choice
    cin>>choice;        // Read the user's choice
    switch (choice)// Use a switch statement to handle the user's choice
    {
    case (1):   // If the user chooses option 1, calculate the sum of squares

    // Task A: Sum of Squares 
    cout << "\nEnter a number: "; // Prompt the user to enter a number
    cin >> n;// Read the number from the user
    cout << "\nSum of squares: " << sumOfSquares(n) ;// Call the sumOfSquares function and display the result
        break;
    case (2):// If the user chooses option 2, calculate the factorial
    // Task B: Factorial
    cout << "\nEnter a number: ";// Prompt the user to enter a number
    cin >> n;// Read the number from the user
    cout << "\nFactorial of the number is " << findFactorial(n) ;// Call the findFactorial function and display the result
        break;
    default:
       cout<<"\nInvalid choice! Please enter 1 or 2 only."<<endl;// Handle invalid choices by displaying an error message
        break;
    }
   
}