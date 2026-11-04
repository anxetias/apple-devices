// name: FUN_100286f5c
// address: 100286f5c

void FUN_100286f5c(undefined8 param_1,long param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 local_88;
  char *local_84;
  undefined2 local_7c;
  int local_7a;
  undefined4 local_68;
  undefined8 local_64;
  undefined2 local_5c;
  char *local_5a;
  undefined8 local_50;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_68 = 0x8220202;
      local_64 = "Assertion failure";
      local_5c = 0x822;
      local_5a = "outContext != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_1001cf3f5();
    iVar2 = FUN_1001d0b82(param_1);
    if (iVar2 != 0) {
      iVar5 = 0;
      do {
        iVar3 = FUN_1001cf495(param_1,iVar5,&local_68);
        if (iVar3 != -0x80) {
          if (iVar3 == 0) {
            if (local_64._4_1_ == '\0') {
              if ((ulong)*(uint *)(param_2 + 0x20) < 0x32) {
                FUN_1001d0ae6(param_1,iVar5,param_2 + 0x28 + (ulong)*(uint *)(param_2 + 0x20) * 8);
                *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
              }
              else {
                FUN_1001d0ae6(param_1,iVar5,0);
              }
            }
            else {
              FUN_100286f5c(local_50,param_2);
            }
          }
          else {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_88 = 0x8220202;
              local_84 = "Assertion failure";
              local_7c = 0x400;
              local_7a = iVar3;
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_88,0x12);
            }
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar2 != iVar5);
    }
    FUN_1001cf778(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

