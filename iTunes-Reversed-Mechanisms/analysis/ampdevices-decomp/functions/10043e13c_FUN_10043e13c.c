// name: FUN_10043e13c
// address: 10043e13c

void FUN_10043e13c(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  void *pvVar8;
  long lVar9;
  long *plVar10;
  size_t sVar11;
  
  *param_1 = &PTR_FUN_100859120;
  *(undefined1 *)((long)param_1 + 0x531) = 1;
  plVar3 = DAT_1008c7688;
  if (DAT_1008c7688 != (long *)0x0) {
    plVar1 = DAT_1008c7688 + 3;
    FUN_1001e9de0(plVar1);
    plVar6 = (long *)*plVar3;
    plVar10 = (long *)plVar3[1];
    plVar4 = plVar6;
    if (plVar6 == plVar10) {
LAB_10043e1a0:
      plVar7 = plVar4 + 1;
      plVar5 = plVar4;
      if (plVar7 != plVar10 && plVar4 != plVar10) {
        do {
          if ((undefined8 *)*plVar7 != param_1) {
            *plVar4 = *plVar7;
            plVar4 = plVar4 + 1;
          }
          plVar7 = plVar7 + 1;
        } while (plVar7 != plVar10);
        plVar6 = (long *)*plVar3;
        plVar10 = (long *)plVar3[1];
        plVar5 = plVar4;
      }
    }
    else {
      do {
        if ((undefined8 *)*plVar4 == param_1) goto LAB_10043e1a0;
        plVar4 = plVar4 + 1;
        plVar5 = plVar10;
      } while (plVar4 != plVar10);
    }
    pvVar2 = (void *)((long)plVar6 + ((long)plVar5 - (long)plVar6));
    pvVar8 = (void *)((long)plVar6 + ((long)plVar5 - (long)plVar6) + 8);
    sVar11 = (long)plVar10 - (long)pvVar8;
    if (sVar11 != 0) {
      _memmove(pvVar2,pvVar8,sVar11);
    }
    plVar3[1] = (long)pvVar2 + sVar11;
    FUN_1001e9eb9(plVar1);
  }
  FUN_10017060f(param_1[0x9b]);
  param_1[0x9b] = 0;
  if (param_1[0x93] != 0) {
    _AVCFAssetCancelLoading();
    FUN_10017060f(param_1[0x93]);
    param_1[0x93] = 0;
  }
  if (param_1[0x95] != 0) {
    FUN_10043e37c(param_1);
    FUN_10017060f(param_1[0x95]);
    param_1[0x95] = 0;
  }
  lVar9 = param_1[0x96];
  if (lVar9 != 0) {
    if (param_1[0x9a] != 0) {
      _AVCFPlayerRemoveObserver(lVar9,param_1[0x9a]);
      _CFRelease(param_1[0x9a]);
      param_1[0x99] = 0;
      param_1[0x9a] = 0;
      lVar9 = param_1[0x96];
    }
    FUN_10043e37c(param_1,lVar9);
    FUN_10017060f(param_1[0x96]);
    param_1[0x96] = 0;
  }
  FUN_10017060f(param_1[0x94]);
  param_1[0x94] = 0;
  if ((*(dispatch_object_t *)(param_1 + 0x98))._os_obj != (_os_object_s *)0x0) {
    _dispatch_release(*(dispatch_object_t *)(param_1 + 0x98));
    param_1[0x98] = 0;
  }
  FUN_10017060f(param_1[0xa8]);
  param_1[0xa8] = 0;
  FUN_10043e3da(param_1,0);
  *(undefined4 *)(param_1 + 3) = 0;
  FUN_1001b7a50(param_1 + 0xac);
  FUN_10019b6d8(param_1 + 0xab);
  FUN_1001ab006(param_1 + 0xaa);
  if (param_1[2] == 0) {
    return;
  }
  std::__shared_weak_count::__release_weak();
  return;
}

