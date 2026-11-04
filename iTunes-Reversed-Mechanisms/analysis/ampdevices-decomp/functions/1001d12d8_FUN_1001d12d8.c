// name: FUN_1001d12d8
// address: 1001d12d8

undefined8 FUN_1001d12d8(uint param_1,ulong param_2,ulong param_3,ulong param_4,byte *param_5)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  byte bVar5;
  bool bVar6;
  
  if (param_5 == (byte *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006b14ec(uVar3);
    }
    FUN_1001782e9(0,0);
    return 0xffffffce;
  }
  if ((param_1 >> 0x18 & 1) != 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006b1476(uVar3);
    }
    FUN_1001782e9(0,0);
  }
  *param_5 = 0;
  uVar4 = param_1 & 0xffffff;
  uVar3 = 0xffffffce;
  bVar5 = 1;
  if (uVar4 < 0x80) {
    if (uVar4 < 0x20) {
      if (uVar4 == 1) {
        bVar6 = param_2 == param_3;
      }
      else {
        if (uVar4 != 0x10) goto LAB_1001d1437;
        bVar6 = (long)param_3 < (long)param_2;
      }
    }
    else if (uVar4 == 0x20) {
      bVar6 = (long)param_3 <= (long)param_2;
    }
    else {
      if (uVar4 != 0x40) goto LAB_1001d1437;
      bVar6 = (long)param_2 < (long)param_3;
    }
  }
  else if (uVar4 < 0x200) {
    if (uVar4 != 0x80) {
      if (uVar4 != 0x100) goto LAB_1001d1437;
      bVar1 = (long)param_3 <= (long)param_2;
      bVar6 = (long)param_2 <= (long)param_4;
      goto LAB_1001d1419;
    }
    bVar6 = (long)param_2 <= (long)param_3;
  }
  else if (uVar4 == 0x200) {
    bVar1 = (long)param_3 < (long)param_2;
    bVar6 = (long)param_2 < (long)param_4;
LAB_1001d1419:
    bVar6 = (bool)(bVar6 & bVar1);
  }
  else if (uVar4 == 0x400) {
    bVar6 = (param_3 & param_2) != 0;
  }
  else {
    if (uVar4 != 0x800) goto LAB_1001d1437;
    bVar6 = (param_3 & param_2) == param_4;
  }
  *param_5 = bVar6;
  bVar5 = bVar6 ^ 1;
  uVar3 = 0;
LAB_1001d1437:
  if ((param_1 >> 0x19 & 1) != 0) {
    *param_5 = bVar5;
  }
  return uVar3;
}

