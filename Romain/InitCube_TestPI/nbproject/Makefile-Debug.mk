#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/fbbc2f4/Batterie.o \
	${OBJECTDIR}/_ext/fbbc2f4/CameraIR.o \
	${OBJECTDIR}/_ext/fbbc2f4/Commande.o \
	${OBJECTDIR}/_ext/fbbc2f4/EmetteurRecepteur.o \
	${OBJECTDIR}/_ext/fbbc2f4/Etat.o \
	${OBJECTDIR}/_ext/fbbc2f4/Horloge.o \
	${OBJECTDIR}/_ext/fbbc2f4/I2C.o \
	${OBJECTDIR}/_ext/fbbc2f4/Instrument.o \
	${OBJECTDIR}/_ext/fbbc2f4/Message.o \
	${OBJECTDIR}/_ext/fbbc2f4/Mesure.o \
	${OBJECTDIR}/_ext/fbbc2f4/Mission.o \
	${OBJECTDIR}/_ext/fbbc2f4/Ordinateur.o \
	${OBJECTDIR}/_ext/fbbc2f4/Protocole.o \
	${OBJECTDIR}/_ext/fbbc2f4/Reboot.o \
	${OBJECTDIR}/_ext/fbbc2f4/SegmentSol.o \
	${OBJECTDIR}/_ext/fbbc2f4/SegmentVol.o \
	${OBJECTDIR}/_ext/fbbc2f4/Status.o \
	${OBJECTDIR}/_ext/fbbc2f4/Stockage.o \
	${OBJECTDIR}/_ext/fbbc2f4/Temperature.o \
	${OBJECTDIR}/_ext/fbbc2f4/TypeAck.o \
	${OBJECTDIR}/_ext/fbbc2f4/TypeAppareil.o \
	${OBJECTDIR}/_ext/fbbc2f4/TypeCommande.o \
	${OBJECTDIR}/_ext/fbbc2f4/TypeMisEtat.o \
	${OBJECTDIR}/_ext/fbbc2f4/serialib.o \
	${OBJECTDIR}/_ext/547dfddd/Sauvegarde.o \
	${OBJECTDIR}/_ext/547dfddd/Surveillance.o \
	${OBJECTDIR}/mainTest.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/initcube_testpi

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/initcube_testpi: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/initcube_testpi ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/_ext/fbbc2f4/Batterie.o: ../Existant/src/Batterie.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/fbbc2f4
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/fbbc2f4/Batterie.o ../Existant/src/Batterie.cpp

${OBJECTDIR}/_ext/fbbc2f4/CameraIR.o: ../Existant/src/CameraIR.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/fbbc2f4
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/fbbc2f4/CameraIR.o ../Existant/src/CameraIR.cpp

${OBJECTDIR}/_ext/fbbc2f4/Commande.o: ../Existant/src/Commande.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/fbbc2f4
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/fbbc2f4/Commande.o ../Existant/src/Commande.cpp

${OBJECTDIR}/_ext/fbbc2f4/EmetteurRecepteur.o: ../Existant/src/EmetteurRecepteur.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/fbbc2f4
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/fbbc2f4/EmetteurRecepteur.o ../Existant/src/EmetteurRecepteur.cpp

${OBJECTDIR}/_ext/fbbc2f4/Etat.o: ../Existant/src/Etat.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/fbbc2f4
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/fbbc2f4/Etat.o ../Existant/src/Etat.cpp

${OBJECTDIR}/_ext/fbbc2f4/Horloge.o: ../Existant/src/Horloge.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/fbbc2f4
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/fbbc2f4/Horloge.o ../Existant/src/Horloge.cpp

${OBJECTDIR}/_ext/fbbc2f4/I2C.o: ../Existant/src/I2C.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/fbbc2f4
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/fbbc2f4/I2C.o ../Existant/src/I2C.cpp

${OBJECTDIR}/_ext/fbbc2f4/Instrument.o: ../Existant/src/Instrument.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/fbbc2f4
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/fbbc2f4/Instrument.o ../Existant/src/Instrument.cpp

