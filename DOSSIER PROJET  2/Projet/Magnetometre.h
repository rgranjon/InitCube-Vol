/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Magnetometre.h
 * Author: LucasG
 *
 * Created on 11 mars 2020, 16:26
 */

#ifndef MAGNETOMETRE_H
#define MAGNETOMETRE_H
#include "../defs/Instrument.h"
#include "../defs/I2C.h"

#define AK8963_ADDRESS   0x0C
#define AK8963_CNTL      0x0A  // Power down (0000), single-measurement (0001), self-test (1000) and Fuse ROM (1111) modes on bits 3:0
#define AK8963_ASAX      0x10  // Fuse ROM x-axis sensitivity adjustment value
#define AK8963_ASAY      0x11  // Fuse ROM y-axis sensitivity adjustment value
#define AK8963_ASAZ      0x12  // Fuse ROM z-axis sensitivity adjustment value
#define AK8963_ST1       0x02  // data ready status bit 0
#define TEMP_OUT_L       0x42  // Low byte of the temperature sensor output
#define TEMP_OUT_H       0x41  // High byte of the temperature sensor output

using namespace std;

class Magnetometre : public Instrument, public I2C{
public:
    Magnetometre();
    Magnetometre(const Magnetometre& orig);
    virtual ~Magnetometre();
    void PassThrough();
private:
        // <param name="aoctetLow">La camera IR permet de stocker la temperature sur 2 octets. </param>
        // <param name="aoctetHigh">La camera IR permet de stocker la temperature sur 2 octets. </param>
	private: float calculerTemp(char aoctetLow, char aoctetHigh);

protected:
         void obtenirTempInstr();
};

#endif /* MAGNETOMETRE_H */
