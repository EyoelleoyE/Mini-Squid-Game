#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(NULL));
    int start, choice;
    char tryagain;
    int repeat = 1;
    cout<<"------------------------WELCOME TO SQUID GAME (GLASS BRIDGE)-------------------\n";
    cout<<"                           Lets Explain the rules: \n";
    cout<<"                    Each time you go, you have 2 options to choose from to get to the final destination.\n";
    cout<<"                    If you fail to pick the right choice, you will lose and the game will be reseted from the beginning.\n\n";
    cout<<"     Enter 1 to start the game.\n";
    cout<<"     Enter 2 to exit\n\n";
    cout<<"     Choose your option: ";
    cin>>start;


    if (start==1) {
        cout<<endl;
        cout<<"Once upon a time, a guy was walking in the side walk to get a fresh air. But there is one problem, there is no people walking around at that time. And he was scared that something would happen to him. His intiution was right, a group of people armed with weapons abducted him and took him to a place where a big bridge were setup, and he was asked to get to the other side by choosing the right door and if he can't get the right door, he will be dead. But if he managed to finish the game, he will be awarded a price of $1 million dollars. And the game organizers said with a big voice: LET THE GAME BEGIN!!!\n\n";


        while (repeat<=5) {
            cout<<"Pick a door number to get into (0 or 1): ";
            cin>>choice;
            int right_answer = rand() % 2;
            //cut and copy line 30 and line 31 and paste it before line 28 in the loop and add cout<<right-answer; to the next line after you paste it. The reason I gave you this is if you want to check what happens if you completed the game successfully.
            if (choice == right_answer) {
                cout<<"Congratulations! You get to the other side\n\n";
                repeat++;
            }
            else {
                cout<<"You are dead!!! You loseeee\n\n";
                cout<<"Do you want to try again? (enter y or n): ";
                cin>>tryagain;
                if (tryagain == 'y') {
                    repeat = 1;
                }
                else {
                repeat = 10;
                }
            }
        }

        if (repeat == 6) {
                cout<<"Congratulations! You completed the game and you won a $1 million dollars.\n\n";
        }




    }

    else if (start == 2) {
        cout<<"\n";
        cout<<"You have exited the game! Goodbye!!!\n";
    }

    else {
        cout<<"\n";
        cout<<"Invalid input!\n";
    }









    return 0;
}
