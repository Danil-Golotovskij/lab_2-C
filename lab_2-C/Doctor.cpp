#include "Doctor.h"
#include "Patient.h"


void ReadDoctor(Doctor* doctor) {
    char tmpFio[40];
    scanf("Введите ФИО: %s", &tmpFio);
    strcpy(doctor->personPolyclinic.fio, tmpFio);

    char tmpPol[40];
    scanf("Введите пол: %s", &tmpPol);
    strcpy(doctor->personPolyclinic.pol, tmpPol);

    int tmpAge;
    scanf("%d", &tmpAge);
    doctor->personPolyclinic.age = tmpAge;
    
    int tmpsalary;
    scanf("%d", &tmpsalary);
    doctor->worker.salary = tmpAge;

    int tmpWorkExperience;
    scanf("%d", &tmpWorkExperience);
    doctor-> worker.workExperience = tmpAge;

    int tmpNumberWorker;
    scanf("%d", &tmpNumberWorker);
    doctor->worker.numberWorker = tmpAge;

    SetSpecialization(doctor);
    SetCategory(doctor);
}

void SetSpecialization(Doctor* doctor) {
    char tmp[40];
    scanf("Введите специализацию: %s", &tmp);
    strcpy(doctor->specialization, tmp);
}

void SetCategory(Doctor* doctor) {
    char tmp[40];
    scanf("Введите категорию: %s", &tmp);
    strcpy(doctor->category, tmp);
}

//--------------------------------------------------------------------

void DisplayDoctor(Doctor* doctor) {
    printf("ФИО: %s\n", doctor->personPolyclinic.fio);
    printf("год рождения: %d\n", doctor->personPolyclinic.age);
    printf("пол: %s\n", doctor->personPolyclinic.pol);
    printf("зарплата доктора: %d\n", doctor->worker.salary);
    printf("трудовой стаж доктора: %d\n", doctor->worker.workExperience);
    printf("номер доктора: %d\n", doctor->worker.numberWorker);
    printf("специализация доктора: %d\n", doctor->specialization);
    printf("категория доктора: %d\n", doctor->category);
}

char *GetSpecialization(Doctor* doctor) {
    return doctor->specialization;
}

char *GetCategory(Doctor* doctor) {
    return doctor->category;
}

