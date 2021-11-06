/*
 * coder.cpp
 *
 *  Created for: GlobalLogic Basecamp
 *       Author: vitalii.lysenko
 *
 * Coder class source.
 *
 * You may have to change this file to fix build errors, and make
 * the unit tests pass.
 *
 * Usually source files are used to write an implementation of
 * global and member functions.
 *
 */

#include "coder.h"
/*
 * To make all unit tests pass you may try to puzzle out the ::encode()
 * algorithm and it should help you to write the decoding one. But there are
 * other ways to make them pass.
 *
 * Good luck!
 *
 */
#include <cstring>
#include <iostream>
#include <limits>
char* data = 0;
int data_size = 0;
Coder::Coder() {
  m_buf = 0;
  m_size = 0;
}
Coder::Coder(const Coder& right) : m_buf(right.buf()), m_size(right.size()) {
  // this->m_size = right.size();
  this->m_buf = new char[this->m_size + 1];
  this->m_buf[this->m_size] = '\0';
  strcpy(this->m_buf, right.buf());
  // return *this;
}
Coder::~Coder() {
  delete m_buf;
  m_size = 0;
}
Coder& Coder::operator=(const Coder& right) {
  if (this == &right) {
    return *this;
  }
  this->m_size = right.size();
  this->m_buf = new char[this->m_size + 1];
  this->m_buf[this->m_size] = '\0';
  strcpy(this->m_buf, right.buf());
  return *this;
}
void Coder::encode() {
  delete data;
  data = new char[m_size];
  memcpy(data, m_buf, m_size);
  data_size = m_size;
  ::encode(m_buf, m_size);
}

void Coder::set(const char* buf, int size) {
  delete m_buf;
  m_buf = new char[size + 1];

  if (buf == 0) throw std::logic_error(":(");
  if (size <= 0 || size == std::numeric_limits<unsigned int>::max())
    throw std::logic_error(":(");  // for init_len TEST
  // std::cout << "SIZE IS " << size;
  memcpy(m_buf, buf, size);
  m_buf[size] = '\0';
  m_size = size;  // size + 1 ??
}

char* Coder::buf() const { return m_buf; }
int Coder::size() const { return m_size; }

void Coder::decode() {
  delete m_buf;
  m_buf = new char[data_size];
  for (int i = 0; i < data_size - 1; i++) {
    if (data + i == NULL) {
      *(data + i) = '0';
    }
  }
  memcpy(m_buf, data, data_size);
  m_size = data_size;
  // m_buf[m_size] = '\0';
}
