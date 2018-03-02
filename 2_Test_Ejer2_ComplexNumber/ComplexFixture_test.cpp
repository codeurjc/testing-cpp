#include "Complex.h"
#include "gtest/gtest.h"

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
