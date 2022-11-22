#include "Patient.h"



void FindAll(struct Patient* patient,int numberDoctor1) {
    int tmp = 0;
    scanf("Введите ФИО: %s", &tmp);
    if (GetNumberDoctor(patient) == tmp) {
        scanf( "ФИО пациента: %s", patient->personPolyclinic.fio);
    }
}

//--------------------------------------------------------------------

void ReadPatient(struct Patient* patient) {
    char tmpFio[40];
    scanf("Введите ФИО: %s", &tmpFio);
    strcpy(patient->personPolyclinic.fio, tmpFio);

    char tmpPol[40];
    scanf("Введите пол: %s", &tmpPol);
    strcpy(patient->personPolyclinic.pol, tmpPol);

    int tmpAge;
    scanf("Введите возраст: %d", &tmpAge);
    patient->personPolyclinic.age = tmpAge;
}

void SetNumberPatient(struct Patient* patient) {
    int tmp;
    scanf("Введите номер пациента: %d", &tmp);
    patient->numberPatient = tmp;
}

void SetNumberDoctor(struct Patient* patient) {
    int tmp;
    scanf("Введите номер доктора: %d", &tmp);
    patient->numberDoctor = tmp;
}

void SetDiagnosis(struct Patient* patient) {
    char tmp[40];
    scanf("Введите диагноз: %s", &tmp);
    strcpy(patient->diagnosis, tmp);
}

//--------------------------------------------------------------------

void DisplayPatient(struct Patient* patient) {
    printf("ФИО: %s\n", patient->personPolyclinic.fio);
    printf("год рождения: %d\n", patient->personPolyclinic.age);
    printf("пол: %s\n", patient->personPolyclinic.pol);
    printf("номер пациента: %d\n", patient->numberPatient);
    printf("номер лечащего врача: %d\n", patient->numberDoctor);
    printf("диагноз пациента: %s\n", patient->diagnosis);
}

int GetNumberPatient(struct Patient* patient) {
    return patient->numberPatient;
}

int GetNumberDoctor(struct Patient* patient) {
    return patient->numberDoctor;
}

char *GetDiagnosis(struct Patient* patient) {
    return patient->diagnosis;
}