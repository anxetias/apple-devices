// name: FUN_1002e0560
// address: 1002e0560

void FUN_1002e0560(long param_1,long param_2)

{
  undefined8 *puVar1;
  void **ppvVar2;
  void *pvVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  void *pvVar11;
  void **ppvVar12;
  long lVar13;
  size_t sVar14;
  uint uVar15;
  long lVar16;
  void **ppvVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  void **ppvVar22;
  long lVar23;
  long *plVar24;
  uint uVar25;
  bool bVar26;
  undefined1 auVar27 [16];
  void ***local_c0;
  void *local_b0;
  void **local_a8;
  void **ppvStack_a0;
  void **local_98 [2];
  void *local_88;
  long local_80;
  void **local_78;
  void **ppvStack_70;
  void **local_68 [2];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_68[0] = (void **)0x0;
  local_78 = (void **)0x0;
  ppvStack_70 = (void **)0x0;
  local_98[0] = (void **)0x0;
  local_a8 = (void **)0x0;
  ppvStack_a0 = (void **)0x0;
  lVar16 = *(long *)(param_1 + param_2 * 0x28);
  if (lVar16 == 0) {
LAB_1002e0807:
    uVar10 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar10,0x10);
    if (cVar5 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "TrackDataIsValid(trackData)";
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(lVar16 + 0x80) != 0x74646174) {
      uVar10 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar10,0x10);
      if (cVar5 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar5 = FUN_1001782e9(0,1);
      if (cVar5 == '\0') goto LAB_1002e0807;
    }
    if ((ulong)*(uint *)(lVar16 + 0x9c) != 0) {
      if ((ulong)((long)local_68[0] - (long)local_78 >> 3) < (ulong)*(uint *)(lVar16 + 0x9c)) {
        FUN_1002dfeda(&local_78);
        FUN_1002dfeda(&local_a8,*(undefined4 *)(lVar16 + 0x9c));
      }
      pvVar11 = (void *)FUN_1002f930c(lVar16);
      local_80 = param_1 + param_2 * 0x28;
      local_c0 = &local_78;
      for (; pvVar11 != (void *)0x0; pvVar11 = (void *)FUN_1002f9451(pvVar11)) {
        iVar6 = (**(code **)(local_80 + 0x10))(pvVar11);
        if (iVar6 == 0) {
          if (ppvStack_a0 < local_98[0]) {
            *ppvStack_a0 = pvVar11;
            ppvStack_a0 = ppvStack_a0 + 1;
          }
          else {
            lVar16 = (long)ppvStack_a0 - (long)local_a8 >> 3;
            uVar20 = lVar16 + 1;
            if (0x1fffffffffffffff < uVar20) {
              local_c0 = &local_a8;
              goto LAB_1002e0fdc;
            }
            uVar19 = (long)local_98[0] - (long)local_a8 >> 2;
            if (uVar19 <= uVar20) {
              uVar19 = uVar20;
            }
            if (0x7ffffffffffffff7 < (ulong)((long)local_98[0] - (long)local_a8)) {
              uVar19 = 0x1fffffffffffffff;
            }
            if (uVar19 == 0) {
              auVar27 = ZEXT816(0);
            }
            else {
              auVar27 = FUN_100249b6c(local_98);
            }
            lVar13 = auVar27._0_8_;
            puVar1 = (undefined8 *)(lVar13 + lVar16 * 8);
            ppvVar2 = (void **)(lVar13 + auVar27._8_8_ * 8);
            *puVar1 = pvVar11;
            ppvVar17 = (void **)(lVar13 + lVar16 * 8 + 8);
            ppvVar22 = (void **)((long)puVar1 - ((long)ppvStack_a0 - (long)local_a8));
            _memcpy(ppvVar22,local_a8,(long)ppvStack_a0 - (long)local_a8);
            ppvVar12 = local_a8;
            bVar26 = local_a8 != (void **)0x0;
            local_a8 = ppvVar22;
            ppvStack_a0 = ppvVar17;
            local_98[0] = ppvVar2;
            if (bVar26) {
              operator_delete(ppvVar12);
              ppvStack_a0 = ppvVar17;
            }
          }
        }
        else if (ppvStack_70 < local_68[0]) {
          *ppvStack_70 = pvVar11;
          ppvStack_70 = ppvStack_70 + 1;
        }
        else {
          lVar16 = (long)ppvStack_70 - (long)local_78 >> 3;
          uVar20 = lVar16 + 1;
          if (0x1fffffffffffffff < uVar20) {
LAB_1002e0fdc:
            FUN_1002c2cdc(local_c0);
            goto LAB_1002e1003;
          }
          uVar19 = (long)local_68[0] - (long)local_78 >> 2;
          if (uVar19 <= uVar20) {
            uVar19 = uVar20;
          }
          if (0x7ffffffffffffff7 < (ulong)((long)local_68[0] - (long)local_78)) {
            uVar19 = 0x1fffffffffffffff;
          }
          if (uVar19 == 0) {
            auVar27 = ZEXT816(0);
          }
          else {
            auVar27 = FUN_100249b6c(local_68);
          }
          lVar13 = auVar27._0_8_;
          puVar1 = (undefined8 *)(lVar13 + lVar16 * 8);
          ppvVar2 = (void **)(lVar13 + auVar27._8_8_ * 8);
          *puVar1 = pvVar11;
          ppvVar17 = (void **)(lVar13 + lVar16 * 8 + 8);
          ppvVar22 = (void **)((long)puVar1 - ((long)ppvStack_70 - (long)local_78));
          _memcpy(ppvVar22,local_78,(long)ppvStack_70 - (long)local_78);
          ppvVar12 = local_78;
          bVar26 = local_78 != (void **)0x0;
          local_78 = ppvVar22;
          ppvStack_70 = ppvVar17;
          local_68[0] = ppvVar2;
          if (bVar26) {
            operator_delete(ppvVar12);
            ppvStack_70 = ppvVar17;
          }
        }
      }
      if ((long)ppvStack_a0 - (long)local_a8 != 0) {
        if ((long)ppvStack_70 - (long)local_78 == 0) {
          FUN_1001d26f2(local_a8,(ulong)((long)ppvStack_a0 - (long)local_a8) >> 3,FUN_1002dff9b,
                        local_80);
          if ((long)ppvStack_a0 - (long)local_a8 != 0) {
            lVar16 = (long)ppvStack_a0 - (long)local_a8 >> 3;
            iVar6 = 1000;
            lVar13 = 0;
            do {
              pvVar11 = local_a8[lVar13];
              if (pvVar11 != (void *)0x0) {
                if (lVar13 == 0) {
                  (**(code **)(local_80 + 0x18))(pvVar11,iVar6);
                }
                else {
                  iVar8 = FUN_1002de174(pvVar11,local_a8[lVar13 + -1],*(undefined4 *)(local_80 + 8),
                                        0x120);
                  if (iVar8 == 0) {
                    (**(code **)(local_80 + 0x18))(pvVar11,iVar6);
                  }
                  else {
                    iVar6 = iVar6 + 1000;
                    (**(code **)(local_80 + 0x18))(pvVar11,iVar6);
                  }
                }
              }
              lVar13 = lVar13 + 1;
            } while (lVar16 + (ulong)(lVar16 == 0) != lVar13);
          }
        }
        else {
          FUN_1001d26f2(local_78,(ulong)((long)ppvStack_70 - (long)local_78) >> 3 & 0xffffffff,
                        FUN_1002dff4a);
          if ((long)ppvStack_a0 - (long)local_a8 != 0) {
            lVar16 = (long)ppvStack_a0 - (long)local_a8 >> 3;
            lVar13 = 0;
            do {
              pvVar11 = local_a8[lVar13];
              if (pvVar11 != (void *)0x0) {
                local_b0 = pvVar11;
                iVar6 = (int)((long)ppvStack_70 - (long)local_78 >> 3);
                if (iVar6 == 0) {
                  iVar8 = 0x7fffffff;
LAB_1002e0a62:
                  if (ppvStack_70 < local_68[0]) {
                    *ppvStack_70 = pvVar11;
                    ppvStack_70 = ppvStack_70 + 1;
                  }
                  else {
                    lVar18 = (long)ppvStack_70 - (long)local_78 >> 3;
                    uVar20 = lVar18 + 1;
                    if (0x1fffffffffffffff < uVar20) {
                      FUN_1002c2cdc(&local_78);
                      goto LAB_1002e1003;
                    }
                    uVar19 = (long)local_68[0] - (long)local_78 >> 2;
                    if (uVar19 <= uVar20) {
                      uVar19 = uVar20;
                    }
                    if (0x7ffffffffffffff7 < (ulong)((long)local_68[0] - (long)local_78)) {
                      uVar19 = 0x1fffffffffffffff;
                    }
                    if (uVar19 == 0) {
                      auVar27 = ZEXT816(0);
                    }
                    else {
                      auVar27 = FUN_100249b6c(local_68);
                    }
                    lVar21 = auVar27._0_8_;
                    plVar24 = (long *)(lVar21 + lVar18 * 8);
                    ppvVar2 = (void **)(lVar21 + auVar27._8_8_ * 8);
                    *plVar24 = (long)pvVar11;
                    ppvVar17 = (void **)(lVar21 + lVar18 * 8 + 8);
                    ppvVar22 = (void **)((long)plVar24 - ((long)ppvStack_70 - (long)local_78));
                    _memcpy(ppvVar22,local_78,(long)ppvStack_70 - (long)local_78);
                    ppvVar12 = local_78;
                    bVar26 = local_78 != (void **)0x0;
                    local_78 = ppvVar22;
                    ppvStack_70 = ppvVar17;
                    local_68[0] = ppvVar2;
                    if (bVar26) {
                      operator_delete(ppvVar12);
                      ppvStack_70 = ppvVar17;
                    }
                  }
                }
                else {
                  uVar7 = iVar6 - 1;
                  uVar15 = 0;
                  uVar25 = uVar7;
                  if (1 < (int)uVar7) {
                    uVar20 = 0;
                    do {
                      uVar15 = uVar25 + (int)uVar20 >> 1;
                      pvVar3 = local_78[uVar15];
                      iVar8 = FUN_1002de174(pvVar11,pvVar3,*(undefined4 *)(local_80 + 8),0x120);
                      if (iVar8 == 0) {
                        iVar8 = (**(code **)(local_80 + 0x10))(pvVar3);
                        goto LAB_1002e0a2d;
                      }
                      uVar19 = (ulong)uVar15;
                      if (iVar8 < 0) {
                        uVar19 = uVar20;
                        uVar25 = uVar15;
                      }
                      uVar15 = (uint)uVar19;
                      uVar20 = uVar19;
                    } while (1 < (int)(uVar25 - uVar15));
                  }
                  if ((int)uVar15 <= (int)uVar25) {
                    uVar20 = (ulong)uVar15;
                    iVar8 = (uVar25 + 1) - uVar15;
                    local_88 = pvVar11;
                    do {
                      pvVar11 = local_78[uVar20];
                      iVar9 = FUN_1002de174(local_88,pvVar11,*(undefined4 *)(local_80 + 8),0x120);
                      uVar15 = (uint)uVar20;
                      if (iVar9 == 0) {
                        iVar8 = (**(code **)(local_80 + 0x10))(pvVar11);
                        uVar15 = uVar15 + 1;
                        pvVar11 = local_88;
                        goto LAB_1002e0a2d;
                      }
                      pvVar11 = local_88;
                      if (iVar9 < 0) {
                        iVar8 = 0;
                        goto LAB_1002e0a2d;
                      }
                      uVar20 = uVar20 + 1;
                      iVar8 = iVar8 + -1;
                    } while (iVar8 != 0);
                  }
                  uVar15 = uVar25 + 1;
                  if (uVar7 <= uVar25) {
                    uVar15 = 0x7fffffff;
                  }
                  iVar8 = 0;
LAB_1002e0a2d:
                  if ((~uVar15 & 0x7fffffff) == 0) {
                    iVar8 = (**(code **)(local_80 + 0x10))(local_78[iVar6 - 1]);
                    iVar8 = iVar8 + 1000;
                    goto LAB_1002e0a62;
                  }
                  lVar18 = (long)(int)uVar15;
                  if (iVar8 == 0) {
                    pvVar11 = local_78[lVar18];
                    iVar6 = (**(code **)(local_80 + 0x10))(pvVar11);
                    if (uVar15 == 0) {
                      iVar8 = 0;
                    }
                    else {
                      iVar8 = (**(code **)(local_80 + 0x10))(local_78[lVar18 + -1]);
                    }
                    if ((uint)(iVar6 - iVar8) < 4) {
                      if ((long)ppvStack_70 - (long)local_78 != 0) {
                        lVar21 = (long)ppvStack_70 - (long)local_78 >> 3;
                        lVar23 = 0;
                        local_88 = (void *)CONCAT44(local_88._4_4_,1000);
                        iVar6 = 0;
                        do {
                          pvVar3 = local_78[lVar23];
                          if (pvVar3 != (void *)0x0) {
                            iVar8 = (**(code **)(local_80 + 0x10))(pvVar3);
                            if ((iVar6 != 0) && (bVar26 = iVar8 != iVar6, iVar8 = iVar6, bVar26)) {
                              iVar8 = (**(code **)(local_80 + 0x10))(pvVar3);
                              local_88 = (void *)CONCAT44(local_88._4_4_,(int)local_88 + 1000);
                            }
                            (**(code **)(local_80 + 0x18))(pvVar3,(ulong)local_88 & 0xffffffff);
                            iVar6 = iVar8;
                          }
                          lVar23 = lVar23 + 1;
                        } while (lVar21 + (ulong)(lVar21 == 0) != lVar23);
                      }
                      iVar6 = (**(code **)(local_80 + 0x10))(pvVar11);
                      iVar8 = iVar6 + -500;
                    }
                    else {
                      iVar8 = ((uint)(iVar6 - iVar8) >> 1) + iVar8;
                      if (iVar8 == iVar6) {
                        uVar10 = FUN_1001cc310();
                        cVar5 = _os_log_type_enabled(uVar10,0x10);
                        if (cVar5 != '\0') {
                          local_58 = 0x8220202;
                          local_54 = "Assertion failure";
                          local_4c = 0x822;
                          local_4a = "orderValue != maxOrder";
                          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",
                                              &local_58,0x16);
                        }
                        FUN_1001782e9(0,0);
                        iVar8 = iVar6;
                      }
                    }
                  }
                  ppvVar2 = local_78 + lVar18;
                  if (ppvStack_70 < local_68[0]) {
                    if (ppvStack_70 == ppvVar2) {
                      *ppvStack_70 = local_b0;
                      ppvStack_70 = ppvStack_70 + 1;
                    }
                    else {
                      ppvVar12 = ppvStack_70;
                      if (ppvStack_70 + -1 < ppvStack_70) {
                        ppvVar12 = ppvStack_70 + 1;
                        *ppvStack_70 = ppvStack_70[-1];
                      }
                      if (ppvStack_70 != ppvVar2 + 1) {
                        sVar14 = (long)ppvStack_70 - (long)(ppvVar2 + 1);
                        pvVar11 = (void *)((long)ppvStack_70 - sVar14);
                        ppvStack_70 = ppvVar12;
                        _memmove(pvVar11,ppvVar2,sVar14);
                        ppvVar12 = ppvStack_70;
                      }
                      ppvStack_70 = ppvVar12;
                      *ppvVar2 = (&local_b0)[&local_b0 < ppvStack_70 && ppvVar2 <= &local_b0];
                    }
                  }
                  else {
                    uVar20 = ((long)ppvStack_70 - (long)local_78 >> 3) + 1;
                    if (0x1fffffffffffffff < uVar20) {
                      FUN_1002c2cdc(&local_78);
LAB_1002e1003:
                    /* WARNING: Does not return */
                      pcVar4 = (code *)invalidInstructionException();
                      (*pcVar4)();
                    }
                    uVar19 = (long)local_68[0] - (long)local_78 >> 2;
                    if (uVar19 <= uVar20) {
                      uVar19 = uVar20;
                    }
                    if (0x7ffffffffffffff7 < (ulong)((long)local_68[0] - (long)local_78)) {
                      uVar19 = 0x1fffffffffffffff;
                    }
                    if (uVar19 == 0) {
                      auVar27 = ZEXT816(0);
                    }
                    else {
                      auVar27 = FUN_100249b6c(local_68);
                    }
                    pvVar11 = auVar27._0_8_;
                    plVar24 = (long *)((long)pvVar11 + lVar18 * 8);
                    ppvVar12 = (void **)((long)pvVar11 + auVar27._8_8_ * 8);
                    if (auVar27._8_8_ == lVar18) {
                      if ((int)uVar15 < 1) {
                        uVar20 = lVar18 * 2;
                        if (uVar15 == 0) {
                          uVar20 = 1;
                        }
                        local_88 = pvVar11;
                        auVar27 = FUN_100249b6c(local_68,uVar20);
                        plVar24 = (long *)(auVar27._0_8_ + (uVar20 & 0xfffffffffffffffc) * 2);
                        ppvVar12 = (void **)(auVar27._0_8_ + auVar27._8_8_ * 8);
                        if (local_88 != (void *)0x0) {
                          operator_delete(local_88);
                        }
                      }
                      else {
                        plVar24 = (long *)((long)plVar24 - (lVar18 * 4 + 4U & 0xfffffffffffffff8));
                      }
                    }
                    *plVar24 = (long)local_b0;
                    _memcpy(plVar24 + 1,ppvVar2,(long)ppvStack_70 - (long)ppvVar2);
                    ppvVar17 = (void **)((long)plVar24 + (long)ppvStack_70 + (8 - (long)ppvVar2));
                    ppvVar22 = (void **)((long)plVar24 - ((long)ppvVar2 - (long)local_78));
                    ppvStack_70 = ppvVar2;
                    _memcpy(ppvVar22,local_78,(long)ppvVar2 - (long)local_78);
                    ppvVar2 = local_78;
                    bVar26 = local_78 != (void **)0x0;
                    local_78 = ppvVar22;
                    ppvStack_70 = ppvVar17;
                    local_68[0] = ppvVar12;
                    if (bVar26) {
                      operator_delete(ppvVar2);
                    }
                  }
                }
                (**(code **)(local_80 + 0x18))(local_b0,iVar8);
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 != lVar16 + (ulong)(lVar16 == 0));
          }
        }
      }
    }
  }
  if (local_a8 != (void **)0x0) {
    ppvStack_a0 = local_a8;
    operator_delete(local_a8);
  }
  if (local_78 != (void **)0x0) {
    ppvStack_70 = local_78;
    operator_delete(local_78);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

