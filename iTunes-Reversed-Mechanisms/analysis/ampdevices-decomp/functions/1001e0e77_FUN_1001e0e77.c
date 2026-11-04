// name: FUN_1001e0e77
// address: 1001e0e77

void FUN_1001e0e77(long param_1,ulong param_2,long param_3,long param_4)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  ulong uVar5;
  byte bVar6;
  
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      FUN_1006bb7ab(uVar4);
    }
  }
  else if (param_3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      FUN_1006bb735(uVar4);
    }
  }
  else {
    if (param_2 <= (ulong)(param_4 * 2)) {
      FUN_1001c62d9(param_3,param_4);
      if (param_2 == 0) {
        return;
      }
      uVar5 = param_2 + 1 >> 1;
      bVar2 = true;
      do {
        bVar1 = *(byte *)(param_1 + -1 + param_2);
        bVar6 = bVar1 - 0x20;
        if (0x19 < (byte)(bVar1 + 0x9f)) {
          bVar6 = bVar1;
        }
        cVar3 = -0x37;
        if (bVar6 < 0x41) {
          cVar3 = -0x30;
        }
        if (bVar2) {
          *(byte *)(param_3 + -1 + uVar5) = cVar3 + bVar6;
          uVar5 = uVar5 - 1;
        }
        else {
          *(byte *)(param_3 + uVar5) = *(byte *)(param_3 + uVar5) | (cVar3 + bVar6) * '\x10';
        }
        bVar2 = (bool)(bVar2 ^ 1);
        param_2 = param_2 - 1;
      } while (param_2 != 0);
      return;
    }
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      FUN_1006bb6bf(uVar4);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

