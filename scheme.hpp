#ifndef scheme_hpp
#define scheme_hpp

#include <cstdint>
#include <fstream>

namespace scheme
{
  enum class ColorType
  {
    CURSOR_FOREGROUND_COLOR,
    CURSOR_BACKGROUND_COLOR,
    FOREGROUND_COLOR,
    BACKGROUND_COLOR,
    HIGHLIGHT_FOREGROUND_COLOR,
    HIGHLIGHT_BACKGROUND_COLOR,
    COLOR_0,
    COLOR_1,
    COLOR_2,
    COLOR_3,
    COLOR_4,
    COLOR_5,
    COLOR_6,
    COLOR_7,
    COLOR_8,
    COLOR_9,
    COLOR_10,
    COLOR_11,
    COLOR_12,
    COLOR_13,
    COLOR_14,
    COLOR_15
  };

  struct Color
  {
    std::uint8_t r;
    std::uint8_t g;
    std::uint8_t b;
    std::uint8_t& operator[](int index);
    std::uint8_t operator[](int index) const;
    int toInt() const;
  };

  class Scheme
  {
  public:
    Scheme(std::ifstream& ifs);
    Color& operator[](int index);
    Color operator[](int index) const;
    Color& operator[](ColorType colorType);
    Color operator[](ColorType colorType) const;
  private:
    Color colors[22];
  };
}

#endif
