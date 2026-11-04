// name: FUN_1002f5eac
// address: 1002f5eac

int FUN_1002f5eac(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 *param_6)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_6 == (undefined8 *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3a = "pcfstrLangOut != nullptr";
LAB_1002f6028:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    *param_6 = 0;
    if (param_2 != 0) {
      if (*(code **)(param_1 + 0x48) == (code *)0x0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "mCopyLanguageForStringProc != nullptr";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        iVar2 = -4;
      }
      else {
        iVar2 = (**(code **)(param_1 + 0x48))
                          (*(undefined8 *)(param_1 + 0xb8),param_2,param_5,param_3,param_6,param_4);
        if (iVar2 == 0) {
          iVar2 = 0;
          FUN_1002f5dce(param_5,param_6,0);
        }
        else {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x822;
            local_3a = "libErr == eVVViTSLSuccess";
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
          iVar2 = iVar2 + 0x5dc;
        }
      }
      goto LAB_1002f5fa5;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3a = "cfstrText != nullptr";
      goto LAB_1002f6028;
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_1002f5fa5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

