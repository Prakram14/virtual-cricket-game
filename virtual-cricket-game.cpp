
#include "game.h"

using namespace std;

int main() {
    Game game;
    game.welcome();

    cout<<"Please Enter to continue";
    getchar();

    game.showAllPlayers();

    cout<<"\nPlease Enter to continue";
    getchar();

    game.selectPlayers();
    game.showTeamPlayers();

    cin.ignore(numeric_limits<streamsize>::max(),'\n');

    cout<<"\nPlease Enter to toss";
    getchar();

    game.toss();
    game.startFirstInnings();
    game.startSecondInnings();
    game.matchSummary();

    return 0;
}
