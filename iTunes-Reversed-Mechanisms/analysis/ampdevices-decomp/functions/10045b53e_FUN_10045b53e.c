// name: FUN_10045b53e
// address: 10045b53e

int FUN_10045b53e(undefined8 *param_1,int param_2,uint *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  uint local_3c;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  int local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 4) {
    iVar2 = FUN_10045b3c2(*param_1,&local_3c);
    if (iVar2 == -0x80) goto LAB_10045b612;
    if (iVar2 != 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      goto joined_r0x00010045b610;
    }
  }
  else {
    iVar2 = -0xd0;
    if ((param_2 != 2) || (iVar2 = FUN_10045b308(*param_1,&local_3c), iVar2 == -0x80))
    goto LAB_10045b612;
    if (iVar2 != 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
joined_r0x00010045b610:
      if (cVar1 != '\0') {
        local_2c = 0x400;
        local_34 = "Assertion failure";
        local_38 = 0x8220202;
        local_2a = iVar2;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_38,0x12);
      }
      goto LAB_10045b612;
    }
    local_3c = local_3c & 0xffff;
  }
  *param_3 = local_3c;
  iVar2 = 0;
LAB_10045b612:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

