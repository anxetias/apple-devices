// name: FUN_1001e2979
// address: 1001e2979

void FUN_1001e2979(byte *param_1,char param_2,char *param_3,size_t param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  if (param_1 == (byte *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006bc15f(uVar3);
    }
  }
  else {
    if (param_3 != (char *)0x0) {
      iVar2 = _snprintf(param_3,param_4,"%u.%u",
                        (ulong)((param_1[3] & 0xf) + (uint)(param_1[3] >> 4) * 10),
                        (ulong)(param_1[2] >> 4));
      pcVar4 = param_3 + iVar2;
      if ((param_1[2] & 0xf) != 0) {
        iVar2 = _snprintf(pcVar4,param_4 - (long)iVar2,".%u");
        pcVar4 = pcVar4 + iVar2;
      }
      if (param_2 == '\0') {
        return;
      }
      switch(param_1[1] << 3 | (byte)(param_1[1] + 0x80) >> 5) {
      case 0:
        uVar3 = 0x66;
        if (*param_1 != 0) break;
      default:
        return;
      case 5:
        uVar3 = 100;
        break;
      case 6:
        uVar3 = 0x61;
        break;
      case 7:
        uVar3 = 0x62;
      }
      _snprintf(pcVar4,(size_t)(param_3 + (param_4 - (long)pcVar4)),"%c%u",uVar3,(ulong)*param_1);
      return;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006bc0e9(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

