// name: FUN_1001e9460
// address: 1001e9460

undefined8 FUN_1001e9460(int *param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined4 local_38;
  int *local_34;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x6c636d70)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      FUN_1006c1a6f(uVar4);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0xffffffce;
  }
  else {
    uVar1 = param_1[2];
    if (((param_1[1] | uVar1) & 1) == 0) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        FUN_1006c19f9(uVar4);
      }
      FUN_1001782e9(0,0);
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_38 = 0x8000100;
        local_34 = param_1;
        __os_log_impl(0x100000000,uVar4,0x10,"lock> resetting an unnotified completion %p",&local_38
                      ,0xc);
      }
    }
    uVar4 = 0;
    LOCK();
    uVar3 = param_1[2];
    bVar5 = uVar1 == uVar3;
    if (bVar5) {
      param_1[2] = 0;
      uVar3 = uVar1;
    }
    UNLOCK();
    if (!bVar5) {
      uVar4 = 0;
      do {
        LOCK();
        uVar1 = param_1[2];
        bVar5 = uVar3 == uVar1;
        if (bVar5) {
          param_1[2] = 0;
          uVar1 = uVar3;
        }
        uVar3 = uVar1;
        UNLOCK();
      } while (!bVar5);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

