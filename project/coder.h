/*
 * coder.h
 *
 *  Created for: GlobalLogic Basecamp
 *       Author: vitalii.lysenko
 *
 * Coder class header.
 *
 * You have to change this file to fix build errors, and make
 * the unit tests passed.
 *
 */

#ifndef CODER_H
#define CODER_H

/*
 * This function was pre-compiled and is provided as a part of the
 * static library.
 *
 */
void encode(char* buf, int size);

#pragma pack(push, 1)

/*
 * Coder class header.
 *
 */
class Coder {
 public:
  Coder(const Coder& right);
  Coder();
  ~Coder();
  void set(const char* bufnew, int size);
  char* buf() const;
  int size() const;

  void encode();
  void decode();
  Coder& operator=(const Coder& right);

 private:
  char* m_buf;
  long long m_size;
};

#pragma pack(pop)

#endif  // CODER_H
