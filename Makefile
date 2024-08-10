compile := g++ -o ./Build/runnable
format := clang-format -i --style=LLVM	

# Build
build: main.cpp ./Core/DTO/*.hpp ./Core/*.cpp ./Core/*.hpp ./Interface/*.cpp ./Interface/*.hpp
	$(compile) main.cpp ./Core/DTO/*.hpp ./Core/*.cpp ./Core/*.hpp ./Interface/*.cpp ./Interface/*.hpp

# Coding style
.PHONY: cs
cs: 
	$(format) main.cpp ./Core/DTO/*.hpp ./Core/*.cpp ./Core/*.hpp ./Interface/*.cpp ./Interface/*.hpp
