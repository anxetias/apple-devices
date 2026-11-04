// name: FUN_1001a4623
// address: 1001a4623

undefined1 FUN_1001a4623(long param_1,undefined1 param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 local_398 [512];
  undefined1 local_198 [16];
  long local_188;
  uint local_180;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_10069d680(uVar3);
    }
  }
  else {
    FUN_1001a3e13(param_1,local_198);
    if (local_188 != 0 && local_180 != 0) {
      if (0x1ff < local_180) {
        local_180 = 0x1ff;
      }
      FUN_1001c631b(local_188,local_398,local_180);
      local_398[local_180] = 0;
      uVar1 = FUN_1001a694a(local_398,param_2);
      goto LAB_1001a46f7;
    }
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      FUN_10069d60a(uVar3);
    }
  }
  uVar1 = 0;
  FUN_1001782e9(0,0);
LAB_1001a46f7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

