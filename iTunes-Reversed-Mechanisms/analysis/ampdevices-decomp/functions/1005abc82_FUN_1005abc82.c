// name: FUN_1005abc82
// address: 1005abc82

void FUN_1005abc82(undefined8 param_1,long param_2,long param_3,undefined4 param_4,
                  undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_4a = "ustrOldValue != nullptr";
LAB_1005abdaf:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if (param_3 != 0) {
      uVar2 = FUN_1005a98e6(param_2);
      FUN_1005ac748(param_1,5,uVar2,param_2);
      lVar3 = FUN_1005a98e6(param_3);
      if (lVar3 != 0) {
        FUN_1005ad828(param_1,5,lVar3,param_3,param_4,1,param_5);
      }
      goto LAB_1005abd6c;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_4a = "ustrNewValue != nullptr";
      goto LAB_1005abdaf;
    }
  }
  FUN_1001782e9(0,0);
LAB_1005abd6c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

