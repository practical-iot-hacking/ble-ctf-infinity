/*
   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * DEFINES
 ****************************************************************************************
 */

#define HRPS_HT_MEAS_MAX_LEN            (13)

#define HRPS_MANDATORY_MASK             (0x0F)
#define HRPS_BODY_SENSOR_LOC_MASK       (0x30)
#define HRPS_HR_CTNL_PT_MASK            (0xC0)


///Attributes State Machine
enum
{
    MITM_PSK_PAIR_REQ_IDX_SVC,

    //MITM_PSK_PAIR_REQ_IDX_HR_MEAS_CHAR,
    //MITM_PSK_PAIR_REQ_IDX_HR_MEAS_VAL,
    //MITM_PSK_PAIR_REQ_IDX_HR_MEAS_NTF_CFG,

    MITM_PSK_PAIR_REQ_IDX_BOBY_SENSOR_LOC_CHAR,
    MITM_PSK_PAIR_REQ_IDX_BOBY_SENSOR_LOC_VAL,

    MITM_PSK_PAIR_REQ_IDX_HR_CTNL_PT_CHAR,
    MITM_PSK_PAIR_REQ_IDX_HR_CTNL_PT_VAL,

    MITM_PSK_PAIR_REQ_IDX_WRITE_WARP_CHAR,
    MITM_PSK_PAIR_REQ_IDX_WRITE_WARP_VAL,

    MITM_PSK_PAIR_REQ_IDX_NB,
};

void app_main();