// name: FUN_1001e712e
// address: 1001e712e

undefined4
FUN_1001e712e(long param_1,long param_2,undefined2 *param_3,int param_4,undefined4 *param_5,
             undefined4 param_6)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  if (param_2 == 0 || param_4 == 0) {
    uVar2 = 0;
    if (param_3 != (undefined2 *)0x0) {
      *param_3 = 0;
    }
  }
  else if (param_1 == 0 || param_3 == (undefined2 *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006bff26(uVar4);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    lVar3 = FUN_100173568(0,param_1,param_2,param_6,0,*(undefined8 *)PTR__kCFAllocatorNull_10082e028
                         );
    if (lVar3 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_1006bff9c(uVar4);
      }
      FUN_1001782e9(0,0);
      uVar2 = 0xffffff94;
    }
    else {
      uVar2 = FUN_1001e5ca8(lVar3,param_3,param_4,param_5);
      FUN_10017060f(lVar3);
    }
  }
  return uVar2;
}

