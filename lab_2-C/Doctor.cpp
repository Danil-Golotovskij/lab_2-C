#include "Doctor.h"
#include "Patient.h"
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


void InicDoctor(Doctor* doctor) {
    strcpy(doctor->personPolyclinic.fio, "-");
    doctor->personPolyclinic.age = 0;
    strcpy(doctor->personPolyclinic.pol, "-");
    doctor->worker.salary = 0;
    doctor->worker.workExperience = 0;
    doctor->worker.numberWorker = 0;
    strcpy(doctor->specialization, "-");
    strcpy(doctor->category, "-");
}

void ReadDoctor(Doctor* doctor) {
    char tmpFio[40];
    printf("Введите ФИО: ");
    scanf("%s", &tmpFio);
    strcpy(doctor->personPolyclinic.fio, tmpFio);


    int tmpAge;
    printf("Введите возраст: ");
    scanf("%d", &tmpAge);
    doctor->personPolyclinic.age = tmpAge;

    char tmpPol[40];
    printf("Введите пол: ");
    scanf("%s", &tmpPol);
    strcpy(doctor->personPolyclinic.pol, tmpPol);

    
    int tmpSalary;
    printf("Введите зарплату: ");
    scanf("%d", &tmpSalary);
    doctor->worker.salary = tmpSalary;

    int tmpWorkExperience;
    printf("Введите стаж работника: ");
    scanf("%d", &tmpWorkExperience);
    doctor-> worker.workExperience = tmpWorkExperience;

    int tmpNumberWorker;
    printf("Введите номер работника: ");
    scanf("%d", &tmpNumberWorker);
    doctor->worker.numberWorker = tmpNumberWorker;

    SetSpecialization(doctor);
    SetCategory(doctor);
}

void SetSpecialization(Doctor* doctor) {
    char tmpSpecialization[40];
    printf("Введите специализацию: ");
    scanf("%s", &tmpSpecialization);
    strcpy(doctor->specialization, tmpSpecialization);
}

void SetCategory(Doctor* doctor) {
    char tmpCategory[40];
    printf("Введите категорию: ");
    scanf("%s", &tmpCategory);
    strcpy(doctor->category, tmpCategory);
}

//--------------------------------------------------------------------

void DisplayDoctor(Doctor* doctor) {
    printf("ФИО: %s\n", doctor->personPolyclinic.fio);
    printf("возраст: %d\n", doctor->personPolyclinic.age);
    printf("пол: %s\n", doctor->personPolyclinic.pol);
    printf("зарплата доктора: %d\n", doctor->worker.salary);
    printf("трудовой стаж доктора: %d\n", doctor->worker.workExperience);
    printf("номер доктора: %d\n", doctor->worker.numberWorker);
    printf("специализация доктора: %s\n", doctor->specialization);
    printf("категория доктора: %s\n", doctor->category);
}

char *GetSpecialization(Doctor* doctor) {
    return doctor->specialization;
}

char *GetCategory(Doctor* doctor) {
    return doctor->category;
}

