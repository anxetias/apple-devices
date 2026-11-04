// name: FUN_1001ddddc
// address: 1001ddddc

ulong FUN_1001ddddc(int *param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x73747263)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006b90f1(uVar3);
    }
  }
  else {
    if (param_1[10] == 0) {
      uVar2 = FUN_1001dcff5(param_1,*param_4);
      if (uVar2 == 0) {
        uVar4 = FUN_1001dd1c1(param_1,param_2,param_3,0,param_4);
        return uVar4;
      }
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 == '\0') {
        return (ulong)uVar2;
      }
      FUN_1006b9085(uVar2,uVar3);
      return (ulong)uVar2;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006b900f(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

