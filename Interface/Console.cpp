#include <iostream>

#include "../Core/DTO/Character.hpp"
#include "./Console.hpp"

namespace Interface {
using namespace std;
using namespace Core;

void Console::ask(DTO::CHARACTER &character) {
  cout << "Name : ";
  cin >> character.name;
  cout << "Genre : ";
  cin >> character.genre;
  cout << "Age : ";
  cin >> character.age;
}

void Console::print(DTO::CHARACTER character) {
  cout << "=========" << endl;
  cout << "Name : " << character.name << endl;
  cout << "Genre : " << character.genre << endl;
  cout << "Age : " << character.age << endl;
}
} // namespace Interface
