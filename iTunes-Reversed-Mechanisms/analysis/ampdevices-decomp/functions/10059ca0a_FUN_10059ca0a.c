// name: FUN_10059ca0a
// address: 10059ca0a

long FUN_10059ca0a(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar2 = FUN_10026570c();
  lVar3 = FUN_100171475(uVar2,param_2);
  FUN_10017060f(uVar2);
  if (param_3 != 0 && lVar3 != 0) {
    lVar4 = _CFGetTypeID(lVar3);
    if (lVar4 != param_3) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "CFGetTypeID(value) == typeID";
        __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      lVar3 = 0;
      FUN_1001782e9(0,0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

