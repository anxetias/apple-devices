// name: FUN_1003b8d07
// address: 1003b8d07

int FUN_1003b8d07(long param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "encoder != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
    goto LAB_1003b8d83;
  }
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 == 0) {
    if (*(long *)(param_1 + 0x188) == 0) {
      if (*(int *)(param_1 + 0x184) != 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "encoder->useCount == 0";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      if (*(long *)(param_1 + 400) != 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "encoder->usedEncoderPlugin == nullptr";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      iVar2 = FUN_1003b8fce(param_1,param_1 + 0x188);
      if (iVar2 != 0) {
        iVar2 = FUN_1003b9050(param_1 + 8);
        if (iVar2 == -0x80) goto LAB_1003b8d83;
        if (iVar2 != 0) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x400;
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
          }
          goto LAB_1003b8d83;
        }
        *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x18);
        iVar2 = FUN_1003b8fce(param_1,param_1 + 0x188);
        if (iVar2 != 0) {
          FUN_1003b8523(*(undefined8 *)(param_1 + 400));
          *(undefined8 *)(param_1 + 400) = 0;
          goto LAB_1003b8d83;
        }
      }
    }
    lVar3 = *(long *)(param_1 + 0x188);
  }
  *param_2 = lVar3;
  *(int *)(param_1 + 0x184) = *(int *)(param_1 + 0x184) + 1;
  iVar2 = 0;
LAB_1003b8d83:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

