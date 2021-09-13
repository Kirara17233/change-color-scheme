#include "scheme.hpp"
#include <iostream>
#include <fstream>

std::uint8_t& scheme::Color::operator[](int index)
{
  switch (index)
  {
  case 0:
    return r;
  case 1:
    return g;
  case 2:
    return b;
  };
}

scheme::Scheme::Scheme(const char* path)
{
  std::ifstream ifs(path, std::ios::binary);
  ifs.read(reinterpret_cast<char*>(&colors), sizeof colors);
}

scheme::Color& scheme::Scheme::operator[](int index)
{
  return colors[index];
}
