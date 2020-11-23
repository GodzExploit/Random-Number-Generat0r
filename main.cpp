#include <iostream>
#include <ctime>
#include <string>
#include <sstream> 
using namespace std;
//Random Number Generator
//ex: (0,1,0,1)

//prints the random number
int Random(int a, int b, int c, int d) {
	cout << a << "," << b << "," << c << "," << d << " " << endl;
	return a, b, c, d;
}
//sets to print between 0's and 1's only.
int a() {
	int z = rand() % 2;
	return z;
}

int main() {
	//generates random numbers everytime
	srand(time(0));

	//loop for how many times you want to print
	for (int i = 0; i < 5; ++i) {
		Random(a(), a(), a(), a());
	}
	
	
}
