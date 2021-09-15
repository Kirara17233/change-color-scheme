#include "xmonad.hpp"
#include <fstream>
#include "config.hpp"
#include "stream.hpp"
#include "scheme.hpp"

void xmonad::change(const scheme::Scheme& scheme)
{
  std::fstream fs(config::xmonad);
  for (int i = 0; i < 22; ++i)
  {
    stream::setHex(scheme[i], fs);
  }
  fs.close();
}
