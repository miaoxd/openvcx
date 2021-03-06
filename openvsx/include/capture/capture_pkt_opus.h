/** <!--
 *
 *  Copyright (C) 2014 OpenVCX openvcx@gmail.com
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Affero General Public License as
 *  published by the Free Software Foundation, either version 3 of the
 *  License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Affero General Public License for more details.
 *
 *  You should have received a copy of the GNU Affero General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *  If you would like this software to be made available to you under an 
 *  alternate license please email openvcx@gmail.com for more information.
 *
 * -->
 */


#ifndef __CAPTURE_PKT_OPUS_H__
#define __CAPTURE_PKT_OPUS_H__

#include "capture.h"

#define OPUS_LOST_FRAME_DATA      0x00
#define OPUS_LOST_FRAME_LEN       1

#define OPUS_FRAME_DURATION_MS    20

int cbOnPkt_opus(void *pUserData, const COLLECT_STREAM_PKTDATA_T *pPkt);
int streamadd_opus(CAPTURE_CBDATA_SP_T *pSp);


#endif // __CAPTURE_PKT_OPUS_H__
