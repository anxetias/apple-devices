// name: FUN_1001e484d
// address: 1001e484d

void FUN_1001e484d(byte *param_1,ulong param_2,byte *param_3)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  
  bVar1 = *param_1;
  if ((uint)bVar1 + (uint)*param_3 < 0x100) {
    uVar4 = *param_3 + 1;
    uVar5 = (uint)param_2;
    if (uVar5 <= uVar4) {
      FUN_1001c631b(param_3 + (param_2 & 0xff),param_3 + (bVar1 + uVar5),uVar4 - uVar5);
      FUN_1001c631b(param_1 + 1,param_3 + (param_2 & 0xff),bVar1);
      *param_3 = *param_3 + bVar1;
      return;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006bde7c(uVar3);
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006bde06(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

