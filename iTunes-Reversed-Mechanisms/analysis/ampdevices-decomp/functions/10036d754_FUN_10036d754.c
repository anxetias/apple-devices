// name: FUN_10036d754
// address: 10036d754

undefined8 FUN_10036d754(undefined8 param_1,undefined8 param_2,void *param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == (void *)0x0) {
    lVar2 = FUN_10036d183(param_1,param_2);
    uVar3 = 0;
    if (lVar2 != 0) goto LAB_10036d7ee;
  }
  else {
    FUN_1001c62d9(param_3,0x420);
    lVar2 = FUN_10036d183(param_1,param_2);
    if (lVar2 != 0) {
      _memcpy(param_3,(void *)(lVar2 + 0x10),0x420);
      uVar3 = 0;
      goto LAB_10036d7ee;
    }
  }
  uVar3 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar3,0x10);
  if (cVar1 != '\0') {
    local_48 = 0x8220202;
    local_44 = "Assertion failure";
    local_3c = 0x822;
    local_3a = "afcVolumeInfo != nullptr";
    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
  }
  FUN_1001782e9(0,0);
  uVar3 = 0xffffffdd;
LAB_10036d7ee:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

