// name: FUN_1003baeee
// address: 1003baeee

long FUN_1003baeee(long *param_1)

{
  char cVar1;
  long lVar2;
  short *psVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar5 = *param_1;
  if (lVar5 == param_1[1]) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    do {
      lVar2 = FUN_1001b8378(lVar5);
      lVar6 = lVar6 + lVar2 * 2 + 2;
      lVar5 = lVar5 + 0x10;
    } while (lVar5 != param_1[1]);
  }
  lVar5 = FUN_100170ea9(DAT_1008c4d90,lVar6);
  if (lVar5 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "data != __null";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    lVar5 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    FUN_10017103d(lVar5,lVar6);
    psVar3 = (short *)FUN_100170f7f(lVar5);
    if (psVar3 == (short *)0x0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "namePtr != __null";
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
      FUN_10017060f(lVar5);
      lVar5 = 0;
    }
    else {
      lVar6 = *param_1;
      if (lVar6 != param_1[1]) {
        do {
          FUN_1001bb41a(lVar6,psVar3);
          psVar3 = psVar3 + (ushort)(*psVar3 + 1);
          lVar6 = lVar6 + 0x10;
        } while (lVar6 != param_1[1]);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar5;
}

