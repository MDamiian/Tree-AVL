#ifndef INTEGER_HPP_INCLUDED
#define INTEGER_HPP_INCLUDED

#include<string>
#include <iostream>

class Integer {
  private:
    int64_t data; //Entero mas grande

  public:
    Integer();
    Integer(const Integer&);
    Integer(const int64_t&);

    int intValue() const;

    std::string toString() const;
    static std::string toString(const Integer&);
    Integer& operator ++ ();

    Integer operator ++ (int);

    Integer& operator -- ();

    Integer operator -- (int);

    Integer operator + (const Integer&) const;

    Integer operator - (const Integer&) const;

    Integer operator * (const Integer&) const;

    Integer operator / (const Integer&) const;

    Integer operator % (const Integer&) const;

    Integer operator - () const;

    Integer& operator = (const Integer&);

    Integer& operator += (const Integer&);

    Integer& operator -= (const Integer&);

    Integer& operator *= (const Integer&);

    Integer& operator /= (const Integer&);

    Integer& operator %= (const Integer&);

    bool operator == (const Integer&) const;

    bool operator != (const Integer&) const;

    bool operator >= (const Integer&) const;

    bool operator <= (const Integer&) const;

    bool operator > (const Integer&) const;

    bool operator < (const Integer&) const;

    int compareTo(const Integer&) const;

    static int compare(const Integer&, const Integer&);

    friend std::istream& operator >> (std::istream&, Integer&);

    friend std::ostream& operator << (std::ostream&, const Integer&);
  };

#endif // INTEGER_HPP_INCLUDED
