// name: FUN_1001e0d72
// address: 1001e0d72

void FUN_1001e0d72(long param_1,long param_2,long param_3,ulong param_4,char param_5)

{
  char cVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006bb649(uVar2);
    }
  }
  else if (param_3 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006bb5d3(uVar2);
    }
  }
  else {
    if ((ulong)(param_2 * 2) <= (param_4 & 0xffffffff)) {
      pcVar3 = "0123456789abcdef";
      if (param_5 == '\0') {
        pcVar3 = "0123456789ABCDEF";
      }
      if (param_2 == 0) {
        return;
      }
      lVar4 = 0;
      do {
        *(char *)(param_3 + lVar4 * 2) = pcVar3[*(byte *)(param_1 + lVar4) >> 4];
        *(char *)(param_3 + 1 + lVar4 * 2) = pcVar3[*(byte *)(param_1 + lVar4) & 0xf];
        lVar4 = lVar4 + 1;
      } while (param_2 != lVar4);
      return;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006bb55d(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

