/* Project #: CSProject1
 * Author: Zach Oryszak-Ley
 * Due: 9/14/2011
 * Description
 *	Part 1: Introduction to Programming
 * 	Part 2: Commenting
 * 	Part 3: Escape Sequences
 *	Part 4: Strings
 *	Part 5: Variables
 */
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
//Part 1: Introduction to Programming
    cout << "Part 1: Introduction to Programming\n\n";
    //cout statement saying desired statements on two lines.
    cout << "Hello World!\n" << "Ready or not, here I come!\n\n\n";
    
    
    
//Part 2: Commenting
    cout <<"Part 2: Commenting\n\n";
    //Displaying "one two three four five"
    cout << "one two three four five.\n";
    //Displaying "un deux trois quatre cinq"
    cout << "un deux trois quatre cinq.\n";
    //Displaying "uno dos tres cuatro cinc"
    cout << "uno dos tres cuatro cinc.\n\n\n";
    
    
    
//Part 3: Escape Sequences
    cout << "Part 3\n\n";
    //Setting up the title
    cout <<"////////////////////\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n";
    cout <<"=\t    Names and Places\t       =\n";
    cout <<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\////////////////////\n";
    //Labels
    cout <<"Name \t\t Hometown \t\t Major\n";
    cout <<"==== \t\t ======== \t\t =====\n";
    //Information
    cout <<"Zach\t\tMineral City\t\tComputer Engineering\n";
    cout <<"Michael\t\tBolivar\t\t\tMechanical Engineering\n";
    cout <<"Tristan\t\tMineral City\t\tPhysics\n";
    cout <<"Tyler\t\tHolmesville\t\tComputer Science\n";
    cout <<"Mike\t\tCanton\t\t\tInternational Politics\n\n\n";
    
    
    
//Part 4: Strings
    cout << "Part 4\n";
	//First Line
	string w= "Roses are red\n";
	//Second Line
	string x= "Violets are blue\n" ;
 	//Third Line
	string y= "Some poems rhyme\n";
	//Fourth Line
	string z= "But not this one\n\n\n" ;
	cout << w+x+y+z;
        
//Part 5: Variables
        cout << "Part 5: Variables\n";
        //Names as strings.
        string A= "Erik\t\t";
        string B= "Marrianne\t";
        string C= "Sara\t\t";
        string D= "Bob\t\t";
        string E= "Cynthia\t\t";
        //Class scores initialized
        int ClassA;
        int ClassB;
        int ClassC;
        int ClassD;
        int ClassE;
        //Class Score Values
        ClassA=100;
        ClassB=75;
        ClassC=86;
        ClassD=62;
        ClassE=78;
        //Lab scores initialized
        int LabA;
        int LabB;
        int LabC;
        int LabD;
        int LabE;
        //Lab Score Values
        LabA=100;
        LabB=90;
        LabC=83;
        LabD=71;
        LabE=29;
        //Average Calculation
        double AveA;
        double AveB;
        double AveC;
        double AveD;
        double AveE;
        AveA= (ClassA+LabA)/2;
        AveB= (ClassB+LabB)/2;
        AveC= (ClassC+LabC)/2;
        AveD= (ClassD+LabD)/2;
        AveE= (ClassE+LabE)/2;
        //Chart Display
        cout << "Name \t   Class Score \t Lab Score  Average Score\n";
        cout << "==== \t   =========== \t =========  =============\n";
        //Data
        cout << A << ClassA << setw(10) << LabA << setw(10); 
        cout <<setw(10) << AveA << endl;
        cout << B << ClassB << setw(10) << LabB << setw(10);
        cout <<setw(10) << AveB << endl;
        cout << C << ClassC << setw(10) << LabC << setw(10);
        cout <<setw(10) << AveC << endl;
        cout << D << ClassD << setw(10) << LabD << setw(10);
        cout <<setw(10) << AveD << endl;
        cout << E << ClassE << setw(10) << LabE << setw(10);
        cout <<setw(10) << AveE << endl << endl << endl;
        int f = 4;
        int r;
        if (f < 3)
            r=1;
        else 
            r=2;
        cout << r;
        
        
//Extra Credit
 //Big name
    cout << "ZZZZZZZZZZZZZZZZZZZ\t \t  AAA\t\t       OOO\n";
    cout << "ZZZZZZZZZZZZZZZZZZZ\t \t AAAAA\t\t     OOO OOO\n";
    cout << "\t     ZZZZ\t        AAA AAA\t\t    OOO    OOO\n";
    cout << "\t   ZZZZ\t\t       AAA   AAA\t   OOO      OOO\n";
    cout << "\t ZZZZ\t\t      AAA     AAA\t  OOO        OOO\n";
    cout << "       ZZZZ\t\t     AAAAAAAAAAAAA\t  OOO        OOO\n";
    cout << "     ZZZZ\t\t    AAAAAAAAAAAAAAA\t   OOO      OOO\n";
    cout << "   ZZZZ\t\t\t   AAA\t\t AAA\t    OOO    OOO\n";
    cout << "ZZZZZZZZZZZZZZZZZZZ\t  AAA\t\t  AAA\t     OOO OOO\n";
    cout << "ZZZZZZZZZZZZZZZZZZZ\t AAA\t\t   AAA\t       OOO\n";          
    return 0;
}