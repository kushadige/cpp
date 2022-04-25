#include <iostream>
#include <fstream>

using std::ifstream;
using std::cout;
using std::string;
using std::getline;
using std::to_string;

void reverse_string(string &s){
    int len = s.length();
    
    for(int i=0;i<(len/2);i++){
        char temp = s[i];
        s[i] = s[len-i-1];
        s[len-i-1] = temp;
    }
}

string decimal_to_binary(int a){
    string binary="";
    while(a!=0){
        binary += to_string(a%2);
        a /= 2;
    }
    while(binary.length()!=8){
        binary += "0";
    }
    reverse_string(binary);
    return binary;
}

int main(){
    
    ifstream in;
    string satir;
    string binary_code="";
    int satirsayisi=0;
    int harfsayisi=0;
    in.open("girdi.txt");
    
    while(getline(in, satir)){
        int i = 0;
        while(satir[i] != '\0'){
            binary_code += decimal_to_binary((int)satir[i]);
            harfsayisi++;
            i++;
        }
        satirsayisi++;
    }
    
    cout << "satir: " << satir << "\n";
    cout << "satir sayisi: " << satirsayisi << "\n";
    cout << "harf sayisi: " << harfsayisi << "\n";
    
    
    cout << "\n---BINARY CODE---\n";
    cout << binary_code << "\n";
    
    in.close();
}