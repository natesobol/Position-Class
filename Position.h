#ifndef POSITION_H
#define POSITION_H

class Position {

private:
	double latitude = 0;
	double longitude= 0;
public:
	Position() {
		latitude = 0;
		longitude = 0;
	}

	Position(double, double);
	void setLatitude(double);
	void setLongitude(double);
	double getLatitude() const;
	double getLongtude() const;
	void print();

	class LongCheck {

	private:
		double pos;;
	public:
		LongCheck(double i) {
			pos = i;
		}
		double getPos() const {
			return pos;
		};
	};

	class LatCheck {

	private:
		double pos;
	public:
		LatCheck(double i) {
			pos = i;
		}
		double getPos() const {
			return pos;
		}
	};
};
#endif
