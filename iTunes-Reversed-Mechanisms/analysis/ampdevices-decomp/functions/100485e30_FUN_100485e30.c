// name: FUN_100485e30
// address: 100485e30

long * FUN_100485e30(long param_1)

{
  long *plVar1;
  char cVar2;
  undefined2 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "TrackInfoIsValid(trackInfo)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    plVar6 = (long *)0x0;
  }
  else {
    plVar5 = *(long **)(param_1 + 0x68);
    plVar6 = plVar5;
    if (plVar5 != (long *)0x0) {
      do {
        if ((*(byte *)(*plVar6 + 0x240) & 4) != 0) {
          cVar2 = FUN_100485f88();
          if (cVar2 == '\0') goto LAB_100485f0d;
          plVar5 = *(long **)(param_1 + 0x68);
          break;
        }
        plVar1 = plVar6 + 10;
        plVar6 = (long *)*plVar1;
      } while ((long *)*plVar1 != (long *)0x0);
      if (plVar5 != (long *)0x0) {
        do {
          uVar3 = FUN_10048c0ca(*plVar5);
          cVar2 = FUN_10048c208(uVar3);
          if ((cVar2 != '\0') && (cVar2 = FUN_100485f88(*plVar5), plVar6 = plVar5, cVar2 == '\0'))
          goto LAB_100485f0d;
          plVar5 = (long *)plVar5[10];
        } while (plVar5 != (long *)0x0);
        plVar5 = *(long **)(param_1 + 0x68);
        if (plVar5 != (long *)0x0) {
          do {
            cVar2 = FUN_100485f88(*plVar5);
            plVar6 = plVar5;
            if (cVar2 == '\0') break;
            plVar5 = (long *)plVar5[10];
            plVar6 = (long *)0x0;
          } while (plVar5 != (long *)0x0);
          goto LAB_100485f0d;
        }
      }
    }
    plVar6 = (long *)0x0;
  }
LAB_100485f0d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return plVar6;
}

