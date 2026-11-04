// name: FUN_1005fc148
// address: 1005fc148

undefined8 FUN_1005fc148(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 local_68 [16];
  undefined1 local_58 [12];
  undefined2 local_4c;
  char *local_4a;
  long *local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3[4] == 0) {
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      local_58._0_4_ = 0x8220202;
      local_58._4_8_ = "Assertion failure";
      local_4c = 0x822;
      local_4a = "inCallback != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0xffffffce;
    goto LAB_1005fc2e3;
  }
  FUN_100238ca8(local_68,param_1 + 0x38);
  if (*(long *)(param_1 + 0x150) == 0) {
    if ((*(char *)(param_1 + 0x80) == '\n') || (*(char *)(param_1 + 0x80) == '\x05')) {
      plVar1 = (long *)param_3[4];
      if (plVar1 == (long *)0x0) {
        local_38 = (long *)0x0;
      }
      else if (plVar1 == param_3) {
        local_38 = (long *)local_58;
        (**(code **)(*plVar1 + 0x18))();
      }
      else {
        local_38 = (long *)(**(code **)(*plVar1 + 0x10))();
      }
      FUN_10060077c(local_58,param_1 + 0x130);
      if (local_38 == (long *)local_58) {
        lVar6 = 0x20;
LAB_1005fc2bf:
        (**(code **)(*local_38 + lVar6))();
      }
      else {
        lVar6 = 0x28;
        if (local_38 != (long *)0x0) goto LAB_1005fc2bf;
      }
      *(undefined1 *)(param_1 + 0x80) = 6;
      uVar5 = 0;
      FUN_10044ddf4(param_1,param_2);
    }
    else {
      if (DAT_1008c7d20 != -1) {
        _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
      }
      uVar2 = DAT_1008c7d18;
      cVar4 = _os_log_type_enabled(DAT_1008c7d18,0x10);
      uVar3 = local_58._4_8_;
      uVar5 = 0x234f;
      if (cVar4 != '\0') {
        local_58._0_4_ = 0x4000100;
        local_58._5_3_ = 0;
        local_58[4] = *(byte *)(param_1 + 0x80);
        local_58._8_4_ = SUB84(uVar3,4);
        __os_log_impl(0x100000000,uVar2,0x10,
                      "**ERROR**: Invalid state for StartLoadingDatabaseItems! state:%d",local_58,8)
        ;
      }
    }
  }
  else {
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      local_58._0_4_ = 0x8220202;
      local_58._4_8_ = "Assertion failure";
      local_4c = 0x822;
      local_4a = "mLoadCallback == nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",local_58,0x16);
    }
    uVar5 = 0x234f;
    FUN_1001782e9(0,0);
  }
  FUN_10015a142(local_68);
LAB_1005fc2e3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

