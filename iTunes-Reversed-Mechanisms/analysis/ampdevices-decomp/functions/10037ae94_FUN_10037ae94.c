// name: FUN_10037ae94
// address: 10037ae94

ulong FUN_10037ae94(long param_1,long param_2,undefined8 *param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  undefined4 local_58;
  undefined8 local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  piVar11 = (int *)*param_3;
  lVar10 = *(long *)(param_1 + 8);
  if (lVar10 == 0) {
LAB_10037aefd:
    plVar6 = (long *)0x0;
  }
  else if (*(long *)(lVar10 + 0x10) == 0) {
    uVar8 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar8,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "TrackInfoIsValid(inTrackInfo)";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    plVar6 = (long *)0x0;
    FUN_1001782e9(0,0);
  }
  else {
    plVar6 = *(long **)(lVar10 + 0x58);
    if (plVar6 == (long *)0x0) goto LAB_10037aefd;
    if ((*plVar6 != 0) && (plVar6 = (long *)FUN_100597a61(lVar10), plVar6 == (long *)0x0)) {
      plVar6 = (long *)FUN_1005977c1(lVar10);
    }
  }
  lVar10 = *(long *)(param_2 + 8);
  if (lVar10 == 0) {
LAB_10037af72:
    plVar7 = (long *)0x0;
  }
  else if (*(long *)(lVar10 + 0x10) == 0) {
    uVar8 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar8,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "TrackInfoIsValid(inTrackInfo)";
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    plVar7 = (long *)0x0;
    FUN_1001782e9(0,0);
  }
  else {
    plVar7 = *(long **)(lVar10 + 0x58);
    if (plVar7 == (long *)0x0) goto LAB_10037af72;
    if ((*plVar7 != 0) && (plVar7 = (long *)FUN_100597a61(lVar10), plVar7 == (long *)0x0)) {
      plVar7 = (long *)FUN_1005977c1(lVar10);
    }
  }
  if (*(char *)((long)param_3 + 0x14) == '\0') {
    iVar5 = *piVar11;
    if ((*(uint *)((long)param_3 + 0xc) & 3) == 0) {
      if (iVar5 != 0) {
        uVar9 = FUN_10037a7d0(param_1,param_2,plVar6,plVar7);
        if ((int)uVar9 == 0) {
          do {
            piVar11 = piVar11 + 1;
            cVar2 = *(char *)(param_3 + 1);
            if (*piVar11 == 0) {
              uVar9 = FUN_10037a7d0(param_1,param_2,plVar6,plVar7,0x1e,
                                    *(undefined4 *)((long)param_3 + 0xc));
              break;
            }
            uVar9 = FUN_10037a7d0(param_1,param_2,plVar6,plVar7,*piVar11,
                                  *(undefined4 *)((long)param_3 + 0xc));
          } while ((int)uVar9 == 0);
          if (cVar2 != '\0') {
            uVar9 = (ulong)(uint)-(int)uVar9;
          }
        }
        goto LAB_10037b0b2;
      }
    }
    else if (iVar5 != 0) {
      lVar10 = 0;
      do {
        uVar9 = FUN_10037a7d0(param_1,param_2,plVar6,plVar7,iVar5,
                              *(undefined4 *)((long)param_3 + 0xc));
        iVar5 = (int)uVar9;
        if (iVar5 != 0) {
          if ((int)lVar10 == 1) {
            bVar1 = *(byte *)((long)param_3 + 0xc) & 2;
          }
          else {
            if ((int)lVar10 != 0) goto LAB_10037b0b2;
            bVar1 = *(byte *)((long)param_3 + 0xc) & 1;
          }
          uVar9 = uVar9 & 0xffffffff;
          if (bVar1 != 0) {
            uVar9 = (ulong)(uint)-iVar5;
          }
          goto LAB_10037b0b2;
        }
        iVar5 = piVar11[lVar10 + 1];
        lVar10 = lVar10 + 1;
      } while (iVar5 != 0);
    }
  }
  else {
    uVar3 = FUN_10037a7d0(param_1,param_2,plVar6,plVar7,*piVar11,
                          *(undefined4 *)((long)param_3 + 0xc));
    if (uVar3 != 0) {
      uVar4 = -uVar3;
      if ((*(byte *)((long)param_3 + 0xc) & 1) == 0) {
        uVar4 = uVar3;
      }
      uVar9 = (ulong)uVar4;
      goto LAB_10037b0b2;
    }
    local_58 = *(undefined4 *)(param_3 + 3);
    local_54 = (char *)(CONCAT44(local_54._4_4_,*(undefined4 *)((long)param_3 + 0xc)) &
                       0xfffffffffffffffd);
    uVar9 = FUN_10055f730(param_1,param_2);
    if ((int)uVar9 != 0) goto LAB_10037b0b2;
  }
  uVar9 = FUN_10037a7d0(param_1,param_2,plVar6,plVar7,0x1e,*(undefined4 *)((long)param_3 + 0xc));
LAB_10037b0b2:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9;
}

