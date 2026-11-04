// name: FUN_10051471d
// address: 10051471d

void FUN_10051471d(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
LAB_100514801:
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_2 + 8) != 0x64756c63) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure (expected to be true)";
        local_3c = 0x822;
        local_3a = "handlerData->magic == kDulcimerHandlerDataMagic";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar2 = FUN_1001782e9(0,1);
      if (cVar2 == '\0') goto LAB_100514801;
    }
    iVar4 = FUN_10051492e(param_2);
    FUN_1004dd69c(param_2,"");
    *(undefined4 *)(param_2 + 0x6b08) = 0;
    if ((*(char *)(param_2 + 0x6ad2) == '\0') &&
       (((iVar4 != 0 || (*(char *)(param_2 + 0x6afb) != '\0')) ||
        ((*(char *)(DAT_1008c76a0 + 0x1a91) != '\0' &&
         ((*(char *)(param_2 + 0x6afa) == '\0' && (*(char *)(param_2 + 0x6af2) == '\0')))))))) {
      FUN_1004e3b42(param_2);
    }
    else {
      *(undefined1 *)(param_2 + 0x6ad9) = 1;
      uVar5 = FUN_1001c156e();
      FUN_1001c6987(uVar5,0x69707375,*(undefined4 *)(param_2 + 0x28),0,0);
      if (*(char *)(param_2 + 0x3a2) == '\0') {
        uVar5 = FUN_1001c156e();
        uVar1 = *(undefined4 *)(param_2 + 0x28);
        uVar3 = FUN_1004e7efc(param_2);
        FUN_1001c6987(uVar5,0x69707361,uVar1,uVar3,0);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

