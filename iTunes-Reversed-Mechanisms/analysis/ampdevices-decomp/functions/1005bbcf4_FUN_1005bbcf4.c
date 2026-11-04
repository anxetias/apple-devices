// name: FUN_1005bbcf4
// address: 1005bbcf4

undefined8
FUN_1005bbcf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 == (undefined1 *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "value != __null";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar5 = 0xffffffce;
  }
  else {
    *param_4 = 0;
    uVar3 = _CFBooleanGetTypeID();
    uVar5 = 0;
    lVar4 = FUN_1005ba383(param_1,param_2,param_3,uVar3,0);
    if (lVar4 == 0) {
      uVar5 = 0xe8000008;
    }
    else {
      uVar1 = FUN_100171f12(lVar4);
      *param_4 = uVar1;
    }
    FUN_10017060f(lVar4);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

