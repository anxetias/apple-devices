// name: FUN_1001e728e
// address: 1001e728e

undefined4
FUN_1001e728e(long param_1,uint param_2,undefined1 *param_3,long param_4,ulong *param_5,
             undefined4 param_6)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  ulong local_38;
  
  if (param_5 != (ulong *)0x0) {
    *param_5 = 0;
  }
  if (param_2 == 0 || param_4 == 0) {
    uVar5 = 0;
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
      uVar5 = 0;
    }
  }
  else if (param_1 == 0 || param_3 == (undefined1 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006c0012(uVar3);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0xffffffce;
  }
  else {
    lVar2 = FUN_1001735df(0,param_1,(ulong)param_2,*(undefined8 *)PTR__kCFAllocatorNull_10082e028);
    if (lVar2 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_1006c0088(uVar3);
      }
      FUN_1001782e9(0,0);
      uVar5 = 0xffffff94;
    }
    else {
      local_38 = 0;
      uVar3 = FUN_1001737f8(lVar2);
      uVar4 = FUN_1001739f3(lVar2,0,uVar3,param_6,0,0,param_3,param_4,&local_38);
      uVar5 = 0xffffddaf;
      if (uVar4 == param_2) {
        uVar5 = 0;
      }
      if (param_5 != (ulong *)0x0) {
        *param_5 = local_38 & 0xffffffff;
      }
      FUN_10017060f(lVar2);
    }
  }
  return uVar5;
}

