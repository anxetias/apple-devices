// name: FUN_1002e896a
// address: 1002e896a

void FUN_1002e896a(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (lVar3 = *(long *)(param_1 + 0x10), lVar3 == 0)) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "TrackInfoIsValid(inTrackInfo)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar2 = FUN_100475b69(param_1);
    if ((*(byte *)(param_1 + 0xc6) & 0x80) == 0) {
      if (lVar2 != -3) {
        lVar3 = FUN_10048604a(lVar3);
LAB_1002e8a07:
        if (lVar3 != 0) {
          for (plVar5 = *(long **)(param_1 + 0x68); plVar5 != (long *)0x0;
              plVar5 = (long *)plVar5[10]) {
            if (*plVar5 == lVar3) goto LAB_1002e89d7;
          }
          if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
            FUN_100489a1f(lVar3,param_1,0,0);
            return;
          }
          goto LAB_1002e8a95;
        }
      }
    }
    else if (lVar2 - 1U < 0xfffffffffffffffc) {
      lVar3 = FUN_100493350(1);
      goto LAB_1002e8a07;
    }
  }
LAB_1002e89d7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
LAB_1002e8a95:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

