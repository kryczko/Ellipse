/*This program promts the user for semi-axis values and then computes
the area of the ellipse based on the values entered.*/

#include <iostream>
#include <iomanip>

using namespace std;
//Defining the mathematical constant pi
const double PI = 3.14159;

int main()
{
	// Defining the varaibles for the semi-axes and the area of the ellipse
	double a, b, area;
	
	//Prompts the user to input the 2 semi-axes values
	cout << "Please enter the length of the semi-axis:";
	cin >> a >> b;
	
	//Computes the area of the ellipse from the user input
	area = PI*a*b;
	
	//Sets the precision of the decimal points of the area to 2 decimal points
	cout.setf(ios::fixed);
	cout.precision(2);
	
	//Prints the calculated area
	cout << "\nThe area of an ellipse with semi-axes " << a << " and " << b << " is " << area << endl;
	
	//Allows the output window to remain on the screen
	system("pause");

	//Terminate the program
	return 0;
}
