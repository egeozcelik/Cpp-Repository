#ifndef MAIN_H
#define MAIN_H


#define ATM_CASE_STUDY_CPP
//#define VALIDATE_CPP

#if defined(ATM_CASE_STUDY_CPP) && defined(VALIDATE_CPP)
#error: ATM_CASE_STUDY_CPP and VALIDATE_CPP cannot be defined simultaneously!
#endif


#if !defined(ATM_CASE_STUDY_CPP) && !defined(VALIDATE_CPP)
#error: One of ATM_CASE_STUDY_CPP or VALIDATE_CPP must be defined!
#endif


#if defined(VALIDATE_CPP)
#error: VALIDATE_CPP requires regex features from boost C++ libraries which does not compile!
#endif


#endif // MAIN_H
