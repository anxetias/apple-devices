// name: FUN_10057eea0
// address: 10057eea0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10057eea0(ulong param_1,ulong *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  void *pvVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  float fVar16;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar17 [16];
  ulong local_68;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar1 = (long *)(param_1 + 0x68);
  uVar2 = *param_2;
  lVar6 = FUN_1002b8060(plVar1,uVar2);
  if (lVar6 != 0) {
    if (*(char *)(lVar6 + 0x20) == '\0') {
      uVar7 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar7,0x10);
      if (cVar5 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "0";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      if (DAT_1008c7660 != -1) {
        _dispatch_once(&DAT_1008c7660,&PTR___NSConcreteGlobalBlock_1008575c0);
      }
      uVar7 = DAT_1008c7658;
      cVar5 = _os_log_type_enabled(DAT_1008c7658,0x10);
      if (cVar5 != '\0') {
        local_54 = (char *)*param_2;
        local_58 = 0x8000100;
        __os_log_impl(0x100000000,uVar7,0x10,
                      "**ERROR**: ch> TrackNewTrackInfo(%llx) new track\'s PIOD already exists in the changes map!"
                      ,&local_58,0xc);
      }
    }
    goto LAB_10057f383;
  }
  uVar13 = *(ulong *)(param_1 + 0x70);
  uVar8 = param_1;
  if (uVar13 != 0) {
    uVar8 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 >> 2 & 0x3333333333333333) + (uVar8 & 0x3333333333333333);
    uVar14 = ((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar14 >> 0x38 < 2) {
      uVar8 = uVar13 - 1 & uVar2;
    }
    else {
      uVar8 = uVar2;
      if (uVar13 <= uVar2) {
        uVar8 = uVar2 % uVar13;
      }
    }
    puVar3 = *(undefined8 **)(*plVar1 + uVar8 * 8);
    if ((puVar3 != (undefined8 *)0x0) && (plVar9 = (long *)*puVar3, plVar9 != (long *)0x0)) {
      do {
        uVar11 = plVar9[1];
        if (uVar11 == uVar2) {
          if (plVar9[2] == uVar2) goto LAB_10057f378;
        }
        else {
          if ((byte)(uVar14 >> 0x38) < 2) {
            uVar11 = uVar11 & uVar13 - 1;
          }
          else if (uVar13 <= uVar11) {
            uVar11 = uVar11 % uVar13;
          }
          if (uVar11 != uVar8) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  plVar9 = operator_new(0x28);
  *plVar9 = 0;
  plVar9[1] = uVar2;
  plVar9[2] = uVar2;
  plVar9[3] = 0;
  *(undefined1 *)(plVar9 + 4) = 0;
  auVar17._4_12_ = extraout_XMM0._4_12_;
  fVar16 = (float)(*(long *)(param_1 + 0x80) + 1);
  if ((uVar13 == 0) || ((float)uVar13 * *(float *)(param_1 + 0x88) < fVar16)) {
    uVar8 = 1;
    if (2 < uVar13) {
      uVar8 = (ulong)((uVar13 & uVar13 - 1) != 0);
    }
    uVar8 = uVar8 | uVar13 * 2;
    auVar17._0_4_ = fVar16 / *(float *)(param_1 + 0x88);
    auVar17 = roundss(auVar17,auVar17,10);
    uVar14 = (ulong)auVar17._0_4_;
    uVar14 = (long)(auVar17._0_4_ - _DAT_10070844c) & (long)uVar14 >> 0x3f | uVar14;
    if (uVar14 < uVar8) {
      uVar14 = uVar8;
    }
    local_68 = 2;
    uVar8 = uVar13;
    if ((uVar14 != 1) && (local_68 = uVar14, (uVar14 & uVar14 - 1) != 0)) {
      local_68 = std::__next_prime(uVar14);
      uVar8 = *(ulong *)(param_1 + 0x70);
    }
    uVar13 = local_68;
    if (uVar8 < local_68) {
LAB_10057f170:
      if (uVar13 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1001082d0();
      }
      pvVar10 = operator_new(uVar13 * 8);
      pvVar4 = (void *)*plVar1;
      *plVar1 = (long)pvVar10;
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
      }
      *(ulong *)(param_1 + 0x70) = uVar13;
      uVar8 = 0;
      do {
        *(undefined8 *)(*plVar1 + uVar8 * 8) = 0;
        uVar8 = uVar8 + 1;
      } while (uVar13 != uVar8);
      plVar12 = *(long **)(param_1 + 0x78);
      if (plVar12 != (long *)0x0) {
        uVar8 = plVar12[1];
        uVar14 = uVar13 - (uVar13 >> 1 & 0x5555555555555555);
        uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333);
        uVar14 = ((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
        if (uVar14 >> 0x38 < 2) {
          uVar8 = uVar8 & uVar13 - 1;
        }
        else if (uVar13 <= uVar8) {
          uVar8 = uVar8 % uVar13;
        }
        *(ulong *)(*plVar1 + uVar8 * 8) = param_1 + 0x78;
        plVar15 = (long *)*plVar12;
        if (plVar15 != (long *)0x0) {
          do {
            uVar11 = plVar15[1];
            if ((byte)(uVar14 >> 0x38) < 2) {
              uVar11 = uVar11 & uVar13 - 1;
            }
            else if (uVar13 <= uVar11) {
              uVar11 = uVar11 % uVar13;
            }
            if (uVar11 != uVar8) {
              if (*(long *)(*plVar1 + uVar11 * 8) == 0) {
                *(long **)(*plVar1 + uVar11 * 8) = plVar12;
                uVar8 = uVar11;
              }
              else {
                *plVar12 = *plVar15;
                *plVar15 = **(long **)(*plVar1 + uVar11 * 8);
                **(undefined8 **)(*plVar1 + uVar11 * 8) = plVar15;
                plVar15 = plVar12;
              }
            }
            plVar12 = plVar15;
            plVar15 = (long *)*plVar12;
          } while (plVar15 != (long *)0x0);
        }
      }
    }
    else {
      uVar13 = uVar8;
      if (local_68 < uVar8) {
        auVar17 = ZEXT416((uint)((float)*(ulong *)(param_1 + 0x80) / *(float *)(param_1 + 0x88)));
        auVar17 = roundss(auVar17,auVar17,10);
        uVar14 = (ulong)auVar17._0_4_;
        uVar14 = (long)(auVar17._0_4_ - _DAT_10070844c) & (long)uVar14 >> 0x3f | uVar14;
        if ((uVar8 < 3) ||
           (uVar13 = uVar8 - (uVar8 >> 1 & 0x5555555555555555),
           uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333),
           1 < (byte)(((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38))) {
          uVar13 = std::__next_prime(uVar14);
        }
        else {
          lVar6 = 0x3f;
          if (uVar14 - 1 != 0) {
            for (; uVar14 - 1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          uVar13 = 1L << (-((byte)lVar6 ^ 0x3f) & 0x3f);
          if (uVar14 < 2) {
            uVar13 = uVar14;
          }
        }
        if (uVar13 < local_68) {
          uVar13 = local_68;
        }
        if (uVar13 < uVar8) {
          if (uVar13 != 0) goto LAB_10057f170;
          pvVar4 = (void *)*plVar1;
          *plVar1 = 0;
          if (pvVar4 != (void *)0x0) {
            operator_delete(pvVar4);
          }
          *(undefined8 *)(param_1 + 0x70) = 0;
          uVar13 = 0;
        }
        else {
          uVar13 = *(ulong *)(param_1 + 0x70);
        }
      }
    }
    if ((uVar13 & uVar13 - 1) == 0) {
      uVar8 = uVar13 - 1 & uVar2;
    }
    else {
      uVar8 = uVar2;
      if (uVar13 <= uVar2) {
        uVar8 = uVar2 % uVar13;
      }
    }
  }
  lVar6 = *plVar1;
  plVar12 = *(long **)(lVar6 + uVar8 * 8);
  if (plVar12 == (long *)0x0) {
    *plVar9 = *(long *)(param_1 + 0x78);
    *(long **)(param_1 + 0x78) = plVar9;
    *(ulong *)(lVar6 + uVar8 * 8) = param_1 + 0x78;
    if (*plVar9 != 0) {
      uVar8 = *(ulong *)(*plVar9 + 8);
      if ((uVar13 & uVar13 - 1) == 0) {
        uVar8 = uVar8 & uVar13 - 1;
      }
      else if (uVar13 <= uVar8) {
        uVar8 = uVar8 % uVar13;
      }
      plVar12 = (long *)(uVar8 * 8 + *plVar1);
      goto LAB_10057f36a;
    }
  }
  else {
    *plVar9 = *plVar12;
LAB_10057f36a:
    *plVar12 = (long)plVar9;
  }
  *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 1;
LAB_10057f378:
  plVar9[3] = uVar2;
  *(undefined1 *)(plVar9 + 4) = 1;
LAB_10057f383:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

