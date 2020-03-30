#include "../Nouveau/defs/Librairie.h"
#include "../Existant/defs/Reboot.h"

using namespace std;

int main(int argc, char** argv) {
    Reboot* reboot = new Reboot();
    reboot->systemeReboot();
    return 0;
}