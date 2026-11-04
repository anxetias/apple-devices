// name: FUN_1001b8dfc
// address: 1001b8dfc

undefined8 * FUN_1001b8dfc(undefined8 *param_1,ushort *param_2)

{
  char cVar1;
  undefined8 uVar2;
  ushort uVar3;
  
  if (param_2 == (ushort *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    uVar3 = *param_2;
    if (uVar3 < 0x200) {
      *param_1 = 0;
      param_1[1] = 0;
      if (uVar3 == 0) {
        return param_1;
      }
    }
    else {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        FUN_1006a1a34(uVar2);
      }
      FUN_1001782e9(0,0);
      *param_1 = 0;
      param_1[1] = 0;
      uVar3 = 0x1ff;
    }
    FUN_1001b7b3e(param_1,param_2 + 1,uVar3);
  }
  return param_1;
}

