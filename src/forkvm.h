#ifndef FORKVM_H
#define FORKVM_H

#define XC_WANT_COMPAT_EVTCHN_API 1
#define XC_WANT_COMPAT_MAP_FOREIGN_API 1
#include <xenctrl.h>
#define LIBXL_API_VERSION 0x041300
#include <libxl.h>

bool fork_vm(void);

#endif
