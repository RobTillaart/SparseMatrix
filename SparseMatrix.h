#pragma once
//
//    FILE: SparseMatrix.h
//  AUTHOR: Rob Tillaart
// VERSION: 0.1.3
//    DATE: 2022-07-12
// PURPOSE: Arduino library for sparse matrices
//     URL: https://github.com/RobTillaart/SparseMatrix
//


#include "Arduino.h"

#define SPARSEMATRIX_LIB_VERSION        (F("0.1.3"))

#ifndef SPARSEMATRIX_MAX_SIZE
#define SPARSEMATRIX_MAX_SIZE           1000
#endif


class SparseMatrix
{
public:
  SparseMatrix(uint16_t sz);
  ~SparseMatrix();

  uint16_t size();
  uint16_t count();
  float    sum();
  void     clear();


  //  returns false if no slots free
  //  could return # free slots?
  bool     set(uint8_t x, uint8_t y, float value);
  //  adds value to element x,y
  bool     add(uint8_t x, uint8_t y, float value);
  float    get(uint8_t x, uint8_t y);

  void     boundingBox(uint8_t &minX, uint8_t &maxX, uint8_t &minY, uint8_t &maxY);

private:
  uint16_t  _size   = 0;
  uint16_t  _count  = 0;

  uint8_t   *_x     = NULL;
  uint8_t   *_y     = NULL;
  float     *_value = NULL;

  //  returns index of x, y if in set
  //  otherwise -1
  int32_t findPos(uint8_t x, uint8_t y);
};


// -- END OF FILE --

