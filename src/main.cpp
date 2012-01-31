// compile with something like clang++ -I/usr/include/freetype2 -lfreetype main.ccp config.cpp FT.cpp

#include <iostream>
#include <string>

#include "rhea_config.h"
#include "config.h"
#include "FT.h"

using namespace std;

int main(void) {

  // Say hello
  cout << "Hi. Welcome to the Rhea Spacing Analyzer, version " << string(rhea_VERSION_MAJOR) << "." << rhea_VERSION_MINOR << "!" << endl;

  // Read in configuration
  ConfigReader* cR;
  cR = new ConfigReader();
  cR->readConfigFile("./rhea_config");

  cout << "Using font " << cR->getFontPath() << endl;

  // Create FreeType reader object
  FTengine* FTE;
  FTE = new FTengine();
  cout << "Loading font:" << FTE->prepareFT(cR->getFontPath(), 1000) << endl;

  // Create Letter Objects
  FTE->getLetter('a');
  // Create Pair Objects
  // Create LetterDrone
  // Pass Letters to LetterDrone, have them analyzed
  // Create PairAnalyzer
  // Pass Pairs to PairAnalyzer

  return 0;
}
