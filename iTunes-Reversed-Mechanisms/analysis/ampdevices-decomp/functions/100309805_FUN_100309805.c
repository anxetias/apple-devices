// name: FUN_100309805
// address: 100309805

long FUN_100309805(long *param_1,undefined4 param_2,undefined8 param_3,undefined1 *param_4,
                  ulong param_5,int param_6,undefined4 param_7,int *param_8)

{
  bool bVar1;
  long *plVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 extraout_RDX;
  undefined4 *puVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined1 local_9e8 [80];
  undefined8 local_998;
  undefined8 uStack_990;
  undefined4 local_988;
  undefined8 local_980;
  undefined4 local_978;
  undefined8 local_970;
  undefined1 local_968;
  int local_95c;
  long local_958;
  long *local_950;
  undefined4 local_948;
  uint local_944;
  undefined1 local_940 [1096];
  undefined4 local_4f8;
  char *local_4f4;
  undefined2 local_4ec;
  int local_4ea;
  undefined4 local_4d8;
  undefined4 local_4d4;
  undefined4 uStack_4d0;
  undefined2 uStack_4cc;
  undefined2 uStack_4ca;
  char cStack_4c8;
  undefined1 uStack_4c7;
  undefined4 uStack_4c6;
  undefined4 local_498;
  char *local_494;
  undefined2 local_48c;
  int local_48a;
  undefined1 local_46c [1076];
  long local_38;
  
  uVar15 = param_5 & 0xffffffff;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_95c = param_6;
  local_950 = param_1;
  local_948 = param_2;
  if (param_4 == (undefined1 *)0x0) {
    param_4 = local_9e8;
    iVar5 = FUN_10017d477(param_3,param_4,0);
    if (iVar5 != -0x80) {
      if (iVar5 == 0) goto LAB_10030984d;
      uVar9 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar9,0x10);
      if (cVar4 != '\0') {
        local_498 = 0x8220202;
        local_494 = "Assertion failure";
        local_48c = 0x400;
        local_48a = iVar5;
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_498,0x12);
      }
    }
  }
  else {
LAB_10030984d:
    FUN_10053672c(param_3,param_4,local_940);
    local_980 = 0;
    local_978 = 0;
    local_970 = 0;
    local_968 = 0;
    local_998 = 0;
    uStack_990 = 0;
    local_988 = 0;
    FUN_10030256d(0x46494c45,local_940,&local_498);
    plVar2 = local_950;
    if ((((param_5 & 8) == 0) && (((uint)local_950[0x376] & 3) == 1)) &&
       (lVar7 = FUN_100301c98(local_950,0x46494c45,&local_498), lVar7 != 0)) {
      uVar3 = FUN_1002b458b(lVar7);
      cVar4 = FUN_10027be37(uVar3);
      iVar5 = 0;
      if (cVar4 != '\0') {
        *(byte *)(lVar7 + 0x48) = *(byte *)(lVar7 + 0x48) | 0x10;
      }
      goto LAB_100309ab6;
    }
    uVar11 = (uint)param_5;
    if ((uVar11 >> 0x12 & 1) == 0) {
      local_988 = param_7;
      local_978 = 0x46494c45;
      if ((uVar11 >> 0x13 & 1) != 0) {
        local_968 = 1;
      }
      cVar4 = (char)local_948;
      lVar8 = FUN_100472d20(plVar2,(char)local_948,&local_998);
      if (lVar8 != 0) {
        uVar14 = 0x801;
        if ((uVar11 >> 9 & 1) != 0) {
          *(byte *)(lVar8 + 0xc5) = *(byte *)(lVar8 + 0xc5) | 0x80;
          uVar14 = 0xa81;
        }
        uVar10 = uVar14;
        if ((((*(byte *)(plVar2 + 0x376) & 1) != 0) &&
            (((char)local_948 == '\b' || (cVar4 == '\x04')))) &&
           (uVar10 = uVar14 | 0x4000, (~uVar11 & 0x48) != 0)) {
          local_944 = uVar14 | 0x4000;
          uVar9 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar9,0x10);
          if (cVar4 != '\0') {
            local_4d8 = 0x8220202;
            local_4d4 = 0x7a0a90;
            uStack_4d0 = 1;
            uStack_4cc = 0x822;
            uStack_4ca = 0xef03;
            cStack_4c8 = '{';
            uStack_4c7 = 0;
            uStack_4c6 = 1;
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_4d8,0x16);
          }
          FUN_1001782e9(0,0);
          uVar10 = local_944;
        }
        lVar7 = *(long *)(lVar8 + 0x58);
        uVar3 = 2;
        if (((param_5 & 1) != 0) || (uVar3 = 6, (param_5 & 4) != 0)) {
          *(undefined1 *)(lVar7 + 0x45) = uVar3;
        }
        if ((param_5 & 0x40) == 0) {
          if ((param_5 & 0x20) != 0) {
            *(uint *)(lVar7 + 0x48) = *(uint *)(lVar7 + 0x48) & 0xfffffcff | 0x200;
          }
        }
        else {
          uVar15 = (ulong)(uVar11 & 0xfffbffdf);
          *(byte *)(lVar7 + 0x49) = *(byte *)(lVar7 + 0x49) | 3;
        }
        uVar14 = (uint)uVar15;
        uVar11 = uVar10 | ~uVar11 >> 3 & 2 | (uint)(uVar15 >> 2) & 0x20;
        if ((short)uVar15 < 0) {
          uVar11 = uVar11 | 0x800;
        }
        else if ((uVar14 >> 0x11 & 1) != 0) {
          FUN_1002e5429(lVar8,1,1);
        }
        local_944 = uVar11;
        plVar2 = local_950;
        if ((uVar14 >> 10 & 1) != 0) {
          *(byte *)(lVar8 + 0xc2) = *(byte *)(lVar8 + 0xc2) | 8;
        }
        local_958 = lVar8;
        iVar5 = FUN_1002fc315(lVar7,local_940,param_4);
        if (local_95c != 0) {
          *(int *)(local_958 + 0xd4) = local_95c;
        }
        if (((char)local_948 == '\x0f') || ((*(byte *)((long)plVar2 + 0x1bb4) & 0x40) == 0)) {
          if (iVar5 != -0x80) {
            if (iVar5 != 0) goto LAB_100309c5c;
LAB_100309bad:
            iVar5 = 0;
            if ((uVar15 & 8) == 0) {
              lVar8 = 0;
              if ((plVar2[0x376] & 2U) == 0) {
                lVar8 = FUN_100306976(local_950,lVar7,0,1,0,0);
                if (lVar8 == lVar7) {
                  lVar8 = 0;
                }
              }
            }
            else {
              lVar8 = 0;
            }
            bVar1 = true;
            if ((uVar15 & 2) != 0) goto LAB_100309d91;
            iVar5 = FUN_1002b3b9a(lVar7,&local_498);
            if (iVar5 != -0x80) {
              if (iVar5 == 0) {
                FUN_1001c62d9(&local_4d8,0x38);
                uVar3 = FUN_1002b458b(lVar7);
                local_4d8 = CONCAT31(local_4d8._1_3_,uVar3);
                uStack_4d0 = SUB84(local_46c,0);
                uStack_4cc = (undefined2)((ulong)local_46c >> 0x20);
                uStack_4ca = (undefined2)((ulong)local_46c >> 0x30);
                iVar5 = FUN_1002fc1ae(local_950,0x7464636f,&local_4d8);
                if (iVar5 != -0x80) {
                  if (iVar5 == 0) {
                    iVar5 = 0;
                    bVar1 = cStack_4c8 != '\0';
                    if (cStack_4c8 == '\0') {
                      if (lVar8 != 0) {
                        FUN_1002b0e52(lVar7);
                        FUN_1004737f5(local_958);
                        iVar5 = 0;
                        lVar7 = lVar8;
                        goto LAB_100309c79;
                      }
                      FUN_1004744bf(local_958,0);
                      FUN_1002b097c(lVar7);
                      iVar5 = FUN_10040503d(local_940,0,
                                            (uint)(uVar15 >> 0xc) & 5 | (uint)(uVar15 >> 10) & 8,
                                            lVar7,0,0,0);
                    }
LAB_100309d91:
                    lVar8 = local_958;
                    if (*(int *)((long)local_950 + 0x84) == 0x646f5069) {
                      uVar11 = FUN_1004744bf(local_958,0);
                      if ((uVar11 & 0x818000) == 0x800000) {
                        FUN_1002bd466(lVar7,local_940);
                      }
                      else {
                        cVar4 = FUN_1003203ad(lVar8);
                        if (((uVar14 >> 9 & 1) == 0) && (cVar4 != '\0')) {
                          FUN_1002b6cb9(lVar7,0x46494c45,&local_498);
                        }
                      }
                    }
                    if (iVar5 == 0) {
                      if (bVar1) {
                        if ((*(byte *)(local_958 + 0xc2) & 8) == 0) {
                          FUN_1002ff169(lVar7,1);
                        }
                        if ((local_944 & 0x4080) == 0) {
                          for (puVar16 = *(undefined8 **)(local_958 + 0x58);
                              puVar16 != (undefined8 *)0x0; puVar16 = (undefined8 *)*puVar16) {
                            FUN_10031ad67(puVar16,0);
                          }
                        }
                      }
                      (**(code **)(*local_950 + 0x10))
                                (local_950,0x61747269,local_958,(uint)(uVar15 >> 8) & 1,0);
                    }
                    if ((uVar15 & 0x20) != 0) {
                      *(byte *)(lVar7 + 0x49) = *(byte *)(lVar7 + 0x49) & 0xfc;
                    }
                  }
                  else {
                    uVar9 = FUN_1001cc310();
                    cVar4 = _os_log_type_enabled(uVar9,0x10);
                    if (cVar4 != '\0') {
                      puVar13 = &local_4f8;
                      local_4f8 = 0x8220202;
                      local_4f4 = "Assertion failure";
                      local_4ec = 0x400;
                      local_4ea = iVar5;
                      goto LAB_100309f03;
                    }
                  }
                }
              }
              else {
                uVar9 = FUN_1001cc310();
                cVar4 = _os_log_type_enabled(uVar9,0x10);
                if (cVar4 != '\0') {
                  puVar13 = &local_4f8;
                  local_4f8 = 0x8220202;
                  local_4f4 = "Assertion failure";
                  local_4ec = 0x400;
                  local_4ea = iVar5;
                  goto LAB_100309f03;
                }
              }
            }
          }
        }
        else {
          uVar6 = FUN_1004744bf(*(undefined8 *)(lVar7 + 8),1);
          lVar8 = *(long *)(lVar7 + 8);
          if ((lVar8 == 0) || (*(long *)(lVar8 + 0x10) == 0)) {
            uVar12 = 0;
          }
          else {
            uVar12 = CONCAT71((int7)((ulong)lVar8 >> 8),*(undefined1 *)(lVar7 + 0x4a)) &
                     0xffffffffffffff10;
            uVar12 = CONCAT71((int7)(uVar12 >> 8),(byte)uVar12 >> 4);
          }
          cVar4 = FUN_10048019c(uVar6,uVar12 & 0xff,extraout_RDX,uVar12);
          if (iVar5 != -0x80) {
            if (iVar5 == 0) {
              iVar5 = 0x2348;
              if (cVar4 == (char)local_948) goto LAB_100309bad;
            }
LAB_100309c5c:
            uVar9 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar9,0x10);
            if (cVar4 != '\0') {
              puVar13 = &local_4d8;
              local_4d8 = 0x8220202;
              local_4d4 = 0x7a0a90;
              uStack_4d0 = 1;
              uStack_4cc = 0x400;
              uStack_4ca = (undefined2)iVar5;
              cStack_4c8 = (char)((uint)iVar5 >> 0x10);
              uStack_4c7 = (undefined1)((uint)iVar5 >> 0x18);
LAB_100309f03:
              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",puVar13,0x12);
            }
          }
        }
LAB_100309c79:
        if ((iVar5 == 0) || (lVar7 == 0)) {
          if (lVar7 != 0) {
            lVar8 = FUN_1003008d3(lVar7,0);
            if (((lVar8 != 0) &&
                (FUN_10048055e(*(undefined8 *)(lVar7 + 8),lVar8,0),
                *(long *)(*(long *)(lVar7 + 0x10) + 0xa8) != 0)) &&
               (*(char *)(lVar7 + 0x45) == '\0')) {
              FUN_1002b48e9(lVar7);
            }
            goto LAB_100309ab6;
          }
        }
        else {
          FUN_1002b0e52(lVar7);
          FUN_1004737f5(*(undefined8 *)(lVar7 + 8));
        }
        lVar7 = 0;
        goto LAB_100309ab6;
      }
      iVar5 = 0;
    }
    else {
      iVar5 = 0x232c;
    }
  }
  lVar7 = 0;
LAB_100309ab6:
  if (param_8 != (int *)0x0) {
    *param_8 = iVar5;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar7;
}

