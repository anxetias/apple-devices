// name: FUN_100179192
// address: 100179192

ulong FUN_100179192(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  undefined1 local_28 [16];
  
  if ((int)param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006838e8(uVar2);
    }
    uVar3 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    FUN_1001785f7();
    FUN_10015a0ac(local_28,&DAT_100890050);
    FUN_1001785f7();
    if (DAT_100890030 == DAT_100890038) {
      uVar3 = 0;
    }
    else {
      FUN_1001785f7();
      plVar4 = DAT_100890030;
      FUN_1001785f7();
      plVar5 = plVar4;
      for (; (plVar4 != DAT_100890038 && (plVar5 = plVar4, *(int *)(*plVar4 + 0x34) != (int)param_1)
             ); plVar4 = plVar4 + 1) {
        plVar5 = DAT_100890038;
      }
      FUN_1001785f7();
      uVar3 = CONCAT71((int7)((ulong)param_1 >> 8),plVar5 != DAT_100890038) & 0xffffffff;
    }
    FUN_10015a142(local_28);
  }
  return uVar3;
}

