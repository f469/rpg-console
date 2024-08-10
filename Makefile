compile := g++ -o ./Build/runnable
compile-win := x86_64-w64-mingw32-g++ -o ././Build/win/runnable

format := clang-format -i --style=Google	

# Build
build: main.cpp ./Core/DTO/*.hpp ./Core/*.cpp ./Core/*.hpp ./Interface/*.cpp ./Interface/*.hpp
	$(compile) main.cpp ./Core/DTO/*.hpp ./Core/*.cpp ./Core/*.hpp ./Interface/*.cpp ./Interface/*.hpp
build-win: main.cpp ./Core/DTO/*.hpp ./Core/*.cpp ./Core/*.hpp ./Interface/*.cpp ./Interface/*.hpp
	$(compile-win) main.cpp ./Core/DTO/*.hpp ./Core/*.cpp ./Core/*.hpp ./Interface/*.cpp ./Interface/*.hpp

# Coding style
.PHONY: cs
cs: 
	$(format) main.cpp ./Core/DTO/*.hpp ./Core/*.cpp ./Core/*.hpp ./Interface/*.cpp ./Interface/*.hpp
