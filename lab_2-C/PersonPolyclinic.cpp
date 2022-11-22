#include "PersonPolyclinic.h"

//--------------------------------------------------------------------

void Read(struct PersonPolyclinic *personPolyclinic) {
    SetFio(personPolyclinic);
    SetAge(personPolyclinic);
    SetPol(personPolyclinic);
}

void SetFio(struct PersonPolyclinic* personPolyclinic) {
    char tmp[40];
    scanf("������� ���: %s", &tmp);
    strcpy(personPolyclinic->fio, tmp);
}

void SetAge(struct PersonPolyclinic *personPolyclinic) {
    int tmp;
    scanf("������� �������: %d", &tmp);
    personPolyclinic->age = tmp;
}


void SetPol(struct PersonPolyclinic* personPolyclinic) {
    char tmp[40];
    scanf("������� ���: %s", &tmp);
    strcpy(personPolyclinic->pol, tmp);
}

//--------------------------------------------------------------------

void Display(struct PersonPolyclinic* personPolyclinic) {
    printf("���: %s", personPolyclinic->fio);
    printf("��� ��������: %d", personPolyclinic->age);
    printf("���: %s", personPolyclinic->pol);
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