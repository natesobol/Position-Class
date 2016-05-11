// Programmer: Nate Sobol
// Title: Position class

#include "Position.h"
#include <iostream>
using namespace std;

void main() {

	Position position;
	double latitude;
	double longitude;

	cout << "Enter latitude: ";
	cin >> latitude;

	cout << "Enter longitude: ";
	cin >> longitude;

	try {
		position.setLatitude(latitude);
		position.setLongitude(longitude);
		position.print();
	}
	catch (Position::LatCheck e) {
		cout << "Error: " << e.getPos() << " must be between -90 and 90" << "\n";
	}
	catch (Position::LongCheck e) {
		cout << "Error: " << e.getPos() << " must be  between -180 and 180" << "\n";
	}

	system("pause");
}
