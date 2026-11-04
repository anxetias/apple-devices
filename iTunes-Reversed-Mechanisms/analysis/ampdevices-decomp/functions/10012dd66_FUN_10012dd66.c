// name: FUN_10012dd66
// address: 10012dd66

void FUN_10012dd66(long param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  size_t sVar10;
  long extraout_RDX;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  undefined1 auVar19 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [8];
  undefined8 local_f8;
  long *plStack_f0;
  long local_e0;
  long *local_d8;
  long local_d0;
  undefined8 *local_c8;
  undefined8 *puStack_c0;
  undefined8 local_b8;
  undefined8 *local_a8;
  undefined8 *puStack_a0;
  undefined8 local_98;
  undefined *local_90;
  long *local_88;
  long *plStack_80;
  long *local_78;
  long *local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long *local_58;
  long *local_50;
  long **local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_d0 = param_1 + 0x48;
  local_70 = (long *)param_1;
  std::mutex::lock();
  local_78 = (long *)0x0;
  local_88 = (long *)0x0;
  plStack_80 = (long *)0x0;
  local_b8 = 0;
  local_c8 = (undefined8 *)0x0;
  puStack_c0 = (undefined8 *)0x0;
  local_98 = 0;
  local_a8 = (undefined8 *)0x0;
  puStack_a0 = (undefined8 *)0x0;
  uVar5 = FUN_10012d63e();
  cVar4 = _os_log_type_enabled(uVar5,1);
  local_90 = (undefined *)CONCAT44(local_90._4_4_,param_2);
  if (param_2 == 2) {
    if (cVar4 != '\0') {
      uVar6 = FUN_100157527(2);
      local_68._0_4_ = 0x8200102;
      local_68._4_4_ = (undefined4)uVar6;
      uStack_60 = (undefined4)((ulong)uVar6 >> 0x20);
      __os_log_impl(0x100000000,uVar5,1,
                    "Cancelling all requests with reason %s, except those marked non-cancellable.",
                    &local_68,0xc);
    }
    puVar9 = *(undefined8 **)((long)local_70 + 0x30);
    if (puVar9 != (undefined8 *)0x0) {
      local_90 = (undefined *)((long)local_70 + 0x20);
      do {
        cVar4 = (**(code **)(*(long *)puVar9[3] + 0xb0))();
        if (cVar4 == '\0') {
          puVar9 = (undefined8 *)*puVar9;
        }
        else {
          plVar14 = puVar9 + 3;
          FUN_1001444f2(*plVar14,2);
          if (*(char *)(puVar9 + 9) == '\0') {
            *(undefined1 *)(puVar9 + 9) = 1;
            if (puVar9[7] == 0) {
              if (puVar9[5] != 0) {
                FUN_100130352(&local_a8,puVar9 + 5);
              }
            }
            else {
              FUN_100130352(&local_c8,puVar9 + 7);
            }
          }
          if (plStack_80 < local_78) {
            lVar17 = puVar9[4];
            *plStack_80 = *plVar14;
            plStack_80[1] = lVar17;
            *plVar14 = 0;
            puVar9[4] = 0;
            plVar16 = plStack_80 + 2;
          }
          else {
            sVar10 = (long)plStack_80 - (long)local_88;
            lVar17 = (long)sVar10 >> 4;
            uVar1 = lVar17 + 1;
            if (0xfffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
              FUN_10012c430(&local_88);
            }
            uVar7 = (long)local_78 - (long)local_88 >> 3;
            if (uVar7 <= uVar1) {
              uVar7 = uVar1;
            }
            if (0x7fffffffffffffef < (ulong)((long)local_78 - (long)local_88)) {
              uVar7 = 0xfffffffffffffff;
            }
            local_48 = &local_78;
            if (uVar7 == 0) {
              auVar19 = ZEXT816(0);
              lVar11 = lVar17;
            }
            else {
              auVar19 = FUN_1001308fa(&local_78,uVar7);
              sVar10 = (long)plStack_80 - (long)local_88;
              lVar11 = (long)sVar10 >> 4;
            }
            lVar8 = auVar19._0_8_;
            local_50 = (long *)(auVar19._8_8_ * 0x10 + lVar8);
            lVar2 = puVar9[4];
            plVar15 = (long *)(lVar17 * 0x10 + lVar8);
            plVar16 = plVar15 + 2;
            *plVar15 = *plVar14;
            plVar15[1] = lVar2;
            *plVar14 = 0;
            puVar9[4] = 0;
            plVar15 = (long *)(lVar8 + lVar17 * 0x10 + lVar11 * -0x10);
            _memcpy(plVar15,local_88,sVar10);
            plVar14 = local_78;
            uStack_60 = SUB84(local_88,0);
            uStack_5c = (undefined4)((ulong)local_88 >> 0x20);
            local_58 = local_88;
            local_78 = local_50;
            local_50 = plVar14;
            local_88 = plVar15;
            plStack_80 = plVar16;
            local_68._0_4_ = uStack_60;
            local_68._4_4_ = uStack_5c;
            FUN_100130928(&local_68);
          }
          lVar17 = *(long *)((long)local_70 + 0x98);
          lVar11 = *(long *)((long)local_70 + 0xa0);
          plStack_80 = plVar16;
          if (lVar17 == lVar11) {
LAB_10012dfff:
            if (lVar17 != lVar11) {
              FUN_10013088a(&local_68,lVar17 + 0x38,lVar11,lVar17);
              lVar17 = *(long *)((long)local_70 + 0xa0);
              while (lVar17 != extraout_RDX) {
                lVar17 = lVar17 + -0x38;
                FUN_10012ffcc(lVar17);
              }
              *(long *)((long)local_70 + 0xa0) = extraout_RDX;
            }
          }
          else {
            do {
              if (*(long *)(lVar17 + 0x30) == plVar16[-2]) goto LAB_10012dfff;
              lVar17 = lVar17 + 0x38;
            } while (lVar17 != lVar11);
          }
          puVar9 = (undefined8 *)FUN_10013218c(local_90,puVar9);
        }
      } while (puVar9 != (undefined8 *)0x0);
    }
    if (*(long *)((long)local_70 + 0x38) != 0) {
      uVar5 = FUN_10012d63e();
      cVar4 = _os_log_type_enabled(uVar5,1);
      if (cVar4 != '\0') {
        local_68._0_4_ = 0x8000100;
        local_68._4_4_ = (undefined4)*(undefined8 *)((long)local_70 + 0x38);
        uStack_60 = (undefined4)((ulong)*(undefined8 *)((long)local_70 + 0x38) >> 0x20);
        __os_log_impl(0x100000000,uVar5,1,"Left %lu requests uncancelled.",&local_68,0xc);
      }
    }
  }
  else {
    if (cVar4 != '\0') {
      uVar6 = FUN_100157527(param_2);
      local_68._0_4_ = 0x8200102;
      local_68._4_4_ = (undefined4)uVar6;
      uStack_60 = (undefined4)((ulong)uVar6 >> 0x20);
      __os_log_impl(0x100000000,uVar5,1,"Cancelling all requests with reason %s.",&local_68,0xc);
    }
    plVar14 = *(long **)((long)local_70 + 0x30);
    if (plVar14 != (long *)0x0) {
      do {
        if ((char)plVar14[9] == '\0') {
          plVar16 = plVar14 + 3;
          FUN_1001444f2(*plVar16,(ulong)local_90 & 0xffffffff);
          *(undefined1 *)(plVar14 + 9) = 1;
          if (plVar14[7] == 0) {
            if (plVar14[5] != 0) {
              FUN_100130352(&local_a8,plVar14 + 5);
            }
          }
          else {
            FUN_100130352(&local_c8,plVar14 + 7);
          }
          if (plStack_80 < local_78) {
            lVar17 = plVar14[4];
            *plStack_80 = *plVar16;
            plStack_80[1] = lVar17;
            *plVar16 = 0;
            plVar14[4] = 0;
            plStack_80 = plStack_80 + 2;
          }
          else {
            sVar10 = (long)plStack_80 - (long)local_88;
            lVar17 = (long)sVar10 >> 4;
            uVar1 = lVar17 + 1;
            if (0xfffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
              FUN_10012c430(&local_88);
            }
            uVar7 = (long)local_78 - (long)local_88 >> 3;
            if (uVar7 <= uVar1) {
              uVar7 = uVar1;
            }
            if (0x7fffffffffffffef < (ulong)((long)local_78 - (long)local_88)) {
              uVar7 = 0xfffffffffffffff;
            }
            local_48 = &local_78;
            if (uVar7 == 0) {
              auVar19 = ZEXT816(0);
              lVar11 = lVar17;
            }
            else {
              auVar19 = FUN_1001308fa(&local_78,uVar7);
              sVar10 = (long)plStack_80 - (long)local_88;
              lVar11 = (long)sVar10 >> 4;
            }
            lVar8 = auVar19._0_8_;
            local_50 = (long *)(auVar19._8_8_ * 0x10 + lVar8);
            lVar2 = plVar14[4];
            plVar15 = (long *)(lVar17 * 0x10 + lVar8);
            *plVar15 = *plVar16;
            plVar15[1] = lVar2;
            *plVar16 = 0;
            plVar14[4] = 0;
            plVar18 = (long *)(lVar8 + lVar17 * 0x10 + lVar11 * -0x10);
            _memcpy(plVar18,local_88,sVar10);
            plVar16 = local_78;
            uStack_60 = SUB84(local_88,0);
            uStack_5c = (undefined4)((ulong)local_88 >> 0x20);
            local_58 = local_88;
            local_78 = local_50;
            local_50 = plVar16;
            local_88 = plVar18;
            plStack_80 = plVar15 + 2;
            local_68._0_4_ = uStack_60;
            local_68._4_4_ = uStack_5c;
            FUN_100130928(&local_68);
            plStack_80 = plVar15 + 2;
          }
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
    plVar14 = local_70;
    FUN_1001321d0((long)local_70 + 0x20);
    lVar17 = *(long *)((long)plVar14 + 0x98);
    lVar11 = *(long *)((long)plVar14 + 0xa0);
    while (lVar11 != lVar17) {
      lVar11 = lVar11 + -0x38;
      FUN_10012ffcc(lVar11);
    }
    *(long *)((long)local_70 + 0xa0) = lVar17;
  }
  std::mutex::unlock();
  puVar9 = puStack_c0;
  for (puVar12 = local_c8; puVar3 = puStack_a0, puVar13 = local_a8, puVar12 != puVar9;
      puVar12 = puVar12 + 2) {
    (**(code **)(*(long *)*puVar12 + 0x10))();
  }
  for (; puVar13 != puVar3; puVar13 = puVar13 + 2) {
    (**(code **)(*(long *)*puVar13 + 0x10))();
  }
  local_70 = plStack_80;
  if (local_88 != plStack_80) {
    local_90 = PTR_s_com_apple_iTunes_errors_store_re_10083b490;
    plVar14 = local_88;
    do {
      FUN_10014f388(&local_68,0x1db6);
      lVar17 = *plVar14;
      local_d8 = (long *)plVar14[1];
      if (local_d8 != (long *)0x0) {
        LOCK();
        local_d8[1] = local_d8[1] + 1;
        UNLOCK();
      }
      local_e0 = lVar17;
      FUN_1001b7b04(local_110,local_90);
      FUN_1001aa564(local_100,local_110,0x1d51,&local_68);
      local_f8 = 0;
      plStack_f0 = (long *)0x0;
      FUN_100144dfe(lVar17,&local_e0,local_100,&local_f8);
      if (plStack_f0 != (long *)0x0) {
        LOCK();
        plVar16 = plStack_f0 + 1;
        lVar17 = *plVar16;
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (lVar17 == 0) {
          (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
          std::__shared_weak_count::__release_weak();
        }
      }
      FUN_1001aaad2(local_100);
      FUN_1001b7a50(local_110);
      if (local_d8 != (long *)0x0) {
        LOCK();
        plVar16 = local_d8 + 1;
        lVar17 = *plVar16;
        *plVar16 = *plVar16 + -1;
        UNLOCK();
        if (lVar17 == 0) {
          (**(code **)(*local_d8 + 0x10))(local_d8);
          std::__shared_weak_count::__release_weak();
        }
      }
      FUN_1001a8fac(&local_68);
      plVar14 = plVar14 + 2;
    } while (plVar14 != local_70);
  }
  local_68 = &local_a8;
  FUN_100240464(&local_68);
  local_68 = &local_c8;
  FUN_100240464(&local_68);
  local_68 = &local_88;
  FUN_100240464(&local_68);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

