#include "Patient.h"



void FindAll(struct Patient* patient,int numberDoctor1) {
    int tmp = 0;
    printf("??????? ????? ???????: ");
    scanf("%s", &tmp);
    if (GetNumberDoctor(patient) == tmp) {
        printf( "??? ????????: %s", patient->personPolyclinic.fio);
    }
}

//--------------------------------------------------------------------

void InicPatient(struct Patient* patient) {
    strcpy(patient->personPolyclinic.fio, "-");
    strcpy(patient->personPolyclinic.pol, "-");
    patient->personPolyclinic.age = 0;
    patient->numberPatient = 0;
    patient->numberDoctor = 0;
    strcpy(patient->diagnosis, "-");
}

void ReadPatient(struct Patient* patient) {
    char tmpFio[40];
    printf("??????? ???: ");
    scanf("%s", &tmpFio);
    strcpy(patient->personPolyclinic.fio, tmpFio);

    char tmpPol[40];
    printf("??????? ???: ");
    scanf("%s", &tmpPol);
    strcpy(patient->personPolyclinic.pol, tmpPol);

    int tmpAge;
    printf("??????? ???????: ");
    scanf("%d", &tmpAge);
    patient->personPolyclinic.age = tmpAge;

    SetNumberPatient(patient);
    SetNumberDoctor(patient);
    SetDiagnosis(patient);
}

void SetNumberPatient(struct Patient* patient) {
    int tmp;
    printf("??????? ????? ????????: ");
    scanf("%d", &tmp);
    patient->numberPatient = tmp;
}

void SetNumberDoctor(struct Patient* patient) {
    int tmp;
    printf("??????? ????? ???????: ");
    scanf("%d", &tmp);
    patient->numberDoctor = tmp;
}

void SetDiagnosis(struct Patient* patient) {
    char tmp[40];
    printf("??????? ???????: ");
    scanf("%s", &tmp);
    strcpy(patient->diagnosis, tmp);
}

//--------------------------------------------------------------------

void DisplayPatient(struct Patient* patient) {
    printf("???: %s\n", patient->personPolyclinic.fio);
    printf("???????: %d\n", patient->personPolyclinic.age);
    printf("???: %s\n", patient->personPolyclinic.pol);
    printf("????? ????????: %d\n", patient->numberPatient);
    printf("????? ???????? ?????: %d\n", patient->numberDoctor);
    printf("??????? ????????: %s\n", patient->diagnosis);
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