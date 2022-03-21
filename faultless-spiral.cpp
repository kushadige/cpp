#include <iostream>

using namespace std;

int main(){
    
    int x;
    while(true){
        cout << "enter an integer" << endl;
        cin >> x;
        if(x==-1)
            break;
        int temp;
        
        if(x%2==1){
            temp = x/2;
            //first
            for(int m=0;m<x;m++){
                    cout << "*";
                }cout << "\n";
            for(int m=0;m<x-1;m++){
                    cout << " ";
                }cout << "*\n";
            
            //half-size
            for(int i=0;i<temp-1;i++){
                
                if(i%2==0){
                    
                    for(int k=0;k<(i/2);k++){
                        cout << "*";
                        cout << " ";
                    }
                    
                    for(int j=0;j<(x-2)-(i*2);j++){
                        cout << "*";
                    }
                    
                    for(int k=0;k<(i/2);k++){
                        cout << " ";
                        cout << "*";
                    }
                    cout << " ";
                    cout << "*";
                    cout << "\n";    
                }
                else {
                    for(int k=0;k<(i/2)+1;k++){
                        cout << "*";
                        cout << " ";
                    }
                    
                    for(int j=0;j<(x-4)-(i*2);j++){
                        cout << " ";
                    }
                    
                    for(int k=0;k<(i/2)+1;k++){
                        cout << " ";
                        cout << "*";
                    }
                    cout << " ";
                    cout << "*";
                    cout << "\n";
                }         
            }
            
            //after half-size
            if(temp%2==1){
                
                for(int i=0;i<temp;i++){
                    
                    if(i%2==0){
                        
                        for(int k=0;k<(temp/2)-(i/2);k++){
                            cout << "*";
                            cout << " ";
                        }
                        
                        for(int j=0;j<3+(i*2);j++){
                            cout << "*";
                        }
                        
                        for(int k=0;k<(temp/2)-(i/2);k++){
                            cout << " ";
                            cout << "*";
                        }
                        cout << "\n";    
                    }
                    else {
                        
                        for(int k=0;k<(temp/2)-(i/2);k++){
                            cout << "*";
                            cout << " ";
                        }
                        
                        for(int j=0;j<3+((i-1)*2);j++){
                            cout << " ";
                        }
                        
                        for(int k=0;k<(temp/2)-(i/2);k++){
                            cout << " ";
                            cout << "*";
                        }
                        cout << "\n";   
                    }            
                }
            }
            else{
                //ornek temp =14
                for(int i=0;i<temp;i++){
                
                    if(i%2==0){
                        
                        for(int k=0;k<(temp/2)-(i/2);k++){
                            cout << "*";
                            cout << " ";
                        }
                        
                        for(int j=0;j<1+(i*2);j++){
                            cout << " ";
                        }
                        
                        for(int k=0;k<(temp/2)-(i/2);k++){
                            cout << " ";
                            cout << "*";
                        }
                        cout << "\n";    
                    }
                    else {
                        
                        for(int k=0;k<(temp/2)-1-(i/2);k++){
                            cout << "*";
                            cout << " ";
                        }
                        
                        for(int j=0;j<5+((i-1)*2);j++){
                            cout << "*";
                        }
                        
                        for(int k=0;k<(temp/2)-1-(i/2);k++){
                            cout << " ";
                            cout << "*";
                        }
                        cout << "\n";   
                    }            
                }
            }
            
        }
        else{
            
            //cout << "ciftler...." << endl;
            temp = x/2;
            
            
            //ilk iki satır
            for(int m=0;m<x;m++){
                    cout << "*";
                }
                cout << "\n";
            for(int m=0;m<x-1;m++){
                    cout << " ";
                }
                cout << "*\n";
            
            
            //up to half
            if(temp%2==1){
                for(int i=0;i<temp-1;i++){
                
                if(i%2==0){
                    
                    for(int k=0;k<(i/2);k++){
                        cout << "*";
                        cout << " ";
                    }
                    
                    for(int j=0;j<(x-2)-(i*2);j++){
                        cout << "*";
                    }
                    
                    for(int k=0;k<(i/2);k++){
                        cout << " ";
                        cout << "*";
                    }
                    cout << " ";
                    cout << "*";
                    cout << "\n";    
                }
                else {
                    for(int k=0;k<(i/2)+1;k++){
                        cout << "*";
                        cout << " ";
                    }
                    
                    for(int j=0;j<(x-4)-(i*2);j++){
                        cout << " ";
                    }
                    
                    for(int k=0;k<(i/2)+1;k++){
                        cout << " ";
                        cout << "*";
                    }
                    cout << " ";
                    cout << "*";
                    cout << "\n";
                }         
                }
            }
            else {
                for(int i=0;i<temp-2;i++){
                
                    if(i%2==0){
                        
                        for(int k=0;k<(i/2);k++){
                            cout << "*";
                            cout << " ";
                        }
                        
                        for(int j=0;j<(x-2)-(i*2);j++){
                            cout << "*";
                        }
                        
                        for(int k=0;k<(i/2);k++){
                            cout << " ";
                            cout << "*";
                        }
                        cout << " ";
                        cout << "*";
                        cout << "\n";    
                    }
                    else {
                        for(int k=0;k<(i/2)+1;k++){
                            cout << "*";
                            cout << " ";
                        }
                        
                        for(int j=0;j<(x-4)-(i*2);j++){
                            cout << " ";
                        }
                        
                        for(int k=0;k<(i/2)+1;k++){
                            cout << " ";
                            cout << "*";
                        }
                        cout << " ";
                        cout << "*";
                        cout << "\n";
                    }         
                }
            }
            
            //after half
            if(temp%2==1){
            
                for(int i=0;i<temp;i++){
                    if(i==0)
                        continue;
                        
                    if(i%2==0){
                        
                        for(int k=0;k<(temp/2)-(i/2);k++){
                            cout << "*";
                            cout << " ";
                        }
                            
                        for(int j=0;j<3+(i*2)-1;j++){
                            cout << "*";
                        }
                            
                        for(int k=0;k<(temp/2)-(i/2);k++){
                            cout << " ";
                            cout << "*";
                        }
                        cout << "\n";    
                    }
                    
                    else {
                            
                        for(int k=0;k<(temp/2)-(i/2);k++){
                            cout << "*";
                            cout << " ";
                        }
                            
                        for(int j=0;j<3+((i-1)*2)-1;j++){
                            cout << " ";
                        }
                            
                        for(int k=0;k<(temp/2)-(i/2);k++){
                            cout << " ";
                            cout << "*";
                        }
                        cout << "\n";   
                    }                                       
                }
            }
            else {
                for(int i=0;i<temp;i++){
                    
                    if(i%2==0){
                        
                        for(int j=0;j<(temp/2)-(i/2);j++){
                            cout << "*";
                            cout << " ";
                        }
                        
                        for(int m=0;m<i*2;m++){
                            cout << " "; 
                        }
                        
                        for(int j=0;j<(temp/2)-(i/2);j++){
                            cout << " ";
                            cout << "*";
                        }
                        cout << "\n";
                    }
                    
                    else{
                        
                        for(int k=0;k<(temp/2)-1-(i/2);k++){
                            cout << "*";
                            cout << " ";
                        }
                        for(int m=0;m<(i+1)*2;m++){
                            cout << "*";
                        }
                        for(int k=0;k<(temp/2)-1-(i/2);k++){
                            cout << " ";
                            cout << "*";
                        }
                        cout << "\n";
                    }
                    
                }//endoffor
            }
            
        }
        
        cout << "\ncikis icin -1 yazip enterleyiniz....\ndevam etmek istiyorsaniz yeni bir satir sayisi girebilirsiniz....\n";
    }//endofwhile
}