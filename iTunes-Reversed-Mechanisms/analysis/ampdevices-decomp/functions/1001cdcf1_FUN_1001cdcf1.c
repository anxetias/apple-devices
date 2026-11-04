// name: FUN_1001cdcf1
// address: 1001cdcf1

undefined4
FUN_1001cdcf1(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 local_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      FUN_1006af6ec(uVar4);
    }
    FUN_1001782e9(0,1);
    uVar2 = 0xffffffce;
  }
  else {
    FUN_1001cda96(param_2,param_3,param_4,local_128);
    lVar3 = FUN_100172473(DAT_1008c4d98,local_128,0x8000100);
    if (lVar3 == 0) {
      uVar2 = 0xffffff94;
    }
    else {
      uVar2 = FUN_1001cddca(param_1,lVar3,param_5);
      _CFRelease(lVar3);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

