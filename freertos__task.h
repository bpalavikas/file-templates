/**
********************************************************************************
*                CTI - Centre for Technology Infusion
* @file    cti_name_task.h
* @brief   Template header for a single FreeRTOS task module.
* @version V0.1
* @target  STM32 (CubeMX-generated projects, native FreeRTOS API)
* @notes   - Each task lives in its own .c/.h module.
*          - Creation (xTaskCreateStatic) is done in the .c file.
********************************************************************************
*/
#ifndef CTI_NAME_TASK_H_
#define CTI_NAME_TASK_H_

#ifdef __cplusplus
extern "C" {
#endif


/*--INCLUDES------------------------------------------------------------------*/
#include "CTI_freeRTOS.h"

/* FreeRTOS (native API) */
#include "FreeRTOS.h"
#include "task.h"


/*--DEFINES-------------------------------------------------------------------*/


/*--GLOBAL--------------------------------------------------------------------*/
extern TaskHandle_t   g_name_task_handle;


/*--FUNCTION--PROTOTYPES------------------------------------------------------*/
void cti_name_task_start(void);
// void cti_name_q_start(void)
// void cti_name_evt_start(void)
// void cti_name_mtx_start(void)
// void cti_name_tm_start(void)
// void cti_name_msgbuf_start(void)
// void cti_name_stream_start(void)


/*--API--OPAQUE---------------------------------------------------------------*/
//
// BaseType_t cti_name_post(const name_msg_t *m, TickType_t to);
// BaseType_t cti_name_post_from_isr(const name_msg_t *m, BaseType_t *hpw);

/* Event setters (keep event group private; expose wrappers only) */
// void cti_name_evt_set(EventBits_t bits);
// void cti_name_evt_set_from_isr(EventBits_t bits, BaseType_t *hpw);


#ifdef __cplusplus
}
#endif

#endif /* CTI_TASK_H_ */
/******************************************************************************/
/*                             END OF FILE                                    */
/******************************************************************************/

