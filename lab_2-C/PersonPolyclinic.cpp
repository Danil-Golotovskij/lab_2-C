#include "PersonPolyclinic.h"

//--------------------------------------------------------------------

void Read(struct PersonPolyclinic *personPolyclinic) {
    SetFio(personPolyclinic);
    SetAge(personPolyclinic);
    SetPol(personPolyclinic);
}

void SetFio(struct PersonPolyclinic* personPolyclinic) {
    char tmp[40];
    scanf("Введите ФИО: %s", &tmp);
    strcpy(personPolyclinic->fio, tmp);
}

void SetAge(struct PersonPolyclinic *personPolyclinic) {
    int tmp;
    scanf("Введите возраст: %d", &tmp);
    personPolyclinic->age = tmp;
}


void SetPol(struct PersonPolyclinic* personPolyclinic) {
    char tmp[40];
    scanf("Введите пол: %s", &tmp);
    strcpy(personPolyclinic->pol, tmp);
}

//--------------------------------------------------------------------

void Display(struct PersonPolyclinic* personPolyclinic) {
    printf("ФИО: %s", personPolyclinic->fio);
    printf("год рождения: %d", personPolyclinic->age);
    printf("пол: %s", personPolyclinic->pol);
}



int GetAge(struct PersonPolyclinic* personPolyclinic) {
    return personPolyclinic->age;
}

char *GetPol(struct PersonPolyclinic* personPolyclinic) {
    return personPolyclinic->pol;
}

char *GetFio(struct PersonPolyclinic* personPolyclinic) {
    return personPolyclinic->fio;
}
