// name: FUN_1001c6182
// address: 1001c6182

undefined8 FUN_1001c6182(long *param_1,long param_2,long param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (param_3 != 0) {
    if (param_2 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006a9378(uVar3);
      }
      FUN_1001782e9(0,0);
      uVar3 = 0xffffffce;
    }
    else {
      uVar2 = FUN_1001c5d9c();
      uVar3 = FUN_1001c5e39(param_1,(ulong)uVar2 + param_3);
      if ((int)uVar3 == 0) {
        FUN_1001c631b(param_2,(ulong)uVar2 + *param_1,param_3);
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

