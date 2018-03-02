#include "Complex.h"
#include "gtest/gtest.h"

using namespace testing;
using namespace std;

class ComplexParamAbs : public TestWithParam<pair<Complex, double> > {

 protected:

  virtual void SetUp() {
    zero = Complex(0, 0);
  }

  //virtual void TearDown() {}

  Complex zero;
};

TEST_P(ComplexParamAbs, Abs) {

	Complex c = GetParam().first;
	double v = GetParam().second;

	ASSERT_NEAR(c.abs(), v, 0.001);

}

INSTANTIATE_TEST_CASE_P(
	ComplexParamAbsSmall, ComplexParamAbs,
    Values(
    	make_pair(Complex(0,0),0),
		make_pair(Complex(1,1),1.41421),
		make_pair(Complex(2,2),2.82843),
		make_pair(Complex(5,5),7.07107),
		make_pair(Complex(10,10),14.1421)
	));

INSTANTIATE_TEST_CASE_P(
	ComplexParamAbsBig, ComplexParamAbs,
	Values(
		make_pair(Complex(0,0),1),
		make_pair(Complex(10,1),10.0498),
		make_pair(Complex(20,2),20.099)
	));


