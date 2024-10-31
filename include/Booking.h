#ifndef BOOKING_H
#define BOOKING_H


class Booking
{
    public:
        Booking() {}
        int choiceHotel ;
        int packChoice ;
        float hotelCost ;

        void hotels() {
            string Hotels[] = {"Bait Lyla" , "Sheraton" , "Sohar"};

            for (int i = 0 ; i < Hotels.size() ; i++) {
                cout << i + 1 << ". " << Hotels[i] << " Hotel.";
            }

            cout << "\nCurrently we collaborated with above hotels!\n" ;
            cout << "Enter number of the hotel you want to book: " ;
            cin >> choiceHotel ;

            system("CLS") ;

            if (choiceHotel == 1) {

                    cout << "------------WELCOME TO BAIT LAYLA HOTEL------------" << endl;
                    cout << "The Garden , food and beverage. Enjoy all you can drink , Stay cool and get chilled in the summer sun." << endl;
                    cout << "Packages offers by BAIT LAYLA:\n" << endl;

                    cout << "1. Standard Pack" << endl;
                    cout << "\tAll basic facilities you need just for: 5000$" << endl;
                    cout << "2. Premium Pack" << endl;
                    cout << "\tEnjoy Premium for : 10000$" << endl;
                    cout << "3. Luxury Pack" << endl;
                    cout << "\tLive a Luxury at BAIT LAYLA for : 15000$" << endl;

                    cout << "\nPress another key to back or \n Enter package number you want to book: " ;
                    cin >> packChoice ;

                    if (packChoice == 1) {
                        hotelCost = 5000.0;
                        cout << "\nYou have successfully booked Standard Pack at BAIT LAYLA" << endl;
                        cout << "Goto Menu and take the receipt" << endl;
                    }
                    else if (packChoice == 2)  {
                        hotelCost = 10000.0 ;
                        cout << "\nYou have successfully booked Premium Pack at BAIT LAYLA" << endl;
                        cout << "Goto Menu and take the receipt" << endl;
                    }
                    else if (packChoice == 3) {
                        hotelCost = 10000 ;
                        cout << "\nYou have successfully booked Luxury Pack at BAIT LAYLA" << endl;
                        cout << "Goto Menu and take the receipt" << endl;
                    }
                    else {
                        cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                        sleep(1100) ;
                        system("CLS") ;
                        hotels() ;
                    }


                    int gotoMenu ;
                    cin >> gotoMenu ;
                    cout << "\nPress 1 to redirect main menu: " ;
                    cin >> gotoMenu ;
                    ///menu() ;

            }
            else if (choiceHotel == 2) {

                    cout << "------------WELCOME TO Sheraton HOTEL------------" << endl;
                    cout << "The Garden , food and beverage. Enjoy all you can drink , Stay cool and get chilled in the summer sun." << endl;
                    cout << "Packages offers by Sheraton:\n" << endl;

                    cout << "1. Standard Pack" << endl;
                    cout << "\tAll basic facilities you need just for: 5000$" << endl;
                    cout << "2. Premium Pack" << endl;
                    cout << "\tEnjoy Premium for : 10000$" << endl;
                    cout << "3. Luxury Pack" << endl;
                    cout << "\tLive a Luxury at BAIT LAYLA for : 15000$" << endl;

                    cout << "\nPress another key to back or \n Enter package number you want to book: " ;
                    cin >> packChoice ;

                    if (packChoice == 1) {
                        hotelCost = 5000.0;
                        cout << "\nYou have successfully booked Standard Pack at Sheraton" << endl;
                        cout << "Goto Menu and take the receipt" << endl;
                    }
                    else if (packChoice == 2)  {
                        hotelCost = 10000.0 ;
                        cout << "\nYou have successfully booked Premium Pack at Sheraton" << endl;
                        cout << "Goto Menu and take the receipt" << endl;
                    }
                    else if (packChoice == 3) {
                        hotelCost = 10000 ;
                        cout << "\nYou have successfully booked Luxury Pack at Sheraton" << endl;
                        cout << "Goto Menu and take the receipt" << endl;
                    }
                    else {
                        cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                        sleep(1100) ;
                        system("CLS") ;
                        hotels() ;
                    }


                    int gotoMenu ;
                    cin >> gotoMenu ;
                    cout << "\nPress 1 to redirect main menu: " ;
                    cin >> gotoMenu ;
                    ///menu() ;

            }
            else if (choiceHotel == 3) {

                    cout << "------------WELCOME TO Sohar HOTEL------------" << endl;
                    cout << "The Garden , food and beverage. Enjoy all you can drink , Stay cool and get chilled in the summer sun." << endl;
                    cout << "Packages offers by Sohar:\n" << endl;

                    cout << "1. Standard Pack" << endl;
                    cout << "\tAll basic facilities you need just for: 5000$" << endl;
                    cout << "2. Premium Pack" << endl;
                    cout << "\tEnjoy Premium for : 10000$" << endl;
                    cout << "3. Luxury Pack" << endl;
                    cout << "\tLive a Luxury at BAIT LAYLA for : 15000$" << endl;

                    cout << "\nPress another key to back or \n Enter package number you want to book: " ;
                    cin >> packChoice ;

                    if (packChoice == 1) {
                        hotelCost = 5000.0;
                        cout << "\nYou have successfully booked Standard Pack at Sohar" << endl;
                        cout << "Goto Menu and take the receipt" << endl;
                    }
                    else if (packChoice == 2)  {
                        hotelCost = 10000.0 ;
                        cout << "\nYou have successfully booked Premium Pack at Sohar" << endl;
                        cout << "Goto Menu and take the receipt" << endl;
                    }
                    else if (packChoice == 3) {
                        hotelCost = 10000 ;
                        cout << "\nYou have successfully booked Luxury Pack at Sohar" << endl;
                        cout << "Goto Menu and take the receipt" << endl;
                    }
                    else {
                        cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                        sleep(1100) ;
                        system("CLS") ;
                        hotels() ;
                    }


                    int gotoMenu ;
                    cin >> gotoMenu ;
                    cout << "\nPress 1 to redirect main menu: " ;
                    cin >> gotoMenu ;
                    ///menu() ;

            } else {
                cout << "Invalid Input! Redirecting to Previous Menu \nPlease Wait!" << endl;
                sleep(1100) ;
                system("CLS") ;
                ///menu() ;
            }

        }
    protected:

    private:

};

#endif // BOOKING_H
