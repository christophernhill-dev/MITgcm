C $Header: /u/gcmpack/MITgcm/verification/lab_sea/code/Attic/ECCO_CPPOPTIONS.h,v 1.5 2004/03/12 22:18:16 dimitri Exp $
C $Name:  $

C CPP flags controlling which code is included in the files that
C will be compiled.
C
C ********************************************************************
C ***                         ECCO Package                         ***
C ********************************************************************
C

C ********************************************************************
C ***                  Adjoint Support Package                     ***
C ********************************************************************


C ********************************************************************
C ***                     Calendar Package                         ***
C ********************************************************************
C 
C CPP flags controlling which code is included in the files that
C will be compiled.

CPH >>>>>> THERE ARE NO MORE CAL OPTIONS TO BE SET <<<<<<

C ********************************************************************
C ***                Cost function Package                         ***
C ********************************************************************
C

C ********************************************************************
C ***               Control vector Package                         ***
C ********************************************************************
C 

C ********************************************************************
C ***             External forcing Package                         ***
C ********************************************************************
C 

C   Do more printout for the protocol file than usual.
#define EXF_VERBOSE

C   Options that are required to use pkg/exf with pkg/seaice.
#define  ALLOW_ATM_TEMP
#define  ALLOW_ATM_WIND
#define  ALLOW_DOWNWARD_RADIATION
#define  ALLOW_BULKFORMULAE
#define  ALLOW_RUNOFF

C   Options that control relaxation terms.
#undef   ALLOW_CLIM_CYCLIC
#undef   ALLOW_CLIMTEMP_RELAXATION
#undef   ALLOW_CLIMSALT_RELAXATION
#undef   ALLOW_CLIMSST_RELAXATION
#define  ALLOW_CLIMSSS_RELAXATION
