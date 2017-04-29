/*CSCI261: Final Project
*
*Author: Dustin Huntsman
*in collaboration with Brian Gray
*
*28 Apr 2017
*
*
*/

#include "Mineral.h"

/*This is a work in progress, some main functions are for testing only!*/


//write to file function
void writeToFile() {
    fstream MinDat("mineral_data.txt");

    if (MinDat.fail()) {
        cerr << "File did not open";             
    }





    MinDat.close();
}

//read from file function
void readFile() {
    ifstream MinDat("mineral_data.txt");
    
    if (MinDat.fail()) {
        cerr << "File did not open";
    }




    MinDat.close();
}


//check for corruption function
//bool checkFunc() {
//    //see if backup exists, is so load backup
//    //if no backup, load file
//    //if no file, skip file load
//
//}

//test function
void testFile(){

    //case 1: there is a backup file

    //case 2: no backup, there is original file

    //case 3: no file

}

void createBackup() {
    ifstream MinDat("mineral_data.txt");
    ofstream MinDat_B("mineral_data_backup.txt");

    if (MinDat.fail()) {
        cerr << "File did not open." << endl;
    }
    if (MinDat_B.fail()) {
        cerr << "File did not open." << endl;
    }
    while (!MinDat.eof()) {
        
        string tempStore;
        MinDat >> tempStore;
        MinDat_B << tempStore;
    }

}

int main() {


    //test block for file processes
    cout << "Starting file backup." << endl;
    
    createBackup();

	Mineral testMineral;
	Mineral newMineral(1, "conchoidal", "brown", "white", "vitreous", "euhedral", "H2O");

	for (int i = 0; i < 6; ++i) {
		cout << testMineral.getFeature(i) << " ";
		cout << newMineral.getFeature(i) << endl;
		}
	cout << testMineral.getHardness() << " " << newMineral.getHardness() << endl;
	cout << testMineral.getCleavage().getQuality() << " " << testMineral.getCleavage().getQuantity() << " " << testMineral.getCleavage().getOrientation().at(0) << endl;

    //end test block


	system("Pause");
	return 0;
}