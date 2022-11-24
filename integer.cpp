#include "integer.hpp"

Integer::Integer() : data(0) { }

Integer::Integer(const Integer& e) : data(e.data) { }

Integer::Integer(const int64_t& e) : data(e) { }

int Integer::intValue() const {
  return data;
  }

std::string Integer::toString() const {
  return std::to_string(data);
  }

std::string Integer::toString(const Integer& e) {
  return std::to_string(e.data);
  }

Integer& Integer::operator ++ () {
  data++;
  return *this;
  }

Integer Integer::operator ++ (int) {
  return ++data;
  }

Integer& Integer::operator -- () {
  data--;
  return *this;
  }

Integer Integer::operator -- (int) {
  return --data;
  }

Integer Integer::operator + (const Integer& e) const {
  return data + e.data;
  }

Integer Integer::operator - (const Integer& e) const {
  return data - e.data;
  }

Integer Integer::operator * (const Integer& e) const {
  return data * e.data;
  }

Integer Integer::operator / (const Integer& e) const {
  return data / e.data;
  }

Integer Integer::operator % (const Integer& e) const {
  return data % e.data;
  }

Integer Integer::operator - () const {
  return -data;
  }

Integer& Integer::operator = (const Integer& e) {
  data = e.data;
  return *this;
  }

Integer& Integer::operator += (const Integer& e) {
  data += e.data;
  return *this;
  }

Integer& Integer::operator -= (const Integer& e) {
  data -= e.data;
  return *this;
  }

Integer& Integer::operator *= (const Integer& e) {
  data *= e.data;
  return *this;
  }

Integer& Integer::operator /= (const Integer& e) {
  data /= e.data;
  return *this;
  }

Integer& Integer::operator %= (const Integer& e) {
  data %= e.data;
  return *this;
  }

bool Integer::operator == (const Integer& e) const {
  return data == e.data;
  }

bool Integer::operator != (const Integer& e) const {
  return !(*this == e);
  }

bool Integer::operator >= (const Integer& e) const {
  return !(*this < e);
  }

bool Integer::operator <= (const Integer& e) const {
  return *this < e or *this == e;
  }

bool Integer::operator > (const Integer& e) const {
  return !(*this <= e);
  }

bool Integer::operator < (const Integer& e) const {
  return data < e.data;
  }

int Integer::compareTo(const Integer& e) const {
  return data - e.data;
  }

int Integer::compare(const Integer& a, const Integer& b) {
  return a.data - b.data;
  }

std::istream& operator  >> (std::istream& is, Integer& e) {
  std::string myStr;

  std::getline(is, myStr, '\n');
  e.data = atoi(myStr.c_str());

  return is;
  }

std::ostream& operator  << (std::ostream& os, const Integer& e) {
  os << e.data << std::endl;

  return os;
  }
