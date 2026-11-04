// name: FUN_1004f00ba
// address: 1004f00ba

undefined8 FUN_1004f00ba(int param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_40 = 0;
  if (param_1 == 6) {
    iVar2 = FUN_100562356(&local_40,0,0x400,param_3);
    if ((iVar2 == -0x80) || (iVar2 == 0)) goto LAB_1004f01d5;
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 == '\0') goto LAB_1004f01d5;
    local_2a = (char *)CONCAT44(local_2a._4_4_,iVar2);
  }
  else {
    if (param_1 != 2) {
      if (param_1 == 0) {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_38 = 0x8220202;
          local_34 = "Assertion failure";
          local_2c = 0x822;
          local_2a = "false";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
        }
        FUN_1001782e9(0,0);
      }
      goto LAB_1004f01d5;
    }
    if (*(char *)(param_2 + 0x70) == '\0') goto LAB_1004f01d5;
    iVar2 = FUN_10045f6ac(param_2 + 0x88,&local_40,0);
    if ((iVar2 == -0x80) || (iVar2 == 0)) goto LAB_1004f01d5;
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 == '\0') goto LAB_1004f01d5;
    local_2a = (char *)CONCAT44(local_2a._4_4_,iVar2);
  }
  local_2c = 0x400;
  local_34 = "Assertion failure";
  local_38 = 0x8220202;
  __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_38,0x12);
LAB_1004f01d5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return local_40;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

