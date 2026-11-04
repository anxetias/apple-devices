// name: FUN_1005f3e48
// address: 1005f3e48

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1005f3e48(uint param_1,undefined8 param_2,long param_3,double *param_4,undefined8 param_5,
                   undefined8 param_6,uint *param_7,uint param_8,uint param_9)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 local_5f8;
  undefined4 local_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  byte local_5cc [4];
  uint *local_5c8;
  char local_5bd;
  uint local_5bc;
  undefined4 local_5b8;
  char *local_5b4;
  undefined2 local_5ac;
  uint local_5aa;
  uint local_598;
  undefined4 local_594;
  undefined4 uStack_590;
  undefined2 uStack_58c;
  undefined2 uStack_58a;
  undefined1 uStack_588;
  undefined5 uStack_587;
  undefined2 uStack_582;
  undefined1 uStack_580;
  undefined8 uStack_57f;
  undefined8 local_574;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  undefined4 uStack_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined8 local_530;
  undefined4 uStack_528;
  uint uStack_524;
  undefined4 local_520;
  undefined4 uStack_51c;
  undefined4 local_518;
  undefined8 local_510;
  undefined8 uStack_508;
  double local_500;
  double dStack_4f8;
  double local_4f0;
  double dStack_4e8;
  double local_4e0;
  undefined2 local_4d8;
  undefined8 local_4d0;
  undefined6 uStack_4c8;
  undefined2 uStack_4c2;
  undefined6 uStack_4c0;
  undefined8 *local_4b8;
  undefined1 uStack_4b0;
  undefined7 uStack_4af;
  undefined1 uStack_4a8;
  undefined8 uStack_4a7;
  undefined1 local_498 [1120];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_5bc = 0;
  local_5d8 = param_5;
  if (param_7 == (uint *)0x0) {
    uVar8 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 != '\0') {
      local_598 = 0x8220202;
      local_594 = 0x7a0a90;
      uStack_590 = 1;
      uStack_58c = 0x822;
      uStack_58a = 0x1d5e;
      uStack_588 = 0x7a;
      uStack_587 = 0x100;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_598,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_1001c62d9(param_7,0x1980);
    *param_7 = param_1;
    if (param_4 != (double *)0x0) {
      if (((param_3 == 0) || (*(long *)(param_3 + 8) == 0)) ||
         (*(long *)(*(long *)(param_3 + 8) + 0x10) == 0)) {
        uVar8 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar8,0x10);
        if (cVar5 != '\0') {
          local_598 = 0x8220202;
          local_594 = 0x7a0a90;
          uStack_590 = 1;
          uStack_58c = 0x822;
          uStack_58a = 0x8d38;
          uStack_588 = 0x7b;
          uStack_587 = 0x100;
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_598,0x16);
        }
        FUN_1001782e9(0,0);
        uVar7 = 0xffffffe4;
        goto LAB_1005f4149;
      }
      FUN_100241e02(&local_598,param_3,2,0,0,&local_5bc);
      local_5c8 = param_7 + 0xc;
      FUN_100217418(local_5c8,&local_598);
      plVar1 = (long *)CONCAT26(uStack_58a,CONCAT24(uStack_58c,uStack_590));
      if (plVar1 != (long *)0x0) {
        LOCK();
        plVar2 = plVar1 + 1;
        lVar3 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar3 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (*(long *)local_5c8 == 0) {
        uVar8 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar8,0x10);
        if (cVar5 != '\0') {
          local_598 = 0x8220202;
          local_594 = 0x7a0a90;
          uStack_590 = 1;
          uStack_58c = 0x822;
          uStack_58a = 0x3277;
          uStack_588 = 0x7f;
          uStack_587 = 0x100;
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_598,0x16);
        }
        FUN_1001782e9(0x400,0);
      }
      else {
        iVar4 = *(int *)(param_3 + 0x3c);
        FUN_1002b3b9a(param_3,local_498);
        if ((iVar4 != 0x4d46494c) && (uVar7 = 0xffffffce, iVar4 != 0x46494c45)) goto LAB_1005f4149;
        local_5bc = 0;
        if ((param_1 & 0xd) == 0) {
          if ((param_1 & 2) != 0) {
            param_7[0x644] = 0;
            param_7[0x645] = 0;
            lVar3 = *(long *)(param_3 + 0xd0);
            *(long *)(param_7 + 0x646) = lVar3;
            if (lVar3 == 0) {
              if ((*(uint *)(param_3 + 100) == 0) || (*(float *)(param_3 + 0x50) <= 0.0)) {
                param_7[0x646] = 1;
                param_7[0x647] = 0;
              }
              else {
                dVar9 = (double)(*(float *)(param_3 + 0x50) * (float)*(uint *)(param_3 + 100)) /
                        _DAT_100708b48;
                auVar10._0_8_ = (double)(_DAT_100700b30 & (ulong)dVar9 | _DAT_1007563e0) + dVar9;
                auVar10._8_8_ = _UNK_1007563e8;
                auVar10 = roundsd(ZEXT816(0),auVar10,0xb);
                uVar7 = (ulong)auVar10._0_8_;
                *(ulong *)(param_7 + 0x646) =
                     (long)(auVar10._0_8_ - DAT_10070e4c0) & (long)uVar7 >> 0x3f | uVar7;
              }
            }
          }
LAB_1005f4656:
          param_7[0x648] = 1;
LAB_1005f4660:
          uVar7 = 0;
          goto LAB_1005f4149;
        }
        local_598 = 0;
        local_574 = 0;
        uStack_590 = 0;
        uStack_58c = 0;
        uStack_58a = 0;
        uStack_588 = 0;
        uStack_587 = 0;
        uStack_582 = 0;
        uStack_580 = 0;
        uStack_57f = 0;
        local_568 = 0;
        uStack_560 = 0;
        local_558 = 0;
        uStack_550 = 0;
        uStack_54c = 0;
        uStack_548 = 0;
        local_540 = 0;
        uStack_538 = 0;
        local_530 = 0;
        uStack_528 = 0;
        uStack_524 = 0;
        local_520 = 0;
        uStack_51c = 0;
        local_518 = 0;
        local_510 = 0;
        uStack_508 = 0;
        FUN_1001c62d9(&local_500,0x28);
        local_4d8 = 0;
        local_4d0 = 0;
        uStack_4c8 = 0;
        uStack_4c2 = 0;
        uStack_4c0 = 0;
        local_4b8 = (undefined8 *)0x0;
        uStack_4b0 = 0;
        uStack_4af = 0;
        uStack_4a8 = 0;
        uStack_4a7 = 0;
        uVar7 = (**(code **)(**(long **)local_5c8 + 0x150))(*(long **)local_5c8,4,local_5cc);
        local_5bc = (uint)uVar7;
        if ((local_5bc != 0) || (uVar7 = 0xffffff32, (local_5cc[0] & 4) == 0)) goto LAB_1005f4149;
        local_5bd = (param_1 & 8) == 0;
        FUN_10031bd9c(param_3,param_7 + 1);
        local_5f0 = 0;
        local_5f8 = 0;
        if (local_5bd == '\0') {
          local_4b8 = &local_5f8;
          local_5f8 = 0xffffffff;
        }
        local_598 = 0x43;
        if ((param_1 & 1) == 0) {
          if ((param_1 & 4) != 0) {
            local_598 = 0x100043;
          }
        }
        else {
          local_598 = 0x40043;
        }
        cVar5 = FUN_1001ee041();
        if (cVar5 != '\0') {
          local_598 = local_598 | 0xc000;
        }
        local_574 = CONCAT44(param_9,param_8);
        local_568 = 0;
        local_4e0 = param_4[4];
        local_500 = *param_4;
        dStack_4f8 = param_4[1];
        local_4f0 = param_4[2];
        dStack_4e8 = param_4[3];
        local_518 = 0;
        uStack_54c = (undefined4)*(undefined8 *)(param_3 + 0xe4);
        uStack_548 = (undefined4)((ulong)*(undefined8 *)(param_3 + 0xe4) >> 0x20);
        local_540 = *(undefined8 *)(param_3 + 0xd0);
        uStack_538 = *(undefined8 *)(param_3 + 0xd8);
        uStack_550 = *(undefined4 *)(param_3 + 0xe0);
        uStack_508 = CONCAT44(uStack_508._4_4_,(uint)*(ushort *)(param_3 + 0x54));
        uStack_560 = param_6;
        uVar6 = (**(code **)(**(long **)local_5c8 + 0xf0))();
        local_5bc = uVar6;
        if (uVar6 != 0xffffff80) {
          if (uVar6 == 0) {
            local_5e8 = *(undefined8 *)(param_7 + 0xc);
            uStack_5e0 = *(undefined8 *)(param_7 + 0xe);
            if (*(long *)(param_7 + 0xe) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)(param_7 + 0xe) + 8);
              *plVar1 = *plVar1 + 1;
              UNLOCK();
            }
            local_5bc = FUN_10046e5ec(param_7 + 0x10,&local_5e8,iVar4,local_498,&local_500,param_4,
                                      uStack_508._4_4_,(int)local_5d8,local_518,0);
            FUN_100235b24(&local_5e8);
            uVar6 = local_5bc;
            if (local_5bc != 0xffffff80) {
              if (local_5bc != 0) {
                uVar8 = FUN_1001cc310();
                cVar5 = _os_log_type_enabled(uVar8,0x10);
                if (cVar5 != '\0') {
                  local_5aa = uVar6;
                  uVar6 = local_5aa;
                  goto LAB_1005f4709;
                }
                goto LAB_1005f4734;
              }
              uVar6 = FUN_10015d88a(*(undefined4 *)((long)param_4 + 0x1c),
                                    (int)local_5d8 * *(int *)(param_4 + 3),param_7 + 0x640);
              local_5bc = uVar6;
              if (uVar6 != 0xffffff80) {
                if (uVar6 == 0) {
                  param_7[0x644] = 0;
                  param_7[0x645] = 0;
                  lVar3 = *(long *)(param_3 + 0xd0);
                  *(long *)(param_7 + 0x646) = lVar3;
                  if ((lVar3 == 0) &&
                     (*(long *)(param_7 + 0x646) = CONCAT44(uStack_51c,local_520),
                     CONCAT44(uStack_51c,local_520) == 0)) {
                    dVar9 = ((double)uStack_524 * *param_4) / _DAT_100708b48;
                    auVar11._0_8_ = (double)(_DAT_100700b30 & (ulong)dVar9 | _DAT_1007563e0) + dVar9
                    ;
                    auVar11._8_8_ = _UNK_1007563e8;
                    auVar10 = roundsd(ZEXT816(0),auVar11,0xb);
                    uVar7 = (ulong)auVar10._0_8_;
                    *(ulong *)(param_7 + 0x646) =
                         (long)(auVar10._0_8_ - DAT_10070e4c0) & (long)uVar7 >> 0x3f | uVar7;
                  }
                  if (param_9 != 0 || param_8 != 0) {
                    if (param_9 <= param_8) {
                      param_8 = param_9;
                    }
                    if (uStack_524 < param_9) {
                      param_9 = uStack_524;
                    }
                    dVar9 = ((double)(param_9 - param_8) * *param_4) / _DAT_100708b48;
                    auVar12._0_8_ = (double)(_DAT_100700b30 & (ulong)dVar9 | _DAT_1007563e0) + dVar9
                    ;
                    auVar12._8_8_ = _UNK_1007563e8;
                    auVar10 = roundsd(ZEXT816(0),auVar12,0xb);
                    uVar7 = (ulong)auVar10._0_8_;
                    *(ulong *)(param_7 + 0x646) =
                         (long)(auVar10._0_8_ - DAT_10070e4c0) & (long)uVar7 >> 0x3f | uVar7;
                  }
                  goto LAB_1005f4656;
                }
                uVar8 = FUN_1001cc310();
                cVar5 = _os_log_type_enabled(uVar8,0x10);
                goto joined_r0x0001005f467e;
              }
            }
          }
          else {
            uVar8 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar8,0x10);
joined_r0x0001005f467e:
            if (cVar5 != '\0') {
LAB_1005f4709:
              local_5aa = uVar6;
              local_5ac = 0x400;
              local_5b4 = "Assertion failure";
              local_5b8 = 0x8220202;
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_5b8,0x12);
            }
LAB_1005f4734:
            if (local_5bc == 0) goto LAB_1005f4660;
          }
        }
        FUN_1005f47a7(param_7);
      }
      uVar7 = (ulong)local_5bc;
      goto LAB_1005f4149;
    }
    uVar8 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar8,0x10);
    if (cVar5 != '\0') {
      local_598 = 0x8220202;
      local_594 = 0x7a0a90;
      uStack_590 = 1;
      uStack_58c = 0x822;
      uStack_58a = 0x325c;
      uStack_588 = 0x7f;
      uStack_587 = 0x100;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_598,0x16);
    }
    FUN_1001782e9(0,0);
  }
  uVar7 = 0xffffffce;
LAB_1005f4149:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

