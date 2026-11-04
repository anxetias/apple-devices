// name: FUN_10052e292
// address: 10052e292

int FUN_10052e292(long param_1,undefined8 param_2,long param_3,int param_4,long *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_50 = param_3;
  if (*(long *)(param_1 + 0x550) == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "mStream != __null";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
  }
  else {
    iVar2 = FUN_1001d6a08(*(long *)(param_1 + 0x550),&local_50,param_2,param_4 * 2 & 2);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        if (*(long *)(param_1 + 0x518) != 0) {
          FUN_10017983e(*(long *)(param_1 + 0x518),param_2,local_50);
          *(long *)(param_1 + 0x548) = *(long *)(param_1 + 0x548) + local_50;
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x400;
          local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
        }
      }
      if (param_5 != (long *)0x0 && iVar2 == 0) {
        *param_5 = local_50;
        iVar2 = 0;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

