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
    std::cerr << "scheme: Incorrect parameters!\n";
    return 1;
  }
  std::ifstream ifs(argv[1], std::ios::binary);
  if (!ifs)
  {
    std::cerr << "scheme: " << argv[1] << ": No such file or directory\n";
    return 1;
  }
  try
  {
    scheme::Scheme scheme(ifs);
    xmonad::change(scheme);
    xmobar::change(scheme);
    xfce4_panel::change(scheme);
    termonad::change(scheme);
  }
  catch(const std::exception& e)
  {
    std::cerr << "scheme: " << e.what() << '\n';
    return 1;
  }
}
