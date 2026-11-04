// name: FUN_100354b6d
// address: 100354b6d

int FUN_100354b6d(long param_1,long param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *(undefined1 *)(param_2 + 0xb9) = 2;
  iVar2 = 0;
  iVar4 = 0;
  if ((((((*(char *)(param_1 + 0x353) == '\0') || (*(char *)(param_1 + 0x14d00) == '\0')) ||
        (*(int *)(*(long *)(param_2 + 0x58) + 0x3c) != 0x46494c45)) ||
       ((iVar2 = iVar4, *(int *)(*(long *)(param_3 + 0x58) + 0x3c) != 0x46494c45 ||
        (*(int *)(param_2 + 0xc2) < 0)))) ||
      ((cVar1 = FUN_1003537ab(param_1,param_3), cVar1 == '\0' &&
       ((param_2 == param_3 ||
        (cVar1 = FUN_1003537ab(param_1,param_2), param_3 = param_2, cVar1 == '\0')))))) ||
     (iVar2 = FUN_1004f2b0b(param_1,1), iVar2 == -0x80)) goto LAB_100354cc6;
  if (iVar2 == 0) {
    iVar2 = FUN_100354d30(param_1,param_2,param_3,0,1,param_4);
    if (iVar2 == -0x80) goto LAB_100354cc6;
    if (iVar2 == 0) {
      *(undefined1 *)(param_2 + 0xb9) = 1;
      iVar2 = 0;
      goto LAB_100354cc6;
    }
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
LAB_100354cc6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

