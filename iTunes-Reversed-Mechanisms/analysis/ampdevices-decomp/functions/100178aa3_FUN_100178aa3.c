// name: FUN_100178aa3
// address: 100178aa3

ulong FUN_100178aa3(long *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  ulong unaff_R14;
  size_t sVar7;
  undefined1 local_30 [16];
  
  if (*param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      FUN_100683786(uVar4);
    }
    unaff_R14 = 0;
    cVar3 = FUN_1001782e9(0,0);
    if (cVar3 == '\0') goto LAB_100178bb4;
  }
  FUN_1001785f7();
  FUN_10015a0ac(local_30,&DAT_100890050);
  FUN_1001785f7();
  plVar6 = DAT_100890030;
  FUN_1001785f7();
  if (plVar6 != DAT_100890038) {
    do {
      if (*param_1 == *(long *)(*plVar6 + 0x48)) break;
      plVar6 = plVar6 + 1;
    } while (plVar6 != DAT_100890038);
  }
  FUN_1001785f7();
  unaff_R14 = CONCAT71((int7)(unaff_R14 >> 8),plVar6 != DAT_100890038);
  if (plVar6 != DAT_100890038) {
    plVar1 = (long *)*plVar6;
    if (plVar1 != (long *)0x0) {
      if (plVar1[0xc] != 0) {
        std::__shared_weak_count::__release_weak();
      }
      plVar2 = (long *)plVar1[4];
      if (plVar2 == plVar1) {
        lVar5 = 0x20;
LAB_100178b73:
        (**(code **)(*plVar2 + lVar5))();
      }
      else {
        lVar5 = 0x28;
        if (plVar2 != (long *)0x0) goto LAB_100178b73;
      }
      operator_delete(plVar1);
    }
    FUN_1001785f7();
    sVar7 = (long)DAT_100890038 - (long)(plVar6 + 1);
    if (sVar7 != 0) {
      _memmove(plVar6,plVar6 + 1,sVar7);
    }
    DAT_100890038 = (long *)((long)plVar6 + sVar7);
  }
  FUN_10015a142(local_30);
LAB_100178bb4:
  return unaff_R14 & 0xffffffff;
}

