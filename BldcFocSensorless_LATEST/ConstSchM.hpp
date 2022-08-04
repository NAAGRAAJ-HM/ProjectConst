#pragma once
/******************************************************************************/
/* File   : ConstSchM.hpp                                                     */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstModule.hpp"

#include "infSchMClient.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define CONSTSCHM_AR_RELEASE_VERSION_MAJOR                                     4
#define CONSTSCHM_AR_RELEASE_VERSION_MINOR                                     3
#define SchM_SizeSchMClients                                                   5

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(CONSTSCHM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible CONSTSCHM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(CONSTSCHM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible CONSTSCHM_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class ConstSchM_Type:
      public ConstModule_TypeAbstract
{
   public:
/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
      uint8          u8SizeSchMClients;
      infSchMClient* aptrSchMClients_1ms[SchM_SizeSchMClients];
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
