// name: FUN_100179ae2
// address: 100179ae2

void FUN_100179ae2(long param_1,char *param_2,char param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  char *pcVar4;
  uint uVar5;
  byte *pbVar6;
  
  if ((param_2 == (char *)0x0 || param_1 == 0) || (0x20 < *(uint *)(param_1 + 4))) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100683d7a(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  else {
    uVar2 = *(uint *)(param_1 + 4) * 2;
    if (param_4 <= uVar2) {
      uVar2 = param_4;
    }
    pcVar4 = "0123456789ABCDEF";
    if (param_3 != '\0') {
      pcVar4 = "0123456789abcdef";
    }
    pbVar6 = (byte *)(param_1 + 8);
    if (1 < uVar2) {
      uVar5 = uVar2 >> 1;
      do {
        *param_2 = pcVar4[*pbVar6 >> 4];
        param_2[1] = pcVar4[*pbVar6 & 0xf];
        param_2 = param_2 + 2;
        pbVar6 = pbVar6 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    if ((uVar2 & 1) != 0) {
      *param_2 = pcVar4[*pbVar6 >> 4];
      param_2 = param_2 + 1;
    }
    *param_2 = '\0';
  }
  return;
}

