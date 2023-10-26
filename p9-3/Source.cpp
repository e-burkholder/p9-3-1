#include <iostream>
#include <random>
#include <cstdlib>
#include <ctime>
using namespace std;

void displayRun(int values[], int size);
bool hasRun(int values[], int size);

int main() {
	int tosses[20];
	bool isRun;
	srand(0);

	for (int i = 0; i < 20; i++) {
		tosses[i] = rand() % 6 + 1;
	}

	isRun = hasRun(tosses, 20);
	if (isRun == true) {
		cout << "has run: ";
	}
	else {
		cout << "has no run: ";
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

bool hasRun(int values[], int size) {
	for (int i = 0; i < size; i++) {
		int number = values[i + 1];
		if (values[i] == number && values[i] == values[i + 1] && values[i + 1] != values[i + 2]) {
			return true;
		}
	}
}