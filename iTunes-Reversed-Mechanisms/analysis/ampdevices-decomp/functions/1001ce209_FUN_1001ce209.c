// name: FUN_1001ce209
// address: 1001ce209

undefined8
FUN_1001ce209(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 local_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_5 == (undefined8 *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006af84e(uVar2);
    }
    FUN_1001782e9(0,0);
    uVar2 = 0xffffffce;
  }
  else {
    FUN_1001cda96(param_2,param_3,param_4,local_128);
    uVar2 = FUN_1001cda26(local_128,param_1);
    *param_5 = uVar2;
    lVar3 = FUN_1001705e9(uVar2);
    lVar4 = FUN_100173434();
    uVar2 = 0;
    if (lVar3 != lVar4) {
      FUN_10017060f(*param_5);
      *param_5 = 0;
      uVar2 = 0xffffff40;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

