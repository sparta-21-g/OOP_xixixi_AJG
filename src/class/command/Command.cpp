#include "Command.hpp"
#include <iostream>

using namespace std;

//======== command ========
Command::Command(string type, string name): type(type), name(name) {
}

void Command::execute(TableCard& tablecard, List<Player>& listPlayer, int playeridx, long long int& prize, CardsBank& cardsbank, AbilityCardsBank& abilitycardsbank, bool& ascending) {
    cout << "---------------------------------------" <<endl;
    cout << "Masukan salah! Ketik HELP untuk bantuan." << endl;
    cout << "Sekarang masih giliran Player "<< playeridx << " : " << listPlayer[playeridx-1].getName() << endl;
    cout << "---------------------------------------" <<endl;
}

bool Command::continueToNextPlayer(List<Player>& listPlayer, int playeridx, AbilityCardsBank& abilitycardsbank){
    return false;
}

