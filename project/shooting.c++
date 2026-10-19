#include <iostream>
#include <string>
using namespace std;

int main () {

    cout << "A stands for army \n" << "T stands for tank \n" << "M are Missile launchers\n";
    cout << "you have to plot the attack planning to win ";

    string enemy_team[6][6] = {
        {"T","T","T","T","T","T"},
        {"A","A","A","A","A","A"},
        {"A","A","M","M","A","A"},
        {"A","A","A","A","A","A"},
        {"A","A","A","A","A","A"},
        {"A","A","A","A","A","A"},
    };

    for(int i = 0 ; i < 6 ; ++i ){
        for(int j = 0; j < 6; ++j){
            cout << enemy_team[i][j] << " ";
        };    
        
        cout << endl;
    };

    cout << "you have \n I> 3 missile \n I> 24 solider \n I> 4 Tanks";
    cout << "enter the value accordingly to win \n";

    int attack =0 , row, column, point =0 ;
    int tank = 4;
    int solider = 24;
    int missile = 3;
    string army;
    while (attack < 24){

        cout << "enter army and then row and then column\n";
        cin >> army;
        cin >> row;
        cin >> column;
        
        if(army == "T" && tank > 0){
            if(column == 0){
                point += 4;
                enemy_team[row][column] = "o";
            }
            else if(column == 1){
                point += 1;
                enemy_team[row][column] = "o";
            }
            else if(column == 2){
                if(row == 2 || row == 3){
                    point += 5;
                }
                else{
                    point += 1;
                }
            } else{
                point += 1;
            }

            tank -= 1;
        }
        
        else if(army == "S" && solider > 0){
            if(column == 0){
                point -= 4;
                attack += 2;
                enemy_team[row][column] = "T";
            }
            else if(column == 1){
                point += 1;
                enemy_team[row][column] = "o";
            }
            else if(column == 2){
                if(row == 2 || row == 3){
                    point -= 5;
                    attack += 5;
                }
                else{
                    point += 1;
                }
            } else{
                point += 1;
            }

            solider -= 1;
        } 
        
        else if (army == "M" && missile > 0) {
            for(int i = row - 1; i <= row + 1; ++i){
                for(int j = column - 1; j <= column + 1; ++j){
                    if(i >= 0 && i < 6 && j >= 0 && j < 6){
                        if(enemy_team[i][j] == "T" || enemy_team[i][j] == "A" || enemy_team[i][j] == "M"){
                            point += 3;
                            enemy_team[i][j] = "o";
                        } 
                    }
                }
            }
            missile -= 1;
        }


        else{
            cout << "wrong input\n";
        }

        cout << "\nUpdated Enemy Map:\n";
        for(int i = 0 ; i < 6 ; ++i ){
            for(int j = 0; j < 6; ++j){
                cout << enemy_team[i][j] << " ";
            }    
            cout << endl;
        }

        attack++;
    }

    cout << "\n Final Score: " << point << endl;
    if (point >= 40) cout << " YOU WON THE WAR!\n";
    else cout << " MISSION FAILED. Try again!\n";


    return 0;
}