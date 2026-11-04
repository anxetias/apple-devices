// name: FUN_1001e0a72
// address: 1001e0a72

void FUN_1001e0a72(long param_1,long param_2,undefined1 *param_3,ulong param_4,char param_5)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006bb471(uVar3);
    }
  }
  else {
    if (param_3 != (undefined1 *)0x0) {
      if ((ulong)(param_2 * 2) < param_4) {
        pcVar2 = "0123456789abcdef";
        if (param_5 == '\0') {
          pcVar2 = "0123456789ABCDEF";
        }
        if (param_2 != 0) {
          lVar4 = 0;
          lVar5 = 0;
          do {
            param_3[lVar5 * 2] = pcVar2[*(byte *)(param_1 + lVar5) >> 4];
            param_3[lVar5 * 2 + 1] = pcVar2[*(byte *)(param_1 + lVar5) & 0xf];
            lVar5 = lVar5 + 1;
            lVar4 = lVar4 + -2;
          } while (param_2 != lVar5);
          param_3 = param_3 + -lVar4;
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          FUN_1006bb385(uVar3);
        }
        FUN_1001782e9(0,0);
        if (param_4 == 0) {
          return;
        }
      }
      *param_3 = 0;
      return;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006bb3fb(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

