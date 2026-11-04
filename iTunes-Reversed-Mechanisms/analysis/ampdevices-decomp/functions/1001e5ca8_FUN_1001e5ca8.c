// name: FUN_1001e5ca8
// address: 1001e5ca8

undefined4 FUN_1001e5ca8(long param_1,long param_2,ulong param_3,undefined4 *param_4)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006bf166(uVar3);
    }
  }
  else {
    if (param_2 != 0) {
      uVar2 = FUN_1001737f8(param_1);
      if (uVar2 == 0) {
        return 0;
      }
      uVar4 = param_3 & 0xffffffff;
      if ((long)uVar2 < (long)(param_3 & 0xffffffff)) {
        uVar4 = uVar2;
      }
      FUN_10017384f(param_1,0,uVar4,param_2);
      if (param_4 == (undefined4 *)0x0) {
        return 0;
      }
      *param_4 = (int)uVar4;
      return 0;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006bf0f0(uVar3);
    }
  }
  FUN_1001782e9(0,0);
  return 0xffffffce;
}

