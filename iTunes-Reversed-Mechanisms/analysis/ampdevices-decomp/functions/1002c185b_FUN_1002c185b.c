// name: FUN_1002c185b
// address: 1002c185b

uint FUN_1002c185b(long param_1,long param_2,int *param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0 || param_2 == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "track1 != nullptr && track2 != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (param_3 == (int *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "sortHierarchy != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    uVar3 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    do {
      iVar1 = *param_3;
      if (iVar1 == 0x20) {
        uVar3 = FUN_1002b5ee3(param_1);
        uVar4 = FUN_1002b5ee3(param_2);
        if (uVar3 < uVar4) {
          uVar3 = 0xffffffff;
          break;
        }
        uVar3 = (uint)(uVar4 < uVar3);
      }
      else {
        uVar3 = 0;
        if (iVar1 == 0) break;
        uVar3 = FUN_1002ddb0d(param_1,param_2,iVar1,0);
      }
      param_3 = param_3 + 1;
    } while (uVar3 == 0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

