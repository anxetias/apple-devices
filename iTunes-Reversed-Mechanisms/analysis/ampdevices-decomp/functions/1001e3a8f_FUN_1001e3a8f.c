// name: FUN_1001e3a8f
// address: 1001e3a8f

void FUN_1001e3a8f(ushort *param_1,ushort *param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  ushort *puVar5;
  
  if (param_1 == (ushort *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      FUN_1006bd062(uVar4);
    }
  }
  else {
    if (param_2 != (ushort *)0x0) {
      if (0xff < *param_1) {
        uVar4 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar4,0x10);
        if (cVar3 != '\0') {
          FUN_1006bcf00(uVar4);
        }
        FUN_1001782e9(0,0);
      }
      if (0xff < param_3) {
        uVar4 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar4,0x10);
        if (cVar3 != '\0') {
          FUN_1006bcf76(uVar4);
        }
        FUN_1001782e9(0,0);
        param_3 = 0xff;
      }
      uVar1 = *param_2;
      uVar2 = (uint)*param_1 + (uint)uVar1;
      if (param_3 <= (uint)*param_1 + (uint)uVar1) {
        uVar2 = param_3;
      }
      if ((ulong)uVar1 < (ulong)uVar2) {
        puVar5 = param_2 + uVar1;
        do {
          param_1 = param_1 + 1;
          puVar5[1] = *param_1;
          puVar5 = puVar5 + 1;
        } while (puVar5 < param_2 + uVar2);
      }
      *param_2 = (ushort)uVar2;
      return;
    }
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      FUN_1006bcfec(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

