/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Magnetometre.cpp
 * Author: LucasG
 * 
 * Created on 11 mars 2020, 16:26
 */



Magnetometre::Magnetometre() {
         this->address=0x69;
}

Magnetometre::Magnetometre(const Magnetometre& orig) {
}

Magnetometre::~Magnetometre() {
}

void Magnetometre::PassThrough() {
    
    
}

float Magnetometre::calculerTemp(char aoctetLow, char aoctetHigh) {
      
        float resultat;
	short TEMPOUT;

	//Reconstitution sur 16 bits de l'information
	TEMPOUT = aoctetHigh;
        TEMPOUT = TEMPOUT << 8;
        TEMPOUT = TEMPOUT + aoctetLow;
       

	//transformation en float
	resultat=TEMPOUT;
       
        
}
 
 void Magnetometre::obtenirTempInst() {
    
    Récolte de la température interne de l'instrument
	
    float tempInstrument;
	char* buf;
	if (this->status->getMode()!=SLEEP) 
	{
		setAddrRegistre(TEMP_OUT_H);
		ecrire();
		buf = lire();
	}
	else 
	{
		this->activer();
		setAddrRegistre(TEMP_OUT_H);
		ecrire();
		buf = lire();
		this->desactiver();
	}
    tempInstrument = calculerTemp(buf[0],buf[1]);
	status->setTemp(tempInstrument);
 }
