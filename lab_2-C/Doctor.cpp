#include "Doctor.h"
#include "Patient.h"


void ReadDoctor(Doctor* doctor) {
    char tmpFio[40];
    scanf("������� ���: %s", &tmpFio);
    strcpy(doctor->personPolyclinic.fio, tmpFio);

    char tmpPol[40];
    scanf("������� ���: %s", &tmpPol);
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
    scanf("������� �������������: %s", &tmp);
    strcpy(doctor->specialization, tmp);
}

void SetCategory(Doctor* doctor) {
    char tmp[40];
    scanf("������� ���������: %s", &tmp);
    strcpy(doctor->category, tmp);
}

//--------------------------------------------------------------------

void DisplayDoctor(Doctor* doctor) {
    printf("���: %s\n", doctor->personPolyclinic.fio);
    printf("��� ��������: %d\n", doctor->personPolyclinic.age);
    printf("���: %s\n", doctor->personPolyclinic.pol);
    printf("�������� �������: %d\n", doctor->worker.salary);
    printf("�������� ���� �������: %d\n", doctor->worker.workExperience);
    printf("����� �������: %d\n", doctor->worker.numberWorker);
    printf("������������� �������: %d\n", doctor->specialization);
    printf("��������� �������: %d\n", doctor->category);
}

char *GetSpecialization(Doctor* doctor) {
    return doctor->specialization;
}

char *GetCategory(Doctor* doctor) {
    return doctor->category;
}

