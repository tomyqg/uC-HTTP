/*
*********************************************************************************************************
*                                            EXAMPLE CODE
*
*               This file is provided as an example on how to use Micrium products.
*
*               Please feel free to use any application code labeled as 'EXAMPLE CODE' in
*               your application products.  Example code may be used as is, in whole or in
*               part, or may be used as a reference only. This file can be modified as
*               required to meet the end-product requirements.
*
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*
*                                        NET FILE SYSTEM PORT
*
*                                      HTTPs STATIC FILE SYSTEM
*
* Filename : http-s_fs_static.h
* Version  : V3.01.00
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*********************************************************************************************************
*                                               MODULE
*********************************************************************************************************
*********************************************************************************************************
*/

#ifndef  HTTPs_FS_STATIC_MODULE_PRESENT
#define  HTTPs_FS_STATIC_MODULE_PRESENT


/*
*********************************************************************************************************
*********************************************************************************************************
*                                            INCLUDE FILES
*********************************************************************************************************
*********************************************************************************************************
*/

#include  <lib_mem.h>
#include  <FS/net_fs.h>
#include  <http-s_fs_static_cfg.h>


/*
*********************************************************************************************************
*********************************************************************************************************
*                                          GLOBAL VARIABLES
*********************************************************************************************************
*********************************************************************************************************
*/

extern  const  NET_FS_API  HTTPs_FS_API_Static;


/*
*********************************************************************************************************
*********************************************************************************************************
*                                         FUNCTION PROTOTYPES
*********************************************************************************************************
*********************************************************************************************************
*/

CPU_BOOLEAN  HTTPs_FS_Init     (void);

CPU_BOOLEAN  HTTPs_FS_AddFile  (CPU_CHAR          *p_name,
                                void              *p_data,
                                CPU_INT32U         size);

CPU_BOOLEAN  HTTPs_FS_SetTime  (NET_FS_DATE_TIME  *p_time);



/*
*********************************************************************************************************
*********************************************************************************************************
*                                             MODULE END
*********************************************************************************************************
*********************************************************************************************************
*/

#endif  /* HTTPs_FS_STATIC_MODULE_PRESENT  */


