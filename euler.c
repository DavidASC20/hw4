int p1(){
    int count;
    int total = 0;

    for(count = 0; count < 1000; count++){
        if(count % 3 == 0 || count % 5 == 0){
            total += count;
        }
    }return total;
}

int p6(){
    int count;
    int totalSquare = 0;
    int totalSum = 0;
    for(int count = 1; count < 101; count++){
        totalSum += count;
        totalSquare += square(count);
    }
        totalSum = square(totalSum);

    return totalSum - totalSquare;
}

int square(int num){
    return num * num;
}