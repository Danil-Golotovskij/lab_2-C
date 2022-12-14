#include "MedicalStaff.h"



void Find(MedicalStaff* medicalStaff, int a, int b) {
    if (medicalStaff->personPolyclinic.age >= a && medicalStaff->personPolyclinic.age <= b) {
        DisplayMedicalStaff(medicalStaff);
    }
}

//--------------------------------------------------------------------

void InicMedicalStaff(MedicalStaff* medicalStaff) {
    strcpy(medicalStaff->personPolyclinic.fio, "-");
    strcpy(medicalStaff->personPolyclinic.pol, "-");
    medicalStaff->personPolyclinic.age = 0;
    medicalStaff->worker.salary = 0;
    medicalStaff->worker.workExperience = 0;
    medicalStaff->worker.numberWorker = 0;
    medicalStaff->student = 0;
    strcpy(medicalStaff->education, "-");
}

void ReadMedicalStaff(MedicalStaff* medicalStaff) {
    char tmpFio[40];
    printf("??????? ???: ");
    scanf("%s", &tmpFio);
    strcpy(medicalStaff->personPolyclinic.fio, tmpFio);

    char tmpPol[40];
    printf("??????? ???: ");
    scanf("%s", &tmpPol);
    strcpy(medicalStaff->personPolyclinic.pol, tmpPol);

    int tmpAge;
    printf("??????? ???????: ");
    scanf("%d", &tmpAge);
    medicalStaff->personPolyclinic.age = tmpAge;

    int tmpsalary;
    printf("??????? ????????: ");
    scanf("%d", &tmpsalary);
    medicalStaff->worker.salary = tmpAge;

    int tmpWorkExperience;
    printf("??????? ???? ?????????: ");
    scanf("%d", &tmpWorkExperience);
    medicalStaff->worker.workExperience = tmpAge;

    int tmpNumberWorker;
    printf("??????? ????? ?????????");
    scanf("%d", &tmpNumberWorker);
    medicalStaff->worker.numberWorker = tmpAge;

    SetStudent(medicalStaff);
    SetEducation(medicalStaff);
}

void SetStudent(MedicalStaff* medicalStaff) {
    int tmp;
    printf("???????? ?? ????????? 1-??, 0-???: ");
    scanf("%d", &tmp);
    if(tmp == 1)
    medicalStaff->student = 1;
}

void SetEducation(MedicalStaff* medicalStaff) {
    char tmp[40];
    printf("??????? ???????????: ");
    scanf("%s", &tmp);
    strcpy(medicalStaff->education, tmp);
}

//--------------------------------------------------------------------

void DisplayMedicalStaff(MedicalStaff* medicalStaff) {
    printf("???: %s\n", medicalStaff->personPolyclinic.fio);
    printf("???????: %d\n", medicalStaff->personPolyclinic.age);
    printf("???: %s\n", medicalStaff->personPolyclinic.pol);
    printf("????????: %d\n", medicalStaff->worker.salary);
    printf("???????? ????: %d\n", medicalStaff->worker.workExperience);
    printf("????? ?????????: %d\n", medicalStaff->worker.numberWorker);
    if (GetStudent(medicalStaff) == 1) {
        printf("???????? ?????????\n");
    }
    else {
        printf("?? ???????? ?????????\n");
    }
    printf("??????????? ??? ?????????: %s\n", medicalStaff->education);
}

char *GetEducation(MedicalStaff* medicalStaff) {
    return medicalStaff->education;
}

bool GetStudent(MedicalStaff* medicalStaff) {
    return medicalStaff->student;
}

