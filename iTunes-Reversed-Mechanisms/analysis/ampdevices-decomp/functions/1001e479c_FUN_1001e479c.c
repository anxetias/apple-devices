// name: FUN_1001e479c
// address: 1001e479c

void FUN_1001e479c(ushort *param_1,uint param_2,ushort *param_3,uint param_4)

{
  ushort uVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar1 = *param_1;
  if (param_4 < (uint)uVar1 + (uint)*param_3) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006bdd90(uVar3);
    }
  }
  else {
    uVar4 = *param_3 + 1;
    if (param_2 <= uVar4) {
      FUN_1001c631b(param_3 + param_2,param_3 + (uVar1 + param_2),(ulong)(uVar4 - param_2) * 2);
      FUN_1001c631b(param_1 + 1,param_3 + param_2,(uint)uVar1 * 2);
      *param_3 = *param_3 + uVar1;
      return;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_1006bdd1a(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return;
}

