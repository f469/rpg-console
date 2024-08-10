#include "./Console.hpp"

#include <iostream>

#include "../Core/DTO/Character.hpp"

namespace Interface {
using namespace std;
using namespace Core;

char Console::ask(char &action) {
  cout << "What do you do ?";
  cin >> action;

  if (action == 'q') {
    return action;
  }

  return Console::process(action);
}

char Console::process(char &action) { return action; }

void Console::createCharacter(DTO::CHARACTER &character) {
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
}  // namespace Interface
