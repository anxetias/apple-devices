// name: FUN_100340015
// address: 100340015

ulong FUN_100340015(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 unaff_R14;
  ulong uVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = _ATCFMessageGetParam();
  if (lVar2 == 0) {
    if (param_3 == (undefined1 *)0x0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure (expected to be not NULL)";
        local_2c = 0x822;
        local_2a = "value";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
      uVar4 = 0;
      cVar1 = FUN_1001782e9(0,0);
      if (cVar1 == '\0') goto LAB_100340082;
    }
    *param_3 = 0;
    uVar4 = 0;
  }
  else {
    cVar1 = FUN_100165191(lVar2,param_3);
    uVar4 = CONCAT71((int7)((ulong)unaff_R14 >> 8),cVar1 != '\0');
  }
LAB_100340082:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

