#ifndef stream_hpp
#define stream_hpp

#include <fstream>
#include "scheme.hpp"

namespace stream
{
  std::fstream& find(const char* content, std::fstream& fs);
}

#endif
