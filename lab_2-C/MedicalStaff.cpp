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
    printf("¬ведите ‘»ќ: ");
    scanf("%s", &tmpFio);
    strcpy(medicalStaff->personPolyclinic.fio, tmpFio);

    char tmpPol[40];
    printf("¬ведите пол: ");
    scanf("%s", &tmpPol);
    strcpy(medicalStaff->personPolyclinic.pol, tmpPol);

    int tmpAge;
    printf("¬ведите возраст: ");
    scanf("%d", &tmpAge);
    medicalStaff->personPolyclinic.age = tmpAge;

    int tmpsalary;
    printf("¬ведите зарплату: ");
    scanf("%d", &tmpsalary);
    medicalStaff->worker.salary = tmpAge;

    int tmpWorkExperience;
    printf("¬ведите стаж работника: ");
    scanf("%d", &tmpWorkExperience);
    medicalStaff->worker.workExperience = tmpAge;

    int tmpNumberWorker;
    printf("¬ведите номер работника");
    scanf("%d", &tmpNumberWorker);
    medicalStaff->worker.numberWorker = tmpAge;

    SetStudent(medicalStaff);
    SetEducation(medicalStaff);
}

void SetStudent(MedicalStaff* medicalStaff) {
    int tmp;
    printf("явл€етс€ ли студентом 1-да, 0-нет: ");
    scanf("%d", &tmp);
    if(tmp == 1)
    medicalStaff->student = 1;
}

void SetEducation(MedicalStaff* medicalStaff) {
    char tmp[40];
    printf("¬ведите образование: ");
    scanf("%s", &tmp);
    strcpy(medicalStaff->education, tmp);
}

//--------------------------------------------------------------------

void DisplayMedicalStaff(MedicalStaff* medicalStaff) {
    printf("‘»ќ: %s\n", medicalStaff->personPolyclinic.fio);
    printf("возраст: %d\n", medicalStaff->personPolyclinic.age);
    printf("пол: %s\n", medicalStaff->personPolyclinic.pol);
    printf("зарплата: %d\n", medicalStaff->worker.salary);
    printf("трудовой стаж: %d\n", medicalStaff->worker.workExperience);
    printf("номер работника: %d\n", medicalStaff->worker.numberWorker);
    if (GetStudent(medicalStaff) == 1) {
        printf("€вл€етс€ студентом\n");
    }
    else {
        printf("не €вл€етс€ студентом\n");
    }
    printf("образование мед работника: %s\n", medicalStaff->education);
}

char *GetEducation(MedicalStaff* medicalStaff) {
    return medicalStaff->education;
}

bool GetStudent(MedicalStaff* medicalStaff) {
    return medicalStaff->student;
}

