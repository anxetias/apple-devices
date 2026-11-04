// name: FUN_1002bd7f7
// address: 1002bd7f7

long * FUN_1002bd7f7(long param_1,char param_2,char param_3,short param_4,char param_5,char param_6,
                    long param_7)

{
  short sVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  bool bVar10;
  long *local_70;
  long *local_68;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "TrackInfoIsValid(trackInfo)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    plVar7 = (long *)0x0;
  }
  else {
    uVar4 = FUN_1004744bf(param_1,0);
    plVar7 = *(long **)(param_1 + 0x58);
    if (plVar7 == (long *)0x0) {
      plVar9 = (long *)0x0;
      local_68 = (long *)0x0;
    }
    else {
      local_70 = (long *)0x0;
      local_68 = (long *)0x0;
      plVar8 = (long *)0x0;
      do {
        plVar9 = plVar8;
        if ((plVar7[1] == 0) || (*(long *)(plVar7[1] + 0x10) == 0)) {
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "TrackInstanceIsValid(trackInstance)";
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
LAB_1002bd902:
          if (((param_7 != 0) && (*(char *)((long)plVar7 + 0x45) == '\n')) &&
             (lVar2 = *(long *)(param_1 + 0x180), lVar6 = FUN_100309008(param_7), lVar2 == lVar6))
          goto LAB_1002bda19;
        }
        else {
          cVar3 = FUN_1002bd404(plVar7);
          if (cVar3 == '\0') goto LAB_1002bd902;
          if ((uVar4 & 0xc62) == 0) {
            if ((uVar4 >> 0x16 & 1) == 0) goto LAB_1002bda19;
            if ((local_70 == (long *)0x0) || (cVar3 = FUN_1002b7420(plVar7), cVar3 == param_6)) {
              local_70 = plVar7;
            }
          }
          else {
            plVar9 = plVar7;
            if (((*(byte *)plVar7[3] & 1) != 0) &&
               (sVar1 = *(short *)((byte *)plVar7[3] + 2), sVar1 != 0)) {
              if (sVar1 == 1) {
                plVar9 = plVar8;
                if (param_2 != '\0') {
                  if (local_68 == (long *)0x0) {
                    local_68 = plVar7;
                  }
                  bVar10 = param_4 == 1;
LAB_1002bd9c9:
                  plVar9 = plVar8;
                  if (bVar10) {
                    local_68 = plVar7;
                  }
                }
              }
              else {
                plVar9 = plVar8;
                if ((param_3 != '\0') && (sVar1 == 2)) {
                  if (local_68 == (long *)0x0) {
                    local_68 = plVar7;
                  }
                  bVar10 = param_4 == 2;
                  goto LAB_1002bd9c9;
                }
              }
            }
          }
        }
        plVar7 = (long *)*plVar7;
        plVar8 = plVar9;
      } while (plVar7 != (long *)0x0);
      plVar7 = local_70;
      if (local_70 != (long *)0x0) goto LAB_1002bda19;
    }
    if (param_4 == 0 || param_5 != '\0') {
      plVar7 = local_68;
      if (plVar9 != (long *)0x0) {
        plVar7 = plVar9;
      }
    }
    else {
      plVar7 = plVar9;
      if (local_68 != (long *)0x0) {
        plVar7 = local_68;
      }
    }
  }
LAB_1002bda19:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return plVar7;
}

