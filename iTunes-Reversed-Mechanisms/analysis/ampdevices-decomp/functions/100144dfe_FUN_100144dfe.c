// name: FUN_100144dfe
// address: 100144dfe

void FUN_100144dfe(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  char *pcVar13;
  undefined1 local_158 [16];
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  long local_128;
  long *plStack_120;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [8];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  int local_d0 [2];
  undefined8 local_c8;
  long local_c0;
  char local_b8;
  undefined7 uStack_b7;
  long *local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined2 uStack_9c;
  undefined2 uStack_9a;
  undefined2 uStack_98;
  undefined2 local_96;
  int local_94;
  int local_90;
  byte local_8c;
  long *local_88;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined2 local_66;
  undefined4 local_64;
  int aiStack_60 [2];
  long *local_58;
  byte local_50;
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((long *)*param_2 != param_1) {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      FUN_10014a74e(uVar7);
    }
    FUN_1001782e9(0,1);
  }
  if (*param_3 == 0 && *param_4 == 0) {
    uVar7 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      FUN_10014a7c4(uVar7);
    }
    FUN_1001782e9(0,1);
  }
  FUN_1001a8c1c(&local_c0,param_3);
  if (*param_3 == 0) {
    uVar7 = FUN_100135270();
    cVar4 = _os_log_type_enabled(uVar7,0);
    if (cVar4 != '\0') {
      (**(code **)(*param_1 + 0xd0))(&local_a8,param_1);
      uVar8 = FUN_1001b83ae(&local_a8);
      local_78._0_4_ = 0x8220202;
      local_78._4_4_ = (undefined4)uVar8;
      uStack_70 = (undefined4)((ulong)uVar8 >> 0x20);
      uStack_6c = 0x400;
      uStack_6a = (undefined2)(int)param_1[0x31];
      uStack_68 = (undefined2)((uint)(int)param_1[0x31] >> 0x10);
      __os_log_impl(0x100000000,uVar7,0,"storereq> %{public}s(%d). Processing base response.",
                    &local_78,0x12);
      FUN_1001b7a50(&local_a8);
    }
    FUN_100151a88(local_f8,param_1[6]);
    cVar4 = (**(code **)(*param_1 + 0x58))(param_1);
    if ((cVar4 != '\0') && (cVar4 = (**(code **)*param_1)(param_1), cVar4 == '\0')) {
      FUN_100153ec0(&local_78,*param_4);
      FUN_100153edc(&local_a8,*param_4);
      FUN_1001526ec(local_f8,&local_78,&local_a8);
      FUN_1001ab3c4(&local_a8);
      FUN_1001a8fac(&local_78);
    }
    lVar12 = *param_4;
    FUN_1001b7b04(&local_a8,"X-Set-Apple-Store-Front");
    FUN_100153ef8(&local_78,lVar12,&local_a8);
    FUN_1001b7a50(&local_a8);
    cVar4 = FUN_1001b8428(&local_78);
    if (cVar4 == '\0') {
      FUN_10015261a(local_f8,&local_78);
    }
    FUN_1001b7a50(&local_78);
    FUN_100151afa(local_f8);
    lVar12 = param_1[0x2c];
    if (lVar12 != 0) {
      local_b8 = '\0';
      uVar7 = FUN_100153f30(*param_4);
      FUN_10013e2dc(lVar12,uVar7,&local_b8);
      if (local_b8 != '\x01') goto LAB_100145174;
      uVar7 = FUN_100135270();
      cVar4 = _os_log_type_enabled(uVar7,0);
      if (cVar4 != '\0') {
        (**(code **)(*param_1 + 0xd0))(&local_a8,param_1);
        uVar8 = FUN_1001b83ae(&local_a8);
        local_78._0_4_ = 0x8220202;
        local_78._4_4_ = (undefined4)uVar8;
        uStack_70 = (undefined4)((ulong)uVar8 >> 0x20);
        uStack_6c = 0x400;
        uStack_6a = (undefined2)(int)param_1[0x31];
        uStack_68 = (undefined2)((uint)(int)param_1[0x31] >> 0x10);
        __os_log_impl(0x100000000,uVar7,0,"storereq> %{public}s(%d). Retrying due to AuthKit.",
                      &local_78,0x12);
        FUN_1001b7a50(&local_a8);
      }
      FUN_10014105c(param_1);
LAB_100145163:
      FUN_100151a16(local_f8);
      goto LAB_100146bdb;
    }
LAB_100145174:
    uVar7 = FUN_100153ea0(*param_4);
    FUN_1001a7a9e(local_118,uVar7);
    lVar12 = *param_4;
    FUN_1001b7b04(&local_78,DAT_1008c4d28);
    FUN_100153ef8(local_108,lVar12,&local_78);
    FUN_1001b7a50(&local_78);
    cVar4 = FUN_1001b8428(local_108);
    if ((cVar4 == '\0') && (param_1[0x20] != 0)) {
      iVar6 = (**(code **)(*param_1 + 0x38))(param_1);
      if (iVar6 - 1U < 2) {
        cVar4 = FUN_10013bc02(param_1[0x20],local_108,local_118);
        if (cVar4 == '\0') {
          FUN_1001b7b04(&local_78,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
          FUN_1001b7b04(&local_a8,"mescalVerify failed.");
          FUN_1001b7a44(&local_b8);
          FUN_1001b7a44(local_48);
          FUN_1001aa318(local_e0);
          FUN_1001aaaac(local_f0,&local_78,0x1d56,&local_a8,&local_b8,local_48,local_e0);
          goto LAB_10014532f;
        }
LAB_1001452a9:
        FUN_1001aa318(local_f0);
      }
      else {
        if ((iVar6 != 3) || (cVar4 = FUN_10013bc78(param_1[0x20],local_108,0,0), cVar4 != '\0'))
        goto LAB_1001452a9;
        FUN_1001b7b04(&local_78,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
        FUN_1001b7b04(&local_a8,"verifyPrime failed.");
        FUN_1001b7a44(&local_b8);
        FUN_1001b7a44(local_48);
        FUN_1001aa318(local_e0);
        FUN_1001aaaac(local_f0,&local_78,0x1d56,&local_a8,&local_b8,local_48,local_e0);
LAB_10014532f:
        FUN_1001aaad2(local_e0);
        FUN_1001b7a50(local_48);
        FUN_1001b7a50(&local_b8);
        FUN_1001b7a50(&local_a8);
        FUN_1001b7a50(&local_78);
      }
      FUN_1001aaadc(&local_c0,local_f0);
      FUN_1001aaad2(local_f0);
    }
    if (local_c0 == 0) {
      uVar7 = FUN_100153ea0(*param_4);
      cVar4 = FUN_1001a85de(local_118,uVar7);
      if (cVar4 == '\0') {
        lVar12 = *param_4;
        FUN_1001a7a9e(local_158,local_118);
        FUN_100153eae(lVar12,local_158);
        FUN_1001a85d4(local_158);
      }
      cVar4 = FUN_10028b692();
      if (cVar4 != '\0') {
        if (*param_4 == 0) {
          uVar7 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar7,0x10);
          if (cVar4 != '\0') {
            FUN_10014a83a(uVar7);
          }
          FUN_1001782e9(0,1);
        }
        cVar4 = FUN_10028b692();
        if (cVar4 == '\0') {
          uVar7 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar7,0x10);
          if (cVar4 != '\0') {
            FUN_10014a8b0(uVar7);
          }
          FUN_1001782e9(0,1);
        }
        local_78._0_4_ = 0;
        FUN_1001b7a44();
        aiStack_60[0] = 0;
        FUN_1001aa318();
        local_50 = 0;
        aiStack_60[0] = 0;
        lVar12 = *param_4;
        FUN_1001b7b04(&local_b8,PTR_s_X_Apple_MD_Action_1008450b0);
        FUN_100153ef8(&local_a8,lVar12,&local_b8);
        FUN_1001b7a50(&local_b8);
        cVar4 = FUN_1001b8428(&local_a8);
        if (cVar4 != '\0') {
          aiStack_60[0] = 1;
          lVar12 = *param_4;
          FUN_1001b7b04(local_48,PTR_s_X_Apple_AMD_Action_1008450e8);
          FUN_100153ef8(&local_b8,lVar12,local_48);
          FUN_1001b80b2(&local_a8,&local_b8);
          FUN_1001b7a50(&local_b8);
          FUN_1001b7a50(local_48);
        }
        cVar4 = FUN_1001b8428(&local_a8);
        if (cVar4 == '\0') {
          if (((aiStack_60[0] == 0) &&
              (iVar6 = FUN_1001ba026(&local_a8,PTR_s_SP_1008450c0), iVar6 == 0)) ||
             ((aiStack_60[0] == 1 &&
              (iVar6 = FUN_1001ba026(&local_a8,PTR_s_SP_1008450f8), iVar6 == 0)))) {
            bVar5 = 1;
            if (aiStack_60[0] == 0) {
              bVar5 = FUN_100153f5a(*param_4);
              bVar5 = bVar5 ^ 1;
            }
            local_50 = bVar5;
            if (aiStack_60[0] == 0) {
              lVar12 = *param_4;
              FUN_1001b7b04(local_48,PTR_s_X_Apple_MD_Data_1008450b8);
              FUN_100153ef8(&local_b8,lVar12,local_48);
              FUN_1001b80b2(&local_a8,&local_b8);
LAB_10014571f:
              FUN_1001b7a50(&local_b8);
              FUN_1001b7a50(local_48);
            }
            else if (aiStack_60[0] == 1) {
              lVar12 = *param_4;
              FUN_1001b7b04(local_48,PTR_s_X_Apple_AMD_Data_1008450f0);
              FUN_100153ef8(&local_b8,lVar12,local_48);
              FUN_1001b80b2(&local_a8,&local_b8);
              goto LAB_10014571f;
            }
            cVar4 = FUN_1001b8428(&local_a8);
            if (cVar4 == '\0') {
              local_78._0_4_ = 1;
              FUN_1001b8172(&uStack_70,&local_a8);
              goto LAB_100145946;
            }
            FUN_1001b7b04(&local_b8,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
            FUN_1001b7b04(local_48,"No SPIM data.");
            FUN_1001b7a44(local_e0);
            FUN_1001b7a44(local_f0);
            FUN_1001aa318(local_d0);
            FUN_1001aaaac(&local_c8,&local_b8,0x1d57,local_48,local_e0,local_f0,local_d0);
            FUN_1001aaadc(&local_58,&local_c8);
          }
          else {
            if (((aiStack_60[0] != 0) ||
                (iVar6 = FUN_1001ba026(&local_a8,PTR_s_SM_1008450c8), iVar6 != 0)) &&
               ((aiStack_60[0] != 1 ||
                (iVar6 = FUN_1001ba026(&local_a8,PTR_s_SM_100845100), iVar6 != 0)))) {
              if (((aiStack_60[0] != 0) ||
                  (iVar6 = FUN_1001ba026(&local_a8,PTR_s_RP_1008450d0), iVar6 != 0)) &&
                 ((aiStack_60[0] != 1 ||
                  (iVar6 = FUN_1001ba026(&local_a8,PTR_s_RP_100845108), iVar6 != 0))))
              goto LAB_100145946;
              local_78._0_4_ = 3;
LAB_100145942:
              local_50 = 1;
              goto LAB_100145946;
            }
            if (aiStack_60[0] == 1) {
              lVar12 = *param_4;
              FUN_1001b7b04(local_48,PTR_s_X_Apple_AMD_Data_1008450f0);
              FUN_100153ef8(&local_b8,lVar12,local_48);
              FUN_1001b80b2(&local_a8,&local_b8);
LAB_100145830:
              FUN_1001b7a50(&local_b8);
              FUN_1001b7a50(local_48);
            }
            else if (aiStack_60[0] == 0) {
              lVar12 = *param_4;
              FUN_1001b7b04(local_48,PTR_s_X_Apple_MD_Data_1008450b8);
              FUN_100153ef8(&local_b8,lVar12,local_48);
              FUN_1001b80b2(&local_a8,&local_b8);
              goto LAB_100145830;
            }
            cVar4 = FUN_1001b8428(&local_a8);
            if (cVar4 == '\0') {
              local_78._0_4_ = 2;
              FUN_1001b8172(&uStack_70,&local_a8);
              goto LAB_100145942;
            }
            FUN_1001b7b04(&local_b8,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
            FUN_1001b7b04(local_48,"Invalid anisette header.");
            FUN_1001b7a44(local_e0);
            FUN_1001b7a44(local_f0);
            FUN_1001aa318(local_d0);
            FUN_1001aaaac(&local_c8,&local_b8,0x1d57,local_48,local_e0,local_f0,local_d0);
            FUN_1001aaadc(&local_58,&local_c8);
          }
          FUN_1001aaad2(&local_c8);
          FUN_1001aaad2(local_d0);
          FUN_1001b7a50(local_f0);
          FUN_1001b7a50(local_e0);
          FUN_1001b7a50(local_48);
          FUN_1001b7a50(&local_b8);
        }
LAB_100145946:
        FUN_1001b7a50(&local_a8);
        if ((local_58 == (long *)0x0) || (local_50 != 0)) {
          if ((int)local_78 == 3) {
            uVar7 = FUN_100135270();
            cVar4 = _os_log_type_enabled(uVar7,1);
            if (cVar4 != '\0') {
              (**(code **)(*param_1 + 0xd0))(&local_b8,param_1);
              uVar8 = FUN_1001b83ae(&local_b8);
              local_a8._0_4_ = 0x8220302;
              local_a8._4_4_ = (int)uVar8;
              uStack_a0 = (undefined4)((ulong)uVar8 >> 0x20);
              uStack_9c = 0x400;
              uStack_9a = (undefined2)(int)param_1[0x31];
              uStack_98 = (undefined2)((uint)(int)param_1[0x31] >> 0x10);
              local_96 = 0x400;
              local_94 = aiStack_60[0];
              __os_log_impl(0x100000000,uVar7,1,
                            "storereq> %{public}s(%d). Response included Anisette sync action, version (enum) %d."
                            ,&local_a8,0x18);
              FUN_1001b7a50(&local_b8);
            }
            if (aiStack_60[0] == 1) {
              FUN_10028b924();
            }
            else {
              FUN_10028b878(param_1[6]);
            }
            if (local_50 == 1) {
              uVar7 = FUN_100135270();
              cVar4 = _os_log_type_enabled(uVar7,0);
              if (cVar4 != '\0') {
                (**(code **)(*param_1 + 0xd0))(&local_b8,param_1);
                uVar8 = FUN_1001b83ae(&local_b8);
                local_a8._0_4_ = 0x8220202;
                local_a8._4_4_ = (int)uVar8;
                uStack_a0 = (undefined4)((ulong)uVar8 >> 0x20);
                uStack_9c = 0x400;
                uStack_9a = (undefined2)(int)param_1[0x31];
                uStack_98 = (undefined2)((uint)(int)param_1[0x31] >> 0x10);
                __os_log_impl(0x100000000,uVar7,0,
                              "storereq> %{public}s(%d). Retrying after Anisette remove.",&local_a8,
                              0x12);
                FUN_1001b7a50(&local_b8);
              }
              FUN_10014105c(param_1);
            }
          }
          else {
            if ((int)local_78 == 2) {
              uVar7 = FUN_100135270();
              cVar4 = _os_log_type_enabled(uVar7,1);
              if (cVar4 != '\0') {
                (**(code **)(*param_1 + 0xd0))(&local_b8,param_1);
                uVar8 = FUN_1001b83ae(&local_b8);
                local_a8._0_4_ = 0x8220302;
                local_a8._4_4_ = (int)uVar8;
                uStack_a0 = (undefined4)((ulong)uVar8 >> 0x20);
                uStack_9c = 0x400;
                uStack_9a = (undefined2)(int)param_1[0x31];
                uStack_98 = (undefined2)((uint)(int)param_1[0x31] >> 0x10);
                local_96 = 0x400;
                local_94 = aiStack_60[0];
                __os_log_impl(0x100000000,uVar7,1,
                              "storereq> %{public}s(%d). Response included Anisette sync action, version (enum) %d."
                              ,&local_a8,0x18);
                FUN_1001b7a50(&local_b8);
              }
              FUN_100149848(&local_b8,aiStack_60,&uStack_70);
              FUN_100144396(CONCAT71(uStack_b7,local_b8),param_1 + 8);
              if (param_1[3] != 0) {
                FUN_10013ef30(CONCAT71(uStack_b7,local_b8));
                FUN_10013ef70(CONCAT71(uStack_b7,local_b8),param_1 + 4);
              }
              lVar12 = *param_2;
              lVar11 = param_2[1];
              if (param_2[1] != 0) {
                LOCK();
                plVar1 = (long *)(param_2[1] + 8);
                *plVar1 = *plVar1 + 1;
                UNLOCK();
              }
              local_a8._0_4_ = 0x83ad50;
              local_a8._4_4_ = 1;
              uStack_a0 = (undefined4)lVar12;
              uStack_9c = (undefined2)((ulong)lVar12 >> 0x20);
              uStack_9a = (undefined2)((ulong)lVar12 >> 0x30);
              uStack_98 = (undefined2)lVar11;
              local_96 = (undefined2)((ulong)lVar11 >> 0x10);
              local_94 = (int)((ulong)lVar11 >> 0x20);
              local_90 = aiStack_60[0];
              local_8c = local_50;
              local_88 = &local_a8;
              FUN_10013a150(CONCAT71(uStack_b7,local_b8),&local_a8);
              if (local_88 == &local_a8) {
                lVar12 = 0x20;
LAB_100145d97:
                (**(code **)(*local_88 + lVar12))();
              }
              else {
                lVar12 = 0x28;
                if (local_88 != (long *)0x0) goto LAB_100145d97;
              }
              FUN_10014105c(CONCAT71(uStack_b7,local_b8));
            }
            else {
              if ((int)local_78 != 1) goto LAB_100145df1;
              uVar7 = FUN_100135270();
              cVar4 = _os_log_type_enabled(uVar7,1);
              if (cVar4 != '\0') {
                (**(code **)(*param_1 + 0xd0))(&local_b8,param_1);
                uVar8 = FUN_1001b83ae(&local_b8);
                local_a8._0_4_ = 0x8220302;
                local_a8._4_4_ = (int)uVar8;
                uStack_a0 = (undefined4)((ulong)uVar8 >> 0x20);
                uStack_9c = 0x400;
                uStack_9a = (undefined2)(int)param_1[0x31];
                uStack_98 = (undefined2)((uint)(int)param_1[0x31] >> 0x10);
                local_96 = 0x400;
                local_94 = aiStack_60[0];
                __os_log_impl(0x100000000,uVar7,1,
                              "storereq> %{public}s(%d). Response included Anisette provision action, version (enum) %d."
                              ,&local_a8,0x18);
                FUN_1001b7a50(&local_b8);
              }
              FUN_100149330(&local_b8,aiStack_60,&uStack_70);
              FUN_100144396(CONCAT71(uStack_b7,local_b8),param_1 + 8);
              if (param_1[3] != 0) {
                FUN_10013ef30(CONCAT71(uStack_b7,local_b8));
                FUN_10013ef70(CONCAT71(uStack_b7,local_b8),param_1 + 4);
              }
              lVar12 = *param_2;
              lVar11 = param_2[1];
              if (param_2[1] != 0) {
                LOCK();
                plVar1 = (long *)(param_2[1] + 8);
                *plVar1 = *plVar1 + 1;
                UNLOCK();
              }
              local_a8._0_4_ = 0x83ac80;
              local_a8._4_4_ = 1;
              uStack_a0 = (undefined4)lVar12;
              uStack_9c = (undefined2)((ulong)lVar12 >> 0x20);
              uStack_9a = (undefined2)((ulong)lVar12 >> 0x30);
              uStack_98 = (undefined2)lVar11;
              local_96 = (undefined2)((ulong)lVar11 >> 0x10);
              local_94 = (int)((ulong)lVar11 >> 0x20);
              local_90 = CONCAT31(local_90._1_3_,local_50);
              local_88 = &local_a8;
              FUN_100139d38(CONCAT71(uStack_b7,local_b8),&local_a8);
              if (local_88 == &local_a8) {
                lVar12 = 0x20;
LAB_100145db0:
                (**(code **)(*local_88 + lVar12))();
              }
              else {
                lVar12 = 0x28;
                if (local_88 != (long *)0x0) goto LAB_100145db0;
              }
              FUN_10014105c(CONCAT71(uStack_b7,local_b8));
            }
            if (local_b0 != (long *)0x0) {
              LOCK();
              plVar1 = local_b0 + 1;
              lVar12 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar12 == 0) {
                (**(code **)(*local_b0 + 0x10))(local_b0);
                std::__shared_weak_count::__release_weak();
              }
            }
          }
LAB_100145df1:
          if (local_50 != 0) {
            FUN_1001aaad2(&local_58);
            FUN_1001b7a50(&uStack_70);
            FUN_1001b7a50(local_108);
            FUN_1001a85d4(local_118);
            goto LAB_100145163;
          }
        }
        else {
          FUN_1001a8c4a(&local_c0,&local_58);
        }
        FUN_1001aaad2(&local_58);
        FUN_1001b7a50(&uStack_70);
      }
      if ((local_c0 != 0) || (cVar4 = FUN_100153e86(*param_4), cVar4 != '\0')) goto LAB_100145e52;
      FUN_1001b7b04(&local_78,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
      uVar7 = FUN_100153f22(*param_4);
      FUN_1001bb78a(&local_a8,"HTTP error %d.",uVar7);
      local_c8 = FUN_100153f22(*param_4);
      FUN_10014732e(local_f0,&local_c8,0);
      FUN_10014832a(local_48,&PTR_cf_HTTPStatus_10083a708,local_f0);
      FUN_1001a8f52(&local_b8,local_48,1);
      FUN_1001aa6a0(local_e0,&local_78,0x1d53,&local_a8,&local_b8);
      FUN_1001aaadc(&local_c0,local_e0);
      FUN_1001aaad2(local_e0);
      FUN_1001a8fac(&local_b8);
      FUN_1001ab240(local_40);
      FUN_1001ab240(local_48);
      FUN_1001aae6c(local_f0);
      FUN_1001b7a50(&local_a8);
      FUN_1001b7a50(&local_78);
      cVar4 = (**(code **)(*param_1 + 0x98))(param_1);
      if (cVar4 == '\0') goto LAB_1001466f9;
      FUN_1001aa318(&local_78);
      FUN_1001541ca(*param_4,&local_78);
LAB_1001466f0:
      FUN_1001aaad2(&local_78);
    }
    else {
LAB_100145e52:
      cVar4 = (**(code **)(*param_1 + 0x98))(param_1);
      if ((cVar4 != '\0') && (cVar4 = FUN_1001541ca(*param_4,&local_c0), cVar4 != '\0')) {
        if ((*param_4 == 0) || (cVar4 = FUN_100153f48(), cVar4 == '\0')) {
LAB_10014668f:
          FUN_1001aa318(&local_c8);
        }
        else {
          puVar9 = (undefined8 *)FUN_100153f3a(*param_4);
          FUN_1001a8d5a(&local_a8,*puVar9,1);
          FUN_1001aaf3c(&local_78,"status");
          iVar6 = FUN_10013cba0(&local_a8,&local_78,0);
          FUN_1001ab006(&local_78);
          local_d0[0] = iVar6;
          if (iVar6 == 0) {
            FUN_1001aaf3c(&local_78,"failureType");
            cVar4 = FUN_100148362(&local_a8,&local_78,local_d0);
            FUN_1001ab006(&local_78);
            if (cVar4 == '\0') {
              FUN_1001b7a44(&local_b8);
              FUN_1001aaf3c(&local_78,"failureType");
              cVar4 = FUN_1001483c8(&local_a8,&local_78,&local_b8);
              FUN_1001ab006(&local_78);
              if (cVar4 != '\0') {
                uVar7 = FUN_100135270();
                cVar4 = _os_log_type_enabled(uVar7,0x10);
                if (cVar4 != '\0') {
                  (**(code **)(*param_1 + 0xd0))(local_48,param_1);
                  uVar8 = FUN_1001b83ae(local_48);
                  local_78._0_4_ = 0x8220302;
                  local_78._4_4_ = (undefined4)uVar8;
                  uStack_70 = (undefined4)((ulong)uVar8 >> 0x20);
                  uStack_6c = 0x400;
                  uStack_6a = (undefined2)(int)param_1[0x31];
                  uStack_68 = (undefined2)((uint)(int)param_1[0x31] >> 0x10);
                  local_66 = 0x842;
                  local_64 = (undefined4)local_a8;
                  aiStack_60[0] = local_a8._4_4_;
                  __os_log_impl(0x100000000,uVar7,0x10,
                                "storereq> ***ERROR*** %{public}s(%d). %{public}@",&local_78,0x1c);
                  FUN_1001b7a50(local_48);
                }
                cVar4 = FUN_1001b8428(&local_b8);
                if (cVar4 != '\0') {
                  FUN_10014f388(&local_78,0x1db8);
                  FUN_1001b7b04(local_48,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
                  FUN_1001b7b04(local_e0,
                                "Response with empty \'failureType\' interpreted as cancellation.");
                  FUN_1001aa6a0(&local_c8,local_48,0x1d51,local_e0,&local_78);
                  FUN_1001b7a50(local_e0);
                  FUN_1001b7a50(local_48);
                  FUN_1001a8fac(&local_78);
                  pcVar13 = &local_b8;
                  goto LAB_1001465ca;
                }
                uVar7 = FUN_100135270();
                cVar4 = _os_log_type_enabled(uVar7,0x10);
                if (cVar4 != '\0') {
                  (**(code **)(*param_1 + 0xd0))(local_48,param_1);
                  uVar8 = FUN_1001b83ae(local_48);
                  lVar12 = param_1[0x31];
                  uVar10 = FUN_1001b83ae(&local_b8);
                  local_78._0_4_ = 0x8220302;
                  local_78._4_4_ = (undefined4)uVar8;
                  uStack_70 = (undefined4)((ulong)uVar8 >> 0x20);
                  uStack_6c = 0x400;
                  uStack_6a = (undefined2)(int)lVar12;
                  uStack_68 = (undefined2)((uint)(int)lVar12 >> 0x10);
                  local_66 = 0x822;
                  local_64 = (undefined4)uVar10;
                  aiStack_60[0] = (int)((ulong)uVar10 >> 0x20);
                  __os_log_impl(0x100000000,uVar7,0x10,
                                "storereq> ***ERROR*** %{public}s(%d). Response with unrecognized \'failureType\' \'%{public}s\'"
                                ,&local_78,0x1c);
                  FUN_1001b7a50(local_48);
                }
              }
              FUN_1001b7a50(&local_b8);
            }
            else {
              if ((((local_d0[0] == 0xbf3) || (local_d0[0] == 0x13f3)) ||
                  (cVar4 = FUN_100153f5a(*param_4), cVar4 == '\0')) ||
                 (cVar4 = (**(code **)(*param_1 + 0xa8))(param_1), cVar4 == '\0')) {
                uVar7 = FUN_100135270();
                cVar4 = _os_log_type_enabled(uVar7,0x10);
                if (cVar4 != '\0') {
                  (**(code **)(*param_1 + 0xd0))(&local_b8,param_1);
                  uVar8 = FUN_1001b83ae(&local_b8);
                  local_78._0_4_ = 0x8220302;
                  local_78._4_4_ = (undefined4)uVar8;
                  uStack_70 = (undefined4)((ulong)uVar8 >> 0x20);
                  uStack_6c = 0x400;
                  uStack_6a = (undefined2)(int)param_1[0x31];
                  uStack_68 = (undefined2)((uint)(int)param_1[0x31] >> 0x10);
                  local_66 = 0x842;
                  local_64 = (undefined4)local_a8;
                  aiStack_60[0] = local_a8._4_4_;
                  __os_log_impl(0x100000000,uVar7,0x10,
                                "storereq> ***ERROR*** %{public}s(%d). %{public}@",&local_78,0x1c);
                  FUN_1001b7a50(&local_b8);
                }
                FUN_1001b7b04(&local_78,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
                FUN_1001bb78a(&local_b8,"Server response failureType %d",local_d0[0]);
                FUN_1001aa38a(local_48,&DAT_1008c4de0,(long)local_d0[0]);
                FUN_1001aa836(&local_c8,&local_78,0x1d54,&local_b8,local_48);
                goto LAB_1001465b1;
              }
              cVar4 = FUN_100153f5a(*param_4);
              if (cVar4 != '\0') {
                uVar7 = FUN_100135270();
                cVar4 = _os_log_type_enabled(uVar7,0x10);
                if (cVar4 != '\0') {
                  (**(code **)(*param_1 + 0xd0))(&local_b8,param_1);
                  uVar8 = FUN_1001b83ae(&local_b8);
                  local_78._0_4_ = 0x8220302;
                  local_78._4_4_ = (undefined4)uVar8;
                  uStack_70 = (undefined4)((ulong)uVar8 >> 0x20);
                  uStack_6c = 0x400;
                  uStack_6a = (undefined2)(int)param_1[0x31];
                  uStack_68 = (undefined2)((uint)(int)param_1[0x31] >> 0x10);
                  local_66 = 0x842;
                  local_64 = (undefined4)local_a8;
                  aiStack_60[0] = local_a8._4_4_;
                  __os_log_impl(0x100000000,uVar7,0x10,
                                "storereq> ***ERROR*** %{public}s(%d). %{public}@",&local_78,0x1c);
                  FUN_1001b7a50(&local_b8);
                }
                FUN_10014f388(&local_78,0x1db7);
                FUN_1001aaef6(local_48,*(undefined8 *)PTR__kCFErrorUnderlyingErrorKey_10082e0a8);
                FUN_1001a7bac(&local_b8,local_48);
                FUN_1001aa38a(local_f0,&DAT_1008c4de0,(long)local_d0[0]);
                FUN_1001a7bac(local_e0,local_f0);
                FUN_1001a9a8a(&local_78,&local_b8,local_e0);
                FUN_1001ab240(local_e0);
                FUN_1001aaad2(local_f0);
                FUN_1001ab240(&local_b8);
                FUN_1001ab006(local_48);
                FUN_1001b7b04(&local_b8,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
                FUN_1001b7b04(local_48,
                              "Response with \'failureType\' and \'dialog\' interpreted as cancellation."
                             );
                FUN_1001aa6a0(&local_c8,&local_b8,0x1d51,local_48,&local_78);
                FUN_1001b7a50(local_48);
                FUN_1001b7a50(&local_b8);
                FUN_1001a8fac(&local_78);
                goto LAB_1001465cf;
              }
            }
            FUN_1001a8fac(&local_a8);
            goto LAB_10014668f;
          }
          uVar7 = FUN_100135270();
          cVar4 = _os_log_type_enabled(uVar7,0x10);
          if (cVar4 != '\0') {
            (**(code **)(*param_1 + 0xd0))(&local_b8,param_1);
            uVar8 = FUN_1001b83ae(&local_b8);
            local_78._0_4_ = 0x8220302;
            local_78._4_4_ = (undefined4)uVar8;
            uStack_70 = (undefined4)((ulong)uVar8 >> 0x20);
            uStack_6c = 0x400;
            uStack_6a = (undefined2)(int)param_1[0x31];
            uStack_68 = (undefined2)((uint)(int)param_1[0x31] >> 0x10);
            local_66 = 0x842;
            local_64 = (undefined4)local_a8;
            aiStack_60[0] = local_a8._4_4_;
            __os_log_impl(0x100000000,uVar7,0x10,"storereq> ***ERROR*** %{public}s(%d). %{public}@",
                          &local_78,0x1c);
            FUN_1001b7a50(&local_b8);
          }
          FUN_1001b7b04(&local_78,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
          FUN_1001bb78a(&local_b8,"Response \'status\' %d",local_d0[0]);
          FUN_1001aa38a(local_48,&DAT_1008c4de0,(long)local_d0[0]);
          FUN_1001aa836(&local_c8,&local_78,0x1d54,&local_b8,local_48);
LAB_1001465b1:
          FUN_1001aaad2(local_48);
          FUN_1001b7a50(&local_b8);
          pcVar13 = (char *)&local_78;
LAB_1001465ca:
          FUN_1001b7a50(pcVar13);
LAB_1001465cf:
          FUN_1001a8fac(&local_a8);
        }
        FUN_1001aaadc(&local_c0,&local_c8);
        FUN_1001aaad2(&local_c8);
        cVar4 = (**(code **)(*param_1 + 0xa0))(param_1);
        if (cVar4 != '\0') {
          FUN_100144b98(&local_78,param_1,&local_c0,param_4);
          FUN_1001aaadc(&local_c0,&local_78);
          goto LAB_1001466f0;
        }
      }
    }
LAB_1001466f9:
    if (local_c0 == 0) {
      cVar4 = FUN_10041520b();
      if (cVar4 != '\0') {
        lVar11 = FUN_100156d72();
        lVar12 = *(long *)(lVar11 + 0xb8);
        local_a8._0_4_ = (undefined4)lVar12;
        uVar3 = (undefined4)local_a8;
        local_a8._4_4_ = (int)((ulong)lVar12 >> 0x20);
        plVar1 = *(long **)(lVar11 + 0xc0);
        uStack_a0 = SUB84(plVar1,0);
        uStack_9c = (undefined2)((ulong)plVar1 >> 0x20);
        uStack_9a = (undefined2)((ulong)plVar1 >> 0x30);
        if (plVar1 != (long *)0x0) {
          LOCK();
          plVar1[1] = plVar1[1] + 1;
          UNLOCK();
        }
        if (lVar12 == 0) {
          FUN_100153ec0(&local_b8,*param_4);
          local_58 = (long *)0x0;
          FUN_10014ceba(&local_b8,&local_78);
          if (local_58 == &local_78) {
            lVar12 = 0x20;
LAB_100146c0e:
            (**(code **)(*local_58 + lVar12))();
          }
          else {
            lVar12 = 0x28;
            if (local_58 != (long *)0x0) goto LAB_100146c0e;
          }
          FUN_1001a8fac(&local_b8);
          if (plVar1 != (long *)0x0) {
            LOCK();
            plVar2 = plVar1 + 1;
            lVar12 = *plVar2;
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (lVar12 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
              std::__shared_weak_count::__release_weak();
            }
          }
        }
        else {
          FUN_100153ec0(&local_b8,*param_4);
          local_a8._0_4_ = 0;
          local_a8._4_4_ = 0;
          uStack_a0 = 0;
          uStack_9c = 0;
          uStack_9a = 0;
          local_78._0_4_ = 0x83ade0;
          local_78._4_4_ = 1;
          uStack_6c = (undefined2)((ulong)lVar12 >> 0x20);
          uStack_6a = (undefined2)((ulong)lVar12 >> 0x30);
          uStack_68 = SUB82(plVar1,0);
          local_66 = (undefined2)((ulong)plVar1 >> 0x10);
          local_64 = (undefined4)((ulong)plVar1 >> 0x20);
          uStack_70 = uVar3;
          local_58 = &local_78;
          FUN_10014ceba(&local_b8,&local_78);
          if (local_58 == &local_78) {
            lVar12 = 0x20;
LAB_1001467f3:
            (**(code **)(*local_58 + lVar12))();
          }
          else {
            lVar12 = 0x28;
            if (local_58 != (long *)0x0) goto LAB_1001467f3;
          }
          FUN_1001a8fac(&local_b8);
        }
      }
      if (local_c0 != 0) goto LAB_100146813;
    }
    else {
LAB_100146813:
      uVar7 = FUN_100135270();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 != '\0') {
        (**(code **)(*param_1 + 0xd0))(&local_a8,param_1);
        uVar8 = FUN_1001b83ae(&local_a8);
        local_78._0_4_ = 0x8220302;
        local_78._4_4_ = (undefined4)uVar8;
        uStack_70 = (undefined4)((ulong)uVar8 >> 0x20);
        uStack_6c = 0x400;
        uStack_6a = (undefined2)(int)param_1[0x31];
        uStack_68 = (undefined2)((uint)(int)param_1[0x31] >> 0x10);
        local_66 = 0x842;
        local_64 = (undefined4)local_c0;
        aiStack_60[0] = (int)((ulong)local_c0 >> 0x20);
        __os_log_impl(0x100000000,uVar7,0x10,
                      "storereq> ***ERROR*** %{public}s(%d). Processed base response. Found error %{public}@"
                      ,&local_78,0x1c);
        FUN_1001b7a50(&local_a8);
      }
    }
    FUN_1001b7a50(local_108);
    FUN_1001a85d4(local_118);
    FUN_100151a16(local_f8);
  }
  else {
    uVar7 = FUN_100135270();
    cVar4 = _os_log_type_enabled(uVar7,0x10);
    if (cVar4 != '\0') {
      (**(code **)(*param_1 + 0xd0))(&local_a8,param_1);
      uVar8 = FUN_1001b83ae(&local_a8);
      local_78._0_4_ = 0x8220302;
      local_78._4_4_ = (undefined4)uVar8;
      uStack_70 = (undefined4)((ulong)uVar8 >> 0x20);
      uStack_6c = 0x400;
      uStack_6a = (undefined2)(int)param_1[0x31];
      uStack_68 = (undefined2)((uint)(int)param_1[0x31] >> 0x10);
      local_66 = 0x842;
      local_64 = (undefined4)*param_3;
      aiStack_60[0] = (int)((ulong)*param_3 >> 0x20);
      __os_log_impl(0x100000000,uVar7,0x10,
                    "storereq> ***ERROR*** %{public}s(%d). Ignored base response due to error %{public}@"
                    ,&local_78,0x1c);
      FUN_1001b7a50(&local_a8);
    }
  }
  if (local_c0 != 0) {
    FUN_1001aab14(&local_78,&local_c0);
    iVar6 = FUN_1001ba026(&local_78,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
    if (iVar6 == 0) {
      lVar12 = FUN_1001aab4a(&local_c0);
      FUN_1001b7a50(&local_78);
      if (lVar12 == 0x1d51) goto LAB_100146a91;
    }
    else {
      FUN_1001b7a50(&local_78);
    }
    local_148 = (undefined4)*param_4;
    uStack_144 = *(undefined4 *)((long)param_4 + 4);
    uStack_140 = (undefined4)param_4[1];
    uStack_13c = *(undefined4 *)((long)param_4 + 0xc);
    if (param_4[1] != 0) {
      LOCK();
      plVar1 = (long *)(param_4[1] + 8);
      *plVar1 = *plVar1 + 1;
      UNLOCK();
    }
    cVar4 = (**(code **)(*param_1 + 0x128))(param_1,&local_c0,&local_148);
    plVar1 = (long *)CONCAT44(uStack_13c,uStack_140);
    if (plVar1 != (long *)0x0) {
      LOCK();
      plVar2 = plVar1 + 1;
      lVar12 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (cVar4 != '\0') {
      uVar7 = FUN_100135270();
      cVar4 = _os_log_type_enabled(uVar7,0);
      if (cVar4 != '\0') {
        (**(code **)(*param_1 + 0xd0))(&local_a8,param_1);
        uVar8 = FUN_1001b83ae(&local_a8);
        local_78._0_4_ = 0x8220202;
        local_78._4_4_ = (undefined4)uVar8;
        uStack_70 = (undefined4)((ulong)uVar8 >> 0x20);
        uStack_6c = 0x400;
        uStack_6a = (undefined2)(int)param_1[0x31];
        uStack_68 = (undefined2)((uint)(int)param_1[0x31] >> 0x10);
        __os_log_impl(0x100000000,uVar7,0,"storereq> %{public}s(%d). Retrying.",&local_78,0x12);
        FUN_1001b7a50(&local_a8);
      }
      local_138 = (undefined4)*param_4;
      uStack_134 = *(undefined4 *)((long)param_4 + 4);
      uStack_130 = (undefined4)param_4[1];
      uStack_12c = *(undefined4 *)((long)param_4 + 0xc);
      if (param_4[1] != 0) {
        LOCK();
        plVar1 = (long *)(param_4[1] + 8);
        *plVar1 = *plVar1 + 1;
        UNLOCK();
      }
      (**(code **)(*param_1 + 0x130))(param_1,&local_c0,&local_138);
      plVar1 = (long *)CONCAT44(uStack_12c,uStack_130);
      if (plVar1 != (long *)0x0) {
        LOCK();
        plVar2 = plVar1 + 1;
        lVar12 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar12 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
          std::__shared_weak_count::__release_weak();
        }
      }
      goto LAB_100146bdb;
    }
  }
LAB_100146a91:
  std::mutex::lock();
  FUN_10028593a(&local_78,param_1 + 0x12);
  if (local_58 == (long *)0x0) {
    std::mutex::unlock();
  }
  else {
    uVar7 = FUN_100135270();
    cVar4 = _os_log_type_enabled(uVar7,0);
    if (cVar4 != '\0') {
      (**(code **)(*param_1 + 0xd0))(&local_b8,param_1);
      uVar8 = FUN_1001b83ae(&local_b8);
      local_a8._0_4_ = 0x8220202;
      local_a8._4_4_ = (int)uVar8;
      uStack_a0 = (undefined4)((ulong)uVar8 >> 0x20);
      uStack_9c = 0x400;
      uStack_9a = (undefined2)(int)param_1[0x31];
      uStack_98 = (undefined2)((uint)(int)param_1[0x31] >> 0x10);
      __os_log_impl(0x100000000,uVar7,0,"storereq> %{public}s(%d). Calling completion.",&local_a8,
                    0x12);
      FUN_1001b7a50(&local_b8);
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
    std::mutex::unlock();
    local_128 = *param_4;
    plStack_120 = (long *)param_4[1];
    *param_4 = 0;
    param_4[1] = 0;
    if (local_58 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10016bf14();
    }
    (**(code **)(*local_58 + 0x30))(local_58,&local_c0,&local_128);
    if (plStack_120 != (long *)0x0) {
      LOCK();
      plVar1 = plStack_120 + 1;
      lVar12 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar12 == 0) {
        (**(code **)(*plStack_120 + 0x10))(plStack_120);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_58 == &local_78) {
      lVar12 = 0x20;
    }
    else {
      lVar12 = 0x28;
      if (local_58 == (long *)0x0) goto LAB_100146bdb;
    }
    (**(code **)(*local_58 + lVar12))();
  }
LAB_100146bdb:
  FUN_1001aaad2(&local_c0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

