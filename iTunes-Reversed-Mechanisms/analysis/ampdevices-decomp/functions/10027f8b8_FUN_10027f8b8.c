// name: FUN_10027f8b8
// address: 10027f8b8

/* WARNING: Type propagation algorithm not settling */

void FUN_10027f8b8(long param_1,code ****param_2,long *param_3)

{
  code ****ppppcVar1;
  undefined4 *puVar2;
  code ***pppcVar3;
  void ****ppppvVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  void ****ppppvVar16;
  code ***pppcVar17;
  void ****ppppvVar18;
  void ****ppppvVar19;
  code ***pppcVar20;
  void ****ppppvVar21;
  undefined1 auVar22 [16];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 *local_198;
  undefined8 local_190;
  code *local_188;
  code *local_180;
  char *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  code ***local_160;
  code ***local_158;
  void ****local_150;
  long local_148;
  long *local_140;
  undefined8 *local_138;
  long *local_130;
  void ***local_128;
  ulong uStack_120;
  ulong local_118;
  long local_108;
  void ****local_100;
  void ****local_f8;
  void ****ppppvStack_f0;
  void ****local_e8 [2];
  code ****local_d8;
  void *****pppppvStack_d0;
  void ****ppppvStack_c8;
  void ****local_c0;
  code ****ppppcStack_b8;
  undefined8 local_b0;
  long local_a8 [4];
  long *local_88;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined6 uStack_68;
  undefined2 local_62;
  uint local_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined6 uStack_56;
  char *local_50;
  undefined8 local_48;
  long *local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_198 = &local_1a0;
  local_1a0 = 0;
  local_190 = 0x4012000000;
  local_188 = FUN_10027ec7e;
  local_180 = FUN_10027ec8c;
  local_178 = "";
  local_170 = 0;
  uStack_168 = 0;
  local_e8[0] = (void ****)0x0;
  local_f8 = (void ****)0x0;
  ppppvStack_f0 = (void ****)0x0;
  local_118 = 0;
  local_128 = (void ***)0x0;
  uStack_120 = 0;
  local_140 = param_3;
  local_170 = _mach_approximate_time();
  ppppvVar18 = local_f8;
  local_108 = param_1;
  ppppvVar19 = ppppvStack_f0;
  if (*(long *)(param_1 + 0x38) == 0) {
    if (&local_f8 != (void *****)param_2) {
      ppppvVar21 = (void ****)*param_2;
      ppppvVar4 = (void ****)param_2[1];
      uVar15 = (long)ppppvVar4 - (long)ppppvVar21;
      if ((ulong)((long)local_e8[0] - (long)local_f8) < uVar15) {
        ppppvVar16 = (void ****)(((long)uVar15 >> 3) * -0x5555555555555555);
        if (local_f8 != (void ****)0x0) {
          while (local_100 = ppppvVar16, ppppvVar19 != ppppvVar18) {
            FUN_1001ab006(ppppvVar19 + -3);
            ppppvVar16 = local_100;
            ppppvVar19 = ppppvVar19 + -3;
          }
          ppppvStack_f0 = ppppvVar18;
          operator_delete(local_f8);
          local_f8 = (void ****)0x0;
          ppppvStack_f0 = (void ****)0x0;
          local_e8[0] = (void ****)0x0;
          ppppvVar16 = local_100;
        }
        if ((void ****)0xaaaaaaaaaaaaaaa < ppppvVar16) {
LAB_1002802b1:
                    /* WARNING: Subroutine does not return */
          FUN_100283ee2();
        }
        ppppvVar19 = (void ****)(((long)local_e8[0] >> 3) * 0x5555555555555556);
        if (ppppvVar16 < ppppvVar19) {
          ppppvVar16 = ppppvVar19;
        }
        if (0x555555555555554 < (ulong)(((long)local_e8[0] >> 3) * -0x5555555555555555)) {
          ppppvVar16 = (void ****)0xaaaaaaaaaaaaaaa;
        }
        if ((void ****)0xaaaaaaaaaaaaaaa < ppppvVar16) goto LAB_1002802b1;
        auVar22 = FUN_1002498f0();
        local_f8 = auVar22._0_8_;
        local_e8[0] = local_f8 + auVar22._8_8_ * 3;
        ppppvStack_f0 = local_f8;
        ppppvVar19 = (void ****)FUN_100284f52(ppppvVar21,ppppvVar4,local_f8);
      }
      else {
        local_100 = ppppvVar4;
        ppppvVar19 = local_f8;
        ppppvVar16 = ppppvStack_f0;
        if ((ulong)((long)ppppvStack_f0 - (long)local_f8) < uVar15) {
          ppppvVar18 = (void ****)((long)ppppvVar21 + ((long)ppppvStack_f0 - (long)local_f8));
          if (ppppvStack_f0 != local_f8) {
            do {
              FUN_1001a8c4a(ppppvVar19,ppppvVar21);
              uVar7 = *(undefined4 *)((long)ppppvVar21 + 0xc);
              uVar8 = *(undefined4 *)(ppppvVar21 + 2);
              uVar9 = *(undefined4 *)((long)ppppvVar21 + 0x14);
              *(undefined4 *)(ppppvVar19 + 1) = *(undefined4 *)(ppppvVar21 + 1);
              *(undefined4 *)((long)ppppvVar19 + 0xc) = uVar7;
              *(undefined4 *)(ppppvVar19 + 2) = uVar8;
              *(undefined4 *)((long)ppppvVar19 + 0x14) = uVar9;
              ppppvVar21 = ppppvVar21 + 3;
              ppppvVar19 = ppppvVar19 + 3;
            } while (ppppvVar21 != ppppvVar18);
          }
          ppppvVar19 = (void ****)FUN_100284f52(ppppvVar18,local_100,ppppvStack_f0);
        }
        else {
          for (; ppppvStack_f0 = ppppvVar16, ppppvVar21 != ppppvVar4; ppppvVar21 = ppppvVar21 + 3) {
            FUN_1001a8c4a(ppppvVar18,ppppvVar21);
            uVar7 = *(undefined4 *)((long)ppppvVar21 + 0xc);
            uVar8 = *(undefined4 *)(ppppvVar21 + 2);
            uVar9 = *(undefined4 *)((long)ppppvVar21 + 0x14);
            *(undefined4 *)(ppppvVar18 + 1) = *(undefined4 *)(ppppvVar21 + 1);
            *(undefined4 *)((long)ppppvVar18 + 0xc) = uVar7;
            *(undefined4 *)(ppppvVar18 + 2) = uVar8;
            *(undefined4 *)((long)ppppvVar18 + 0x14) = uVar9;
            ppppvVar18 = ppppvVar18 + 3;
            ppppvVar19 = ppppvVar19 + 3;
            ppppvVar16 = ppppvStack_f0;
          }
          while (param_1 = local_108, ppppvVar16 != ppppvVar18) {
            ppppvVar16 = ppppvVar16 + -3;
            FUN_1001ab006(ppppvVar16);
          }
        }
      }
    }
  }
  else {
    pppcVar17 = *param_2;
    pppcVar20 = param_2[1];
    pppcVar3 = pppcVar20;
    if (pppcVar17 != pppcVar20) {
      do {
        local_158 = pppcVar3;
        FUN_10028043c(&local_138,*(undefined8 *)(param_1 + 0x38),pppcVar17);
        ppppvVar19 = ppppvStack_f0;
        if (local_138 == (undefined8 *)0x0) {
          if (ppppvStack_f0 < local_e8[0]) {
            FUN_1001a8c1c(ppppvStack_f0,pppcVar17);
            uVar7 = *(undefined4 *)((long)pppcVar17 + 0xc);
            uVar8 = *(undefined4 *)(pppcVar17 + 2);
            uVar9 = *(undefined4 *)((long)pppcVar17 + 0x14);
            *(undefined4 *)(ppppvVar19 + 1) = *(undefined4 *)(pppcVar17 + 1);
            *(undefined4 *)((long)ppppvVar19 + 0xc) = uVar7;
            *(undefined4 *)(ppppvVar19 + 2) = uVar8;
            *(undefined4 *)((long)ppppvVar19 + 0x14) = uVar9;
            ppppvStack_f0 = ppppvVar19 + 3;
          }
          else {
            lVar14 = (long)ppppvStack_f0 - (long)local_f8 >> 3;
            uVar15 = lVar14 * -0x5555555555555555 + 1;
            if (0xaaaaaaaaaaaaaaa < uVar15) {
                    /* WARNING: Subroutine does not return */
              FUN_100283ee2();
            }
            lVar12 = (long)local_e8[0] - (long)local_f8 >> 3;
            uVar6 = lVar12 * 0x5555555555555556;
            if (uVar15 < uVar6) {
              uVar15 = uVar6;
            }
            if (0x555555555555554 < (ulong)(lVar12 * -0x5555555555555555)) {
              uVar15 = 0xaaaaaaaaaaaaaaa;
            }
            ppppcStack_b8 = (code ****)local_e8;
            if (uVar15 == 0) {
              auVar22 = ZEXT816(0);
            }
            else {
              auVar22 = FUN_1002498f0();
            }
            local_d8 = auVar22._0_8_;
            ppppvVar19 = local_d8 + lVar14;
            local_c0 = local_d8 + auVar22._8_8_ * 3;
            pppppvStack_d0 = ppppvVar19;
            ppppvStack_c8 = ppppvVar19;
            FUN_1001a8c1c(ppppvVar19,pppcVar17);
            ppppvVar21 = ppppvStack_f0;
            ppppvVar18 = local_f8;
            uVar7 = *(undefined4 *)((long)pppcVar17 + 0xc);
            uVar8 = *(undefined4 *)(pppcVar17 + 2);
            uVar9 = *(undefined4 *)((long)pppcVar17 + 0x14);
            *(undefined4 *)(ppppvVar19 + 1) = *(undefined4 *)(pppcVar17 + 1);
            *(undefined4 *)((long)ppppvVar19 + 0xc) = uVar7;
            *(undefined4 *)(ppppvVar19 + 2) = uVar8;
            *(undefined4 *)((long)ppppvVar19 + 0x14) = uVar9;
            local_100 = ppppvStack_c8 + 3;
            ppppvVar19 = (void ****)((long)pppppvStack_d0 - ((long)ppppvStack_f0 - (long)local_f8));
            if (ppppvStack_f0 != local_f8) {
              local_150 = pppppvStack_d0;
              local_148 = ((long)ppppvStack_f0 - (long)local_f8 >> 3) * 0x5555555555555555;
              lVar14 = 0;
              local_160 = pppcVar17;
              ppppvStack_c8 = local_100;
              do {
                lVar12 = (long)ppppvVar18 + lVar14;
                FUN_1001a8c1c((long)ppppvVar19 + lVar14,lVar12);
                uVar7 = *(undefined4 *)(lVar12 + 0xc);
                uVar8 = *(undefined4 *)(lVar12 + 0x10);
                uVar9 = *(undefined4 *)(lVar12 + 0x14);
                puVar2 = (undefined4 *)((long)ppppvVar19 + lVar14 + 8);
                *puVar2 = *(undefined4 *)(lVar12 + 8);
                puVar2[1] = uVar7;
                puVar2[2] = uVar8;
                puVar2[3] = uVar9;
                lVar14 = lVar14 + 0x18;
              } while ((void ****)(lVar12 + 0x18) != ppppvVar21);
              do {
                FUN_1001ab006(ppppvVar18);
                ppppvVar18 = ppppvVar18 + 3;
                pppcVar17 = local_160;
              } while (ppppvVar18 != ppppvVar21);
            }
            ppppvVar21 = local_e8[0];
            ppppvVar18 = local_100;
            param_1 = local_108;
            ppppvStack_f0 = local_100;
            local_e8[0] = local_c0;
            local_c0 = ppppvVar21;
            local_d8 = local_f8;
            local_f8 = ppppvVar19;
            pppppvStack_d0 = (void *****)local_d8;
            ppppvStack_c8 = local_d8;
            FUN_100284f12(&local_d8);
            pppcVar20 = local_158;
            ppppvStack_f0 = ppppvVar18;
          }
        }
        else {
          FUN_1001aa318(&local_d8);
          pppppvStack_d0 = *(void ******)PTR__CGSizeZero_10082e370;
          ppppvStack_c8 = *(void *****)(PTR__CGSizeZero_10082e370 + 8);
          local_c0 = (void ****)0x0;
          ppppcStack_b8 = (code ****)0x0;
          local_b0 = (char *)CONCAT35((int3)((ulong)local_b0 >> 0x28),0x200000000);
          FUN_1001a8c4a(&local_d8,pppcVar17);
          pppppvStack_d0 = (void *****)pppcVar17[1];
          ppppvStack_c8 = (void ****)pppcVar17[2];
          FUN_100203686(&local_c0,&local_138);
          local_b0._0_5_ = (uint5)(uint)local_b0;
          if (*(char *)(param_1 + 0x50) == '\x01') {
            if (DAT_1008c7568 != -1) {
              _dispatch_once(&DAT_1008c7568,&PTR___NSConcreteGlobalBlock_100855dc0);
            }
            uVar11 = (*(code *)PTR__objc_retain_10082c7b8)(DAT_1008c7560);
            cVar10 = _os_log_type_enabled(uVar11,2);
            if (cVar10 != '\0') {
              local_78._0_4_ = 0x8400402;
              local_78._4_4_ = SUB84(*pppcVar17,0);
              uStack_70 = (undefined4)((ulong)*pppcVar17 >> 0x20);
              uStack_6c = 0x800;
              uStack_6a = SUB82(local_c0,0);
              uStack_68 = (undefined6)((ulong)local_c0 >> 0x10);
              local_62 = 0x400;
              local_60 = (uint)local_b0._4_1_;
              uStack_5c = 0x400;
              uStack_5a = 0;
              uStack_58 = 0;
              __os_log_impl(0x100000000,uVar11,2,"memcache %@ %p -> %u,%d",&local_78,0x22);
            }
            (*(code *)PTR__objc_release_10082c7b0)(uVar11);
          }
          uVar15 = uStack_120;
          if (uStack_120 < local_118) {
            FUN_100284b52(&local_128,&local_d8);
            uStack_120 = uVar15 + 0x30;
          }
          else {
            uStack_120 = FUN_100284bc0(&local_128,&local_d8);
          }
          if (ppppcStack_b8 != (code ****)0x0) {
            LOCK();
            ppppcVar1 = ppppcStack_b8 + 1;
            pppcVar3 = *ppppcVar1;
            *ppppcVar1 = (code ***)((long)*ppppcVar1 + -1);
            UNLOCK();
            if (pppcVar3 == (code ***)0x0) {
              (*(code *)(*ppppcStack_b8)[2])(ppppcStack_b8);
              std::__shared_weak_count::__release_weak();
            }
          }
          FUN_1001ab006(&local_d8);
        }
        if (local_130 != (long *)0x0) {
          LOCK();
          plVar5 = local_130 + 1;
          lVar14 = *plVar5;
          *plVar5 = *plVar5 + -1;
          UNLOCK();
          if (lVar14 == 0) {
            (**(code **)(*local_130 + 0x10))(local_130);
            std::__shared_weak_count::__release_weak();
          }
        }
        pppcVar17 = pppcVar17 + 3;
        pppcVar3 = local_158;
        ppppvVar19 = ppppvStack_f0;
      } while (pppcVar17 != pppcVar20);
    }
  }
  ppppvStack_f0 = ppppvVar19;
  if (ppppvStack_f0 == local_f8) {
    local_d8 = (void ****)0x0;
    pppppvStack_d0 = (void *****)0x0;
    ppppvStack_c8 = (void ****)0x0;
    FUN_10038667e(param_1,0,&local_d8,&local_128,local_140,local_198 + 6);
    local_78 = &local_d8;
    FUN_10028504c();
    goto LAB_10028023c;
  }
  local_78._0_4_ = 0;
  local_78._4_4_ = 0;
  uStack_70 = SUB84(&local_78,0);
  uStack_6c = (undefined2)((ulong)&local_78 >> 0x20);
  uStack_6a = (undefined2)((ulong)&local_78 >> 0x30);
  uStack_68 = 0x4012000000;
  local_62 = 0;
  local_60 = 0x27ed2e;
  uStack_5c = 1;
  uStack_5a = 0;
  uStack_58 = 0xed43;
  uStack_56 = 0x10027;
  local_50 = "";
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_1002802a5:
                    /* WARNING: Subroutine does not return */
    FUN_10013bd04();
  }
  uVar11 = *(undefined8 *)(param_1 + 8);
  local_40 = (long *)std::__shared_weak_count::lock();
  if (local_40 == (long *)0x0) goto LAB_1002802a5;
  LOCK();
  local_40[2] = local_40[2] + 1;
  UNLOCK();
  LOCK();
  plVar5 = local_40 + 1;
  lVar14 = *plVar5;
  *plVar5 = *plVar5 + -1;
  UNLOCK();
  local_48 = uVar11;
  if (lVar14 == 0) {
    (**(code **)(*local_40 + 0x10))(local_40);
    std::__shared_weak_count::__release_weak();
  }
  lVar14 = local_108;
  pppppvStack_d0 = &local_d8;
  local_d8 = (void ****)0x0;
  ppppvStack_c8 = (void ****)0x6012000000;
  local_c0 = (void ****)FUN_1002807d2;
  ppppcStack_b8 = (code ****)FUN_10028081d;
  local_b0 = "";
  local_88 = local_a8;
  plVar5 = (long *)local_140[4];
  if (plVar5 == (long *)0x0) {
    local_88 = (long *)0x0;
  }
  else if (plVar5 == local_140) {
    (**(code **)(*plVar5 + 0x18))();
  }
  else {
    local_88 = (long *)(**(code **)(*plVar5 + 0x10))();
  }
  uVar11 = FUN_100384e9c(&local_f8);
  uVar13 = _objc_retainAutoreleasedReturnValue(uVar11);
  uVar11 = *(undefined8 *)(lVar14 + 0x28);
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  FUN_10028507e(&local_1b8,local_128,uStack_120,
                ((long)(uStack_120 - (long)local_128) >> 4) * -0x5555555555555555);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar11,PTR_s_fetchArtwork_withReply__10088c5f0,uVar13);
  local_138 = &local_1b8;
  FUN_1002851ec();
  (*(code *)PTR__objc_release_10082c7b0)(uVar13);
  __Block_object_dispose(&local_d8,8);
  if (local_88 == local_a8) {
    lVar14 = 0x20;
LAB_100280217:
    (**(code **)(*local_88 + lVar14))();
  }
  else {
    lVar14 = 0x28;
    if (local_88 != (long *)0x0) goto LAB_100280217;
  }
  __Block_object_dispose(&local_78,8);
  if (local_40 != (long *)0x0) {
    std::__shared_weak_count::__release_weak();
  }
LAB_10028023c:
  local_d8 = &local_128;
  FUN_1002851ec(&local_d8);
  local_d8 = (code ****)&local_f8;
  FUN_100285264(&local_d8);
  __Block_object_dispose(&local_1a0,8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

