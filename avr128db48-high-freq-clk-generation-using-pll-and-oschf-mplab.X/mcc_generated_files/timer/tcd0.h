/**
 * TCD0 Generated Driver API Header File
 *
 * @file tcd0.h
 *
 * @defgroup tcd0 TCD0
 *
 * @brief This header file provides APIs for the TCD0 driver.
 *
 * @version TCD0 Driver Version 1.0.1
*/
/*
© [2023] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/


#ifndef TCD0_H_INCLUDED
#define TCD0_H_INCLUDED

#include "../system/utils/compiler.h"
#include "../system/ccp.h"

/**
 * @ingroup tcd0
 * @typedef void *TCD0_cb_t
 * @brief Function pointer to callback function called by TCD. NULL=default value: No callback function is to be used.
 */ 
typedef void (*TCD0_cb_t)(void);
/**
 * @ingroup tcd0
 * @brief Initialize TCD interface.
 * @param none
 * @retval 0 - the TCD init was successful
 * @retval 1 - the TCD init was not successful
 */ 
int8_t TCD0_Initialize();
/**
 * @ingroup tcd0
 * @brief ISR callback function register to be called if Trigger input flag is set.
 * @param TCD0_cb_t cb - call back value for Trigger input.
 * @return none
 */ 
void TCD0_SetTRIGIsrCallback(TCD0_cb_t cb);
/**
 * @ingroup tcd0
 * @brief ISR callback function register to be called if counter overflow flag is set.
 * @param TCD0_cb_t cb - call back value for counter overflow.
 * @return none
 */ 
void TCD0_SetOVFIsrCallback(TCD0_cb_t cb);


#endif /* TCD0_H_INCLUDED */
