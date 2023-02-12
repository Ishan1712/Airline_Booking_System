// ---------------------------------------Flight Booking System---------------------------------

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void mainMenu();

// This is Management class for call Main menu
class Management
{
public:
    Management()
    {
        mainMenu();
    }
};

// This is Detail class for taking details from user
class Details
{
public:
    static string name, gender;
    int phoneNumber, age;
    string address;
    static int id;
    char arr[100];

    // Taking details
    void information()
    {
        cout << "Enter your ID: ";
        cin >> id;
        cout << "Enter your Name: ";
        cin >> name;
        cout << "Enter your Age: ";
        cin >> age;
        cout << "Enter your Address: ";
        cin >> address;
        cout << "Enter your Gender: ";
        cin >> gender;

        cout << "\n______________YOUR DETAILS HAS SAVED_______________\n"
             << endl;
    }
};

int Details::id;
string Details::name;
string Details::gender;

// This is Registration class for Book Ticket
class Registration
{
public:
    static int chooseCountry;
    int chooseFlight;
    int backMainmenu;
    static float flightCharges;

    // This function have all the flights details
    void flights()
    {
        string flight[] = {"Dubai", "Canada", "USA", "UK", "Australia", "Europe"};

        // Print available flights
        for (int i = 0; i < 6; i++)
        {
            cout << i + 1 << ". Flight to " << flight[i] << "\n";
        }

        // Take country name from user
        cout << "Select Country: ";
        cin >> chooseCountry;

        switch (chooseCountry)
        {
        case 1:
            cout << "\n_______________Welcome to Dubai Emirates______________\n"
                 << endl;
            cout << "..............YOUR COMFORT IS OUR Priority..........." << endl;
            cout << "   ................Enjoy the journey!.............." << endl;
            cout << "\nFollowing are the flights \n"
                 << endl;

            // Flight details
            cout << "1.  DUB - 498" << endl;
            cout << "    Date: 08-01-2022 \n    Time: 8:00 AM \n    Duration: 10hrs \n    Cost: Rs. 14000" << endl;
            cout << "\n2.  DUB - 568" << endl;
            cout << "    Date:09-01-2022  \n    Time: 4:00 AM \n    Duration: 12hrs \n    Cost: Rs. 10000" << endl;
            cout << "\n3.  DUB - 238" << endl;
            cout << "    Date: 10-01-2022 \n    Time: 2:00 AM \n    Duration: 9hrs \n    Cost: Rs. 8000" << endl;

            // Take flight from user
            cout << "\nSelect the flight: ";
            cin >> chooseFlight;

            // Check which flight user has select and store flight charges
            if (chooseFlight == 1)
            {
                flightCharges = 14000;
                cout << "\n____________You have successfully booked the flight DUB - 498________________" << endl;
                cout << "            NOTE: You can go back to menu and take your ticket" << endl;
            }
            else if (chooseFlight == 2)
            {
                flightCharges = 10000;
                cout << "\n____________You have successfully booked the flight DUB - 598________________" << endl;
                cout << "            NOTE: You can go back to menu and take your ticket" << endl;
            }
            else if (chooseFlight == 3)
            {
                flightCharges = 8000;
                cout << "\n____________You have successfully booked the flight DUB - 238________________" << endl;
                cout << "            NOTE: You can go back to menu and take your ticket" << endl;
            }
            else
            {
                // If user entered invalid key then flight() function run again
                cout << "You are entered invalid key, Please try again! " << endl;
                cout << endl;
                flights();
            }
            // For go back to Main menu
            cout << "\nPress 1 to go back to Main menu: "
                 << endl;
            cin >> backMainmenu;
            if (backMainmenu == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }

        case 2:
            cout << "\n_____________Welcome to Canadian Airlines_____________\n"
                 << endl;
            cout << "..............YOUR COMFORT IS OUR Priority..........." << endl;
            cout << "   ................Enjoy the journey!.............." << endl;
            cout << "\nFollowing are the flights \n"
                 << endl;

            // Flight details
            cout << "1.  CA - 198" << endl;
            cout << "    Date: 11-04-2022 \n    Time: 9:00 AM \n    Duration: 7hrs \n    Cost: Rs. 20000" << endl;
            cout << "\n2.  CA - 668" << endl;
            cout << "    Date:02-08-2022  \n    Time: 12:00 AM \n   Duration: 6hrs \n    Cost: Rs. 30000" << endl;
            cout << "\n3.  CA - 938" << endl;
            cout << "    Date: 19-02-2022 \n    Time: 7:00 AM \n    Duration: 4hrs \n    Cost: Rs. 40000" << endl;

            // Take flight from user
            cout << "\nSelect the flight: ";
            cin >> chooseFlight;

            // Check which flight user has select and store flight charges
            if (chooseFlight == 1)
            {
                flightCharges = 20000;
                cout << "\n____________You have successfully booked the flight CA - 198________________" << endl;
                cout << "            NOTE: You can go back to menu and take your ticket" << endl;
            }
            else if (chooseFlight == 2)
            {
                flightCharges = 20000;
                cout << "\n____________You have successfully booked the flight CA - 668________________" << endl;
                cout << "            NOTE: You can go back to menu and take your ticket" << endl;
            }
            else if (chooseFlight == 3)
            {
                flightCharges = 40000;
                cout << "\n____________You have successfully booked the flight CA - 938________________" << endl;
                cout << "            NOTE: You can go back to menu and take your ticket" << endl;
            }
            else
            {
                // If user entered invalid key then flight() function run again
                cout << "You are entered invalid key, Please try again! " << endl;
                cout << endl;
                flights();
            }

            // For go back to Main menu
            cout << "\nPress any key to go back to Main menu: "
                 << endl;
            cin >> backMainmenu;
            if (backMainmenu == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }

        case 3:
            cout << "\n_____________Welcome to Indian Airlines_____________\n"
                 << endl;
            cout << "..............YOUR COMFORT IS OUR Priority..........." << endl;
            cout << "   ................Enjoy the journey!.............." << endl;
            cout << "\nFollowing are the flights \n"
                 << endl;

            // Flight details
            cout << "1.  US - 898" << endl;
            cout << "    Date: 12-02-2022 \n    Time: 7:00 AM \n    Duration: 14hrs \n    Cost: Rs. 70000" << endl;
            cout << "\n2.  US - 738" << endl;
            cout << "    Date:15-02-2022  \n    Time: 9:00 AM \n    Duration: 16hrs \n    Cost: Rs. 80000" << endl;

            // Take flight from user
            cout << "\nSelect the flight: ";
            cin >> chooseFlight;

            // Check which flight user has select and store flight charges
            if (chooseFlight == 1)
            {
                flightCharges = 70000;
                cout << "\n____________You have successfully booked the flight USA - 898________________" << endl;
                cout << "            NOTE: You can go back to menu and take your ticket" << endl;
            }
            else if (chooseFlight == 2)
            {
                flightCharges = 80000;
                cout << "\n____________You have successfully booked the flight USA - 738________________" << endl;
                cout << "            NOTE: You can go back to menu and take your ticket" << endl;
            }
            else
            {
                // If user entered invalid key then flight() function run again
                cout << "You are entered invalid key, Please try again! " << endl;
                cout << endl;
                flights();
            }
            // For go back to Main menu
            cout << "\nPress 1 to go back to Main menu: " << endl;
            cin >> backMainmenu;
            if (backMainmenu == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }

        case 4:
            cout << "\n_____________Welcome to UK Airlines_____________\n"
                 << endl;
            cout << "..............YOUR COMFORT IS OUR Priority..........." << endl;
            cout << "   ................Enjoy the journey!.............." << endl;
            cout << "\nFollowing are the flights \n"
                 << endl;

            // Flight details
            cout << "1.  UK - 198" << endl;
            cout << "    Date: 12-02-2022 \n    Time: 7:00 AM \n    Duration: 14hrs \n    Cost: Rs. 70000" << endl;
            cout << "\n2.  UK - 138" << endl;
            cout << "    Date:15-02-2022  \n    Time: 9:00 AM \n    Duration: 16hrs \n    Cost: Rs. 80000" << endl;

            // Take flight from user
            cout << "\nSelect the flight: ";
            cin >> chooseFlight;

            // Check which flight user has select and store flight charges
            if (chooseFlight == 1)
            {
                flightCharges = 70000;
                cout << "\n____________You have successfully booked the flight UK - 198________________" << endl;
                cout << "            NOTE: You can go back to menu and take your ticket" << endl;
            }
            else if (chooseFlight == 2)
            {
                flightCharges = 80000;
                cout << "\n____________You have successfully booked the flight UK - 138________________" << endl;
                cout << "            NOTE: You can go back to menu and take your ticket" << endl;
            }
            else
            {
                // If user entered invalid key then flight() function run again
                cout << "You are entered invalid key, Please try again! " << endl;
                cout << endl;
                flights();
            }
            // For go back to Main menu
            cout << "\nPress 1 to go back to Main menu: " << endl;
            cin >> backMainmenu;
            if (backMainmenu == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        case 5:
            cout << "\n_____________Welcome to Australia Airlines_____________\n"
                 << endl;
            cout << "..............YOUR COMFORT IS OUR Priority..........." << endl;
            cout << "   ................Enjoy the journey!.............." << endl;
            cout << "\nFollowing are the flights \n"
                 << endl;

            // Flight details
            cout << "1.  AU - 298" << endl;
            cout << "    Date: 12-02-2022 \n    Time: 7:00 AM \n    Duration: 14hrs \n    Cost: Rs. 70000" << endl;
            cout << "\n2.  AU - 238" << endl;
            cout << "    Date:15-02-2022  \n    Time: 9:00 AM \n    Duration: 16hrs \n    Cost: Rs. 80000" << endl;

            // Take flight from user
            cout << "\nSelect the flight: ";
            cin >> chooseFlight;

            // Check which flight user has select and store flight charges
            if (chooseFlight == 1)
            {
                flightCharges = 70000;
                cout << "\n____________You have successfully booked the flight AU - 298________________" << endl;
                cout << "            NOTE: You can go back to menu and take your ticket" << endl;
            }
            else if (chooseFlight == 2)
            {
                flightCharges = 80000;
                cout << "\n____________You have successfully booked the flight AU - 238________________" << endl;
                cout << "            NOTE: You can go back to menu and take your ticket" << endl;
            }
            else
            {
                // If user entered invalid key then flight() function run again
                cout << "You are entered invalid key, Please try again! " << endl;
                cout << endl;
                flights();
            }
            // For go back to Main menu
            cout << "\nPress 1 to go back to Main menu: " << endl;
            cin >> backMainmenu;
            if (backMainmenu == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        case 6:
            cout << "\n_____________Welcome to Europe Airlines_____________\n"
                 << endl;
            cout << "..............YOUR COMFORT IS OUR Priority..........." << endl;
            cout << "   ................Enjoy the journey!.............." << endl;
            cout << "\nFollowing are the flights \n"
                 << endl;

            // Flight details
            cout << "1.  EUR - 398" << endl;
            cout << "    Date: 12-02-2022 \n    Time: 7:00 AM \n    Duration: 14hrs \n    Cost: Rs. 70000" << endl;
            cout << "\n2.  EUR - 338" << endl;
            cout << "    Date:15-02-2022  \n    Time: 9:00 AM \n    Duration: 16hrs \n    Cost: Rs. 80000" << endl;

            // Take flight from user
            cout << "\nSelect the flight: ";
            cin >> chooseFlight;

            // Check which flight user has select and store flight charges
            if (chooseFlight == 1)
            {
                flightCharges = 70000;
                cout << "\n____________You have successfully booked the flight EUR - 398________________" << endl;
                cout << "            NOTE: You can go back to menu and take your ticket" << endl;
            }
            else if (chooseFlight == 2)
            {
                flightCharges = 80000;
                cout << "\n____________You have successfully booked the flight EUR - 338________________" << endl;
                cout << "            NOTE: You can go back to menu and take your ticket" << endl;
            }
            else
            {
                // If user entered invalid key then flight() function run again
                cout << "You are entered invalid key, Please try again! " << endl;
                cout << endl;
                flights();
            }
            // For go back to Main menu
            cout << "\nPress 1 to go back to Main menu: " << endl;
            cin >> backMainmenu;
            if (backMainmenu == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
    }
};

float Registration::flightCharges;
int Registration::chooseCountry;

// This is Ticket class for display Customer details
class Ticket : public Registration, Details
{
public:
    void Bill()
    {
        string destination;
        ofstream out("records.txt"); // Detail store in records.txt file
        {
            out << "\n";
            out << "_________USA Airlines__________" << endl;
            out << "   _________Ticket___________" << endl;
            out << "     _____________________" << endl;
            out << "\n";
            out << "Customer ID: " << Details::id << "\n";
            out << "Customer Name: " << Details::name << "\n";
            out << "Customer Gender: " << Details::gender << "\n";
            out << endl;

            // Check which country user have selected
            if (Registration::chooseCountry == 1)
            {
                destination = "Dubai";
            }
            else if (Registration::chooseCountry == 2)
            {
                destination = "Canada";
            }
            else if (Registration::chooseCountry == 3)
            {
                destination = "USA";
            }
            else if (Registration::chooseCountry == 4)
            {
                destination = "UK";
            }
            else if (Registration::chooseCountry == 5)
            {
                destination = "Australia";
            }
            else if (Registration::chooseCountry == 6)
            {
                destination = "Europe";
            }
            // Print destination and flight cost
            out << "Destination:\t\t" << destination << endl;
            out << "Flight cost: \t\t" << Registration::flightCharges << endl;
        }
        out.close(); // close file
    }
    void displayBill()
    {
        ifstream in("records.txt"); // for print all details from records.txt
        {
            if (!in)
            {
                cout << "File error!";
            }
            while (!in.eof())
            {
                in.getline(arr, 100);
                cout << arr << endl;
            }
        }
        in.close(); // close file
    }
};

void mainMenu()
{
    int option;
    int backMainmenu;

    cout << "\n\t              U  S  A    A i r l i n e  "
         << endl;
    cout << "\t_____________________Main Menu___________________" << endl;
    cout << "\t_________________________________________________" << endl;
    cout << "\t|\t\t\t\t\t\t|" << endl;
    cout << "\t|\t 1. Add the Customer Details            |" << endl;
    cout << "\t|\t 2. Flight Registration                 |" << endl;
    cout << "\t|\t 3. Ticket and Charges                  |" << endl;
    cout << "\t|\t 4. Exit                                |" << endl;
    cout << "\t|\t\t\t\t\t\t|" << endl;
    cout << "\t_________________________________________________" << endl;

    // Choose the option
    cout << "\nEnter the choice: ";
    cin >> option;

    // This is above class Objects
    Details d;
    Registration r;
    Ticket t;

    switch (option)
    {
    // add customer details
    case 1:
        cout << "\n_________________Customers Details_________________\n"
             << endl;
        d.information();
        cout << "Press 1 to go back to Main Menu ";
        cin >> backMainmenu;

        if (backMainmenu == 1)
        {
            mainMenu();
        }
        else
        {
            mainMenu();
        }
        break;

    // Book flight
    case 2:
        cout << "_________________Book Flight________________\n"
             << endl;
        r.flights();
        break;

    // Get Ticket
    case 3:
        cout << "_________________GET YOUR TICKET_________________\n"
             << endl;
        t.Bill();
        cout << "Note: Your ticket is printed, you can collect it \n"
             << endl;
        cout << "1. Display your ticket press 1: ";
        cin >> backMainmenu;

        if (backMainmenu == 1)
        {
            t.displayBill();
            cout << "Press 1 to go back to Main menu: ";
            cin >> backMainmenu;
            if (backMainmenu == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
        }
        else
        {
            mainMenu();
        }
        break;

    // Exit
    case 4:
        cout << "\n\t_________________THANK YOU__________________\n"
             << endl;
        exit(1);
        break;

    // If user entered invalid key then Main menu call again
    default:
        cout << "Invaild input, Please try again !\n"
             << endl;
        mainMenu();
    }
}

int main()
{
    // This is Management class Object
    Management Mobj;
    return 0;
}