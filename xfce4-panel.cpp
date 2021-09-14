#include "xfce4-panel.hpp"
#include <iostream>
#include <iomanip>
#include "scheme.hpp"

void xfce4_panel::change(const scheme::Scheme& scheme)
{
  std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(6) << (double)255 / 255;
}
