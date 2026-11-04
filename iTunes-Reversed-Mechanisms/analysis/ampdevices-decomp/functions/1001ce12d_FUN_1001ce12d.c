// name: FUN_1001ce12d
// address: 1001ce12d

undefined8
FUN_1001ce12d(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             long *param_5)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 local_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_5 == (long *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_1006af7d8(uVar3);
    }
    FUN_1001782e9(0,0);
    uVar3 = 0xffffffce;
  }
  else {
    FUN_1001cda96(param_2,param_3,param_4,local_128);
    lVar2 = FUN_1001cda26(local_128,param_1);
    *param_5 = lVar2;
    uVar3 = 0xffffff40;
    if (lVar2 != 0) {
      lVar2 = FUN_1001705e9();
      lVar4 = FUN_1001713f5();
      uVar3 = 0;
      if (lVar2 != lVar4) {
        FUN_10017060f(*param_5);
        *param_5 = 0;
        uVar3 = 0xffffff40;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

