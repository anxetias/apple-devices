// name: FUN_100352c96
// address: 100352c96

int * FUN_100352c96(int *param_1,byte *param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  ulong uVar11;
  int *piVar12;
  bool bVar13;
  int *local_68;
  short local_5a;
  uint local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (int *)0x0) {
LAB_100352d6c:
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "PlaylistIsValid(inPlaylist)";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    piVar10 = (int *)0x0;
    FUN_1001782e9(0,0);
    goto LAB_10035301b;
  }
  if (*param_1 != 0x706c7374) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure (expected to be true)";
      local_4c = 0x822;
      local_4a = "playlist->magic == \'plst\'";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    cVar2 = FUN_1001782e9(0,1);
    if (cVar2 == '\0') goto LAB_100352d6c;
  }
  if (param_1[0xf4] == 0x63737468) {
    piVar10 = param_1 + 0xf6;
    do {
      piVar10 = *(int **)piVar10;
      if (piVar10 == (int *)0x0) goto LAB_100352dc0;
      bVar3 = *param_2;
      bVar13 = false;
      uVar4 = (uint)bVar3;
      if (bVar3 < 4) {
        uVar4 = 0;
      }
      if ((byte)uVar4 == *(byte *)(piVar10 + 5)) {
        if ((((byte)uVar4 < 6) && ((0x29U >> (uVar4 & 0x1f) & 1) != 0)) || ((bVar3 & 0xfe) != 4))
        break;
        bVar13 = param_2[1] == *(byte *)((long)piVar10 + 0x15);
      }
    } while (!bVar13);
    piVar10[3] = piVar10[3] + 1;
LAB_100352ef5:
    if ((bVar3 == 5) && ((short)piVar10[8] != 0)) {
      local_58 = CONCAT22(local_58._2_2_,*(undefined2 *)param_2);
      local_58 = local_58 & 0xffffff00;
      lVar7 = FUN_100352c96(param_1,&local_58,param_3);
      if (lVar7 != 0) {
        piVar1 = piVar10 + 8;
        FUN_100352999(lVar7);
        local_5a = *(short *)((long)piVar10 + 0x22);
        lVar8 = (long)(short)piVar10[8];
        if (0 < lVar8) {
          uVar11 = lVar8 + 1;
          piVar12 = piVar10 + lVar8 * 7 + 2;
          do {
            iVar5 = FUN_10031fa8a(piVar12);
            if (iVar5 != 0x7e) {
              FUN_100351f3f(piVar1,iVar5);
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + -7;
          } while (1 < uVar11);
        }
        *(undefined2 *)((long)piVar10 + 0x22) = 0;
        if (0 < *(short *)(lVar7 + 0x20)) {
          lVar8 = lVar7 + 0x24;
          uVar11 = 0;
          do {
            iVar5 = FUN_10031fa8a(lVar8);
            if (iVar5 != 0x7e) {
              if (local_5a == 0) {
                bVar13 = false;
              }
              else {
                bVar13 = uVar11 == (uint)(int)*(short *)(lVar7 + 0x22);
              }
              lVar9 = FUN_100351ae9(piVar1,iVar5,0,bVar13);
              if (lVar9 != 0) {
                *(undefined1 *)(lVar9 + 7) = *(undefined1 *)(lVar8 + 7);
                *(undefined2 *)(lVar9 + 8) = *(undefined2 *)(lVar8 + 8);
              }
            }
            uVar11 = uVar11 + 1;
            lVar8 = lVar8 + 0x1c;
          } while ((long)uVar11 < (long)*(short *)(lVar7 + 0x20));
        }
        FUN_100352070(param_1,piVar1,5,0);
      }
    }
  }
  else {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "inHandler->magic == \'csth\'";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
LAB_100352dc0:
    if ((param_3 & 1) == 0) {
      local_68 = (int *)0x0;
      if ((*param_2 == 0) || (*param_2 == 5)) {
LAB_100352e2c:
        iVar5 = FUN_100352899(param_2,param_3,&local_68);
        piVar1 = local_68;
        if (iVar5 == 0) {
          if (((param_3 & 2) == 0) && (*param_2 == 4)) {
            FUN_1003532a2(param_1,local_68);
          }
          FUN_100352490(param_1,piVar1,0);
          piVar10 = local_68;
          if (piVar1 != (int *)0x0) {
            FUN_100352b93(param_1 + 0xf4,piVar1);
            piVar10 = local_68;
          }
        }
        else {
          uVar6 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar6,0x10);
          piVar10 = local_68;
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            piVar10 = local_68;
          }
        }
      }
      else {
        if (DAT_1008bd7d1 == '\0') {
          DAT_1008bd7d1 = '\x01';
          cVar2 = FUN_1001cdcc9("separate-grid-columns",0);
          if ((cVar2 == '\0') || (uVar4 = FUN_1001cd9a6("separate-grid-columns",0,0), 1 < uVar4))
          goto LAB_100352e1e;
          DAT_1008bd7d2 = (byte)uVar4;
        }
        else {
LAB_100352e1e:
          uVar4 = (uint)DAT_1008bd7d2;
        }
        if ((char)uVar4 == '\x01') goto LAB_100352e2c;
        piVar10 = (int *)FUN_100353351(param_1,param_2,param_3);
      }
      if (piVar10 != (int *)0x0) {
        bVar3 = *param_2;
        goto LAB_100352ef5;
      }
    }
    piVar10 = (int *)0x0;
  }
LAB_10035301b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return piVar10;
}

