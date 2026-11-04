// name: FUN_1005b8d4a
// address: 1005b8d4a

long FUN_1005b8d4a(void)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long in_RCX;
  long lVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = _AMDeviceCopyValueWithError();
  lVar5 = 0;
  if ((lVar2 != 0) && (lVar3 = _CFGetTypeID(lVar2), lVar5 = lVar2, lVar3 != in_RCX)) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "CFGetTypeID(value) == typeID";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    _CFRelease(lVar2);
    lVar5 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar5;
}

