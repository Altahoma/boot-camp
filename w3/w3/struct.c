#include <stdio.h>

typedef struct {
    char type[20];
    char title[20];
} Pet;

typedef struct {
    int age;
    char gender;
    char name[10];
    char profession[10];
    Pet pet;
} Human;

void describe(Human* instance) {
    printf("age: %d\n", instance->age);
    printf("gender: %c\n", instance->gender);
    printf("name: %s\n", instance->name);
    printf("profession: %s\n", instance->profession);
    printf("Pet type: %s\n", instance->pet.type);
    printf("Pet title: %s\n\n", instance->pet.title);

}

void changeGender(Human *instance) {
    instance->gender = ( instance->gender == 'm' ) ? 'f' : 'm';
}

void strCopy(char* source, char* destination) {
    for ( ; *source != '\0'; source++, destination++ ) {
        *destination = *source;
    }
    *destination = '\0';
}


int main() {
    Human anonymous = {20, 'm', "Anonymous", "Troll", {"Hamster", "Hams"}};

    describe(&anonymous);
    changeGender(&anonymous);
    anonymous.age += 1;
    strCopy("Jessica", anonymous.name);
    strCopy("boyfriend", anonymous.pet.type);
    strCopy("Jason", anonymous.pet.title);
    
    describe(&anonymous);

    return 0;
}
