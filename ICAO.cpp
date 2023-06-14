/***
Program Name: ICAO.cpp
Programmer:   Kaitlyn Molaison
Description:  Write, compile, and run a C++ program that meets the following 
requirements:
1. Ask the user for a name or word
2. Then converts the name or word to the International Civil Aviation
Organization Alphabet (ICAO).
3. Must use your own algorithm
4. Must use modularity
5. Must use proper documentation.
6. Must use only techniques and libraries used in this course and book
7. The program must have an interactive menu, meaning the program
    must keep asking the user for a name or word until user exits program
8. The program should exit when the user selects the exit choice
9. The program must save the data to an output text file in appending mode. Call the file ICAO.txt
10. Can not use arrays
11. The output must be clearly labeled and neatly formatted
12. The program must work as shown on the demo. Please review the recorded 
lecture.
***/
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

void wordToICAO();
void userMenu();
void appendToTextFile(string);
int main(int argc, char** argv)
{
   userMenu();
   wordToICAO();
   appendToTextFile("");
   cout << endl << endl;

    return 0;
 } // End of main function() 

/***
Method Name:  userMenu()
Parameter(s): none
Return Type:  void
Programmer:   Kaitlyn Molaison
Description:  This method shows prompts a user to pick a choice to continue on
with the program.
***/
void userMenu()

{
    int choice;
    do
    {
    cout << "  ___________________________________"  << endl;
    cout << " |This program takes user input of a |" << endl;
    cout << " |word or name and displays the word |" << endl;
    cout << " |or name in the International Civil |" << endl;
    cout << " |Aviation Organization Alphabet     |" << endl;
    cout << " |-----------------------------------|" << endl;
    cout << " |                  MENU             |" << endl;
    cout << " |      0: Quit Program              |" << endl;
    cout << " |      1: Print to ICAO             |" << endl;
    cout << " |-----------------------------------|" << endl;
    cout << " |      Enter your choice:           |" << endl;
    cin >> choice;
    
    
    
    switch(choice)
    {
    case 0: std::cout << "Exiting Program" << endl;
         choice = 0;
         break;
         
         
    case 1: wordToICAO();
         break;
    default: cout << "Invalid choice, try again!" << endl;
    }
    
    }
         while( choice != 0 );
         
} // End of userMenu()

/***
Method Name:  wordToICAO()
Parameter(s): none
Return Type:  void
Programmer:   Kaitlyn Molaison
Description:  This method prompts the user to input a word or name and then 
the program will print the ICAO of the word or name entered.
***/
void wordToICAO()
{
    string Word_Input;            // Disclose the varibles you will use
    char Letters;
    int i = Letters;
    string Wrd_Otpt;
  { 

    cout<< " Enter a word or name: ";    // Ask the user to enter a word or name
    cin>> Word_Input;

       for(int i = 0; i < Word_Input.length(); i++)
    {
        // characters must be processed one at a time
        Letters = Word_Input.at (i);

        switch(Letters)
        {
      case 'A': case 'a':
        Wrd_Otpt += " Alpha";
        break;
      case 'B': case 'b':
        Wrd_Otpt += " Bravo";
        break;
      case 'C': case 'c':
        Wrd_Otpt += " Charlie";
        break;
      case 'D': case 'd':
        Wrd_Otpt += " Delta";
        break;
      case 'E': case 'e':
        Wrd_Otpt += " Echo";
        break;
      case 'F': case 'f':
        Wrd_Otpt += " Foxtrot";
        break;
      case 'G': case 'g':
        Wrd_Otpt += " Golf";
          break;
      case 'H': case 'h':
        Wrd_Otpt += " Hotel";
        break;
      case'I': case 'i':
        Wrd_Otpt += " India";
        break;
      case 'J': case 'j':
        Wrd_Otpt += " Juliet";
        break;
      case 'K': case 'k':
        Wrd_Otpt += " Kilo";
        break;
      case 'L': case 'l':
        Wrd_Otpt += " Lima";
        break;
      case 'M': case 'm':
        Wrd_Otpt += " Mike";
        break;
      case 'N': case 'n':
        Wrd_Otpt += " November";
          break;
      case 'O': case 'o':
        Wrd_Otpt += " Oscar";
        break;
      case'P': case 'p':
        Wrd_Otpt += " Papa";
        break;
      case 'Q': case 'q':
        Wrd_Otpt += " Quebec";
        break;
      case 'R': case 'r':
        Wrd_Otpt += " Romeo";
        break;
      case 'S': case 's':
        Wrd_Otpt += " Sierra";
        break;
      case 'T': case 't':
        Wrd_Otpt += " Tango";
        break;
      case 'U': case 'u':
        Wrd_Otpt += " Uniform";
          break;
     case 'V': case 'v':
        Wrd_Otpt += " Victor";
         break;
      case 'W': case 'w':
        Wrd_Otpt += " Whiskey";
        break;
      case'X': case 'x':
        Wrd_Otpt += " X-ray";
        break;
      case 'Y': case 'y':
        Wrd_Otpt += " Yankee";
        break;
      case 'Z': case 'z':
        Wrd_Otpt += " Zulu";
        break;
    }
    }

    //Display the ICAO words
    cout<< " Phonetic version is:" << Wrd_Otpt<<endl;
    cout << endl << endl;

  } 
 } // End of wordToICAO()

/***
Method Name:  ICAOtxt.cpp
Parameter(s): none
Return Type:  void
Programmer:   Kaitlyn Molaison
Description:  This method prompts the user to input a word or name and then 
the program will print the ICAO of the word or name entered.
***/
void appendToTextFile(string)
{
    string Wrd_Otpt;
    string filename("ICAO.txt");
    ofstream file_out;
  
    file_out.open(filename, std::ios_base::app);
  { 
    file_out << Wrd_Otpt << endl;
    cout << endl;
  }
}
