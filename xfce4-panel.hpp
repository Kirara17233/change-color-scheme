#ifndef xfce4_panel_hpp
#define xfce4_panel_hpp

#include <iostream>
#include "common/scheme.hpp"

namespace xfce4_panel
{
  int change(const scheme::Scheme& scheme, std::istream& is = std::cin, std::ostream& os = std::cout, std::ostream& es = std::cerr);
}

#endif
