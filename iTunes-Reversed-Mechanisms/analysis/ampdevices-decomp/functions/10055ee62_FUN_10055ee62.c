// name: FUN_10055ee62
// address: 10055ee62

int FUN_10055ee62(undefined8 param_1,undefined8 param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_3 == (int *)0x0) || (*param_3 != 0x74736370)) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "(params != __null) && (params->magic == \'tscp\')";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    iVar5 = 0;
  }
  else {
    lVar3 = *(long *)(param_3 + 6);
    local_38 = CONCAT31(local_38._1_3_,(char)param_3[4]);
    if (lVar3 == 0) {
      lVar3 = FUN_10055ed62(*(undefined8 *)(param_3 + 2),&local_38);
    }
    iVar2 = FUN_1002dfd64(param_1,param_2,lVar3,0);
    iVar5 = -iVar2;
    if ((char)local_38 == '\0') {
      iVar5 = iVar2;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

