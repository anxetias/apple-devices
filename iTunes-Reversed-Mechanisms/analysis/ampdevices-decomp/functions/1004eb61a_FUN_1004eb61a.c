// name: FUN_1004eb61a
// address: 1004eb61a

bool FUN_1004eb61a(long param_1,long param_2,long param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_2 == 0) || (*(long *)(param_2 + 8) == 0)) ||
     (*(long *)(*(long *)(param_2 + 8) + 0x10) == 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "TrackInstanceIsValid(trackInstance)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    bVar5 = false;
    FUN_1001782e9(0,0);
  }
  else {
    lVar4 = param_1 + 0x14cd0;
    if (param_3 != 0) {
      lVar4 = param_3;
    }
    if ((*(char *)(param_1 + 0x390) == '\0') || (*(char *)(lVar4 + 0x48) == '\0')) {
      bVar5 = false;
    }
    else {
      iVar2 = FUN_1004eb707(param_1,param_2,0,0);
      bVar5 = iVar2 == 1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

