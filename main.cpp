#include <iostream>

using namespace std;

int main(){
    int inputAmount = 332; // Stores the number of input batches (x-coordinate, character, and y-coordinate).
    int rowArray[inputAmount]; // Array to store x-coordinate values.
    int colArray[inputAmount]; // Array to store y-coordinate values.
    string charArray[inputAmount]; // Array to store characters to be printed.
    int maxX; // Holds the highest x-coordinate value.
    int maxY; // Holds the highest y-coordinate value.
    int xHolder; // Temporary variable to hold x-coordinate values.
    int yHolder; // Temporary variable to hold y-coordinate values.
    string charHolder; // Temporary variable to hold character values.

    // Determines maximum x and y-coordinate values.
    cin >> xHolder;
    cin >> charHolder;
    cin >> yHolder;
    maxX = xHolder;
    maxY = yHolder;
    rowArray[0] = xHolder;
    colArray[0] = yHolder;
    charArray[0] = charHolder;
    
    for (int j = 1; j < inputAmount; ++j){
        cin >> xHolder;
        cin >> charHolder;
        cin >> yHolder;
        if (xHolder > maxX){
            maxX = xHolder;
        }
        if (yHolder > maxY){
            maxY = yHolder;
        }
        rowArray[j] = xHolder;
        colArray[j] = yHolder;
        charArray[j] = charHolder;
    }
    
    string finalArray[maxX][maxY];
    
    // Fills the final array with whitespaces.
    for (int fillRow = 0; fillRow <= maxX; ++fillRow){
        for (int fillCol = 0; fillCol <= maxY; ++fillCol){
	        finalArray[fillRow][fillCol] = ' ';
        }
    }
    
    // Places inputted characters into the appropriate array indices.
    for (int placeRow = 0; placeRow <= maxX; ++placeRow){
        for (int placeCol = 0; placeCol <= maxY; ++placeCol){
            for (int f = 0; f < inputAmount; ++f){
                if (placeRow == rowArray[f] && placeCol == colArray[f]){
                    finalArray[placeRow][placeCol] = charArray[f];
                }
            }
        }
    }
    
    // Outputs final array.
    for (int col = 0; col <= maxY; ++col){
        for (int row = 0; row <= maxX; ++row){
            cout << finalArray[row][col];
        }
        cout << endl;
    }
    
}