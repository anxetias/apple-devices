// name: FUN_1004ff6f3
// address: 1004ff6f3

undefined1 FUN_1004ff6f3(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_3a = "allDevicesDict != nullptr";
LAB_1004ff8d6:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
LAB_1004ff7ff:
    lVar3 = 0;
    FUN_1001782e9(0,0);
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1001736b8(DAT_1008c4d90,0,&cf__016llX,*(undefined8 *)(param_1 + 0x38));
    if (lVar2 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_3a = "deviceIDStr != nullptr";
        goto LAB_1004ff8d6;
      }
      goto LAB_1004ff7ff;
    }
    lVar3 = FUN_100166b7f(param_2,lVar2);
    if (lVar3 == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_3a = "oldDeviceDict != nullptr";
LAB_1004ff924:
        local_3c = 0x822;
        local_44 = "Assertion failure";
        local_48 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
LAB_1004ff86e:
      lVar3 = 0;
      FUN_1001782e9(0,0);
    }
    else {
      lVar3 = FUN_100171413(DAT_1008c4d90,0,lVar3);
      if (lVar3 == 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_3a = "deviceDict != nullptr";
          goto LAB_1004ff924;
        }
        goto LAB_1004ff86e;
      }
      cVar1 = FUN_1004ff5a7(param_1,lVar3);
      if (cVar1 != '\0') {
        FUN_100171502(param_2,lVar2,lVar3);
        uVar5 = 1;
        goto LAB_1004ff87d;
      }
    }
  }
  uVar5 = 0;
LAB_1004ff87d:
  FUN_10017060f(lVar3);
  FUN_10017060f(lVar2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

