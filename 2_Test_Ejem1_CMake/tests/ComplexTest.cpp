#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "Complex.h"

using namespace testing;
using namespace std;

TEST(ComplexTest, GivenZeroComplex_thenRealPartZeroAndImagPartZero) {

    Complex complex(0, 0);

    EXPECT_EQ(0, complex.getRealPart());
    EXPECT_EQ(0, complex.getImaginaryPart());

    EXPECT_THAT(0, Eq(Complex(0, 0).getRealPart()));
    EXPECT_THAT(0, Eq(Complex(0, 0).getImaginaryPart()));

}
