// name: FUN_1002899cf
// address: 1002899cf

void FUN_1002899cf(undefined8 param_1,long param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 local_88 [32];
  int local_68;
  undefined8 local_64;
  undefined2 local_5c;
  char *local_5a;
  undefined8 local_50;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_68 = 0x8220202;
      local_64 = "Assertion failure";
      local_5c = 0x822;
      local_5a = "criteriaFields != __null";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_1001c62d9(param_2,0x20);
    iVar3 = FUN_1001cf3f5(param_1);
    if (iVar3 == 0) {
      iVar3 = FUN_1001d0b82(param_1);
      if (iVar3 != 0) {
        iVar6 = 0;
        do {
          iVar4 = FUN_1001cf495(param_1,iVar6,&local_68);
          iVar1 = local_68;
          if (iVar4 != 0) break;
          if (local_64._4_1_ == '\0') {
            FUN_1005389ba(param_2,local_68);
            if (iVar1 == 0x1d) {
              FUN_1005389ba(param_2,0x7d);
            }
            else if (iVar1 == 0x7d) {
              FUN_1005389ba(param_2,0x1d);
            }
          }
          else {
            FUN_1002899cf(local_50,local_88);
            FUN_100538b99(param_2,local_88);
          }
          iVar6 = iVar6 + 1;
        } while (iVar3 != iVar6);
      }
      FUN_1001cf778(param_1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

