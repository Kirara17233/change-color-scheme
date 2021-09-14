#include "scheme.hpp"
#include <fstream>

std::uint8_t& scheme::Color::operator[](int index)
{
  switch (index)
  {
  case 0:
    return r;
  case 1:
    return g;
  default:
    return b;
  };
}

std::uint8_t scheme::Color::operator[](int index) const
{
  switch (index)
  {
  case 0:
    return r;
  case 1:
    return g;
  default:
    return b;
  };
}

int scheme::Color::toInt() const
{
  return r << 16 | g << 8 | b;
}

scheme::Scheme::Scheme(std::ifstream& ifs)
{
  ifs.read(reinterpret_cast<char*>(&colors), sizeof colors);
}

scheme::Color& scheme::Scheme::operator[](int index)
{
  return colors[index];
}

scheme::Color scheme::Scheme::operator[](int index) const
{
  return colors[index];
}

scheme::Color& scheme::Scheme::operator[](ColorType colorType)
{
  return colors[static_cast<int>(colorType)];
}

scheme::Color scheme::Scheme::operator[](ColorType colorType) const
{
  return colors[static_cast<int>(colorType)];
}
