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
