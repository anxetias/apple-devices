// name: FUN_100355d91
// address: 100355d91

int FUN_100355d91(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = 0;
  if ((((*(char *)(param_1 + 0x353) != '\0') && (*(char *)(param_1 + 0x14d00) != '\0')) &&
      (cVar1 = FUN_1003539aa(param_1,param_3), cVar1 != '\0')) &&
     (iVar2 = FUN_1004f2b0b(param_1,1), iVar2 != -0x80)) {
    if (iVar2 == 0) {
      iVar2 = FUN_100355ef5(param_1,param_2,param_3,1,param_4);
      if ((iVar2 == -0x80) || (iVar2 == 0)) goto LAB_100355e8b;
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
    }
    if (cVar1 != '\0') {
      local_4c = 0x400;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      local_4a = iVar2;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
  }
LAB_100355e8b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

