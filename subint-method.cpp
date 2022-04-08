//make your own substr method for integers

#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::to_string;
using std::stoi;

int numberLength(int number);
int subint(int number, int pos, int length);

int main(){
    
    int x = 56742387;

    cout << "With string method: " << stoi(to_string(x).substr(2,4)) << "\n";
    cout << "With our method: " << subint(x,2,4) << "\n"; //output must: 7423
}

int subint(int number, int pos, int length){
    
    int divider=1;
    for(int i=0;i<numberLength(number)-pos;i++){
        divider *= 10;
    }
    
    int trimmed = number%divider;
    int trimmedLength = numberLength(trimmed);
    
    for(int i=0;i<trimmedLength-length;i++){
        trimmed = trimmed / 10;
    }
    
    return trimmed; 
    
    //   <- algorithm -> 
    //   samp:15212  
    //   pos: 1 -> %10000 
    //   pos: 2 -> %1000
    //   pos: 3 -> %100
    //   ...
    //   ...
    //   so => %1( (number length - position)*0 )
}

int numberLength(int number){
    int length = 0;
    while(number!=0){
        number = number / 10;
        length++;
    }
    return length;
}