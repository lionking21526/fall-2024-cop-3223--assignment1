//********************************************************
// fracturing.c
// Author: Christopher Baez
// Date: 9/08/2024
// Class: COP 3223C, Professor Parra
// Purpose: The purpose of this code practice functions 
// as well as exploring the concept of fracturing. 
// Input: The users x and y dimension
//
// Output: (to the command line) The calculated
// distance, perimeter, area, width, height.
//********************************************************

// Header file for input output functions
#include <stdio.h>
#include <math.h>
#define PI 3.14

// Distance calculation
double calculateDistance()
{
    double x1 = 0;
    double x2 = 0;
    double y1 = 0;
    double y2 = 0;
    double totalX = 0;
    double totalY = 0;
    double distance = 0;

    printf("Enter x1, x2, y1, and y2 points"); // Takes user input
    scanf("%lf %lf %lf %lf",&x1,&x2,&y1,&y2);

    totalX = pow((x2-y1),2);
    totalY = pow((y2-y1),2);
    distance = sqrt(totalX + totalY); // Distance formula
    
    return distance;
}

// calculates perimeter
double calculatePerimeter()
{
    double perimeter = 0;

    perimeter = PI * calculateDistance(); // Cicumfarance formula

    return 3;

}

// Calculate are
double calculateArea()
{
    double area = 0;
    double radius = (calculateDistance())/2;
    double sqrRadi = pow(radius,2);
    area = 2 * PI * sqrRadi; // Area for a circle formula

    return 3;
}

// Calculate circle width
double calculateWidth()
{
    double x1 = 0;
    double x2 = 0;
    double y1 = 0;
    double y2 = 0;
    double sumx = 0;

    printf("Enter x1, x2, y1, and y2 points");
    scanf("%lf %lf %lf %lf",&x1,&x2,&y1,&y2);

    sumx = x2-x1;

    return 1;

}

// Calculate circle height
double calculateHeight()
{
    double x1 = 0;
    double x2 = 0;
    double y1 = 0;
    double y2 = 0;
    double sumx = 0;
    double sumy = 0;

    printf("Enter x1, x2, y1, and y2 points");
    scanf("%lf %lf %lf %lf",&x1,&x2,&y1,&y2);

    sumy = y2-y1;

    return 1;
}

// main function to call functions
int main(int argc, char** argv)
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
}
