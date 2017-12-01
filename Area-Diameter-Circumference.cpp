#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

/*Function Definitions*/

//Area Function
double area(double radius) {
	return(M_PI * pow(radius,2));
	//(Pi * radius^2)
}
	
//Diameter Function
double diameter(double radius) {
	return(2 * radius);
	//(2 * radius)
}

//Circumference Function
double circumference(double radius) {
	return(2 * M_PI * radius);
	//(2 * Pi * radius)
}

/*Main Body of Code*/
int main(){
	
	//User Input Variables
	double radius_input = 0;
	char user_input = 0;
	
	//Instructions and Input
	cout << "Input the letter corresponding with the calculation you wish to make followed by the value of the radius. \n";
	cout << "(A = area, D = diameter, C = circumference) \n \n";
		//Letters can be entered as upper or lowercase.
	cout << "Example Inputs ->  A1 , d 9.0 , C46 , a 259.7, c 22 \n \n";
		//Inputs can be entered with or without a space seperating the letter and radius value.
	cout << "Input your data: ";
	cin >> user_input >> radius_input;

	//If the input is 'A' use the area function
	if(user_input == 'A' || user_input == 'a'){
		cout << "The Area of a circle with a radius of " << radius_input;
		cout << " is " << area(radius_input) << ".\n";	
	}

	//If the input is 'D' use the diameter function
	else if(user_input == 'D' || user_input == 'd'){
		cout << "The Diameter of a circle with a radius of " << radius_input;
		cout << " is " << diameter(radius_input) << ".\n";
	}

	//If the input is 'C' use the circumferencee function
	else if(user_input == 'C' || user_input == 'c'){
		cout << "The Circumference of a circle with a radius of " << radius_input;
		cout << " is " << circumference(radius_input) << ".\n";
	}

	//Else if the input is not A, D, or C then an improper character was entered
	else {
		cout << "Improper characters have been entered." << endl;
	}

	return 0;
	}
