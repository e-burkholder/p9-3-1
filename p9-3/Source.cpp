#include <iostream>
#include <random>
#include <cstdlib>
#include <ctime>
using namespace std;

void displayRun(int values[], int size);

int main() {
	int tosses[20];
	srand(0);

	for (int i = 0; i < 20; i++) {
		tosses[i] = rand() % 6 + 1;
	}
	displayRun(tosses, 20);
}

void displayRun(int values[], int size) {
	for (int i = 0; i < size; i++) {
		int number = values[i + 1];
		if (i > 0) {
			cout << " ";
		}

		if (values[i] == number && values[i] == values[i + 1] && values[i + 1] != values[i + 2]) {
			cout << "("<<values[i]<<" "<<values[i + 1] << ")";
			i++;
			continue;
		}
		
		cout << values[i];
		
	}

}