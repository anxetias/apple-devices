// name: FUN_1001e0998
// address: 1001e0998

void FUN_1001e0998(long param_1,ulong param_2,char *param_3,char param_4)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 < 0x80) {
    *param_3 = (char)param_2 * '\x02';
    pcVar2 = "0123456789abcdef";
    if (param_4 == '\0') {
      pcVar2 = "0123456789ABCDEF";
    }
    if (param_2 != 0) {
      uVar4 = 0;
      do {
        param_3[uVar4 * 2 + 1] = pcVar2[*(byte *)(param_1 + uVar4) >> 4];
        param_3[uVar4 * 2 + 2] = pcVar2[*(byte *)(param_1 + uVar4) & 0xf];
        uVar4 = uVar4 + 1;
      } while (param_2 != uVar4);
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006bb30f(uVar3);
    }
    FUN_1001782e9(0,0);
    *param_3 = '\0';
  }
  return;
}

