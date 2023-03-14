#include "Reverse.hpp"
#include <iostream>

//======== Reverse ========
Reverse::Reverse(string type, string name) : AbilityCommand(type, name){
}   

void Reverse::execute(TableCard& tablecard, List<Player>& listPlayer, int playeridx, int& prize, CardsBank& cardsbank, AbilityCardsBank& abilitycardsbank, bool ascending) {
    try{
        doesPlayerHaveAbilityCard(listPlayer, playeridx, "Reverse");
        playerCardIsDeactivated(listPlayer, playeridx);
        //execution
        cout << listPlayer.getElement(playeridx-1).getName()<< " melakukan reverse!" << endl;
        cout << "(sisa) urutan eksekusi giliran ini: ";
        playeridx = listPlayer.getSize() - playeridx + 1;

        // belum selesai
        int i = playeridx;
        for(i ; i < listPlayer.getSize(); i++) {
            cout << listPlayer.getElement(i).getName() << " ";
        }
        cout << endl;

        
    } catch (PlayerDoesNotHaveCardException e) {
        cout << e.what() << "REVERSE." << endl;
    } catch (PlayerCardIsDeactivatedException e) {
        cout << e.what() << endl;
    }
}
bool Reverse::continueToNextPlayer(List<Player>& listPlayer, int playeridx, AbilityCardsBank& abilitycardsbank){
    try{
        doesPlayerHaveAbilityCard(listPlayer, playeridx, "Reverse");
        playerCardIsDeactivated(listPlayer, playeridx);
        AbilityCard temp = listPlayer[playeridx-1]-listPlayer[playeridx-1].getAbilityCard(); 
        abilitycardsbank + temp;
        return true;
    } catch (PlayerDoesNotHaveCardException e) {
        return false;    
    } catch (PlayerCardIsDeactivatedException e) {
        return false;
    }
    
}