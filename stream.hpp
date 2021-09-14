#ifndef stream_hpp
#define stream_hpp

#include <fstream>
#include "scheme.hpp"

namespace stream
{
  std::fstream& find(const char* content, std::fstream& fs);
  void setHex(scheme::Color color, std::fstream& fs);
  void findAndSetHex(const char* content, scheme::Color color, std::fstream& fs);
}

#endif
