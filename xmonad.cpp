#include "xmonad.hpp"
#include <fstream>
#include "config.hpp"
#include "stream.hpp"
#include "scheme.hpp"

void xmonad::change(const scheme::Scheme& scheme)
{
  std::fstream fs(config::xmonad);
  stream::findAndSetHex("normalBorderColor", scheme[scheme::ColorType::CURSOR_FOREGROUND_COLOR], fs);
  stream::findAndSetHex("focusedBorderColor", scheme[scheme::ColorType::CURSOR_BACKGROUND_COLOR], fs);
  fs.close();
}
