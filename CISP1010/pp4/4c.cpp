/*
 * Author: David Hodge
 * File: 4c.cpp
 * Date: 2019/02/15
 * Calculate total cost given number of items and cost of single item
 */
#include <iostream>
using namespace std;

const double TAX_RATE = .0925;

/*
 * individualCost: cost of one item
 * numberOfItems: number of items purchased
 * returns total cost including tax
 */
double calculateTotalCost(double individualCost, double numberOfItems);

int main() { 
    double cost, n;
    
    cout.precision(5);

    cout << "Please enter individual cost and number of items purchased (seperated by a space): ";
    cin >> cost >> n;
    
    cout << fixed << calculateTotalCost(cost, n) << endl;

    return 0;
}

double calculateTotalCost(double individualCost, double numberOfItems) {
    double subtotal = individualCost * numberOfItems;
    return subtotal + (subtotal * TAX_RATE);
}
