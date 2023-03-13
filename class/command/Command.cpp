#include "Command.hpp"
#include <iostream>

using namespace std;

//======== command ========
Command::Command(){
    
}

Command::Command(string type, string name): type(type), name(name) {
}

Command::Command(const Command& x): type(x.type), name(x.name){

}

Command& Command::operator=(const Command& x){
    setType(x.type);
    setName(x.name);

    return *this;
}

Command::~Command(){}

string Command::getType() {
    return this->type;
}

string Command::getName() {
    return this->name;
}

void Command::setType(string type) {
    this->type = type;
}

void Command::setName(string name) {
    this->name = name;
}

void Command::execute(List<Player>& listPlayer, int playeridx, int& prize) {
    cout << "Masukan salah! Ketik HELP untuk bantuan." << endl;
    cout << "Sekarang masih giliran pemain " << listPlayer[playeridx-1].getName() << endl;
}

bool Command::continueToNextPlayer(){
    return false;
}

