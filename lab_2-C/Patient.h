#pragma once
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "PersonPolyclinic.h"
#include "Doctor.h"

struct Patient {
    PersonPolyclinic personPolyclinic;

    int numberPatient;   // ????? ????????
    int numberDoctor;    // ????? ???????
    char diagnosis[40];  // ???????
};

void FindAll(struct Patient* patient, int numberDoctor);

void InicPatient(struct Patient* patient);
void ReadPatient(struct Patient* patient);
void SetNumberPatient(struct Patient* patient);
void SetNumberDoctor(struct Patient* patient);
void SetDiagnosis(struct Patient* patient);

void DisplayPatient(struct Patient* patient);
int  GetNumberPatient(struct Patient* patient);
int  GetNumberDoctor(struct Patient* patient);
char *GetDiagnosis(struct Patient* patient);



