// name: FUN_1002789aa
// address: 1002789aa

undefined8 FUN_1002789aa(long param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar4 = *param_2;
  iVar2 = FUN_100274af4(**(undefined8 **)(param_1 + 8),uVar4,0,*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_1 + 0x18));
  if (iVar2 != -0x80) {
    if (iVar2 != 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x400;
        local_3a = iVar2;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
      if (iVar2 != 0) goto LAB_100278a65;
    }
    iVar2 = FUN_1003a371d(uVar4,**(undefined8 **)(param_1 + 0x10));
    if ((iVar2 != -0x80) && (iVar2 != 0)) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x400;
        local_3a = iVar2;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
    }
    **(undefined1 **)(param_1 + 0x20) = 1;
    *(undefined4 *)(**(long **)(param_1 + 0x10) + 0xf0) = 1;
    FUN_1003a040b();
  }
LAB_100278a65:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

