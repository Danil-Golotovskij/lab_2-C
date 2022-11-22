#pragma once
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "Worker.h"
#include "PersonPolyclinic.h"

struct MedicalStaff {
    PersonPolyclinic personPolyclinic;
    Worker worker;

    char education[40]; // ќбразование
    bool   student;     // явл€етс€ ли работник студентом?
};

void FindMedicalStaff(MedicalStaff* medicalStaff,int a, int b);

void ReadMedicalStaff(MedicalStaff * medicalStaff);
void SetEducation(MedicalStaff* medicalStaff);
void SetStudent(MedicalStaff* medicalStaff);

void DisplayMedicalStaff(MedicalStaff* medicalStaff);
char *GetEducation(MedicalStaff* medicalStaff);
bool GetStudent(MedicalStaff* medicalStaff);
