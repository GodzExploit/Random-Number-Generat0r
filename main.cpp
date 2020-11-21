#include <iostream>
#include <ctime>
#include <string>
#include <sstream> 
using namespace std;

//Random Number Generator
//ex: (0,1,0,1)
inline int a() {
		int z = rand() % 2;
		return z;
}

int main() {
	//generates random numbers
	srand(time(0));
        
	//loop for printing more then 1 row of numbers
	for (int i = 0; i < 5; ++i) {
	 cout << a() << "," << a() << "," << a() << "," << a() << " " << endl;
	}
}



