
#include <stdio.h>

struct Nokia{
    char name[100];
    char modelNO[40];
    int price;
};

int main() {
    struct Nokia phone = {"SetabhangaPhone", "khankirpola69", 6900};
    printf("Name: %s\n", phone.name);
    printf("Model Number: %s\n", phone.modelNO);
    printf("Price: %d\n", phone.price);

    return 0;
}