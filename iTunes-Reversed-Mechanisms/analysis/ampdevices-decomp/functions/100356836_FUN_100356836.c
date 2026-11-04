// name: FUN_100356836
// address: 100356836

int FUN_100356836(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = 0;
  if (((*(char *)(param_1 + 0x353) != '\0') &&
      (*(int *)(*(long *)(param_2 + 0x58) + 0x3c) == 0x46494c45)) &&
     ((*(int *)(param_1 + 0x4ee8) != 0 || (*(char *)(param_1 + 0x3a2) != '\0')))) {
    iVar2 = FUN_1004f2b0b(param_1,0);
    if (iVar2 == 0) {
      iVar2 = FUN_100354d30(param_1,param_2,0,0,3,0);
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
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

