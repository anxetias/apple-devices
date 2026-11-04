// name: FUN_100320e05
// address: 100320e05

undefined8 FUN_100320e05(long param_1,undefined4 param_2,long param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_1 + 0x3c) == 0x46494c45) {
    if (*(long *)(param_1 + 0x88) != 0) {
      FUN_1001c64c1();
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
    }
    uVar3 = 0;
    if (param_3 != 0) {
      lVar2 = FUN_1001c63e1(param_2);
      *(long *)(param_1 + 0x88) = lVar2;
      if (lVar2 == 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "trackInstance->permLocation.file.permLocation != nullptr";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        uVar3 = 0xffffff94;
      }
      else {
        FUN_1001c631b(param_3,lVar2,param_2);
        *(undefined4 *)(param_1 + 0x90) = param_2;
      }
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "trackInstance->trackKind == kITFileKind";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffce;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

