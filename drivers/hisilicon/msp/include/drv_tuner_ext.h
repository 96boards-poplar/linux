/*
 * Copyright (C) 2017, Hisilicon Tech. Co., Ltd.
 * SPDX-License-Identifier: GPL-2.0
 */
#ifndef __DRV_TUNER_EXT_H__
#define __DRV_TUNER_EXT_H__

#include "hi_type.h"

#include "hi_drv_dev.h"

typedef HI_S32 (*FN_TUNER_SUSPEND)(PM_BASEDEV_S *pdev, pm_message_t state);
typedef HI_S32 (*FN_TUNER_RESUME)(PM_BASEDEV_S *pdev);

typedef struct
{
    FN_TUNER_SUSPEND	pfnTunerSuspend;
    FN_TUNER_RESUME	pfnTunerResume;
} TUNER_EXPORT_FUNC_S;

#endif
