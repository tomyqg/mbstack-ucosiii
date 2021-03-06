/*
*********************************************************************************************************
*                                          MODBUS COMMUNICATION
*                                             MASTER MODULE
*
*
*                           (c) Copyright 2019; XiaoJSoft Studio.;
*                    All rights reserved.  Protected by international copyright laws.
*
* File      : MBMASTER_CMDLET_RWMULTIPLEREGISTERS.H
* Version   : V1.0.320
* By        : Ji WenCong
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*                                               MODULE
*********************************************************************************************************
*/

#ifndef MBMASTER_CMDLET_RWMULTIPLEREGISTERS_H__
#define MBMASTER_CMDLET_RWMULTIPLEREGISTERS_H__


/*
*********************************************************************************************************
*                                            INCLUDE FILES
*********************************************************************************************************
*/

#include <mbmaster_cfg.h>

#include <mbmaster_cmdlet_common.h>

#include <mb_types.h>

#include <cpu.h>

#include <lib_def.h>


#if (MB_CFG_MASTER_EN == DEF_ENABLED) && (MB_CFG_MASTER_BUILTIN_CMDLET_RWMULTIPLEREGS == DEF_ENABLED)

#ifdef __cplusplus
extern  "C" {
#endif


/*
*********************************************************************************************************
*                                          TYPE DEFINITIONS
*********************************************************************************************************
*/

typedef struct {
    CPU_INT16U                        hregReadStartAddress;
    CPU_INT16U                        hregReadQuantity;
    CPU_INT16U                        hregWriteStartAddress;
    CPU_INT16U                       *hregWriteValues;
    CPU_INT16U                        hregWriteQuantity;
} MBMASTER_CMDLET_RWMULTIPLEREGISTERS_REQUEST;


typedef struct {
    MBMASTER_EXCEPTION_CB             cbException;

    MBMASTER_HREGVALUE_START_CB       cbHRegValueStart;
    MBMASTER_HREGVALUE_UPDATE_CB      cbHRegValueUpdate;
    MBMASTER_HREGVALUE_END_CB         cbHRegValueEnd;
} MBMASTER_CMDLET_RWMULTIPLEREGISTERS_RESPONSE;


/*
*********************************************************************************************************
*                                       COMMAND-LET DESCRIPTOR
*********************************************************************************************************
*/

#ifndef MBMASTER_CMDLET_RWHREGS_SOURCE
extern MBMASTER_CMDLET                                      g_MBMaster_CmdLet_FC17;
#endif

#define MBMASTER_CMDLETDESCRIPTOR_RWMULTIPLEREGISTERS   (&(g_MBMaster_CmdLet_FC17))


#ifdef __cplusplus
}
#endif

#endif  /*  #if (MB_CFG_MASTER_EN == DEF_ENABLED) && (MB_CFG_MASTER_BUILTIN_CMDLET_RWMULTIPLEREGS == DEF_ENABLED)  */

#endif