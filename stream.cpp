#include "stream.hpp"
#include <limits>
#include <fstream>

std::fstream& stream::find(const char* content, std::fstream& fs)
{
  while (fs.ignore(std::numeric_limits<std::streamsize>::max(), content[0]))
  {
    if (content[1])
    {
      int index = 1;
      while (fs.get() == content[index])
      {
        if (!content[++index])
        {
          return fs;
        }
      }
    }
  }
  return fs;
}
