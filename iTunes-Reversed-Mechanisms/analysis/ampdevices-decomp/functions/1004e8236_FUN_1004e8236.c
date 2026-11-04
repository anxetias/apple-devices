// name: FUN_1004e8236
// address: 1004e8236

long FUN_1004e8236(long param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  int local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((*(char *)(param_1 + 0x359) != '\0') && (*(char *)(param_1 + 0x15218) != '\0')) {
    lVar4 = *(long *)(param_1 + 0x15220);
    if (lVar4 != 0) goto LAB_1004e82b6;
    if (*(long *)(param_1 + 0x152c0) != 0) {
      iVar2 = FUN_1001e86ff(param_1 + 0x15230);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          lVar4 = *(long *)(param_1 + 0x15220);
          goto LAB_1004e82b6;
        }
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_38 = 0x8220202;
          local_34 = "Assertion failure";
          local_2c = 0x400;
          local_2a = iVar2;
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_38,0x12);
        }
      }
    }
  }
  lVar4 = 0;
LAB_1004e82b6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

