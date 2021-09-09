#include <iostream>
#include <Windows.h>
#include <string>
#include <fstream>

  ///////////////////////////////
 // #include <ThickAnimeGirl> // 
///////////////////////////////

using namespace std;

int main()
{
    //--------MAIN--------\\

    string firstName; 
    string lastName; 
    string gender; 
    string languagesSpoken; 
    string postcode;
    string houseNumber;
    string streetName;
    string dob; 
    string state; 
    string country; 
    string ethnicity; 
    string mugShot; 
    string occupation; 
    string alias; 
    string age; 
    string instagram; 
    string facebook; 
    string twitter; 
    string discord; 
    string email; 
    string website; 
    string skype; 
    string steam; 
    string youtube; 
    string twitch; 
    string passwords; 
    string usernames; 
    string phone; 
    string reason; 
    string ISP; 
    string IP; 

    //--------DAD--------\\

    string dad;
    string dadNumber;
    string dadDob;
    string dadHeight;
    string dadWeight;
    string dadMarriedSince;
    string dadAddressHistory;
    string dadUsernames;
    string dadFacebook;
    string dadPasswords;
    string dadEmails;

    //--------MOM--------\\

    string mom;
    string momNumber;
    string momDob;
    string momHeight;
    string momWeight;
    string momMarriedSince;
    string momAddressHistory;
    string momUsernames;
    string momFacebook;
    string momPasswords;
    string momEmails;

    cout << "\n\n  Welcome to the TrapLovers.cc automatic Dox Reformat exe for all your doxxing needs.\n\n";
    cout << "  First Name: ";
    cin >> firstName;
    cout << "  Last Name: ";
    cin >> lastName;
    cout << "  Year Of Birth: ";
    cin >> dob;
    cout << "  Age: ";
    cin >> age;
    cout << "  Gender: ";
    cin >> gender;
    cout << "  Mug Shot: ";
    cin >> mugShot;
    cout << "  Main Alias: ";
    cin >> alias;
    cout << "  Street Number: ";
    cin >> houseNumber;
    cout << "  Street Name: ";
    cin >> streetName;
    cout << "  Country: ";
    cin >> country;
    cout << "  State: ";
    cin >> state;
    cout << "  Postcode: ";
    cin >> postcode;
    cout << "  Skin Colour: ";
    cin >> ethnicity;
    cout << "  Main Language Spoken: ";
    cin >> languagesSpoken;
    cout << "  Occupation: ";
    cin >> occupation;
    cout << "  Phone Number: ";
    cin >> phone;
    cout << "  IP: ";
    cin >> IP;
    cout << "  ISP: ";
    cin >> ISP;
    cout << "  Usernames: ";
    cin >> usernames;
    cout << "  Passwords: ";
    cin >> passwords;

    cout << "\n";

    cout << "  Facebook: ";
    cin >> facebook;
    cout << "  Youtube: ";
    cin >> youtube;
    cout << "  Twitter: ";
    cin >> twitter;
    cout << "  Websites: ";
    cin >> website;
    cout << "  Email: ";
    cin >> email;
    cout << "  Steam: ";
    cin >> steam;
    cout << "  Twitch.tv: ";
    cin >> twitch;
    cout << "  Skype: ";
    cin >> skype;
    cout << "  Instagram: ";
    cin >> instagram;
    cout << "  Discord: ";
    cin >> discord;
    
    //--------DAD--------\\

    cout << "\n";

    cout << "  Dad's Name: ";
    cin >> dad;
    cout << "  Dad's Number: ";
    cin >> dadNumber;
    cout << "  Dad's Height: ";
    cin >> dadHeight;
    cout << "  Dad's Weight: ";
    cin >> dadWeight;
    cout << "  Dad's Married Since: ";
    cin >> dadMarriedSince;
    cout << "  Dad's Address History: ";
    cin >> dadAddressHistory;
    cout << "  Dad's Usernames: ";
    cin >> dadUsernames;
    cout << "  Dad's Facebook: ";
    cin >> dadFacebook;
    cout << "  Dad's Passwords: ";
    cin >> dadPasswords;
    cout << "  Dad's Emails: ";
    cin >> dadEmails;

    //--------MOM--------\\

    cout << "\n";

    cout << "  Mom's Name: ";
    cin >> mom;
    cout << "  Mom's Number: ";
    cin >> momNumber;
    cout << "  Mom's Height: ";
    cin >> momHeight;
    cout << "  Mom's Weight: ";
    cin >> momWeight;
    cout << "  Mom's Married Since: ";
    cin >> momMarriedSince;
    cout << "  Mom's Address History: ";
    cin >> momAddressHistory;
    cout << "  Mom's Usernames: ";
    cin >> momUsernames;
    cout << "  Mom's Facebook: ";
    cin >> momFacebook;
    cout << "  Mom's Passwords: ";
    cin >> momPasswords;
    cout << "  Mom's Emails: ";
    cin >> momEmails;




    ofstream myfile;
    myfile.open("dox.txt");

    // reason 

    myfile << "" + reason;

    // victim info

    myfile << "First Name: " + firstName + "\n";
    myfile << "Last Name: " + lastName + "\n";
    myfile << "Date Of Birth: " + dob + "\n";
    myfile << "Age: " + age + "\n";
    myfile << "Gender: " + gender + "\n";
    myfile << "Mug Shot: " + mugShot + "\n";
    myfile << "Main Alias: " + alias + "\n";
    myfile << "Street Number: " + houseNumber + "\n";
    myfile << "Stree Name: " + streetName + "\n";
    myfile << "Country: " + country + "\n";
    myfile << "State: " + state + "\n";
    myfile << "Postcode: " + postcode + "\n";
    myfile << "Ethnicity: " + ethnicity + "\n";
    myfile << "Main Languages: " + languagesSpoken + "\n";
    myfile << "Occupation: " + occupation + "\n";
    myfile << "Phone Number: " + phone + "\n";
    myfile << "IP Address: " + IP + "\n";
    myfile << "Internet Service Provider: " + ISP + "\n";
    myfile << "Known Usernames: " + usernames + "\n";
    myfile << "Known Passwords: " + passwords + "\n";

    myfile << "\n";

    myfile << "Facebook: " + facebook + "\n";
    myfile << "Youtube: " + youtube + "\n";
    myfile << "Twitter: " + twitter + "\n";
    myfile << "Websites: " + website + "\n";
    myfile << "Email: " + email + "\n";
    myfile << "Steam: " + steam + "\n";
    myfile << "Twitch.tv: " + twitch + "\n";
    myfile << "Skype: " + skype + "\n";
    myfile << "Instagram: " + instagram + "\n";
    myfile << "Discord: " + discord + "\n";

    myfile << "\n";

    // victims dad

    myfile << "Dad's Name: " + dad + "\n";
    myfile << "Phone Number: " + dadNumber + "\n";
    myfile << "Date Of Birth: " + dadDob + "\n";
    myfile << "Height: " + dadHeight + "\n";
    myfile << "Weight: " + dadWeight + "\n";
    myfile << "Wedding Date: " + dadMarriedSince + "\n";
    myfile << "Address History: " + dadAddressHistory + "\n";
    myfile << "Known Usernames: " + dadUsernames + "\n";
    myfile << "Known Passwords: " + dadPasswords + "\n";
    myfile << "Facebook: " + dadFacebook + "\n";
    myfile << "Emails: " + dadEmails + "\n";

    myfile << "\n";

    // victims mom

    myfile << "Mom's name: " + mom + "\n";
    myfile << "Phone Number: " + momNumber + "\n";
    myfile << "Date Of Birth: " + momDob + "\n";
    myfile << "Height: " + momHeight + "\n";
    myfile << "Weight: " + momWeight + "\n";
    myfile << "Wedding Date: " + momMarriedSince + "\n";
    myfile << "Address History: " + momAddressHistory + "\n";
    myfile << "Known Usernames: " + momUsernames + "\n";
    myfile << "Known Passwords: " + momPasswords + "\n";
    myfile << "Facebook: " + momFacebook + "\n";
    myfile << "Emails: " + momEmails + "\n";

    myfile.close();
}