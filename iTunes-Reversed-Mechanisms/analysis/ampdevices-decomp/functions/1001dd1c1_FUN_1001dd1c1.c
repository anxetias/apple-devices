// name: FUN_1001dd1c1
// address: 1001dd1c1

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1001dd1c1(int *param_1,char *param_2,uint param_3,int param_4,uint *param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  uint *puVar14;
  long lVar15;
  uint *puVar16;
  uint uVar17;
  int *piVar18;
  bool bVar19;
  uint local_94;
  uint *local_90;
  long *local_88;
  long local_80;
  char *local_78;
  int local_6c;
  long *local_68;
  uint local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_5 != (uint *)0x0) {
    *param_5 = 0;
  }
  local_6c = param_4;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x73747263)) {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      FUN_1006b8b11(uVar7);
    }
  }
  else if (param_1[0xf] == 0) {
    iVar6 = 0;
    if (param_3 == 0) goto LAB_1001dd256;
    if (param_1[10] == 0) {
      uVar1 = param_1[1];
      local_90 = param_5;
      local_78 = param_2;
      local_5c = param_3;
      if ((((uVar1 & 1) != 0) && (*(long *)(param_1 + 4) != 0)) && (*(long *)(param_1 + 8) != 0)) {
        FUN_1001dccc7(param_1);
        if (((param_4 != 0) && (*(long *)(param_1 + 0x12) != 0)) &&
           ((lVar8 = FUN_1001deabe(*(long *)(param_1 + 0x12),&local_6c), lVar8 != 0 &&
            (uVar17 = *(uint *)(lVar8 + 4), uVar17 != 0)))) {
          iVar5 = FUN_1001de14e(param_1,uVar17,1,&local_58,&local_94);
          if (((iVar5 == 0) && (local_94 == local_5c)) &&
             (cVar4 = FUN_1001c5630(local_78,CONCAT44(uStack_54,local_58),(long)(int)local_5c),
             cVar4 != '\0')) {
            FUN_1001dcd18(param_1);
            FUN_1001dcecf(param_1,uVar17);
            if (param_5 != (uint *)0x0) {
              *param_5 = uVar17;
            }
            goto LAB_1001dd256;
          }
          local_6c = 0;
        }
        plVar9 = (long *)(long)param_1[0xb];
        local_68 = plVar9;
        if (0 < (long)plVar9) {
          lVar2 = **(long **)(param_1 + 8);
          local_80 = **(long **)(param_1 + 6);
          local_88 = (long *)(long)(int)local_5c;
          lVar8 = **(long **)(param_1 + 4) + (long)plVar9 * 8;
          lVar15 = 0;
          uVar17 = local_5c;
          do {
            uVar12 = (uint)plVar9;
            if ((((*(uint *)(lVar8 + -4 + lVar15 * 2) == uVar17) &&
                 (bVar19 = 0 < (int)uVar17, lVar11 = (long)*(int *)(lVar8 + -8 + lVar15 * 2),
                 uVar17 = local_5c, -1 < lVar11 && bVar19)) &&
                (*local_78 == *(char *)(lVar2 + lVar11))) &&
               (cVar4 = FUN_1001c5630(local_78,lVar11 + lVar2,local_88), uVar17 = local_5c,
               cVar4 != '\0')) {
              piVar18 = (int *)(lVar15 + local_80 + (ulong)((int)local_68 - 1) * 4);
              *piVar18 = *piVar18 + 1;
              if (local_90 != (uint *)0x0) {
                *local_90 = uVar12;
              }
              FUN_1001dcd18(param_1);
              iVar6 = 0;
              goto LAB_1001dd256;
            }
            plVar9 = (long *)(ulong)(uVar12 - 1);
            lVar15 = lVar15 + -4;
          } while (1 < uVar12);
        }
        FUN_1001dcd18(param_1);
      }
      plVar9 = (long *)(param_1 + 8);
      puVar16 = local_90;
      local_88 = plVar9;
      do {
        uVar17 = param_1[0x10];
        if (uVar17 != 0) {
          if (*plVar9 == 0) {
            uVar12 = 0;
          }
          else {
            iVar6 = FUN_1001c5d9c();
            uVar12 = iVar6 - param_1[0xd];
            uVar17 = param_1[0x10];
          }
          if (((uVar12 / uVar17 < 6) && ((uint)param_1[0xe] < uVar12)) &&
             (local_68 = (long *)FUN_1001c5bcd((uVar12 - uVar17) + param_1[0xe]),
             local_68 != (long *)0x0)) {
            if (param_1[0xb] != 0) {
              lVar8 = *local_68;
              piVar18 = (int *)**(undefined8 **)(param_1 + 4);
              iVar6 = 0;
              uVar17 = 1;
              do {
                cVar4 = FUN_1001dd16c(piVar18);
                if (cVar4 == '\0') {
                  if (piVar18 == (int *)0x0) {
                    local_80 = FUN_1001cc310();
                    cVar4 = _os_log_type_enabled(local_80,0x10);
                    if (cVar4 != '\0') {
                      local_58 = 0x8220202;
                      uStack_54 = 0x7a0a90;
                      uStack_50 = 1;
                      local_4c = 0x822;
                      local_4a = "stringOffset != nullptr";
                      __os_log_error_impl(0x100000000,local_80,0x10,"%{public}s: (%{public}s)",
                                          &local_58,0x16);
                    }
                    FUN_1001782e9(0,0);
                  }
                  else if (*piVar18 == -0x7fffffff) {
                    *piVar18 = -0x80000000;
                    piVar18[1] = param_1[0xc];
                    param_1[0xc] = uVar17;
                  }
                }
                else {
                  FUN_1001c631b((long)*piVar18 + *(long *)*local_88,lVar8,(long)piVar18[1]);
                  *piVar18 = iVar6;
                  iVar6 = iVar6 + piVar18[1];
                  lVar8 = lVar8 + piVar18[1];
                }
                piVar18 = piVar18 + 2;
                bVar19 = uVar17 < (uint)param_1[0xb];
                uVar17 = uVar17 + 1;
              } while (bVar19);
            }
            FUN_1001c6209(*(undefined8 *)(param_1 + 8));
            *(long **)(param_1 + 8) = local_68;
            param_1[0x10] = 0;
            param_1[0xd] = param_1[0xe];
            plVar9 = local_88;
            puVar16 = local_90;
          }
        }
        iVar6 = param_1[0xc];
        if (iVar6 != 0) {
          plVar10 = *(long **)(param_1 + 4);
          if (plVar10 == (long *)0x0) {
            uVar7 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar7,0x10);
            if (cVar4 != '\0') {
              local_58 = 0x8220202;
              uStack_54 = 0x7a0a90;
              uStack_50 = 1;
              local_4c = 0x822;
              local_4a = "stringCache->stringOffsets != nullptr";
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
            plVar10 = *(long **)(param_1 + 4);
            iVar6 = param_1[0xc];
          }
          lVar2 = *plVar10;
          lVar8 = lVar2 + (long)iVar6 * 8;
          param_1[0xc] = *(int *)(lVar8 + -4);
          piVar18 = (int *)(lVar8 + -8);
          if (piVar18 != (int *)0x0) {
            puVar14 = (uint *)((ulong)((long)piVar18 - lVar2) >> 3);
            if (*plVar9 == 0) {
              iVar6 = param_1[0xd];
              iVar5 = 0;
            }
            else {
              iVar5 = FUN_1001c5d9c();
              iVar6 = param_1[0xd];
              iVar5 = iVar5 - iVar6;
            }
            iVar3 = (int)puVar14;
            local_68 = (long *)CONCAT44(local_68._4_4_,iVar3 + 1);
            if (iVar6 < (int)local_5c) {
              uVar17 = param_1[0xe];
              uVar12 = local_5c;
              if (local_5c < uVar17) {
                uVar12 = uVar17;
              }
              local_80 = CONCAT44(local_80._4_4_,iVar5);
              uVar13 = (ulong)uVar12;
              if (uVar12 <= (uint)(long)((float)iVar5 * _DAT_100712024)) {
                uVar13 = (long)((float)iVar5 * _DAT_100712024) & 0xffffffff;
              }
              if (uVar17 < 0x2000) {
                param_1[0xe] = uVar17 * 2;
              }
              iVar6 = FUN_1001c60a1(local_88,uVar13);
              if ((iVar6 == -0x80) || (iVar6 == 0)) {
                piVar18 = (int *)((long)iVar3 * 8 + **(long **)(param_1 + 4));
                if (iVar6 == 0) {
                  param_1[0xd] = param_1[0xd] + (int)uVar13;
                  iVar5 = (int)local_80;
                  goto LAB_1001dd759;
                }
              }
              else {
                uVar7 = FUN_1001cc310();
                cVar4 = _os_log_type_enabled(uVar7,0x10);
                if (cVar4 != '\0') {
                  FUN_1006b8a39(iVar6,uVar7);
                }
                piVar18 = (int *)((long)iVar3 * 8 + **(long **)(param_1 + 4));
              }
              *piVar18 = -0x80000000;
              piVar18[1] = param_1[0xc];
              param_1[0xc] = (uint)local_68;
            }
            else {
LAB_1001dd759:
              plVar10 = local_88;
              plVar9 = (long *)*local_88;
              local_90 = puVar14;
              if (plVar9 == (long *)0x0) {
                local_80 = CONCAT44(local_80._4_4_,iVar5);
                uVar7 = FUN_1001cc310(local_78);
                cVar4 = _os_log_type_enabled(uVar7,0x10);
                if (cVar4 != '\0') {
                  FUN_1006b89c3(uVar7);
                }
                FUN_1001782e9(0,0);
                plVar9 = (long *)*plVar10;
                iVar5 = (int)local_80;
              }
              uVar17 = local_5c;
              FUN_1001c631b(local_78,(long)iVar5 + *plVar9,(long)(int)local_5c);
              param_1[0xd] = param_1[0xd] - uVar17;
              *piVar18 = iVar5;
              piVar18[1] = uVar17;
              if (puVar16 != (uint *)0x0) {
                *puVar16 = (uint)local_68;
              }
              iVar6 = 0;
              if ((uVar1 & 1) != 0) {
                piVar18 = (int *)(**(long **)(param_1 + 6) + (long)(int)local_90 * 4);
                *piVar18 = *piVar18 + 1;
                if ((local_6c != 0) && (*(long *)(param_1 + 0x12) != 0)) {
                  local_94 = (uint)local_68;
                  FUN_1001deb72(&local_58,*(long *)(param_1 + 0x12),&local_6c);
                }
              }
            }
            goto LAB_1001dd256;
          }
        }
        iVar6 = FUN_1001dd8c7(param_1);
      } while (iVar6 == 0);
      if (iVar6 != -0x80) {
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          FUN_1006b8aa5(iVar6,uVar7);
        }
      }
      goto LAB_1001dd256;
    }
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      FUN_1006b894d(uVar7);
    }
  }
  else {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      FUN_1006b88d7(uVar7);
    }
  }
  FUN_1001782e9(0,0);
  iVar6 = -0x32;
LAB_1001dd256:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

