// name: FUN_10039d18c
// address: 10039d18c

undefined4 FUN_10039d18c(long param_1,void *param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (void *)0x0) {
LAB_10039d270:
    uVar7 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar7,0x10);
    if (cVar5 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "::UpdateRestoreDeviceSpecIsValid(updateRestoreDeviceSpec)";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar6 = 0xffffffce;
  }
  else {
    if (*(int *)((long)param_2 + 0x680) != 0x7572646d) {
      uVar7 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar7,0x10);
      if (cVar5 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "updateRestoreDeviceSpec->magic == ((OSType) \'urdm\')";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar5 = FUN_1001782e9(0,1);
      if (cVar5 == '\0') goto LAB_10039d270;
    }
    _memcpy((void *)(param_1 + 0x18),param_2,0x671);
    lVar1 = *(long *)((long)param_2 + 0x678);
    if (lVar1 != 0) {
      _CFRetain(lVar1);
    }
    lVar2 = *(long *)(param_1 + 0x690);
    *(long *)(param_1 + 0x690) = lVar1;
    if (lVar2 != 0) {
      _CFRelease();
    }
    uVar6 = *(undefined4 *)((long)param_2 + 0x684);
    uVar3 = *(undefined4 *)((long)param_2 + 0x688);
    uVar4 = *(undefined4 *)((long)param_2 + 0x68c);
    *(undefined4 *)(param_1 + 0x698) = *(undefined4 *)((long)param_2 + 0x680);
    *(undefined4 *)(param_1 + 0x69c) = uVar6;
    *(undefined4 *)(param_1 + 0x6a0) = uVar3;
    *(undefined4 *)(param_1 + 0x6a4) = uVar4;
    uVar6 = (**(code **)(**(long **)(param_1 + 0x6a0) + 8))(*(long **)(param_1 + 0x6a0),param_2);
    FUN_10026340c((long)param_2 + 0x678);
    operator_delete(param_2);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

