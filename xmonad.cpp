#include "xmonad.hpp"
#include <fstream>
#include "config.hpp"
#include "stream.hpp"
#include "scheme.hpp"

void xmonad::change(const scheme::Scheme& scheme)
{
  std::fstream fs(config::xmonad);
  stream::findAndSetHex("normalBorderColor", scheme[scheme::ColorType::BACKGROUND_COLOR], fs);
  stream::findAndSetHex("focusedBorderColor", scheme[scheme::ColorType::FOREGROUND_COLOR], fs);
  fs.close();
}
