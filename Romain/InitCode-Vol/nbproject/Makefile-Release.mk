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
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/fbbc2f4/Ordinateur.o \
	${OBJECTDIR}/_ext/fbbc2f4/Protocole.o \
	${OBJECTDIR}/_ext/fbbc2f4/Reboot.o \
	${OBJECTDIR}/_ext/fbbc2f4/SegmentVol.o \
	${OBJECTDIR}/_ext/fbbc2f4/Stockage.o \
	${OBJECTDIR}/_ext/fbbc2f4/main.o \
	${OBJECTDIR}/_ext/547dfddd/Sauvegarde.o \
	${OBJECTDIR}/_ext/547dfddd/Surveillance.o


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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/initcode-vol

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/initcode-vol: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/initcode-vol ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/_ext/fbbc2f4/Ordinateur.o: ../Existant/src/Ordinateur.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/fbbc2f4
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/fbbc2f4/Ordinateur.o ../Existant/src/Ordinateur.cpp

${OBJECTDIR}/_ext/fbbc2f4/Protocole.o: ../Existant/src/Protocole.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/fbbc2f4
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/fbbc2f4/Protocole.o ../Existant/src/Protocole.cpp

${OBJECTDIR}/_ext/fbbc2f4/Reboot.o: ../Existant/src/Reboot.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/fbbc2f4
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/fbbc2f4/Reboot.o ../Existant/src/Reboot.cpp

${OBJECTDIR}/_ext/fbbc2f4/SegmentVol.o: ../Existant/src/SegmentVol.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/fbbc2f4
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/fbbc2f4/SegmentVol.o ../Existant/src/SegmentVol.cpp

${OBJECTDIR}/_ext/fbbc2f4/Stockage.o: ../Existant/src/Stockage.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/fbbc2f4
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/fbbc2f4/Stockage.o ../Existant/src/Stockage.cpp

${OBJECTDIR}/_ext/fbbc2f4/main.o: ../Existant/src/main.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/fbbc2f4
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/fbbc2f4/main.o ../Existant/src/main.cpp

${OBJECTDIR}/_ext/547dfddd/Sauvegarde.o: ../Nouveau/src/Sauvegarde.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/547dfddd
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/547dfddd/Sauvegarde.o ../Nouveau/src/Sauvegarde.cpp

${OBJECTDIR}/_ext/547dfddd/Surveillance.o: ../Nouveau/src/Surveillance.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/547dfddd
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/547dfddd/Surveillance.o ../Nouveau/src/Surveillance.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/initcode-vol

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
