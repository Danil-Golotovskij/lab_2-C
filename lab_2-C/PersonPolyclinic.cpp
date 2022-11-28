#include "PersonPolyclinic.h"

//--------------------------------------------------------------------

void InicPersonPolyclinic(struct PersonPolyclinic* personPolyclinic) {
    strcpy(personPolyclinic->fio, "-");
    personPolyclinic->age = 0;
    strcpy(personPolyclinic->fio, "-");
}

void ReadPersonPolyclinic(struct PersonPolyclinic *personPolyclinic) {
    SetFio(personPolyclinic);
    SetAge(personPolyclinic);
    SetPol(personPolyclinic);
}

void SetFio(struct PersonPolyclinic* personPolyclinic) {
    char tmp[40];
    printf("Введите ФИО: ");
    scanf("%s", &tmp);
    strcpy(personPolyclinic->fio, tmp);
}

void SetAge(struct PersonPolyclinic *personPolyclinic) {
    int tmp;
    printf("Введите возраст: ");
    scanf("%d", &tmp);
    personPolyclinic->age = tmp;
}


void SetPol(struct PersonPolyclinic* personPolyclinic) {
    char tmp[40];
    printf("Введите пол: ");
    scanf("%s", &tmp);
    strcpy(personPolyclinic->pol, tmp);
}

//--------------------------------------------------------------------

void DisplayPersonPolyclinic(struct PersonPolyclinic* personPolyclinic) {
    printf("ФИО: %s\n", personPolyclinic->fio);
    printf("возраст: %d\n", personPolyclinic->age);
    printf("пол: %s\n", personPolyclinic->pol);
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
