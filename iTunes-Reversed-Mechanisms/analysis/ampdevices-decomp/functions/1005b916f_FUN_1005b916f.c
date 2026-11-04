// name: FUN_1005b916f
// address: 1005b916f

undefined8 FUN_1005b916f(char *param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_266 [22];
  undefined *puStack_250;
  uint local_248;
  char *local_244;
  undefined2 local_23c;
  char *local_23a;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (long *)0x0) {
    puStack_250 = (undefined *)0x1005b922b;
    uVar5 = FUN_1001cc310();
    puStack_250 = (undefined *)0x1005b923b;
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_248 = 0x8220202;
      local_244 = "Assertion failure";
      local_23c = 0x822;
      local_23a = "deviceID != __null";
      puStack_250 = (undefined *)0x1005b9303;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_248,0x16);
    }
    puStack_250 = (undefined *)0x1005b9248;
    FUN_1001782e9(0,0);
    uVar5 = 0xffffffce;
  }
  else {
    *param_2 = 0;
    puStack_250 = (undefined *)0x1005b91a8;
    lVar2 = _AMDeviceCopyDeviceIdentifier();
    if (lVar2 == 0) {
      puStack_250 = (undefined *)0x1005b9254;
      uVar5 = FUN_1001cc310();
      puStack_250 = (undefined *)0x1005b9264;
      cVar1 = _os_log_type_enabled(uVar5,0x10);
      if (cVar1 != '\0') {
        local_248 = 0x8220202;
        local_244 = "Assertion failure";
        local_23c = 0x822;
        local_23a = "identifier != __null";
        puStack_250 = (undefined *)0x1005b9354;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_248,0x16);
      }
      puStack_250 = (undefined *)0x1005b9275;
      FUN_1001782e9(0,0);
      puStack_250 = (undefined *)0x1005b9286;
      cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
      uVar5 = 0xe8000008;
      if (cVar1 != '\0') {
        local_248 = 0x8000100;
        puStack_250 = (undefined *)0x1005b9390;
        local_244 = param_1;
        __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                            "AMDeviceCopyDeviceIdentifier failed for device %p",&local_248,0xc);
      }
    }
    else {
      puStack_250 = (undefined *)0x1005b91c6;
      FUN_1001e115f(lVar2,&local_248);
      uVar3 = 0x10;
      if (0x10 < (local_248 & 0xffff)) {
        uVar3 = (ulong)(local_248 & 0xffff);
      }
      puStack_250 = (undefined *)0x1005b91ec;
      lVar4 = FUN_1001e1102(auStack_266 + uVar3 * 2,(ulong)(ushort)local_248 - (uVar3 - 0x10));
      *param_2 = lVar4;
      if (lVar4 == 0) {
        puStack_250 = (undefined *)0x1005b91f9;
        uVar5 = FUN_1001cc310();
        puStack_250 = (undefined *)0x1005b9209;
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "*deviceID != 0";
          puStack_250 = (undefined *)0x1005b93de;
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        puStack_250 = (undefined *)0x1005b921a;
        FUN_1001782e9(0,0);
      }
      puStack_250 = (undefined *)0x1005b9222;
      FUN_10017060f(lVar2);
      uVar5 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  puStack_250 = &UNK_1005b93e8;
  ___stack_chk_fail();
}

