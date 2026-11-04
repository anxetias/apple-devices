// name: FUN_1002f60f4
// address: 1002f60f4

int FUN_1002f60f4(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 undefined4 param_6,ulong param_7,undefined8 *param_8,undefined8 *param_9,
                 undefined1 *param_10)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 local_59;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_8 != (undefined8 *)0x0) {
    *param_8 = 0;
  }
  if (param_9 != (undefined8 *)0x0) {
    *param_9 = 0;
  }
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = "sessionRef != nullptr";
LAB_1002f62cc:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if (param_3 != 0) {
      if (*(code **)(param_1 + 0x90) == (code *)0x0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "mIsSyncRequiredProc != nullptr";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        iVar4 = -4;
      }
      else {
        iVar4 = 0;
        puVar5 = &local_59;
        if (param_10 != (undefined1 *)0x0) {
          puVar5 = param_10;
        }
        iVar2 = (**(code **)(param_1 + 0x90))
                          (param_2,param_3,param_5,param_4,param_6,-(ulong)(param_7 == 0) | param_7,
                           param_8,param_9,puVar5);
        if (iVar2 == 0) {
          FUN_1002f5dce(param_5,param_8,puVar5);
        }
        else {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "libErr == eVVViTSLSuccess";
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          iVar4 = iVar2 + 0x5dc;
        }
      }
      goto LAB_1002f6244;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_4a = "cfstrText != nullptr";
      goto LAB_1002f62cc;
    }
  }
  FUN_1001782e9(0,0);
  iVar4 = -0x32;
LAB_1002f6244:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

