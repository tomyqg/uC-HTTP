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
*                            HTTP CLIENT MEMORY MODULE CONFIGURATION FILE
*
* Filename : http-c_mem_cfg.c
* Version  : V3.01.00
*********************************************************************************************************
*/

#define    MICRIUM_SOURCE
#define    HTTPc_MEM_CFG_MODULE


/*
*********************************************************************************************************
*********************************************************************************************************
*                                             INCLUDE FILES
*********************************************************************************************************
*********************************************************************************************************
*/

#include  <Client/Add-on/Mem/http-c_mem.h>


/*
*********************************************************************************************************
*********************************************************************************************************
*                                        DEFAULT CONFIGURATION
*********************************************************************************************************
*********************************************************************************************************
*/

#define  HTTPc_MEM_CFG_CONN_NBR_MAX                            10u
#define  HTTPc_MEM_CFG_BUF_SIZE                              1024u
#define  HTTPc_MEM_CFG_REQ_NBR_MAX                             20u


/*
*********************************************************************************************************
*********************************************************************************************************
*                             HTTP CLIENT INSTANCE CONFIGURATION STRUCTURE
*********************************************************************************************************
*********************************************************************************************************
*/

const  HTTPc_MEM_CFG  HTTPcMem_Cfg = {

        HTTPc_MEM_CFG_CONN_NBR_MAX,
        HTTPc_MEM_CFG_REQ_NBR_MAX,
        HTTPc_MEM_CFG_BUF_SIZE,
};
