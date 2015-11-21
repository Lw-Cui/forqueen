#ifndef __POLYGON_H__
#define __POLYGON_H__
#include <cmath>

class polygon {
	public:
		virtual ~polygon() {}
		virtual double getarea()const = 0;
};

class square: public polygon {
	public:
		square(double l): length(l){}
		inline double getarea() const { return length * length; }
	private:
		double length;
};

class triangle: public polygon {
	public:
		triangle(double aa, double bb, double cc):
			a(aa), b(bb), c(cc) {}
		inline double getarea() const {
			double p = (a + b + c) / 2;
			return sqrt(p * (p - a) * (p - b) * (p - c));
		}
	private:
		double a, b, c;
};

#endif
