#include <iostream>
#include <fstream>
#include "scheme.hpp"
#include "xmonad.hpp"
#include "xmobar.hpp"
#include "xfce4-panel.hpp"
#include "termonad.hpp"

int main(int argc, char* argv[])
{
  if (argc != 2)
  {
    std::cerr << "Error: Incorrect parameters!\n";
    return 1;
  }
  try
  {
    scheme::Scheme scheme(argv[1]);
    return xmonad::change(scheme)
        || xmobar::change(scheme)
        || xfce4_panel::change(scheme)
        || termonad::change(scheme);
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
    return 1;
  }
}