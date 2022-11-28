#pragma once
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct PersonPolyclinic {
    char fio[40];   // ФИО 
    char pol[40];   // Пол
    int  age;       // Возраст  
};

void InicPersonPolyclinic(struct PersonPolyclinic* personPolyclinic);
void ReadPersonPolyclinic(struct PersonPolyclinic* personPolyclinic);
void SetFio(struct PersonPolyclinic* personPolyclinic);
void SetAge(struct PersonPolyclinic* personPolyclinic);
void SetPol(struct PersonPolyclinic* personPolyclinic);

void DisplayPersonPolyclinic(struct PersonPolyclinic* personPolyclinic);
char* GetFio(struct PersonPolyclinic* personPolyclinic);
char* GetPol(struct PersonPolyclinic* personPolyclinic);
int  GetAge(struct PersonPolyclinic* personPolyclinic);

