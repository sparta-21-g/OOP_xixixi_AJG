#include "Quadruple.hpp"
#include <iostream>

//======== Quadruple ========
Quadruple::Quadruple() : AbilityCommand("ability", "quadruple", List<Player>(10)){

}   

Quadruple::Quadruple(string type, string name, List<Player> listPlayer) : AbilityCommand(type, name, listPlayer){

}   

Quadruple::Quadruple(const Quadruple& x ) : AbilityCommand(x){

}   

Quadruple& Quadruple::operator=(const Quadruple& X){

} 

Quadruple::~Quadruple(){
    AbilityCommand::~AbilityCommand();
}    

void Quadruple::execute(int prize, Round round) {
        cout << listPlayer.getElement(round.getIdxCurrentPlayer()-1).getName() << " melakukan QUADRUPLE! Point hadiah naik dari " << prize;
        prize *= 4; 
        cout << " menjadi " << prize << endl;
}

bool Quadruple::continueToNextPlayer(){
    return true;
}