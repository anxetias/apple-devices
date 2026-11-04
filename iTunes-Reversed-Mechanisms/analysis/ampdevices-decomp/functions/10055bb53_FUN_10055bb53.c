// name: FUN_10055bb53
// address: 10055bb53

undefined8 FUN_10055bb53(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar3 = FUN_10055ae0c(param_1);
    iVar2 = FUN_1005bc4ab(uVar3,param_1 + 0x4d8);
    if ((iVar2 != -0x80) && (iVar2 != 0)) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x400;
        local_3a = iVar2;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
    }
  }
  FUN_1001e1c39(param_1 + 0x4d8,param_2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

