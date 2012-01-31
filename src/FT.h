/* FreeType engine -- implements an interface to the FreeType library
 * which renders the letters as needed */

#ifndef FTENGINE_H
#define FTENGINE_H

#include <iostream>
#include <string>
#include <ft2build.h>
#include <freetype/ftbitmap.h>
#include FT_FREETYPE_H
#include <vector>
#include "core/core.hpp"

#include "letter.h"

using namespace std;

class FTengine {

 public:
  FTengine();
  ~FTengine();

  int prepareFT(string fontPath, int ppem);
  Letter* getLetter(char letterChar);

 private:
  FT_Library library;
  FT_Face face;
  int error;
  
};


#endif
