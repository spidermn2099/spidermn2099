#include <iostream>
#include <cmath>
int main () {
    double touble, start, end, step;
    std::cout << "Enter the initial values of x:";
    std::cin >>start; //Set the original valuse of the variable
    std::cout << "Enter the finite values of x:";
    std::cin >>end; //Set the finite of the variable
    std::cout << "Enter a step:";
    std::cin >> step; //Set the step with which the argument will be changed
    for (double x = start; x<= end; x+= step){
        double y = sin(x); //function y = sin(x)
        std::cout << x << " | " << y << std::endl; //Display the values of the function for each argument

    }
return 0;
}