#include "xmonad.hpp"
#include <limits>
#include <iomanip>
#include <fstream>
#include "config.hpp"
#include "stream.hpp"
#include "scheme.hpp"

void xmonad::change(const scheme::Scheme& scheme)
{
  std::fstream fs(config::xmonad);
  if (stream::find("normalBorderColor", fs))
  {
    fs.ignore(std::numeric_limits<std::streamsize>::max(), '#');
    fs << std::hex << std::setw(6) << std::setfill('0') << scheme[scheme::ColorType::BACKGROUND_COLOR].toInt();
  }
  if (stream::find("focusedBorderColor", fs))
  {
    fs.ignore(std::numeric_limits<std::streamsize>::max(), '#');
    fs << std::hex << std::setw(6) << std::setfill('0') << scheme[scheme::ColorType::FOREGROUND_COLOR].toInt();
  }
  fs.close();
}
