// name: FUN_1001ddeca
// address: 1001ddeca

undefined8 FUN_1001ddeca(undefined8 param_1,ushort *param_2,undefined4 *param_3)

{
  ushort uVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  
  if (param_2 == (ushort *)0x0) {
    param_2 = (ushort *)0x0;
    iVar4 = 0;
  }
  else {
    uVar1 = *param_2;
    if (0xff < uVar1) {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        FUN_1006b9167(uVar3);
      }
      FUN_1001782e9(0,0);
      *param_3 = 0;
      return 0xffffffce;
    }
    param_2 = param_2 + 1;
    iVar4 = (uint)uVar1 + (uint)uVar1;
  }
  uVar3 = FUN_1001ddddc(param_1,param_2,iVar4,param_3);
  return uVar3;
}

