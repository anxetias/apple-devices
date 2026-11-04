// name: FUN_1002049c5
// address: 1002049c5

void FUN_1002049c5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_1001705e9();
  lVar3 = _CFStringGetTypeID();
  if (lVar2 == lVar3) {
    lVar2 = FUN_100164875(param_3,param_1);
    if (-1 < lVar2) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
        FUN_100170bed(param_3,lVar2);
        return;
      }
      goto LAB_100204ab9;
    }
  }
  else {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "JRCFGetTypeID(appIdentifier) == CFStringGetTypeID()";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
LAB_100204ab9:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

