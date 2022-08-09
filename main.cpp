#include <iostream>

int min(int numbers[]){
    int min = numbers[0];
    for (int i=0;i<15;++i){
        if (min>numbers[i]) min=numbers[i];
    }
    return min;
}
int duplicate1(int numbers[],int min){
    int count =0,seqCount=0;
    for (int i=0;i<14;++i){
        count =0;
        for (int k = 0; k<15;++k) {
            if(numbers[k]==min+i) ++count ;
            ++seqCount;
        }
        if (count >1)  {
            std::cout << "n : " << seqCount/15<<std::endl;
            return min+i;
        }
    }
}
int duplicate2(int numbers[],int min){
    int sum =0,seqCount=0;

        for (int k = 0; k<15;++k)  {
            sum+=numbers[k] ;
            ++seqCount;
        }
        int s=(int)(float)(min+13+min)/2*14;

    std::cout << "n : " << seqCount/15<<std::endl;
    return sum- 14*min -13*7; //Magic Numbers
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
    output("Dublicate", duplicate2(numbers, min(numbers)));
    output("Dublicate", duplicate1(numbers, min(numbers)));

    return 0;
}
