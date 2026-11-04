// name: FUN_10050ffe0
// address: 10050ffe0

void FUN_10050ffe0(long param_1,char param_2)

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
  if (*(char *)(param_1 + 0x3a3) != '\0') {
    if (param_2 == '\0') {
      iVar2 = FUN_1005c4657(*(undefined8 *)(param_1 + 0x7168),&local_48);
      if (iVar2 == 0) {
        FUN_100513758(param_1,&local_48);
      }
    }
    else {
      FUN_1004e17a4(param_1);
      iVar2 = FUN_1005b9808(*(undefined8 *)(param_1 + 0x7168),7,0,FUN_1005135fd,param_1);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) goto LAB_100510080;
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
      FUN_1004e1e68(param_1);
    }
  }
LAB_100510080:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

