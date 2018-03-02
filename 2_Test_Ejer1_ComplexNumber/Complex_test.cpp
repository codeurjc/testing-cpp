#include "Complex.h"
#include "gtest/gtest.h"

TEST(ComplexTest, GivenZeroComplex_thenRealPartZeroAndImagPartZero) {

	Complex complex(0, 0);

	EXPECT_EQ(0, complex.getRealPart());
	EXPECT_EQ(0, complex.getImaginaryPart());

}

TEST(ComplexTest, GivenZeroComplex_whenAddToComplex1_1_thenComplex1_1IsObtained) {

	EXPECT_EQ(Complex(1,1), (Complex(0,0)).add(Complex(1,1)));

}

TEST(ComplexTest, GivenComplex1_1_whenAddToZero_thenComplex1_1IsObtained) {

	EXPECT_EQ(Complex(1,1), (Complex(1,1)).add(Complex(0,0)));
}
