#pragma once
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct PersonPolyclinic {
    char fio[40];   // ��� 
    char pol[40];   // ���
    int  age;       // �������  
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

