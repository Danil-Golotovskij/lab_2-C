#pragma once
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "Worker.h"
#include "Patient.h"

struct Doctor {
    PersonPolyclinic personPolyclinic;
    Worker worker;

    char specialization[40];    // Специализация
    char category[40];          // Категория
};

void ReadDoctor(Doctor * doctor);
void SetSpecialization(Doctor* doctor);
void SetCategory(Doctor* doctor);

void  DisplayDoctor(Doctor* doctor);
char* GetSpecialization(Doctor* doctor);
char* GetCategory(Doctor* doctor);

