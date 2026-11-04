// name: FUN_1005ce626
// address: 1005ce626

long FUN_1005ce626(long *param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *param_1;
  lVar6 = param_1[1];
  lVar7 = lVar6 - lVar1;
  lVar3 = FUN_100170ea9(DAT_1008c4d90,lVar7);
  if (lVar3 == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "data != __null";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    lVar3 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    lVar4 = FUN_100170f7f(lVar3);
    if (lVar4 == 0) {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "buffer != __null";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      FUN_10017060f(lVar3);
      lVar3 = 0;
    }
    else if (lVar6 != lVar1) {
      lVar7 = lVar7 >> 3;
      lVar1 = *param_1;
      lVar6 = 0;
      do {
        *(undefined8 *)(lVar4 + lVar6 * 8) = *(undefined8 *)(lVar1 + lVar6 * 8);
        lVar6 = lVar6 + 1;
      } while (lVar7 + (ulong)(lVar7 == 0) != lVar6);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar3;
}

