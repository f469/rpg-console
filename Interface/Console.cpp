#include "./Console.hpp"

#include <iostream>

#include "../Core/DTO/Character.hpp"

namespace Interface {
using namespace std;
using namespace Core;

char Console::ask(char &action) {
  cout << "What do you do ?" << endl;
  cin >> action;

  if (action == 'q') {
    return action;
  }

  return Console::process(action);
}

void Console::start(DTO::CHARACTER &hero) {
  cout << "Your adventure begin here !" << endl;
  cout << "At any moment enter 'h' to see your options" << endl;
  cout << "First, what's your name ?" << endl;

  Console::createCharacter(hero);
}

char Console::process(char action) { return action; }

void Console::createCharacter(DTO::CHARACTER &character) {
  cout << "Name : ";
  cin >> character.name;
}
}  // namespace Interface
