// name: FUN_10015fe49
// address: 10015fe49

void FUN_10015fe49(ulong *param_1,uint param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  
  if (param_1 == (ulong *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10066ea0d(uVar3);
    }
  }
  else {
    if (param_3 == 0) {
      return;
    }
    uVar2 = 8 - (int)param_1[2];
    do {
      uVar4 = param_3;
      if (uVar2 < param_3) {
        uVar4 = uVar2;
      }
      param_3 = param_3 - uVar4;
      uVar2 = uVar2 - uVar4;
      uVar4 = 0xff >> (8U - (char)uVar4 & 0x1f);
      *(byte *)*param_1 =
           (byte)((uVar4 & param_2 >> ((byte)param_3 & 0x1f)) << ((byte)uVar2 & 0x1f)) |
           ~(byte)(uVar4 << ((byte)uVar2 & 0x1f)) & *(byte *)*param_1;
      if (uVar2 == 0) {
        *param_1 = *param_1 + 1;
        uVar2 = 8;
      }
    } while (param_3 != 0);
    *(uint *)(param_1 + 2) = 8 - uVar2;
    if (*param_1 <= param_1[1]) {
      return;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_10066e997(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

