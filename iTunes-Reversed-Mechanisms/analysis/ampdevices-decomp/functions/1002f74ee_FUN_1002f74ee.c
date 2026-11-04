// name: FUN_1002f74ee
// address: 1002f74ee

int FUN_1002f74ee(long param_1,long param_2,long param_3,undefined4 param_4,ulong param_5)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "sessionRef != nullptr";
LAB_1002f765f:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    if (param_3 != 0) {
      if (*(code **)(param_1 + 0xa8) == (code *)0x0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_38 = 0x8220202;
          local_34 = "Assertion failure";
          local_2c = 0x822;
          local_2a = "mDeleteSyncInfoProc != nullptr";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
        }
        FUN_1001782e9(0,0);
        iVar4 = -4;
      }
      else {
        iVar4 = 0;
        uVar2 = (**(code **)(param_1 + 0xa8))
                          (param_2,param_3,param_4,-(ulong)(param_5 == 0) | param_5);
        if ((uVar2 & 0xfffffff7) != 0) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_38 = 0x8220202;
            local_34 = "Assertion failure";
            local_2c = 0x822;
            local_2a = "libErr == eVVViTSLSuccess || libErr == eVVViTSLVoDBRecNotFound";
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
          }
          FUN_1001782e9(0,0);
          iVar4 = uVar2 + 0x5dc;
        }
      }
      goto LAB_1002f75ed;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_2a = "cfstrText != nullptr";
      goto LAB_1002f765f;
    }
  }
  FUN_1001782e9(0,0);
  iVar4 = -0x32;
LAB_1002f75ed:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

