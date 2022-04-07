// DRAWING A RECTANGLE
/* structures used
 *      1.loops
 *      2.file i/o
 *      3.read arguments from command line
*/
/* parameters to be taken: filename, startpointx, startpointy, lengthx, lengthy, characterType
 * example input          : test.txt 20 10 15 5 +
 * first parameter will be file name 
 * we assume parameters are entered correctly
 * we do not do error checks
 * program will crash when we log in incorrectly.
 *
 * example output = 

file name: a.txt
x0: 20
y0: 10
x-length: 15
y-length: 10
type: .










                    ...............
                    .             .
                    .             .
                    .             .
                    .             .
                    .             .
                    .             .
                    .             .
                    .             .
                    ...............
*/

#include <fstream>
#include <string>

using std::ofstream;
using std::string;
using std::stoi;

int main(int c, char **args){
    
    string fileName = args[1];
    int x0 = stoi(args[2]);
    int y0 = stoi(args[3]);
    int xLength = stoi(args[4]);
    int yLength = stoi(args[5]);
    char type = args[6][0];
    
    
    ofstream out;
    out.open(fileName); // 
    
    out << "file name: " << fileName << "\nx0: " << x0 << "\ny0: " << y0 << "\nx-length: " << xLength << "\ny-length: " << yLength
    << "\ntype: " << type << "\n";
    
    
    //determining start point of the rectangle
    //axis-y
    for(int i=0; i < y0; i++){
        out << "\n";
    }
    //axis-x
    for(int i=0; i < x0; i++){
        out << " ";
    }
    
    
    //drawing rectangle
    //first line
    for(int i=0; i < xLength; i++){
        out << type;
    }
    out << "\n";
    
    //until last line
    for(int i=0; i < yLength-2; i++) {
        //spaces for x0
        for(int j=0; j < x0; j++){
            out << " ";
        }
        out << type;
        
        //spaces between x-length
        for(int j=0; j < xLength-2; j++){
            out << " ";
        }
        out << type;
        out << "\n";
    }
    
    //last line
    for(int i=0; i < x0; i++){
        out << " ";
    }
    for(int i=0; i < xLength; i++){
        out << type;
    }
    
    
    out.close();
    
}