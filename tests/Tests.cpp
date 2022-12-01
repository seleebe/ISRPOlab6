#include <iostream>
#include <fstream>
#include <gtest/gtest.h>
#include "../src/TextReader.h"

TEST(FirstTest, LoremIpsumTest){
  ASSERT_EQ(AverageLengthCount("../../TestFiles/test1.txt"),5);
}

TEST(SecondTest, FourStringsTest){
  ASSERT_EQ(AverageLengthCount("../../TestFiles/test2.txt"),4);
}

TEST(ThirdTest, EmptyDocumentTest){
  ASSERT_EQ(AverageLengthCount("../../TestFiles/test3.txt"),0);
}