// name: FUN_1002dd050
// address: 1002dd050

undefined8 FUN_1002dd050(long param_1,int param_2,int *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar2 = 0;
  if (0x13 < param_2) {
    if (param_2 == 0x14) {
      *param_3 = 0;
      goto switchD_1002dd084_caseD_8;
    }
    uVar2 = 0;
    if (param_2 != 0x22) goto switchD_1002dd084_caseD_8;
LAB_1002dd0ef:
    uVar2 = 1;
    goto switchD_1002dd084_caseD_8;
  }
  uVar2 = 0;
  switch(param_2) {
  case 7:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "inOp != 7";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    uVar2 = 0;
    FUN_1001782e9(0,0);
    break;
  case 8:
  case 9:
  case 0xb:
  case 0xc:
    break;
  case 10:
    uVar2 = 1;
    if (*param_3 != -1) break;
    *param_3 = 0;
    goto LAB_1002dd10d;
  case 0xd:
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "inOp != 13";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_1002dd0ef;
  case 0xe:
    uVar2 = 0xc;
    break;
  default:
    if (param_2 != 1) break;
    *param_3 = *(int *)(param_1 + 0x1c);
LAB_1002dd10d:
    uVar2 = 0;
  }
switchD_1002dd084_caseD_8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}

