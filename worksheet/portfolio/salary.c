
#include <stdio.h>

/*
 * Potrfolio submission
 * Name: Ali Beren Adamcil
 * ID: 202018616
 */

 int main( void ) {

    // define and initialise variables for the problem data 
    double salary = 36250.0;
    double ni_rate = 8.0;
    double tax_rate = 15.0;
    double allowance = 12500.0;

    // calculate the deductions and final take-home salary
    double ni = salary * ni_rate / 100.0;
    double after_ni = salary - ni;
    double taxable_income = after_ni - allowance;
    double tax = taxable_income * tax_rate / 100.0;
    double take_home = after_ni - tax;

    // Use only these print statement with appropriate formatting and variable names
    //printf("Salary £...",var_name);
    //printf("NI contribution £...",var_name);
    //printf("Tax contribution £...",var_name);
    //printf("Take home salary £...",var_name);
    
    printf("Salary £%.2f\n", salary);
    printf("NI contribution £%.2f\n", ni);
    printf("Tax contribution £%.2f\n", tax);
    printf("Take home salary £%.2f\n", take_home);

    return 0;
 }