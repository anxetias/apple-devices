// name: FUN_10026677e
// address: 10026677e

int FUN_10026677e(long param_1,void *param_2)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_100263428();
  if (cVar2 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_3a = "ITIPodRefIsValid(iPod)";
LAB_1002668d5:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    if (param_2 != (void *)0x0) {
      iVar3 = -0x23;
      if (*(char *)(param_1 + 0x36) == '\0') {
LAB_100266884:
        FUN_1001c62d9(param_2,0x420);
      }
      else {
        pvVar1 = (void *)(param_1 + 0x48);
        if (*(int *)(param_1 + 0x48) == 0x41464350) {
          cVar2 = FUN_10017cbd0(pvVar1);
          if (cVar2 == '\0') goto LAB_100266884;
        }
        else {
          iVar3 = FUN_10017d477(pvVar1,0,0);
          if (iVar3 != 0) goto LAB_100266884;
        }
        _memcpy(param_2,pvVar1,0x420);
        iVar3 = 0;
      }
      goto LAB_100266891;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_3a = "volumeSpec != nullptr";
      goto LAB_1002668d5;
    }
  }
  FUN_1001782e9(0,0);
  iVar3 = -0x32;
LAB_100266891:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

