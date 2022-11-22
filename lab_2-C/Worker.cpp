#include "PersonPolyclinic.h"
#include "Worker.h"


void ReadWorker(Worker* worker){
    char tmpFio[40];
    scanf("Введите ФИО: %s", &tmpFio);
    strcpy(worker->personPolyclinic.fio, tmpFio);

    char tmpPol[40];
    scanf("Введите пол: %s", &tmpPol);
    strcpy(worker->personPolyclinic.pol, tmpPol);
    
    int tmpAge;
    scanf("%d", & tmpAge);
    worker->personPolyclinic.age = tmpAge;

    SetSalary(worker);
    SetWorkExperience(worker);
    SetNumberWorker(worker);
}

void SetSalary(struct Worker* worker) {
    int tmp;
    scanf("Введите зарплату: %d", &tmp);
    worker->salary = tmp;
}

void SetWorkExperience(struct Worker* worker) {
    int tmp;
    scanf("Введите трудовой стаж: %d", &tmp);
    worker->workExperience = tmp;
}

void SetNumberWorker(struct Worker* worker) {
    int tmp;
    scanf("Введите номер работника: %d", &tmp);
    worker->numberWorker = tmp;
}

//--------------------------------------------------------------------

void DisplayWorker(struct Worker*worker) {
    printf("ФИО: %s\n", worker->personPolyclinic.fio);
    printf("год рождения: %d\n", worker->personPolyclinic.age);
    printf("пол: %s\n", worker->personPolyclinic.pol);
    printf("зарплата: %d\n", worker->salary);
    printf("трудовой стаж: %d\n", worker->workExperience);
    printf("номер работника: %d\n", worker->numberWorker);
}

int GetSalary(struct Worker* worker) {
    return worker->salary;
}

int GetWorkExperience(struct Worker* worker) {
    return worker->workExperience;
}

int GetNumberWorker(struct Worker*worker) {
    return worker->numberWorker;
}

