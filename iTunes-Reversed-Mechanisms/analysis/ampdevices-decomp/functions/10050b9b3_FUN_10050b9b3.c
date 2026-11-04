// name: FUN_10050b9b3
// address: 10050b9b3

void FUN_10050b9b3(undefined8 param_1,int param_2,char param_3,char param_4,long param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_5 == 0) {
LAB_10050ba4b:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "DulcimerHandlerDataIsValid(handlerData)";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_10050bab1;
  }
  if (*(int *)(param_5 + 8) != 0x64756c63) {
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
    if (cVar1 == '\0') goto LAB_10050ba4b;
  }
  cVar1 = FUN_1001c19de();
  if (cVar1 == '\0') {
    if (param_2 == 0) {
      if ((*(char *)(param_5 + 0x153f1) == param_3) && (*(char *)(param_5 + 0x153f2) == param_4))
      goto LAB_10050baa9;
      *(char *)(param_5 + 0x153f1) = param_3;
      *(char *)(param_5 + 0x153f2) = param_4;
    }
    else {
      *(undefined1 *)(param_5 + 0x153f0) = 0;
      *(undefined4 *)(param_5 + 0x420) = 0;
      FUN_1001eed65(param_5 + 0x153e8);
    }
    uVar2 = FUN_1001c156e();
    FUN_1001c6987(uVar2,0x69706263,*(undefined4 *)(param_5 + 0x28),0,0);
  }
LAB_10050baa9:
  FUN_1004e1e68(param_5);
LAB_10050bab1:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

