#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {}

Fixed::Fixed(const int n) {
	this->_value = n << _fractionalBits;
}

Fixed::Fixed(const float f) {
	this->_value = roundf(f * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &other) {
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other) {
	if (this != &other)
		this->_value = other._value;
	return *this;
}

Fixed::~Fixed() {}

int Fixed::getRawBits(void) const {
	return this->_value;
}

void Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

float Fixed::toFloat(void) const {
	return (float)this->_value / (1 << _fractionalBits);
}

int Fixed::toInt(void) const {
	return this->_value >> _fractionalBits;
}

/* ==================== Comparison Operators ==================== */

bool Fixed::operator>(const Fixed &other) const {
	return this->_value > other._value;
}

bool Fixed::operator<(const Fixed &other) const {
	return this->_value < other._value;
}

bool Fixed::operator>=(const Fixed &other) const {
	return this->_value >= other._value;
}

bool Fixed::operator<=(const Fixed &other) const {
	return this->_value <= other._value;
}

bool Fixed::operator==(const Fixed &other) const {
	return this->_value == other._value;
}

bool Fixed::operator!=(const Fixed &other) const {
	return this->_value != other._value;
}

/* ==================== Arithmetic Operators ==================== */

Fixed Fixed::operator+(const Fixed &other) const {
	Fixed result;
	result.setRawBits(this->_value + other._value);
	return result;
}

Fixed Fixed::operator-(const Fixed &other) const {
	Fixed result;
	result.setRawBits(this->_value - other._value);
	return result;
}

Fixed Fixed::operator*(const Fixed &other) const {
	Fixed result;
	long tmp = (long)this->_value * (long)other._value;
	result.setRawBits(tmp >> _fractionalBits);
	return result;
}

Fixed Fixed::operator/(const Fixed &other) const {
	Fixed result;
	long tmp = ((long)this->_value << _fractionalBits) / other._value;
	result.setRawBits(tmp);
	return result;
}

/* ==================== Increment / Decrement ==================== */

Fixed &Fixed::operator++() {
	this->_value++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	this->_value++;
	return tmp;
}

Fixed &Fixed::operator--() {
	this->_value--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	this->_value--;
	return tmp;
}

/* ==================== Min / Max ==================== */

Fixed &Fixed::min(Fixed &a, Fixed &b) {
	return (a < b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
	return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
	return (a > b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
	return (a > b) ? a : b;
}

/* ==================== Stream Operator ==================== */

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
	return out;
}
