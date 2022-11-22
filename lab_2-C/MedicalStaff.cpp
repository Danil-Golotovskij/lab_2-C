#include "MedicalStaff.h"



void Find(MedicalStaff* medicalStaff, int a, int b) {
    if (medicalStaff->personPolyclinic.age >= a && medicalStaff->personPolyclinic.age <= b) {
        DisplayMedicalStaff(medicalStaff);
    }
}

//--------------------------------------------------------------------

void ReadMedicalStaff(MedicalStaff* medicalStaff) {
    char tmpFio[40];
    scanf("������� ���: %s", &tmpFio);
    strcpy(medicalStaff->personPolyclinic.fio, tmpFio);

    char tmpPol[40];
    scanf("������� ���: %s", &tmpPol);
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
    scanf("������� �����������: %b", &tmp);
    medicalStaff->student = tmp;
}

void SetEducation(MedicalStaff* medicalStaff) {
    char tmp[40];
    scanf("������� �����������: %s", &tmp);
    strcpy(medicalStaff->education, tmp);
}

//--------------------------------------------------------------------

void DisplayMedicalStaff(MedicalStaff* medicalStaff) {
    printf("���: %s\n", medicalStaff->personPolyclinic.fio);
    printf("��� ��������: %d\n", medicalStaff->personPolyclinic.age);
    printf("���: %s\n", medicalStaff->personPolyclinic.pol);
    printf("��������: %d\n", medicalStaff->worker.salary);
    printf("�������� ����: %d\n", medicalStaff->worker.workExperience);
    printf("����� ���������: %d\n", medicalStaff->worker.numberWorker);
    if (GetStudent(medicalStaff) == 1) {
        printf("�������� ���������\n");
    }
    else {
        printf("�� �������� ���������\n");
    }
    printf("����������� ��� ���������: %s\n", medicalStaff->education);
}

char *GetEducation(MedicalStaff* medicalStaff) {
    return medicalStaff->education;
}

bool GetStudent(MedicalStaff* medicalStaff) {
    return medicalStaff->student;
}

