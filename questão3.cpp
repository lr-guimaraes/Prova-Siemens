#include <iostream>
#include <string>
#include <ctype.h>


char ConcatERemove(std::string s, std::string t,int k){
    int menor, maior, resposta;
    bool key_1 = false;
    bool key_2 = false;

    for (int i = 0; i < s.length(); i++ ){
        if(isalpha(s.at(i)) && (islower(s.at(i))))
            key_1 = true;
    }
    for (int i = 0; i < t.length(); i++ ){
        if(isalpha(t.at(i)) && (islower(t.at(i))))
            key_2 = true;
    }
    if((key_1 && key_2) == true) {

        if ((s.size() >= 1 && s.size()<=100)){
            printf("String S esta fora dos parametros");
        }
        if ((t.size() >= 1 && t.size()<=100)){
            printf("String t esta fora dos parametros");
        }
        if(s.size() > t.size()){
            maior = s.size();
            menor = t.size();
        }
        else if(s.size() < t.size()){
            maior = t.size();
            menor = s.size();
        }else{
            menor = t.size();
            maior = t.size();
        }
        //Calculo operações
        if((maior - menor) <= k){
            resposta = 1;
        }else if((maior - menor) <= 0){
            resposta = 1;
        }else{
            resposta = 2;
        }
        if(resposta == 1){
            std::cout <<resposta;   
        }
    }    
}

int main() {
    std::string s = "blablablabla";
    std::string t = "blablablacde";
    int k = 8;
    ConcatERemove(s, t, k);
}