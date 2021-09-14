#include "xfce4-panel.hpp"
#include <limits>
#include <iostream>
#include <iomanip>
#include <fstream>
#include "config.hpp"
#include "stream.hpp"
#include "scheme.hpp"

void xfce4_panel::change(const scheme::Scheme& scheme)
{
  std::fstream fs(config::xmobar);
  for (int i = 0; i < 3; ++i)
  {
    if (stream::find("double", fs))
    {
      fs.ignore(std::numeric_limits<std::streamsize>::max(), '"');
      fs.ignore(std::numeric_limits<std::streamsize>::max(), '"');
      fs << std::setiosflags(std::ios::fixed) << std::setprecision(6) << (double)scheme[scheme::ColorType::BACKGROUND_COLOR][i] / 255;
    }
  }
  fs.close();
}
