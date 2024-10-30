#include<bits/stdc++.h>
#ifndef CUSTOMER_H
#define CUSTOMER_H

using namespace std ;

class Customer
{
    public:
        Customer() {}

        string name , gender , address ;
        int cusID , mobileNo , age ;
        char customerDetails[1000] ;
        void setDetails() {
            ofstream out("old-customers.txt" , ios::app) ;
            {
                cout << "Enter customer ID: " ;
                cin >> cusID ;
                cout << "Enter customer name: " ;
                cin >> name ;
                cout << "Enter customer age: " ;
                cin >> age ;
                cout << "Enter customer mobile number: " ;
                cin >> mobileNo ;
                cout << "Enter customer address: " ;
                cin >> address ;
                cout << "Enter customer gender: " ;
                cin >> gender ;
            }
            out << "\nCustomer ID: " << cusID << "\nName: " << name << "\nAge: " << age << "\nAdderess: " << address << "\nMobile Number: " << mobileNo << "\nGender: " << gender << endl;
            out.close() ;
            cout << "\nSAVED \nNOTE: We save your details record.\n" << endl;
        }

        void getDetails() {

            ifstream in("old-customers.txt") ;
            {
                if (!in)
                    cout << "File Error!" << endl;

                while(!in.eof()) {
                    in.getline(customerDetails , 1000) ;
                    cout << customerDetails << endl;
                }
            }
            in.close();

        }

    protected:

    private:
};

#endif // CUSTOMER_H
