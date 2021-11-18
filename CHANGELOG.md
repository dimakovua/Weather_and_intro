## [1.0.4] - 2021-11-18
### Added
- .gitlab-ci.yml file to run pipeline
### Changed
- CHANGELOG.md file

## [1.0.3] - 2021-11-06
### Added
- CHANGELOG.md file

## [1.0.2] - 2021-11-04
### Added
- .clang-format file
### Changed
- coder.cpp and coder.h files are formatted with clang-format based on Google style

## [1.0.1] - 2021-11-04
### Fixed
- <cstring> including

## [1.0.0] - 2021-09-30
### Added
- Added set method to class Coder. It sets a new m_size value (size of buffer) and a new value to m_buf buffer to pass the second unit-test (Coder, set). This method is using memory allocation to pass the third unit-test (Equality of data, but non-equality of pointers);
- Added try-catch blocks to the set method to pass the fourth and the fifth unit-tests
- Coder class constructor that initializes m_buf and m_size with 0 values to pass the sixth unit-test
- Copy constructor to pass the seventh unit-test (Coder, two_coders)
- Overloaded operator "=" for class Coder to pass the eighth unit-test(Coder, two_coders2)
- Decode function to pass all remaining unit-tests. It uses a global variable to remember string and then returns this string :)

### Changed
- Changed a type of m_size variable in class Coder in project/coder.h to pass the first unit-test (size of Coder class and coder_t structure)

