#pragma once
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "PersonPolyclinic.h"
#include <string.h>
#include "PersonPolyclinic.h"

struct Worker {
    PersonPolyclinic personPolyclinic;
    int salary;           // Зарплата
    int workExperience;   // Трудовой стаж
    int numberWorker;     // номер работника
};

void InicWorker(struct Worker* worker);
void ReadWorker(struct Worker *worker);
void SetSalary(struct Worker* worker);
void SetWorkExperience(struct Worker* worker);
void SetNumberWorker(struct Worker* worker);

void DisplayWorker(struct Worker* worker);
int GetSalary(struct Worker* worker);
int GetWorkExperience(struct Worker* worker);
int GetNumberWorker(struct Worker* worker);











