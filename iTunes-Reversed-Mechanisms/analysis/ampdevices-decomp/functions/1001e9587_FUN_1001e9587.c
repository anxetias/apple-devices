// name: FUN_1001e9587
// address: 1001e9587

undefined8 FUN_1001e9587(int *param_1)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined4 local_38;
  int *local_34;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x6c636d70)) {
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      FUN_1006c1b5b(uVar4);
    }
    FUN_1001782e9(0,0);
    uVar4 = 0xffffffce;
  }
  else {
    if ((param_1[2] & 1U) == 0) {
      if ((*(byte *)(param_1 + 1) & 1) == 0) {
        uVar4 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar4,0x10);
        if (cVar3 != '\0') {
          local_38 = 0x8000100;
          local_34 = param_1;
          __os_log_impl(0x100000000,uVar4,0x10,"lock> deleting an unnotified locked completion %p",
                        &local_38,0xc);
        }
      }
      FUN_1001e8f15(param_1);
    }
    lVar2 = *(long *)(param_1 + 4);
    if (lVar2 == 0) {
      uVar4 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar4,0x10);
      if (cVar3 != '\0') {
        FUN_1006c1ae5(uVar4);
      }
      FUN_1001782e9(0,0);
    }
    else {
      do {
        uVar1 = *(uint *)(lVar2 + 8);
        LOCK();
        bVar5 = uVar1 == *(uint *)(lVar2 + 8);
        if (bVar5) {
          *(uint *)(lVar2 + 8) = uVar1 & 0xfffffffe;
        }
        UNLOCK();
      } while (!bVar5);
    }
    FUN_1001c62d9(param_1,0x20);
    uVar4 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

