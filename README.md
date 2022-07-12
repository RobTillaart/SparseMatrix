
[![Arduino CI](https://github.com/RobTillaart/SparseMatrix/workflows/Arduino%20CI/badge.svg)](https://github.com/marketplace/actions/arduino_ci)
[![Arduino-lint](https://github.com/RobTillaart/SparseMatrix/actions/workflows/arduino-lint.yml/badge.svg)](https://github.com/RobTillaart/SparseMatrix/actions/workflows/arduino-lint.yml)
[![JSON check](https://github.com/RobTillaart/SparseMatrix/actions/workflows/jsoncheck.yml/badge.svg)](https://github.com/RobTillaart/SparseMatrix/actions/workflows/jsoncheck.yml)
[![License: MIT](https://img.shields.io/badge/license-MIT-green.svg)](https://github.com/RobTillaart/SparseMatrix/blob/master/LICENSE)
[![GitHub release](https://img.shields.io/github/release/RobTillaart/SparseMatrix.svg?maxAge=3600)](https://github.com/RobTillaart/SparseMatrix/releases)


# SparseMatrix

Arduino library for sparse matrices.


## Description

SparseMatrix is an **experimental** library to implement sparse matrices on an Arduino.

The maximum matrix that can be represented is 255 x 255 with a maximum of 255 non zero elements.

The purpose of the library is efficient storage in memory. 
It does not do math operations except sum().


#### Implementation

The implementation is based on a 3 arrays holding ``` x, y, value ``` where value is float.


## Interface

#### Constructor

- **SparseMatrix(uint8_t size)** constructor. parameter is the maximum number of elements in the sparse matrix.
- **uint8_t size()** maximum number of elements.
- **uint8_t count()** current number of elements.
- **float sum()** sum of all elements in matrix.


#### Access

- **void set(uint8_t x, uint8_t y, float value)**
- **float get(uint8_t x, uint8_t y)**


## Future

- documentation
- test test test
- template version to store other data types 
  - 1, 2, 3 byte elements or 8 byte doubles
  - N bytes elements (struct, complex number etc)
- add examples

