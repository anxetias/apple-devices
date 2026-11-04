// name: FUN_1001e3bc6
// address: 1001e3bc6

void FUN_1001e3bc6(ushort *param_1,ushort *param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  
  if (param_1 == (ushort *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      FUN_1006bd1c6(uVar4);
    }
  }
  else if (param_2 == (ushort *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      FUN_1006bd150(uVar4);
    }
  }
  else {
    uVar1 = *param_2;
    if (uVar1 <= param_3) {
      uVar2 = param_3 - uVar1;
      if ((uint)*param_1 + (uint)uVar1 <= param_3) {
        uVar2 = (uint)*param_1;
      }
      FUN_1001c631b(param_1 + 1,param_2 + (ulong)uVar1 + 1,(ulong)uVar2 * 2);
      *param_2 = *param_2 + (short)uVar2;
      return;
    }
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      FUN_1006bd0da(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

