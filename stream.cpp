#include "stream.hpp"
#include <limits>
#include <iomanip>
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

void stream::setHex(scheme::Color Color, std::fstream& fs)
{
  fs.ignore(std::numeric_limits<std::streamsize>::max(), '#');
  fs << std::hex << std::setw(6) << std::setfill('0') << Color.toInt();
}

void stream::findAndSetHex(const char* content, scheme::Color Color, std::fstream& fs)
{
  if (find(content, fs))
  {
    setHex(Color, fs);
  }
}
