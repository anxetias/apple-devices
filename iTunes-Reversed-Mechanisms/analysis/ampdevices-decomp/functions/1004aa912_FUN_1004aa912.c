// name: FUN_1004aa912
// address: 1004aa912

undefined8 FUN_1004aa912(long param_1,void *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar3 = 0xffffffce;
  if (*(char *)(param_1 + 0x778) == '\0') {
    if (*(char *)(param_1 + 0x1250) == '\0') {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "inItem->leaf.downloadFileSpecIsValid";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      _memcpy(param_2,(void *)(param_1 + 0xe30),0x420);
      uVar3 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

