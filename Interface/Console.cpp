#include "./Console.hpp"

#include <iostream>

#include "../Core/DTO/Character.hpp"

namespace Interface {
using namespace std;
using namespace Core;

void Console::start(DTO::CHARACTER &hero) {
  cout << "Your adventure begin here !" << endl;
  cout << "At any moment enter 'h' to see your options" << endl;
  cout << "First, what's your name ?" << endl;

  Console::createCharacter(hero);
}

void Console::printContext() {
  cout << "*********" << endl;

  // first context
  cout << "You are in a dilapidated farm. No one seems to live here ..."
       << endl;
  cout << "But you can see an old man in the ruins. Further, you see a path to "
          "a hill."
       << endl;
}

char Console::ask(char &action) {
  cout << "What do you do ?" << endl;
  cin >> action;

  if (action == 'q') {
    return action;
  }

  if (action == 'h') {
    Console::printHelp();
  }

  return Console::process(action);
}

void Console::printHelp() {
  cout << "You are in a textual rogue-like." << endl;
  cout << "If you are not in a safe place (city, villlage ...) -> you are in a "
          "dungeon (and in danger !)"
       << endl;
  cout << "At any moment : " << endl;
  cout << "- enter 'i' to see your inventory" << endl;
  cout << "- enter 's' to see your stats" << endl;
  cout << "- enter 't' to talk (present persons will appears in options list)"
       << endl;
  cout << "- enter 'b' to back (if you're in the inventory, dialogue or "
          "anything else)"
       << endl;
  cout << "- enter 'q' to quit the game (if nothing else is open)" << endl;
  cout << "- enter 'a' to any other action (possible actions will appears in "
          "options list)"
       << endl;
  cout << "Save your progression before quit (you can't in a dungeon)." << endl;
  cout << "At each dungeon level, you can back to the prev safe place and back "
          "to the next level."
       << endl;
  cout << "All your actions are consequences ! Think about it ..." << endl;
  cout << "Enter 'b' to close this manual." << endl;

  char back;
  while (1) {
    cin >> back;

    if (back == 'b') {
      break;
    }
  }
}

char Console::process(char action) { return action; }

void Console::createCharacter(DTO::CHARACTER &character) {
  cout << "Name : ";
  cin >> character.name;
}
}  // namespace Interface
