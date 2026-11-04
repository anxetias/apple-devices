// name: FUN_10050bfa7
// address: 10050bfa7

void FUN_10050bfa7(undefined8 param_1,long param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
LAB_10050c0a0:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_2 + 8) != 0x64756c63) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_10050c0a0;
    }
    iVar2 = FUN_10050c1f0(param_2);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        if ((*(char *)(param_2 + 0x359) != '\0') && (*(char *)(param_2 + 0x15218) != '\0')) {
          lVar4 = FUN_1004e8236(param_2);
          if ((lVar4 != 0) &&
             (*(bool *)(lVar4 + 0x55) = *(char *)(param_2 + 0x6682) != '\0',
             *(char *)(param_2 + 0x6ac3) != '\0')) {
            *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(param_2 + 0x6664);
            FUN_1002eb0c8(lVar4,0);
            *(undefined4 *)(lVar4 + 0x50) = *(undefined4 *)(param_2 + 0x6678);
          }
        }
        if (param_3 != 0) {
          uVar3 = FUN_1001c156e();
          FUN_1001c6987(uVar3,param_3,*(undefined4 *)(param_2 + 0x28),param_2 + 0x50,0);
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
    }
    FUN_1004e1e68(param_2);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

