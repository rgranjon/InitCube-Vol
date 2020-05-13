/////REBOOT + SAUVEGARDE/////

#include "../Nouveau/defs/Librairie.h"
#include "../Existant/defs/SegmentVol.h"

using namespace std;

int main(int argc, char** argv) {
    SegmentVol* segmentVol = new SegmentVol();
    thread t0 = segmentVol->tSurveillerConstantes();
    t0.join();
}