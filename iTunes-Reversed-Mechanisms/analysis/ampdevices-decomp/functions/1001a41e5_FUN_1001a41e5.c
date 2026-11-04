// name: FUN_1001a41e5
// address: 1001a41e5

undefined8
FUN_1001a41e5(void *param_1,uint param_2,void *param_3,uint param_4,void *param_5,uint param_6,
             void *param_7,uint param_8,int *param_9,int *param_10,int *param_11,long *param_12)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  ulong uVar6;
  void *pvVar7;
  ulong uVar8;
  void *pvVar9;
  
  pvVar7 = (void *)((ulong)param_2 + (long)param_1);
  pvVar9 = param_1;
  if (param_2 != 0) {
    uVar8 = 0;
    do {
      if (*(char *)((long)param_1 + uVar8) == ' ') {
        if (param_3 != (void *)0x0) {
          if (param_4 <= (uint)uVar8) {
            uVar4 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar4,0x10);
            if (cVar2 != '\0') {
              FUN_10069d33a(uVar4);
            }
            goto LAB_1001a43c6;
          }
          _memcpy(param_3,param_1,uVar8 & 0xffffffff);
          *(undefined1 *)((long)param_3 + (uVar8 & 0xffffffff)) = 0;
        }
        pvVar9 = (void *)((long)param_1 + uVar8 + 1);
        goto LAB_1001a4261;
      }
      lVar1 = uVar8 + 1;
      uVar8 = uVar8 + 1;
    } while ((void *)((long)param_1 + lVar1) < pvVar7);
    pvVar9 = (void *)(uVar8 + (long)param_1);
  }
LAB_1001a4261:
  if (pvVar9 < pvVar7) {
    uVar8 = 0;
    do {
      uVar6 = uVar8;
      if (*(char *)((long)pvVar9 + uVar6) == ' ') {
        if (param_5 != (void *)0x0) {
          if (param_6 <= (uint)uVar6) {
            uVar4 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar4,0x10);
            if (cVar2 != '\0') {
              FUN_10069d426(uVar4);
            }
            goto LAB_1001a43c6;
          }
          _memcpy(param_5,pvVar9,uVar6 & 0xffffffff);
          *(undefined1 *)((long)param_5 + (uVar6 & 0xffffffff)) = 0;
        }
        break;
      }
      uVar8 = uVar6 + 1;
    } while ((void *)((long)pvVar9 + uVar6 + 1) < pvVar7);
    pvVar9 = (void *)((long)pvVar9 + uVar6 + 1);
    if (pvVar9 < pvVar7) {
      if (pvVar9 < (void *)((long)pvVar7 - 1U)) {
        uVar8 = 0;
        do {
          if ((*(char *)((long)pvVar9 + uVar8) == '\r') &&
             (*(char *)((long)pvVar9 + uVar8 + 1) == '\n')) {
            if (param_7 != (void *)0x0) {
              if (param_8 <= (uint)uVar8) {
                uVar4 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar4,0x10);
                if (cVar2 != '\0') {
                  FUN_10069d588(uVar4);
                }
                goto LAB_1001a43c6;
              }
              _memcpy(param_7,pvVar9,uVar8 & 0xffffffff);
              *(undefined1 *)((long)param_7 + (uVar8 & 0xffffffff)) = 0;
            }
            pcVar5 = (char *)((long)pvVar9 + uVar8);
            if ((char *)((long)pvVar7 - 3U) <= pcVar5) goto LAB_1001a444a;
            iVar3 = 2;
            goto LAB_1001a4429;
          }
          lVar1 = uVar8 + 1;
          uVar8 = uVar8 + 1;
        } while ((void *)((long)pvVar9 + lVar1) < (void *)((long)pvVar7 - 1U));
      }
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        FUN_10069d512(uVar4);
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        FUN_10069d49c(uVar4);
      }
    }
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_10069d3b0(uVar4);
    }
  }
LAB_1001a43c6:
  FUN_1001782e9(0,0);
  return 0xffffffce;
LAB_1001a4429:
  if ((((*pcVar5 == '\r') && (pcVar5[1] == '\n')) && (pcVar5[2] == '\r')) && (pcVar5[3] == '\n')) {
    if (param_9 != (int *)0x0) {
      *param_9 = ((int)pvVar9 - (int)param_1) + (uint)uVar8 + 2;
    }
    pcVar5 = pcVar5 + 4;
    if (param_10 != (int *)0x0) {
      *param_10 = iVar3;
    }
    goto LAB_1001a444a;
  }
  pcVar5 = pcVar5 + 1;
  iVar3 = iVar3 + 1;
  if ((char *)((long)pvVar7 - 3U) <= pcVar5) {
LAB_1001a444a:
    if (param_11 != (int *)0x0) {
      *param_11 = (int)pcVar5 - (int)param_1;
    }
    if (param_12 != (long *)0x0) {
      *param_12 = (long)pvVar7 - (long)pcVar5;
    }
    return 0;
  }
  goto LAB_1001a4429;
}

