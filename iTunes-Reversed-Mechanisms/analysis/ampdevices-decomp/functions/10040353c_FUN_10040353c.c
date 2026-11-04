// name: FUN_10040353c
// address: 10040353c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10040353c(long param_1)

{
  ushort uVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  int *piVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  float fVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  long *local_4f8;
  long *local_4f0;
  long *local_4e8;
  long local_4e0;
  long local_4d8;
  long *plStack_4d0;
  long local_4c8;
  long *plStack_4c0;
  undefined4 local_4b8;
  char *local_4b4;
  undefined2 local_4ac;
  int local_4aa;
  undefined4 local_498;
  char *local_494;
  undefined2 local_48c;
  uint local_48a;
  undefined2 uStack_486;
  undefined2 uStack_484;
  undefined6 uStack_482;
  undefined1 local_46c [1076];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_4e8 = (long *)(param_1 + 8);
  plVar12 = *(long **)(param_1 + 0x10);
  local_4e0 = param_1;
  if (*(long **)(param_1 + 0x10) != local_4e8) {
    do {
      pvVar2 = (void *)plVar12[2];
      if (pvVar2 == (void *)0x0) {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 != '\0') {
          local_498 = 0x8220202;
          local_494 = "Assertion failure (expected to be not NULL)";
          local_48c = 0x822;
          local_48a = 0x7a4d97;
          uStack_486 = 1;
          uStack_484 = 0;
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_498,0x16);
        }
        cVar3 = FUN_1001782e9(0,0);
        plVar13 = plVar12;
        if (cVar3 != '\0') goto LAB_1004035b4;
      }
      else {
LAB_1004035b4:
        iVar4 = *(int *)((long)pvVar2 + 0xb7c);
        if (iVar4 == 1) {
          if (*(char *)((long)pvVar2 + 0xb80) == '\0') {
            lVar6 = FUN_10030252b((long)pvVar2 + 0x58);
            if (lVar6 == 0) {
              uVar5 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar5,0x10);
              if (cVar3 != '\0') {
                local_498 = 0x8220202;
                local_494 = "Assertion failure";
                local_48c = 0x822;
                local_48a = 0x7b8e77;
                uStack_486 = 1;
                uStack_484 = 0;
                __os_log_error_impl(0x100000000,uVar5,0x10);
              }
              FUN_1001782e9(0,0);
            }
            else if ((*(long *)(lVar6 + 8) == 0) ||
                    (lVar14 = *(long *)(*(long *)(lVar6 + 8) + 0x10), lVar14 == 0)) {
              uVar5 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar5,0x10);
              if (cVar3 != '\0') {
                local_498 = 0x8220202;
                local_494 = "Assertion failure";
                local_48c = 0x822;
                local_48a = 0x7b8da7;
                uStack_486 = 1;
                uStack_484 = 0;
                __os_log_error_impl(0x100000000,uVar5,0x10);
              }
              FUN_1001782e9(0,0);
            }
            else {
              iVar4 = FUN_100402da0(lVar6);
              if (iVar4 == 0) {
                uVar5 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar5,0x10);
                if (cVar3 != '\0') {
                  local_498 = 0x8220202;
                  local_494 = "Assertion failure";
                  local_48c = 0x822;
                  local_48a = 0x7cc06f;
                  uStack_486 = 1;
                  uStack_484 = 0;
                  __os_log_error_impl(0x100000000,uVar5,0x10);
                }
                FUN_1001782e9(0,0);
              }
              else {
                lVar6 = lVar14 + 0x2c20;
                FUN_10015a4db(lVar6);
                lVar7 = FUN_10015a687(lVar6,iVar4);
                if (lVar7 != 0) {
                  *(long *)(lVar14 + 0x2c00) = *(long *)(lVar14 + 0x2c00) - *(long *)(lVar7 + 0x6a8)
                  ;
                  fVar15 = (float)*(ulong *)(lVar7 + 0x488) * *(float *)((long)pvVar2 + 0xb78);
                  uVar10 = (ulong)fVar15;
                  uVar10 = (long)(fVar15 - _DAT_10070844c) & (long)uVar10 >> 0x3f | uVar10;
                  *(ulong *)(lVar7 + 0x6a8) = uVar10;
                  *(long *)(lVar14 + 0x2c00) = *(long *)(lVar14 + 0x2c00) + uVar10;
                }
                FUN_10015a525(lVar6);
                if (iVar4 == *(int *)(lVar14 + 0x2c50)) {
                  *(double *)(lVar14 + 0x2c68) = (double)*(float *)((long)pvVar2 + 0xb78);
                }
                lVar6 = *(long *)(lVar14 + 0x2bf0);
                if (lVar6 == 0) {
                  dVar16 = 0.0;
                }
                else {
                  lVar7 = *(long *)(lVar14 + 0x2c00) + *(long *)(lVar14 + 0x2bf8);
                  auVar17._8_4_ = (int)((ulong)lVar7 >> 0x20);
                  auVar17._0_8_ = lVar7;
                  auVar17._12_4_ = DAT_10070d3c0._4_4_;
                  auVar18._8_4_ = (int)((ulong)lVar6 >> 0x20);
                  auVar18._0_8_ = lVar6;
                  auVar18._12_4_ = DAT_10070d3c0._4_4_;
                  dVar16 = (((double)CONCAT44((undefined4)DAT_10070d3c0,(int)lVar7) - _DAT_10070d3d0
                            ) + (auVar17._8_8_ - _UNK_10070d3d8)) /
                           (((double)CONCAT44((undefined4)DAT_10070d3c0,(int)lVar6) - _DAT_10070d3d0
                            ) + (auVar18._8_8_ - _UNK_10070d3d8));
                }
                *(double *)(lVar14 + 0x2c70) = dVar16;
                *(byte *)(lVar14 + 0x2be2) = *(byte *)(lVar14 + 0x2be2) | 4;
              }
            }
          }
          plVar13 = (long *)plVar12[1];
        }
        else {
          if (*(char *)((long)pvVar2 + 0xb80) == '\0') {
            if ((iVar4 == 0) && (*(char *)((long)pvVar2 + 0xadb) != '\0')) {
              local_4c8 = 0;
              plStack_4c0 = (long *)0x0;
              iVar4 = (**(code **)(**(long **)((long)pvVar2 + 0xb30) + 0x40))
                                (*(long **)((long)pvVar2 + 0xb30),&local_4c8);
              if ((iVar4 == 0) && (local_4c8 != 0)) {
                FUN_1001c62d9(&local_498,0x460);
                _memcpy(local_46c,(void *)((long)pvVar2 + 0x6b8),0x420);
                FUN_100241e40(&local_4f8,0x46494c45,&local_498,0,0,0);
                if (local_4f8 != (long *)0x0) {
                  local_4d8 = local_4c8;
                  plStack_4d0 = plStack_4c0;
                  if (plStack_4c0 != (long *)0x0) {
                    LOCK();
                    plStack_4c0[1] = plStack_4c0[1] + 1;
                    UNLOCK();
                  }
                  iVar4 = (**(code **)(*local_4f8 + 0x48))(local_4f8,0,&local_4d8);
                  if (plStack_4d0 != (long *)0x0) {
                    LOCK();
                    plVar13 = plStack_4d0 + 1;
                    lVar6 = *plVar13;
                    *plVar13 = *plVar13 + -1;
                    UNLOCK();
                    if (lVar6 == 0) {
                      (**(code **)(*plStack_4d0 + 0x10))(plStack_4d0);
                      std::__shared_weak_count::__release_weak();
                    }
                  }
                  if ((iVar4 != -0x80) && (iVar4 != 0)) {
                    uVar5 = FUN_1001cc310();
                    cVar3 = _os_log_type_enabled(uVar5,0x10);
                    if (cVar3 != '\0') {
                      local_4b8 = 0x8220202;
                      local_4b4 = "Assertion failure";
                      local_4ac = 0x400;
                      local_4aa = iVar4;
                      __os_log_error_impl(0x100000000,uVar5,0x10);
                    }
                  }
                }
                if (local_4f0 != (long *)0x0) {
                  LOCK();
                  plVar13 = local_4f0 + 1;
                  lVar6 = *plVar13;
                  *plVar13 = *plVar13 + -1;
                  UNLOCK();
                  if (lVar6 == 0) {
                    (**(code **)(*local_4f0 + 0x10))(local_4f0);
                    std::__shared_weak_count::__release_weak();
                  }
                }
              }
              if (plStack_4c0 != (long *)0x0) {
                LOCK();
                plVar13 = plStack_4c0 + 1;
                lVar6 = *plVar13;
                *plVar13 = *plVar13 + -1;
                UNLOCK();
                if (lVar6 == 0) {
                  (**(code **)(*plStack_4c0 + 0x10))(plStack_4c0);
                  std::__shared_weak_count::__release_weak();
                }
              }
              iVar4 = *(int *)((long)pvVar2 + 0xb7c);
            }
            if (iVar4 != -0x80) {
              if (iVar4 == 0) {
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                uVar5 = DAT_1008c75b8;
                cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
                if (cVar3 != '\0') {
                  pcVar8 = (char *)FUN_1001b83ae((long)pvVar2 + 0x88);
                  uVar1 = *(ushort *)((long)pvVar2 + 0xad8);
                  dVar16 = (double)FUN_1001ebd46();
                  dVar16 = dVar16 - *(double *)((long)pvVar2 + 0xb88);
                  local_498 = 0x8220302;
                  local_48a = (uint)uVar1;
                  uStack_486 = 0x800;
                  uStack_484 = SUB82(dVar16,0);
                  uStack_482 = (undefined6)((ulong)dVar16 >> 0x10);
                  uVar11 = 1;
                  local_494 = pcVar8;
LAB_10040398c:
                  local_48c = 0x400;
                  __os_log_impl(0x100000000,uVar5,uVar11);
                }
              }
              else {
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                uVar5 = DAT_1008c75b8;
                cVar3 = _os_log_type_enabled(DAT_1008c75b8,0x10);
                if (cVar3 != '\0') {
                  local_494 = (char *)FUN_1001b83ae((long)pvVar2 + 0x88);
                  local_48a = *(uint *)((long)pvVar2 + 0xb7c);
                  local_498 = 0x8220202;
                  uVar11 = 0x10;
                  goto LAB_10040398c;
                }
              }
            }
            lVar6 = FUN_10030252b((long)pvVar2 + 0x58);
            if (lVar6 == 0) {
              uVar5 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar5,0x10);
              if (cVar3 != '\0') {
                local_498 = 0x8220202;
                local_494 = "Assertion failure";
                local_48c = 0x822;
                local_48a = 0x7b8e77;
                uStack_486 = 1;
                uStack_484 = 0;
                __os_log_error_impl(0x100000000,uVar5,0x10);
              }
              FUN_1001782e9(0,0);
            }
            else if ((*(long *)(lVar6 + 8) == 0) ||
                    (lVar14 = *(long *)(*(long *)(lVar6 + 8) + 0x10), lVar14 == 0)) {
              uVar5 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar5,0x10);
              if (cVar3 != '\0') {
                local_498 = 0x8220202;
                local_494 = "Assertion failure";
                local_48c = 0x822;
                local_48a = 0x7b8da7;
                uStack_486 = 1;
                uStack_484 = 0;
                __os_log_error_impl(0x100000000,uVar5,0x10);
              }
              FUN_1001782e9(0,0);
            }
            else {
              iVar4 = FUN_100402da0(lVar6);
              if (iVar4 == 0) {
                uVar5 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar5,0x10);
                if (cVar3 != '\0') {
                  local_498 = 0x8220202;
                  local_494 = "Assertion failure";
                  local_48c = 0x822;
                  local_48a = 0x7cc06f;
                  uStack_486 = 1;
                  uStack_484 = 0;
                  __os_log_error_impl(0x100000000,uVar5,0x10);
                }
                FUN_1001782e9(0,0);
              }
              else {
                lVar14 = lVar14 + 0x2c20;
                FUN_10015a4db(lVar14);
                piVar9 = (int *)FUN_10015a687(lVar14,iVar4);
                if (piVar9 != (int *)0x0) {
                  if (*piVar9 != 0) {
                    uVar5 = FUN_1001cc310();
                    cVar3 = _os_log_type_enabled(uVar5,0x10);
                    if (cVar3 != '\0') {
                      local_498 = 0x8220202;
                      local_494 = "Assertion failure";
                      local_48c = 0x822;
                      local_48a = 0x7cbff7;
                      uStack_486 = 1;
                      uStack_484 = 0;
                      __os_log_error_impl(0x100000000,uVar5,0x10);
                    }
                    FUN_1001782e9(0,0);
                  }
                  if ((*(byte *)(piVar9 + 1) & 1) == 0) {
                    uVar5 = FUN_1001cc310();
                    cVar3 = _os_log_type_enabled(uVar5,0x10);
                    if (cVar3 != '\0') {
                      local_498 = 0x8220202;
                      local_494 = "Assertion failure";
                      local_48c = 0x822;
                      local_48a = 0x7cc0d2;
                      uStack_486 = 1;
                      uStack_484 = 0;
                      __os_log_error_impl(0x100000000,uVar5,0x10);
                    }
                    FUN_1001782e9(0,0);
                  }
                  if (piVar9[0x1a9] != 1) {
                    uVar5 = FUN_1001cc310();
                    cVar3 = _os_log_type_enabled(uVar5,0x10);
                    if (cVar3 != '\0') {
                      local_498 = 0x8220202;
                      local_494 = "Assertion failure";
                      local_48c = 0x822;
                      local_48a = 0x7cc110;
                      uStack_486 = 1;
                      uStack_484 = 0;
                      __os_log_error_impl(0x100000000,uVar5,0x10);
                    }
                    FUN_1001782e9(0,0);
                  }
                  iVar4 = *(int *)((long)pvVar2 + 0xb7c);
                  if (iVar4 != -0x80) {
                    if (iVar4 == 0) {
                      _memcpy(piVar9 + 0x1ac,(void *)((long)pvVar2 + 0x6b8),0x420);
                      iVar4 = 0;
                    }
                    else {
                      iVar4 = 0x234b;
                    }
                  }
                  piVar9[0x1a9] = iVar4;
                }
                FUN_10015a525(lVar14);
              }
            }
          }
          lVar6 = *plVar12;
          plVar13 = (long *)plVar12[1];
          *(long **)(lVar6 + 8) = plVar13;
          *plVar13 = lVar6;
          *(long *)(local_4e0 + 0x18) = *(long *)(local_4e0 + 0x18) + -1;
          operator_delete(plVar12);
          FUN_10040301e(pvVar2);
          operator_delete(pvVar2);
        }
      }
      plVar12 = plVar13;
    } while (plVar13 != local_4e8);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

