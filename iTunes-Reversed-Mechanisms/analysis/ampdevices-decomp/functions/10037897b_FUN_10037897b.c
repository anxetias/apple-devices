// name: FUN_10037897b
// address: 10037897b

void FUN_10037897b(long param_1,void *param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 != (void *)0x0) {
    FUN_1001c62d9(param_2,0x468);
    _memcpy(param_2,(void *)(param_1 + 0x10),0x420);
    if (*(int *)((long)param_2 + 8) != 2) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "volumeInfo->volumeSpec.volumeKindPrivate == kJRVolumeKind_AFC";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    *(byte *)((long)param_2 + 0x426) = *(byte *)((long)param_2 + 0x426) | 0x40;
  }
  if (param_3 != 0) {
    FUN_1001e1c39(param_1 + 0x434,param_3);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

