// name: FUN_1006351db
// address: 1006351db

int FUN_1006351db(int param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "service != 0";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    param_1 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    _IOObjectRetain();
    do {
      iVar2 = _IOObjectConformsTo(param_1,param_2);
      if (iVar2 != 0) goto LAB_100635280;
      local_58 = 0;
      iVar2 = _IORegistryEntryGetParentEntry(param_1,"IOService",&local_58);
      _IOObjectRelease(param_1);
      if (iVar2 != 0) {
        if (local_58 != 0) {
          _IOObjectRelease(local_58);
        }
        break;
      }
      param_1 = local_58;
    } while (local_58 != 0);
    param_1 = 0;
  }
LAB_100635280:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

