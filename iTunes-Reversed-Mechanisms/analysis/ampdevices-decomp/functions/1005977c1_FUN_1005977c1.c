// name: FUN_1005977c1
// address: 1005977c1

long * FUN_1005977c1(long param_1)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  bool bVar7;
  undefined4 local_64;
  int local_60;
  uint local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
LAB_100597936:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "TrackInfoIsValid(inTrackInfo)";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    plVar4 = (long *)0x0;
    FUN_1001782e9(0,0);
  }
  else {
    cVar1 = FUN_100474a49(param_1,0,0);
    if (cVar1 != '\0') {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_100597936;
      local_5c = FUN_1002b8fbc();
      local_60 = 0;
      local_64 = 0;
      FUN_100474029(param_1,&local_60,&local_64,0);
      plVar5 = *(long **)(param_1 + 0x58);
      if (plVar5 != (long *)0x0) {
        uVar6 = 0;
        plVar4 = (long *)0x0;
        do {
          if ((plVar5[1] == 0) || (*(long *)(plVar5[1] + 0x10) == 0)) {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "TrackInstanceIsValid(trackInstance)";
              __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            bVar7 = false;
            FUN_1001782e9(0,0);
          }
          else {
            bVar7 = *(int *)((long)plVar5 + 0x3c) != 0x53485244;
          }
          if ((!bVar7) && (local_60 != 0)) goto LAB_1005978d1;
          uVar2 = *(ushort *)(plVar5[3] + 2) + 2;
          if (3 < *(ushort *)(plVar5[3] + 2)) {
            uVar2 = 0;
          }
          if (local_5c < uVar2 || uVar2 <= uVar6) {
            if (uVar2 < uVar6) {
              if ((int)local_5c < (int)uVar6) goto LAB_1005978cb;
            }
            else if (uVar6 == 0) goto LAB_1005978cb;
          }
          else {
LAB_1005978cb:
            plVar4 = plVar5;
            uVar6 = uVar2;
          }
LAB_1005978d1:
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
        if (plVar4 != (long *)0x0) goto LAB_10059795b;
      }
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "preferredInstance != nullptr";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    plVar4 = (long *)FUN_1005974ad(param_1,0);
    if (plVar4 == (long *)0x0) {
      plVar4 = *(long **)(param_1 + 0x58);
    }
  }
LAB_10059795b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return plVar4;
}

