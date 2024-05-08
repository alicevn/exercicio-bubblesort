#include <iostream>

using namespace std;

int main(){
    
    int vetor[5] = {2, 4, 1, 7, 5};
    int troca;
    
    cout<<"Vetor desordenado: ";
    for(int i = 0; i<5; i++){
        cout<<vetor[i] << "|";
    }
    
    for(int i = 0; i< 5; i++){
        
        for(int j = 0; j<4; j++){
            if(vetor[j] > vetor[j + 1]){
                troca = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = troca;
            }
        }
    }
    cout<<endl;
    
    cout<<"Vetor ordenado: ";
    for(int i = 0; i< 5; i++){
        cout<< vetor[i] << "|";
    }
    return 0;
}