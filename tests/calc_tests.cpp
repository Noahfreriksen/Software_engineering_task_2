//
// Created by Gebruiker on 13-12-2018.
//

#include <gtest/gtest.h>
#include "../Calculator.h"

Calculator calc;

TEST(calcu, iadd){
    ASSERT_EQ(calc.add(1, 5), 6);
}

TEST(calcu, dadd){
    ASSERT_DOUBLE_EQ(calc.add(5.5, 6.3), 11.8);
}

TEST(calcu, isub){
    ASSERT_EQ(calc.subtract(4,2), 2);
}

TEST(calcu, dsub){
    ASSERT_DOUBLE_EQ(calc.subtract(5.3,0.1), 5.2);
}

TEST(calcu, imul){
    ASSERT_EQ(calc.multiply(5,6), 30);
}

TEST(calcu, dmul){
    ASSERT_DOUBLE_EQ(calc.multiply(4.2, 0.5), 2.1);
}

TEST(calcu, idiv){
    ASSERT_EQ(calc.divide(8,2), 4);
}

TEST(calcu,ddiv){
    ASSERT_DOUBLE_EQ(calc.divide(10.0,2.5), 4.0);
}

TEST(calcu,isqu){
    ASSERT_EQ(calc.square(5), 25);
}

TEST(calcu,dsqu){
    ASSERT_DOUBLE_EQ(calc.square(2.2),4.84);
}


