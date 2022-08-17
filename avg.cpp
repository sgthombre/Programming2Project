#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//void batAvgCalc();
void atBatCounter(int);
void errorCheck();

class Average
{
private:
    int games;
    double atBats;
    double hits;
    double avg;
public:
    void setGames(int);
    void setAtBats(double);
    void setHits(double);
    double getAtBats();
    double getHits();
    double CalcAvg();
};

//setGames assigns a value to the games member
void Average::setGames(int g)
{
    games = g;
}

//setAtBats assigns a value to the atBats member
void Average::setAtBats(double atb)
{
    atBats = atb;
}

//setHits assigns a value to the hits member
void Average::setHits(double h)
{
    hits = h;
}

//getAtBats returns the value in atBats member
double Average::getAtBats()
{
    return atBats;
}

//getHits returns the value in hits member
double Average::getHits()
{
    return hits;
}

//calcAvg calculates the batting average
double Average::CalcAvg()
{
    avg = hits / atBats;

    return avg;
}

int main()
{
    Average a; //instance of class
    char calcChoice;
    int games; //local variable for games
    double hits, hitsTmp, abs, absTmp, avg; //local variables for hits, at bats, average

    //intro and enter the amount of games right off the bat
    cout << "This program is going to calculate your batting average!\n";
    cout << "First, enter the number of games played: \n";
    cin >> games;

    //stores games count in games member of class
    a.setGames(games);

    //sets the amount
    int count = 0;
        while ( count < games)
        {

            absTmp = 0;
            hitsTmp = 0;

            cout << "Enter the number of At Bats: ";
            cin >> absTmp;

            cout << "Enter the number of Hits: ";
            cin >> hitsTmp;

            //error check to make sure there is no hits more than at bats
            if (hitsTmp > absTmp)
            {
                cout << "You cannot have more hits than at bats in a game! Try again!\n";
                cout << "Re-enter the number of Hits: ";
                cin >> hitsTmp;
            }

            else
            {

            }

            //convert from one attempt to total
            abs += absTmp;
            hits += hitsTmp;
            count++;
            cout << endl;
        }
    //set the variables into the class!
    a.setAtBats(abs);
    a.setHits(hits);

    //show the amount of hits and at bats
    cout << "-------------------------------------------------------\n";
    cout << "The total amount of at bats is " << a.getAtBats() << endl;
    cout << "The total amount of hits is " << a.getHits() << endl;

    //rounds out the average to 3 decimal places
    cout << setprecision(3) << fixed << showpoint;
    cout << "The batting average over " << games << " games was " << a.CalcAvg() << ".\n";
    cout << "-------------------------------------------------------\n";


    return 0;
}
/*
void atBatCounter(*games)
{
    int count = 0;
    int games =

    while ( count <= games)
    {
        absTmp = 0;
        hitsTmp = 0;

        cout << "Enter the number of At Bats: ";
        cin >> absTmp;

        cout << "Enter the number of Hits: ";
        cin >> hitsTmp;

        void errorCheck(hitsTmp, absTmp);
    }
    return absTmp, hitsTmp;
}

void errorCheck()
{
     if (hitsTmp > absTmp)
            {
                cout << "You cannot have more hits than at bats in a game! Try again!\n";
                cout << "Re-enter the number of Hits: ";
                cin >> hitsTmp;
            }

            else
            {

            }
        }
    return
}
*/
/*
batAvgCalc(int games)
{
    int hits, tmpHits, abs, tmpAbs, avg;

    for (count = 1, count++, count <= games)
        cout
}
*/
