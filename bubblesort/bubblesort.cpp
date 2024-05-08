#include <iostream>

using namespace std;

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    
    int vetor[5] = {2, 4, 1, 7, 5};
    bool ordenado = false;
    
    cout<<"Vetor desordenado: ";
    for(int i = 0; i<5; i++){
        cout<<vetor[i] << "|";
    }
    
    for(int i = 0; i< 5 && !ordenado; i++){
        ordenado = true;
        
        for(int j = 0; j<4-i; j++){
            if(vetor[j] > vetor[j + 1]){
                swap(vetor[j], vetor[j +1]);
                ordenado = false;
            }
        }
        if (ordenado) //essa condiçao interrompe o processo de ordenação quando já está ordenado
            break;
    }
    cout<<endl;
    
    cout<<"Vetor ordenado: ";
    for(int i = 0; i< 5; i++){
        cout<< vetor[i] << "|";
    }
    return 0;
}
