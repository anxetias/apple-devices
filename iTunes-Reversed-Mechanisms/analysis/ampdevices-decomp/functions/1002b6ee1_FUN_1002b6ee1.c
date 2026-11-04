// name: FUN_1002b6ee1
// address: 1002b6ee1

void FUN_1002b6ee1(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (lVar1 = *(long *)(param_1 + 8), lVar1 == 0)) ||
     (*(long *)(lVar1 + 0x10) == 0)) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "TrackInstanceIsValid(trackInstance)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    cVar2 = FUN_100475dc4(lVar1,param_2,param_4);
    if ((cVar2 != '\0') || (*(long *)(*(long *)(param_1 + 0x20) + 8) != param_3)) {
      if (*(long *)(lVar1 + 0xa0) == 0) {
        FUN_1002b6fe1(param_1);
      }
      FUN_1002af688(param_1);
      *(long *)(*(long *)(param_1 + 0x20) + 8) = param_3;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

