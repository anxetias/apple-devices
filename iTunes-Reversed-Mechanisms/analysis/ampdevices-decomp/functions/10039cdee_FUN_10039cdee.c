// name: FUN_10039cdee
// address: 10039cdee

undefined8 FUN_10039cdee(long param_1,int *param_2,undefined8 *param_3)

{
  long lVar1;
  char cVar2;
  void *pvVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == (undefined8 *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "outUpdateRestoreDeviceSpec != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *param_3 = 0;
    if (param_2 == (int *)0x0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "createParams != nullptr";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      iVar5 = *param_2;
      if (iVar5 - 1U < 2) {
        if ((*(long *)(param_1 + 8) != 0) && (*(long *)(param_1 + 0x10) != 0)) {
          pvVar3 = operator_new(0x690,(nothrow_t *)PTR_nothrow_10082c970);
          if (pvVar3 == (void *)0x0) {
            uVar4 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar4,0x10);
            if (cVar2 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "deviceSpec != nullptr";
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
            uVar4 = 0xffffff94;
          }
          else {
            *(undefined8 *)((long)pvVar3 + 0x678) = 0;
            _memcpy(pvVar3,param_2,0x671);
            lVar1 = *(long *)(param_2 + 0x19e);
            if (lVar1 != 0) {
              _CFRetain(lVar1);
              iVar5 = *param_2;
            }
            *(long *)((long)pvVar3 + 0x678) = lVar1;
            puVar6 = (undefined8 *)(param_1 + 0x10);
            if (iVar5 == 1) {
              puVar6 = (undefined8 *)(param_1 + 8);
            }
            *(undefined8 *)((long)pvVar3 + 0x688) = *puVar6;
            *(undefined4 *)((long)pvVar3 + 0x680) = 0x7572646d;
            *param_3 = pvVar3;
            uVar4 = 0;
          }
          goto LAB_10039cf8c;
        }
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = 
          "(mIPodUpdaterController != nullptr) && (mMobileDeviceUpdaterController != nullptr)";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "deviceClassIsSupported";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
    }
  }
  uVar4 = 0xffffffce;
LAB_10039cf8c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

