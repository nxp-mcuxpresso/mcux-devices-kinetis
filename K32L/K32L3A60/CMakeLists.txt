# Copyright 2024 NXP
# All rights reserved.
#
# SPDX-License-Identifier: BSD-3-Clause

#### device spepcific drivers
include(${SdkRootDirPath}/devices/arm/device_header_multicore.cmake)
mcux_add_cmakelists(${SdkRootDirPath}/${device_root}/Kinetis/K32L/K32L3A60/drivers)

#### Kinetis shared drivers/components/middlewares, project segments
include(${SdkRootDirPath}/devices/Kinetis/shared.cmake)
