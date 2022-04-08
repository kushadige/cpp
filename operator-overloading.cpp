#include <iostream>
#include <string>
using std::cout;
using std::cin;

class RasyonelSayi{
private:
    int pay,payda;
public:   
    RasyonelSayi();
    RasyonelSayi(int x,int y);
    RasyonelSayi operator+(const RasyonelSayi &rs);
    std::string toString();
    friend std::ostream& operator<<(std::ostream &out, RasyonelSayi &rs);
    friend void operator>>(std::istream &in, RasyonelSayi &rs);
};

std::ostream& operator<<(std::ostream &out, RasyonelSayi &rs){
    out << rs.pay << "/" << rs.payda;
    return out;
}

int main(){
    RasyonelSayi s1(1,2);
    RasyonelSayi s2(2,3);
    // "<<" overloading
    cout << s1 << "\n";
    
    // "+" overloading
    RasyonelSayi sum = s1 + s2;
    cout << sum;

    RasyonelSayi s3;
    // ">>" overloading
    cin >> s3;
    
    cout << "rasyonel sayi: " << s3;
}
//class functions
RasyonelSayi::RasyonelSayi(){};
RasyonelSayi::RasyonelSayi(int x,int y){
    pay = x;
    payda = y;
}

RasyonelSayi RasyonelSayi::operator+(const RasyonelSayi &rs){
    return RasyonelSayi(pay*rs.payda+payda*rs.pay, payda*rs.payda);
}

std::string RasyonelSayi::toString(){
    return std::to_string(pay) + "/" + std::to_string(payda);
}

void operator>>(std::istream &in, RasyonelSayi &rs){
    /* --if you want to ask numerator and denominator you can use this code below.
    int x,y;
    
    cout <<"pay: ";
    in >> x;
    cout <<"payda: ";
    in >> y;
    
    rs.pay = x;
    rs.payda = y;
    */
    // --also if you want to get inputs like "3/4" then you can use this--
    std::string num; //3/4

    in >> num;

    int index = num.find('/'); //the method "find" returns integer or you can use size_t also..
    
    if(index == 0){ //if you used size_t type above you should replace condition to ( index == std::string::npos )
        rs.pay = std::stoi(num);
        rs.payda = 1;
        
        return; // exits function if the condition is valid
    }
      
    rs.pay = std::stoi( num.substr(0,index) );
    rs.payda = std::stoi( num.substr(index+1) );
}