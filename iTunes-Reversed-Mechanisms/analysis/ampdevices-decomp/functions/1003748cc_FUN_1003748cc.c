// name: FUN_1003748cc
// address: 1003748cc

int FUN_1003748cc(undefined8 param_1,int *param_2,undefined4 *param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char local_a8 [32];
  undefined8 local_88;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar2 = -0x589;
  if ((*param_2 == 0) && (iVar2 = FUN_10017d477(param_1,local_a8,0), iVar2 != -0x80)) {
    if (iVar2 == 0) {
      iVar2 = -0x589;
      if (local_a8[0] == '\0') {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = 0x64617461;
        }
        if (param_4 != (undefined8 *)0x0) {
          *param_4 = local_88;
        }
        *param_2 = 1;
        iVar2 = 0;
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = iVar2;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

