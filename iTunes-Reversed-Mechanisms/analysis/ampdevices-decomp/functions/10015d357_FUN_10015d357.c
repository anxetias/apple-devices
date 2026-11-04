// name: FUN_10015d357
// address: 10015d357

undefined8 FUN_10015d357(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_10066d267(uVar3);
    }
  }
  else if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_10066d1f1(uVar3);
    }
  }
  else {
    if (param_1 != param_2) {
      FUN_1001c2470(param_1 + 0x10,param_2);
      *(long *)(param_2 + 8) = param_1;
      if ((param_3 & 4) != 0) {
        return 0;
      }
      uVar1 = **(uint **)(param_2 + 0x20);
      do {
        *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 2;
        uVar4 = **(uint **)(param_1 + 0x20);
        uVar4 = (uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18) +
                (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18);
        **(uint **)(param_1 + 0x20) =
             uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 * 0x1000000;
        param_1 = *(long *)(param_1 + 8);
      } while (param_1 != 0);
      return 0;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_10066d17b(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

