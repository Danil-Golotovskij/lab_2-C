#include "PersonPolyclinic.h"
#include "Worker.h"

void InicWorker(Worker* worker) {
    strcpy(worker->personPolyclinic.fio, "-");
    strcpy(worker->personPolyclinic.pol, "-");
    worker->personPolyclinic.age = 0;
    worker->salary = 0;
    worker->workExperience = 0;
    worker->numberWorker = 0;
}

void ReadWorker(Worker* worker){
    char tmpFio[40];
    printf("??????? ???: ");
    scanf("%s", &tmpFio);
    strcpy(worker->personPolyclinic.fio, tmpFio);

    char tmpPol[40];
    printf("??????? ???: ");
    scanf("%s", &tmpPol);
    strcpy(worker->personPolyclinic.pol, tmpPol);
    
    int tmpAge;
    printf("??????? ???????: ");
    scanf("%d", & tmpAge);
    worker->personPolyclinic.age = tmpAge;

    SetSalary(worker);
    SetWorkExperience(worker);
    SetNumberWorker(worker);
}

void SetSalary(struct Worker* worker) {
    int tmp;
    printf("??????? ????????: ");
    scanf("%d", &tmp);
    worker->salary = tmp;
}

void SetWorkExperience(struct Worker* worker) {
    int tmp;
    printf("??????? ???????? ????: ");
    scanf("%d", &tmp);
    worker->workExperience = tmp;
}

void SetNumberWorker(struct Worker* worker) {
    int tmp;
    printf("??????? ????? ?????????: ");
    scanf("%d", &tmp);
    worker->numberWorker = tmp;
}

//--------------------------------------------------------------------

void DisplayWorker(struct Worker*worker) {
    printf("???: %s\n", worker->personPolyclinic.fio);
    printf("???????: %d\n", worker->personPolyclinic.age);
    printf("???: %s\n", worker->personPolyclinic.pol);
    printf("????????: %d\n", worker->salary);
    printf("???????? ????: %d\n", worker->workExperience);
    printf("????? ?????????: %d\n", worker->numberWorker);
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

