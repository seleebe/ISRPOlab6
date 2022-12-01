#include "TextReader.h"
#include <string>
#include <fstream>

int AverageLengthCount(std::string InputDoc) {
  std::fstream input;
  input.open(InputDoc, std::fstream::in);
  std::string s;
  int LengthSum = 0;
  int WordCount = 0;
  while (input >> s) {
	WordCount++;
	LengthSum += s.length();
  }
  if (WordCount == 0) {
	return 0;
  } else {
	return LengthSum / WordCount;
  }
}