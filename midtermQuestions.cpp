/*Question 27 15 pts
Being totally crazy, you have decided to compete in an Ironman Triathlon. 
Using the information provided below, 
calculate the approximate amount a weight you will lose as a result of your competing in this event. 
(Try not to have a heart attack during the event, it makes you look silly.)

To calculate the weight lost:
Multiply the hours you spent biking by the 200 calories burned per hour.
Multiply the hours you spent running by the 275 calories burned per hour.
Multiply the hours you spent swimming by the 475 calories burned per hour.
Add the results of those three calculations together and then divide the result by 3500.
The number you get from that should be the amount of weight lost in pounds. 

A full Ironman Triathlon covers the following distances:
A 2.4 mile swim; a 112 mile bike ride; and a 26.2 mile run.  
(Yes, all done the same day.  I did say doing this is crazy.) 

These AVERAGE times should be used to help determine how long this would take you.

The average time to run a marathon (26.2 miles) for males is 4 hours, 19 minutes 27 seconds.
The average time to run a marathon for females is 4 hours, 44 minutes, 19 seconds.
It takes an average person between 25-35 minutes to swim a mile. 
(It is highly unlikely that any of you are Katie Ledecky or Michael Phelps. 
Please don't fib about your swimming speed.)
It takes an average person about 1 hour to bike 10 miles.
Hard code times that you feel are right for your level of physical fitness.  
I will be testing these and if I see anything crazy I will not hesitate to call you out on it.
So no claiming to have set new world records!

When running the program it should display the following information with proper labels and spacing:
The amount of time you spent biking and the total number of calories burned while biking.
The amount of time you spent swimming and the total number of calories burned while swimming.
The amount of time it took you to run the marathon and the total number of calories burned while running.
The total number of calories burned.
The amount of weight you would have lost.*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath> 
#include <algorithm>
#include <vector>
#include <ctime>
	using namespace std;

int main()
{
	cout <<"Hello World" << endl;
	//The average time to run a marathon for females is 4 hours, 44 minutes, 19 seconds. 
	// 26.2 mile run
	//lets be real here I could maybe 15 minutes at a time so my average walking distance is 2-3 miles/hr
	double marathon = 26.2/3; //3 mile/hr
	
	//It takes an average person between 25-35 minutes to swim a mile.
	// 2.4 mile swim
	//I am actually a better swimmer and I have swan a mile before however right now I am out of practice.
	double swim = 2.4/1; //1 mile/ hour

	//It takes an average person about 1 hour to bike 10 miles.
	// 112 mile bike ride
	//I would be better a biking to. I can bike about 6 miles in 35 - 45 min. so I will round up.
	double bike = 112/7; //7 miles/ hours
	
	//To calculate the weight lost :
	//Multiply the hours you spent biking by the 200 calories burned per hour.
	double calBike = bike * 200;
		
	//Multiply the hours you spent running by the 275 calories burned per hour.
	double calRun = marathon * 275;
		
	//Multiply the hours you spent swimming by the 475 calories burned per hour.
	double calSwim = swim * 475;
		
	//Add the results of those three calculations together and then divide the result by 3500.
	double result = (calSwim + calRun + calBike) / 3500;

	//Display
	//The amount of time you spent biking and the total number of calories burned while biking.
	cout << "Biking Results\n";
	cout << "Hours:                      " << fixed << setprecision(1) << setw(5) << bike << endl;
	cout << "Calories Burned:            " << fixed << setprecision(1) << setw(5) << calBike << endl;
	cout << endl << endl;
	
	//The amount of time you spent swimming and the total number of calories burned while swimming.
	cout << "Swimming Results\n";
	cout << "Hours:                      " << fixed << setprecision(1) << setw(5) << swim << endl;
	cout << "Calories Burned:            " << fixed << setprecision(1) << setw(5) << calSwim << endl;
	cout << endl << endl;
	
	// The amount of time it took you to run the marathonand the total number of calories burned while running.
	cout << "Marathon Results\n";
	cout << "Hours:                      " << fixed << setprecision(1) << setw(5) << marathon << endl;
	cout << "Calories Burned:            " << fixed << setprecision(1) << setw(5) << calRun << endl;
	cout << endl << endl;
	
	//The total number of calories burned.
	cout << "Calories Burned Total:      " << fixed << setprecision(1) << setw(5) << calSwim + calRun + calBike << endl;
	
	//The amount of weight you would have lost
	cout << "Weight Loss Total (in lbs): " << fixed << setprecision(1) << setw(5) << result << endl;
}




/*Use the following formula to complete the programming task: F = (C * 1.8) + 32
Write a program that displays the Celsius temperatures
for 0 - 20 degrees and the Fahrenheit equivalent.
Temperatures should be properly labelled with
headings and spaced so as to be easy to read.*/
/*
//write a function called F

double f(double degreeC) {

	double result = (degreeC * 1.8) + 32;
	return result;


}
int main ()
{
	cout << "Hello World!\n" << endl;

	int temp = 0;

	cout << "Celsius\tFahrenheit";
	while (temp <= 20) 
	{
		cout << endl;
		cout << temp << setw(10) << f(temp);
		temp++;

	}
	cout << endl;
	cout << "Have a nice day!";

}*/



/*Ask the user for a number between 17 and 51;
include input validation to ensure that the user does
not enter numbers outside the given range.*/
/*int main()
{
	cout << "Hello World\n" << endl;

	int number;

	cout << "Please enter a number between 17 and 51: ";
	cin >> number;
	while (number < 17 || number > 51) {
		cout << "Error! That is not a valid number. Try again.\n";
		cout << "Please enter a number between 17 and 51: ";
		cin >> number;
	}

	cout << "Thank you!\nYour number is " << number;

}*/

/*Question 24 10 pts
Using a simple loop,
code "The Wheels on the Bus Go Round and Round".
The bus should travel for only 500 feet. (< -Hint!)*/
/*int main()
{
	int feet = 1;
	while (feet <= 500) {

		cout << endl << endl;

		cout << "\t" << feet << " feet.\n";

		cout << "\tThe wheels on the bus go round and round\n";

		cout << "\tRound and round, round and round\n";

		cout << "\tThe wheels on the bus go round and round\n";

		cout <<	"\tAll through the town.\n";
		
		feet++; 
	}
}*/

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
