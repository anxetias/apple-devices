// name: FUN_1005bc79d
// address: 1005bc79d

undefined8 FUN_1005bc79d(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "value != __null";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0xffffffce;
    goto LAB_1005bc839;
  }
  *param_2 = 0;
  uVar2 = _CFNumberGetTypeID();
  uVar4 = 0;
  lVar3 = FUN_1005ba383(param_1,0,&cf_TimeZoneOffsetFromUTC,uVar2,0);
  if (lVar3 == 0) {
LAB_1005bc803:
    uVar4 = 0xe8000008;
  }
  else {
    cVar1 = FUN_100172017(lVar3,3,param_2);
    if (cVar1 == '\0') goto LAB_1005bc803;
  }
  FUN_10017060f(lVar3);
LAB_1005bc839:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

