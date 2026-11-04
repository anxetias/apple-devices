// name: FUN_10057ff9e
// address: 10057ff9e

void FUN_10057ff9e(long param_1,int param_2,char param_3,undefined1 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((*(int *)(param_1 + 0x118) != 0) || (*(char *)(param_1 + 0x11c) != '\0')) &&
     ((*(int *)(param_1 + 0x118) != param_2 || (*(char *)(param_1 + 0x11c) != param_3)))) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure (expected to be true)";
      local_4c = 0x822;
      local_4a = 
      "(mProcessingCloudServerChanges.empty()) || (mProcessingCloudServerChanges.mKind == inKind && mProcessingCloudServerChanges.mDomain == inDomain)"
      ;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    cVar1 = FUN_1001782e9(0,0);
    if (cVar1 == '\0') goto LAB_100580025;
  }
  *(int *)(param_1 + 0x118) = param_2;
  *(char *)(param_1 + 0x11c) = param_3;
  *(undefined1 *)(param_1 + 0x11d) = param_4;
LAB_100580025:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

