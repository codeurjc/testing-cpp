#include "Complex.h"
#include "gmock/gmock.h"

using namespace testing;

class ComplexTestFixture : public testing::Test {

 protected:

  virtual void SetUp() {
    zero = Complex(0, 0);
  }

  //virtual void TearDown() {}

  Complex zero;
};

TEST_F(ComplexTestFixture, Zero) {

	EXPECT_EQ(0, zero.getRealPart());
	EXPECT_EQ(0, zero.getImaginaryPart());

}

TEST_F(ComplexTestFixture, Addition) {

	EXPECT_EQ(Complex(1,1), zero.add(Complex(1,1)));
	EXPECT_EQ(Complex(1,1), (Complex(1,1)).add(zero));
}

TEST_F(ComplexTestFixture, ReciprocalOfZero) {

	EXPECT_THROW(Complex(0,0).reciprocal(), DivisionByZeroException);
}

