//
// Created by Administrator on 2022/9/5.
//
#include <stdio.h>

int simple_sum(int low, int upper, int step);

int gauss_sum(int low, int upper, int step);


int main() {
    int sum_from_1_to_100 = simple_sum(0, 100, 1);
    printf("%d\n", sum_from_1_to_100);
    int sum_from_1_to_100_in_gauss = gauss_sum(0, 100, 1);
    printf("%d\n", sum_from_1_to_100_in_gauss);
    return 0;
}

int simple_sum(int low, int upper, int step) {
    int sum = 0;
    for (int i = low; i <= upper; i = i + step) {
        sum += i;
    }
    return sum;
}

int gauss_sum(int low, int upper, int step) {
    int sum = 0;
    sum = (low + upper) * ((upper - low) / step + 1) / 2;
    return sum;
}