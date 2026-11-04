// name: FUN_1004362d5
// address: 1004362d5

int FUN_1004362d5(long param_1,undefined8 param_2,undefined1 param_3,undefined1 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_60 = 0;
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = 0;
  }
  if (param_1 == 0) {
LAB_1004363b3:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1004363b3;
    }
    iVar2 = FUN_10043649f(param_1,param_2,param_3,0,&local_60);
    if (local_60 != 0 && iVar2 == 0) {
      if (param_4 != (undefined1 *)0x0) {
        *param_4 = 1;
      }
      iVar2 = FUN_1004ef324(param_1,local_60,0);
      uVar3 = FUN_1001c156e();
      FUN_1001c6987(uVar3,0x69707372,*(undefined4 *)(param_1 + 0x28),0,0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

