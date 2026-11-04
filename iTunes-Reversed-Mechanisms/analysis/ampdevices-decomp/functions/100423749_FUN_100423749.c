// name: FUN_100423749
// address: 100423749

undefined8 FUN_100423749(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_58;
  undefined8 local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "context != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    uVar3 = 0;
    if (*(int *)(param_1 + 0x120) != 0x64657669) goto LAB_1004237e2;
    iVar2 = FUN_1004ab38c(param_1);
    if (iVar2 != 0x1f7) goto LAB_1004237e2;
    FUN_1001c631b(param_1 + 0x90,&local_58,0x30);
    if (local_54._4_1_ == '\0') {
      uVar3 = 0;
      goto LAB_1004237e2;
    }
    uVar3 = FUN_1004a88cf(param_1);
    *(undefined8 *)(param_2 + 8) = uVar3;
  }
  uVar3 = 0xffffffce;
LAB_1004237e2:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

