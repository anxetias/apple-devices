// name: FUN_1002b8fdc
// address: 1002b8fdc

ulong FUN_1002b8fdc(long param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  ulong uVar3;
  long *plVar4;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "inTrackInfo";
LAB_1002b90c6:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    if (*(long *)(param_1 + 0x78) != 0) {
      uVar3 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
      if (*(short *)(*(long *)(param_1 + 0x78) + 0x38) != 3) {
        plVar4 = (long *)(param_1 + 0x58);
        do {
          plVar4 = (long *)*plVar4;
          uVar3 = CONCAT71((int7)(uVar3 >> 8),plVar4 != (long *)0x0);
          if (plVar4 == (long *)0x0) break;
        } while (*(short *)(plVar4[3] + 2) != 3);
      }
      goto LAB_1002b9089;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "inTrackInfo->videoInfo";
      goto LAB_1002b90c6;
    }
  }
  uVar3 = 0;
  FUN_1001782e9(0,0);
LAB_1002b9089:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3 & 0xffffffff;
}

