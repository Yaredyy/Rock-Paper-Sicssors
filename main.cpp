//
//  main.cpp
//  Rock Paper Sicssors
//
//  Created by yared yohannes on 12/14/21.
//

#include <iostream>
using namespace std;

int choice1=0;
int choice2=0;
int winner=0;
int rounds=1;

void winners(){
    
    if(choice1 == 1){
        if(choice2 ==2){
            winner =1;
        }
        else if(choice2 ==3){
            winner =2;
        }
    }
                
    if(choice1 == 2){
        if(choice2 ==1){
            winner =2;
        }
        else if(choice2 ==3){
            winner =1;
        }
    }

    if(choice1 == 3){
        if(choice2 ==2){
            winner =2;
        }
        else if(choice2 ==1){
            winner =1;
        }
    }
    
}


int main(){
    
    
    do{
       cout << "1. Rock\n2. Sicssors\n3. Paper\nPlayer one please choose your option: ";
       cin >> choice1;
       
       cout << "1. Rock\n2. Sicssors\n3. Paper\nPlayer two please choose your option: ";
        cin >> choice2;
        
        winners();
        
        if(winner==1){
            cout << "\nPlayer one is the winner!\n\n";
            
        }
        else if(winner ==2){
            cout << "\nPlayer two is the winner!\n\n";
        }
       
    }while(winner==0);
    
    
}
