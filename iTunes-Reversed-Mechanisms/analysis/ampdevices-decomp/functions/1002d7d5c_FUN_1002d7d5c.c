// name: FUN_1002d7d5c
// address: 1002d7d5c

void FUN_1002d7d5c(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1002d7edf:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_4a = "DulcimerHandlerDataIsValid(handlerData)";
LAB_1002d7f5f:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 8) != 0x64756c63) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar1 = FUN_1001782e9(0,1);
      if (cVar1 == '\0') goto LAB_1002d7edf;
    }
    if (param_2 != 0) {
      FUN_10031e6ef(*(undefined8 *)(param_1 + 0x30),0,1,param_2,0);
      if (*(char *)(param_1 + 0x36a) != '\0') {
        FUN_1005f83dd(*(undefined8 *)(param_1 + 0x15960),param_2);
      }
      if (*(char *)(param_1 + 0x37d) != '\0') {
        uVar2 = FUN_1004ecc52(param_1,0);
        FUN_10020c4b4(uVar2,param_2);
        FUN_10017060f(uVar2);
        lVar3 = FUN_10017076e(*(undefined8 *)(param_1 + 0x167c8));
        if (0 < lVar3) {
          lVar5 = 0;
          do {
            lVar4 = FUN_10016499b(*(undefined8 *)(param_1 + 0x167c8),lVar5);
            if (lVar4 == 0) {
              uVar2 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar2,0x10);
              if (cVar1 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "appInfoDict != nullptr";
                __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
            }
            else {
              FUN_10020c766(lVar4,param_2);
            }
            lVar5 = lVar5 + 1;
          } while (lVar3 != lVar5);
        }
      }
      goto LAB_1002d7f8d;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_4a = "appleUserIDList != nullptr";
      goto LAB_1002d7f5f;
    }
  }
  FUN_1001782e9(0,0);
LAB_1002d7f8d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

