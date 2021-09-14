#include "termonad.hpp"
#include <limits>
#include <iomanip>
#include <fstream>
#include "config.hpp"
#include "stream.hpp"
#include "scheme.hpp"

void termonad::change(const scheme::Scheme& scheme)
{
  std::fstream fs(config::termonad);
  for (int i = 0; i < 22; ++i)
  {
    if (stream::find("createColour ", fs))
    {
      fs  << std::setw(3) << (int)scheme[i].r
          << std::setw(4) << (int)scheme[i].g
          << std::setw(4) << (int)scheme[i].b;
    }
  }
  fs.close();
}
