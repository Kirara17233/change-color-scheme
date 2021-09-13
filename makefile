cc = g++

flags = -g -Wall

objects = main.o termonad.o xfce4-panel.o xmobar.o xmonad.o common/scheme.o

target = scheme

edit : $(objects)
	$(cc) $(flags) -o $(target) $(objects)

scheme.o : scheme.cpp
	$(cc) -c common/scheme.cpp
xmonad.o : xmonad.cpp
	$(cc) -c xmonad.cpp
xmobar.o : xmobar.cpp
	$(cc) -c xmobar.cpp
xfce4-panel.o : xfce4-panel.cpp
	$(cc) -c xfce4-panel.cpp
termonad.o : termonad.cpp
	$(cc) -c termonad.cpp
main.o : main.cpp termonad.hpp xfce4-panel.hpp xmobar.hpp xmonad.hpp
	$(cc) -c main.cpp
clean :
	rm $(objects)