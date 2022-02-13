#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(void){
    char pass[20];
    int i;

    int goodLength;
    //bool hasSpecial;
    // bool hasNums;

    printf("Please enter your password:  ");
    scanf("%s", pass);

    // Get length (i = length)
    for (i = 0; pass[i] != '\0'; ++i);

    if(i <= 5){
        printf("Password length is dangerously low! \n");
        goodLength = 0;
    } else if(i >= 5 && i <= 10){
        printf("Password length is okay, but i would recommend increasing it. \n");
        goodLength = 1;
    } else if(i > 10){
        printf("Password length is good! \n");
        goodLength = 2;
    } else {
        printf("ERROR:  Failed to get password length \n");
        goodLength = NULL; // Don't judge me okay
    }

    // Implement special chars later.

    // char specialCharacters[20] = "!@#$^&*()[]{}:;'<>,./?~`";

    // if(strchr(pass, specialCharacters) != NULL){
    //     printf("Your password contains special characters, nothing to change in this field. \n");
    //     hasSpecial = true;
    // } else {
    //     printf("Try adding special characters. \n");
    //     hasSpecial = false;
    // }

    // Implement Numbers later aswell

    // char nums[20] = "1234567890";
    
    // if(strchr(pass, nums) != NULL){
    //     printf("Your password contains numbers, again there is nothing to change is this field \n");
    //     hasNums = true;
    // } else {
    //     printf("Try adding some numbers \n");
    //     hasNums = false;
    // }

    printf("\n\n SUMMARY:  \n");
    
    if(goodLength == 0){
        printf("Increase password length! \n");
    } else if(goodLength == 1){
        printf("Password length is okay, but should be increased \n");
    } else if(goodLength == 2){
        printf("Password length is good! You don't need to change it \n");
    } else if(goodLength == NULL){
        printf("Password length was not gotten \n");
    } else {
        printf("Password length was not gotten \n");
    }

    // if(hasSpecial == true){
    //     printf("Good! Your password has special characters! There is nothing to change in this field \n");
    // } else if(hasSpecial == false){
    //     printf("Password does not contain special characters! Change that! \n");
    // } else {
    //     printf("An error has occured! \n");
    // }

    // if(hasNums == true){
    //     printf("Your password contains numbers, nothing to change in this feild \n");
    // } else if (hasNums == false){
    //     printf("You need to add numbers to your password! \n");
    // } else {
    //     printf("An error has occured! \n");
    // }

    system("pause");

    return 0;
}