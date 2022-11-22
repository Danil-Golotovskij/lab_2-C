#include "MedicalStaff.h"



void Find(MedicalStaff* medicalStaff, int a, int b) {
    if (medicalStaff->personPolyclinic.age >= a && medicalStaff->personPolyclinic.age <= b) {
        DisplayMedicalStaff(medicalStaff);
    }
}

//--------------------------------------------------------------------

void ReadMedicalStaff(MedicalStaff* medicalStaff) {
    char tmpFio[40];
    scanf("Введите ФИО: %s", &tmpFio);
    strcpy(medicalStaff->personPolyclinic.fio, tmpFio);

    char tmpPol[40];
    scanf("Введите пол: %s", &tmpPol);
    strcpy(medicalStaff->personPolyclinic.pol, tmpPol);

    int tmpAge;
    scanf("%d", &tmpAge);
    medicalStaff->personPolyclinic.age = tmpAge;

    int tmpsalary;
    scanf("%d", &tmpsalary);
    medicalStaff->worker.salary = tmpAge;

    int tmpWorkExperience;
    scanf("%d", &tmpWorkExperience);
    medicalStaff->worker.workExperience = tmpAge;

    int tmpNumberWorker;
    scanf("%d", &tmpNumberWorker);
    medicalStaff->worker.numberWorker = tmpAge;

    SetStudent(medicalStaff);
    SetEducation(medicalStaff);
}

void SetStudent(MedicalStaff* medicalStaff) {
    bool tmp;
    scanf("Введите образование: %b", &tmp);
    medicalStaff->student = tmp;
}

void SetEducation(MedicalStaff* medicalStaff) {
    char tmp[40];
    scanf("Введите образование: %s", &tmp);
    strcpy(medicalStaff->education, tmp);
}

//--------------------------------------------------------------------

void DisplayMedicalStaff(MedicalStaff* medicalStaff) {
    printf("ФИО: %s\n", medicalStaff->personPolyclinic.fio);
    printf("год рождения: %d\n", medicalStaff->personPolyclinic.age);
    printf("пол: %s\n", medicalStaff->personPolyclinic.pol);
    printf("зарплата: %d\n", medicalStaff->worker.salary);
    printf("трудовой стаж: %d\n", medicalStaff->worker.workExperience);
    printf("номер работника: %d\n", medicalStaff->worker.numberWorker);
    if (GetStudent(medicalStaff) == 1) {
        printf("является студентом\n");
    }
    else {
        printf("не является студентом\n");
    }
    printf("образование мед работника: %s\n", medicalStaff->education);
}

char *GetEducation(MedicalStaff* medicalStaff) {
    return medicalStaff->education;
}

bool GetStudent(MedicalStaff* medicalStaff) {
    return medicalStaff->student;
}

