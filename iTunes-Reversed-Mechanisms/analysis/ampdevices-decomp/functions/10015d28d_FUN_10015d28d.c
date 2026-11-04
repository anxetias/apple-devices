// name: FUN_10015d28d
// address: 10015d28d

undefined8 FUN_10015d28d(long param_1,uint param_2,long *param_3)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if (param_3 == (long *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_10066d105(uVar3);
    }
  }
  else {
    *param_3 = 0;
    if (param_1 != 0) {
      plVar4 = (long *)(param_1 + 0x10);
      while( true ) {
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) {
          return 0;
        }
        if (plVar4[4] == 0) break;
        uVar1 = *(uint *)(plVar4[4] + 4);
        if ((uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) ==
            param_2) {
          *param_3 = (long)plVar4;
          return 0;
        }
      }
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        FUN_10066d019(uVar3);
      }
      FUN_1001782e9(0,0);
      return 0xffffff92;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_10066d08f(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

