#include<bits/stdc++.h>
#include <unistd.h>
#ifndef CABS_H
#define CABS_H

using namespace std ;

class Cabs
{
    public:
        Cabs() {}

        int cabChoice , kilometers ;
        float cabCost , lastcabCost ;

        void setDetails() {
            cout << "We collaborated with fastest, safest and smartest cab service around the Egypt" << endl;
            cout << "-----------ABC Cabs-----------\n" << endl;
            cout << "1. Rent a Standard Cab - EP.350 for 1KM" << endl;
            cout << "2. Rent a Luxury Cab - EP.500 for 1KM" << endl;

            cout << "\nTO calculate the cost for your journey: " << endl;
            cout << "Enter which kind of the cab you need: " << endl;
            cin >> cabChoice ;

            cout << "Enter kilometers you need to travel:" << endl;
            cin >> kilometers ;

            int confirmCab ;
            if (cabChoice == 1) {

                cabCost = kilometers * 350 ;

                cout << "\nYour trip cost " << cabCost << " Egyptian pounds for a Standard Cab" << endl;
                cout << "Press 1 to confirm this cab.\n" << endl;
                cout << "Press 2 to select another cab.\n" << endl;

                cin >> confirmCab ;

                system("CLS") ;

                if (confirmCab == 1) {
                    lastcabCost = cabCost;
                    cout << "\nYou have successfully confirmed a Standard cab" << endl;
                    cout << "Goto Menu and take the receipt" << endl;
                }

                else if (confirmCab == 2) {
                    setDetails() ;

                } else {
                    cout << "Invalid Input! Redirecting to previous menu\nPlease Wait!" << endl;
                    sleep(1000) ;
                    system("CLS") ;
                    setDetails() ;
                }

            }

            else if (cabChoice == 2) {

                cabCost = kilometers * 500 ;

                cout << "\nYour trip cost " << cabCost << " Egyptian pounds for a Luxury Cab" << endl;
                cout << "Press 1 to confirm this cab.\n" << endl;
                cout << "Press 2 to select another cab.\n" << endl;

                cin >> confirmCab ;

                system("CLS") ;

                if (confirmCab == 1) {
                    lastcabCost = cabCost;
                    cout << "\nYou have successfully confirmed a Luxury cab" << endl;
                    cout << "Goto Menu and take the receipt" << endl;
                }

                else if (confirmCab == 2) {
                    setDetails() ;
                }

                else {
                    cout << "Invalid Input! Redirecting to previous menu\nPlease Wait!" << endl;
                    sleep(1000) ;
                    system("CLS") ;
                    setDetails() ;
                }
            }

            else {
                cout << "Invalid Input! Redirecting to main menu\nPlease Wait!" << endl;
                sleep(1000) ;
                system("CLS") ;
                ///menu() ;
            }

            cout << "Nothing happen..\nRedirecting to Main menu: " ;
            system("CLS") ;
            ///menu() ;
        }
    protected:

    private:
};

#endif // CABS_H
