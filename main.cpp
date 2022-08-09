#include <iostream>

int min(int numbers[]){
    int min = numbers[0];
    for (int i=0;i<15;++i){
        if (min>numbers[i]) min=numbers[i];
    }
    return min;
}
int dublicate(int numbers[],int min){
    int count =0;
    for (int i=0;i<14;++i){
        count =0;
        for (int k = 0; k<15;++k) if(numbers[k]==min+i) ++count ;
        if (count >1) return min+i;
    }
}
void output(std::string key,int value){
    std::cout << key << " = " << value << std::endl;
}
void printArr(int numbers[]){
    for (int i =0;i<15;++i) std::cout << numbers[i] << "   " ;
    std::cout << std::endl;

}
int main() {
    int numbers[15] = {114, 111, 106, 107, 108, 105, 115, 108, 110, 109, 112, 113, 116, 117, 118};
    printArr(numbers);
    output("Minimum",min(numbers));
    output("Dublicate", dublicate(numbers, min(numbers)));

    return 0;
}
