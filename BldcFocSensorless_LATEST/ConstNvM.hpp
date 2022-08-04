#pragma once
/******************************************************************************/
/* File   : ConstNvM.hpp                                                      */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstModule.hpp"

#include "infMemIf_NvM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CONSTNVM_AR_RELEASE_VERSION_MAJOR                                      4
#define CONSTNVM_AR_RELEASE_VERSION_MINOR                                      3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(CONSTNVM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible CONSTNVM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(CONSTNVM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible CONSTNVM_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class ConstNvM_Type:
      public ConstModule_TypeAbstract
{
   public:
/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
      infMemIf_NvM* ptrinfMemIf_NvM;
};

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
