// name: FUN_1001e400b
// address: 1001e400b

void FUN_1001e400b(ushort *param_1)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  ushort *puVar4;
  uint uVar5;
  
  if (param_1 == (ushort *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006bd686(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  else {
    uVar5 = (uint)*param_1;
    if (*param_1 != 0) {
      puVar4 = param_1 + 1;
      do {
        uVar2 = FUN_1001e39bb(*puVar4);
        if ((uVar2 & 0x3c) == 0) goto LAB_1001e4048;
        puVar4 = puVar4 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      uVar5 = 0;
LAB_1001e4048:
      if (uVar5 < *param_1) {
        FUN_1001c631b(param_1 + ((ulong)*param_1 - (long)(int)uVar5) + 1,param_1 + 1,
                      (ulong)uVar5 * 2);
        *param_1 = (ushort)uVar5;
      }
    }
  }
  return;
}