${OBJECTDIR}/_ext/fbbc2f4/Message.o: ../Existant/src/Message.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/fbbc2f4
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/fbbc2f4/Message.o ../Existant/src/Message.cpp

${OBJECTDIR}/_ext/fbbc2f4/Mesure.o: ../Existant/src/Mesure.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/fbbc2f4
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/fbbc2f4/Mesure.o ../Existant/src/Mesure.cpp

${OBJECTDIR}/_ext/fbbc2f4/Mission.o: ../Existant/src/Mission.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/fbbc2f4
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/fbbc2f4/Mission.o ../Existant/src/Mission.cpp

${OBJECTDIR}/_ext/fbbc2f4/Ordinateur.o: ../Existant/src/Ordinateur.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/fbbc2f4
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/fbbc2f4/Ordinateur.o ../Existant/src/Ordinateur.cpp

${OBJECTDIR}/_ext/fbbc2f4/Protocole.o: ../Existant/src/Protocole.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/fbbc2f4
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/fbbc2f4/Protocole.o ../Existant/src/Protocole.cpp

${OBJECTDIR}/_ext/fbbc2f4/Reboot.o: ../Existant/src/Reboot.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/fbbc2f4
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/fbbc2f4/Reboot.o ../Existant/src/Reboot.cpp

${OBJECTDIR}/_ext/fbbc2f4/SegmentSol.o: ../Existant/src/SegmentSol.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/fbbc2f4
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/fbbc2f4/SegmentSol.o ../Existant/src/SegmentSol.cpp

${OBJECTDIR}/_ext/fbbc2f4/SegmentVol.o: ../Existant/src/SegmentVol.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/fbbc2f4
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/fbbc2f4/SegmentVol.o ../Existant/src/SegmentVol.cpp

${OBJECTDIR}/_ext/fbbc2f4/Status.o: ../Existant/src/Status.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/fbbc2f4
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/fbbc2f4/Status.o ../Existant/src/Status.cpp

${OBJECTDIR}/_ext/fbbc2f4/Stockage.o: ../Existant/src/Stockage.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/fbbc2f4
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/fbbc2f4/Stockage.o ../Existant/src/Stockage.cpp

${OBJECTDIR}/_ext/fbbc2f4/Temperature.o: ../Existant/src/Temperature.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/fbbc2f4
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/fbbc2f4/Temperature.o ../Existant/src/Temperature.cpp

${OBJECTDIR}/_ext/fbbc2f4/TypeAck.o: ../Existant/src/TypeAck.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/fbbc2f4
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/fbbc2f4/TypeAck.o ../Existant/src/TypeAck.cpp

${OBJECTDIR}/_ext/fbbc2f4/TypeAppareil.o: ../Existant/src/TypeAppareil.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/fbbc2f4
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/fbbc2f4/TypeAppareil.o ../Existant/src/TypeAppareil.cpp

${OBJECTDIR}/_ext/fbbc2f4/TypeCommande.o: ../Existant/src/TypeCommande.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/fbbc2f4
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/fbbc2f4/TypeCommande.o ../Existant/src/TypeCommande.cpp

${OBJECTDIR}/_ext/fbbc2f4/TypeMisEtat.o: ../Existant/src/TypeMisEtat.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/fbbc2f4
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/fbbc2f4/TypeMisEtat.o ../Existant/src/TypeMisEtat.cpp

${OBJECTDIR}/_ext/fbbc2f4/serialib.o: ../Existant/src/serialib.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/fbbc2f4
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/fbbc2f4/serialib.o ../Existant/src/serialib.cpp

${OBJECTDIR}/_ext/547dfddd/Sauvegarde.o: ../Nouveau/src/Sauvegarde.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/547dfddd
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/547dfddd/Sauvegarde.o ../Nouveau/src/Sauvegarde.cpp

${OBJECTDIR}/_ext/547dfddd/Surveillance.o: ../Nouveau/src/Surveillance.cpp
	${MKDIR} -p ${OBJECTDIR}/_ext/547dfddd
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/547dfddd/Surveillance.o ../Nouveau/src/Surveillance.cpp

${OBJECTDIR}/mainTest.o: mainTest.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/mainTest.o mainTest.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
