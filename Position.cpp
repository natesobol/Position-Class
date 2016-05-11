#include "Position.h"
#include <iostream>
using namespace std;

Position::Position(double latitude, double longitude) {
	setLongitude(longitude);
	setLatitude(latitude);
}

void Position::setLongitude(double longitude) {
	if (longitude >= -180 && longitude <= 180)
		longitude = longitude;
	else
		throw LongCheck(longitude);
}

void Position::setLatitude(double latitude) {
	if (latitude >= -90 && latitude <= 90)
		latitude = latitude;
	else
		throw LatCheck(latitude);
}

double Position::getLatitude() const {return latitude;}

double Position::getLongtude() const {return longitude;}

void Position::print() {
	cout << "The latitude is " << getLatitude() << " and the longitude is " << getLongtude() << "\n";
}
