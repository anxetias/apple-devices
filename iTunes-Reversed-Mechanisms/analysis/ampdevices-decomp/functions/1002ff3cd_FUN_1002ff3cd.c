// name: FUN_1002ff3cd
// address: 1002ff3cd

long FUN_1002ff3cd(undefined8 *param_1,long param_2,long *param_3,uint param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  bool bVar22;
  char cVar23;
  int iVar24;
  undefined4 uVar25;
  undefined8 uVar26;
  undefined8 *puVar27;
  long lVar28;
  long lVar29;
  char *pcVar30;
  long lVar31;
  ulong uVar32;
  long lVar33;
  undefined8 *puVar34;
  bool bVar35;
  undefined4 local_178;
  char *local_174;
  undefined2 local_16c;
  int local_16a;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined2 uStack_dc;
  undefined2 uStack_da;
  undefined1 uStack_d8;
  char local_d7;
  undefined4 uStack_d6;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == (undefined8 *)0x0) || (param_1[2] == 0)) {
    uVar26 = FUN_1001cc310();
    cVar23 = _os_log_type_enabled(uVar26,0x10);
    if (cVar23 != '\0') {
      pcVar30 = "TrackInfoIsValid(trackInfo)";
LAB_1002ff60c:
      uStack_dc = 0x822;
      local_e0 = 1;
      uStack_e4 = 0x7a0a90;
      local_e8 = 0x8220202;
      uStack_da = SUB82(pcVar30,0);
      uStack_d8 = (undefined1)((ulong)pcVar30 >> 0x10);
      local_d7 = '\0';
      uStack_d6 = (undefined4)((ulong)pcVar30 >> 0x20);
      __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_e8,0x16);
    }
  }
  else {
    if (param_3 != (long *)0x0) {
      if ((int)param_3[0x10] != 0x74646174) {
        uVar26 = FUN_1001cc310();
        cVar23 = _os_log_type_enabled(uVar26,0x10);
        if (cVar23 != '\0') {
          local_e8 = 0x8220202;
          uStack_e4 = 0x7ab58c;
          local_e0 = 1;
          uStack_dc = 0x822;
          uStack_da = 0xec03;
          uStack_d8 = 0x7a;
          local_d7 = '\0';
          uStack_d6 = 1;
          __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_e8,0x16);
        }
        cVar23 = FUN_1001782e9(0,1);
        if (cVar23 == '\0') goto LAB_1002ff597;
      }
      uVar8 = uStack_e4;
      uVar25 = local_e8;
      if (param_2 == 0) {
        param_2 = param_1[0xb];
      }
      plVar3 = (long *)param_1[2];
      local_e8 = (undefined4)param_2;
      uVar9 = local_e8;
      uStack_e4 = (undefined4)((ulong)param_2 >> 0x20);
      uVar10 = uStack_e4;
      local_e8 = uVar25;
      uStack_e4 = uVar8;
      if (plVar3 == param_3) {
LAB_1002ff6a3:
        FUN_1001c62d9(&local_e8,0x38);
        local_e8 = uVar9;
        uStack_e4 = uVar10;
        iVar24 = FUN_1002fc1ae(param_3,0x74646174,&local_e8);
        if ((iVar24 == 0) &&
           (puVar27 = (undefined8 *)FUN_1001c58d5(param_3[0x378]), puVar27 != (undefined8 *)0x0)) {
          _memcpy(puVar27,param_1,0x160);
          FUN_1001a8c1c(puVar27 + 0x2c,param_1 + 0x2c);
          puVar27[0x3b] = param_1[0x3b];
          uVar26 = param_1[0x3a];
          puVar27[0x39] = param_1[0x39];
          puVar27[0x3a] = uVar26;
          uVar26 = param_1[0x38];
          puVar27[0x37] = param_1[0x37];
          puVar27[0x38] = uVar26;
          uVar26 = param_1[0x36];
          puVar27[0x35] = param_1[0x35];
          puVar27[0x36] = uVar26;
          uVar26 = param_1[0x2d];
          uVar18 = param_1[0x2e];
          uVar25 = *(undefined4 *)(param_1 + 0x2f);
          uVar8 = *(undefined4 *)((long)param_1 + 0x17c);
          uVar9 = *(undefined4 *)(param_1 + 0x30);
          uVar10 = *(undefined4 *)((long)param_1 + 0x184);
          uVar11 = *(undefined4 *)(param_1 + 0x31);
          uVar12 = *(undefined4 *)((long)param_1 + 0x18c);
          uVar13 = *(undefined4 *)(param_1 + 0x32);
          uVar14 = *(undefined4 *)((long)param_1 + 0x194);
          uVar15 = *(undefined4 *)((long)param_1 + 0x19c);
          uVar16 = *(undefined4 *)(param_1 + 0x34);
          uVar17 = *(undefined4 *)((long)param_1 + 0x1a4);
          *(undefined4 *)(puVar27 + 0x33) = *(undefined4 *)(param_1 + 0x33);
          *(undefined4 *)((long)puVar27 + 0x19c) = uVar15;
          *(undefined4 *)(puVar27 + 0x34) = uVar16;
          *(undefined4 *)((long)puVar27 + 0x1a4) = uVar17;
          *(undefined4 *)(puVar27 + 0x31) = uVar11;
          *(undefined4 *)((long)puVar27 + 0x18c) = uVar12;
          *(undefined4 *)(puVar27 + 0x32) = uVar13;
          *(undefined4 *)((long)puVar27 + 0x194) = uVar14;
          *(undefined4 *)(puVar27 + 0x2f) = uVar25;
          *(undefined4 *)((long)puVar27 + 0x17c) = uVar8;
          *(undefined4 *)(puVar27 + 0x30) = uVar9;
          *(undefined4 *)((long)puVar27 + 0x184) = uVar10;
          puVar27[0x2d] = uVar26;
          puVar27[0x2e] = uVar18;
          lVar28 = param_1[0x3d];
          uVar25 = *(undefined4 *)((long)param_1 + 0x1e4);
          uVar8 = *(undefined4 *)(param_1 + 0x3d);
          uVar9 = *(undefined4 *)((long)param_1 + 0x1ec);
          *(undefined4 *)(puVar27 + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
          *(undefined4 *)((long)puVar27 + 0x1e4) = uVar25;
          *(undefined4 *)(puVar27 + 0x3d) = uVar8;
          *(undefined4 *)((long)puVar27 + 0x1ec) = uVar9;
          if (lVar28 != 0) {
            LOCK();
            plVar1 = (long *)(lVar28 + 8);
            *plVar1 = *plVar1 + 1;
            UNLOCK();
          }
          *(byte *)((long)puVar27 + 0xc2) = *(byte *)((long)puVar27 + 0xc2) & 0xfe;
          puVar27[2] = param_3;
          uVar26 = FUN_1001c6588();
          puVar27[0xe] = uVar26;
          uVar26 = FUN_1001c6588();
          puVar27[0xf] = uVar26;
          uVar26 = FUN_1001c6588();
          puVar27[0x10] = uVar26;
          puVar27[0xb] = 0;
          uVar25 = FUN_1001ea5dc();
          *(undefined4 *)(puVar27 + 1) = uVar25;
          puVar27[0xd] = 0;
          *(undefined4 *)((long)puVar27 + 0xc) = 0;
          *(undefined4 *)(puVar27 + 0x29) = 0;
          *(undefined4 *)((long)puVar27 + 0x154) = 0;
          *(undefined1 *)((long)puVar27 + 0xc1) = 0;
          puVar27[3] = 0;
          puVar27[4] = 0;
          *(byte *)((long)puVar27 + 0xc2) = *(byte *)((long)puVar27 + 0xc2) & 0xdf;
          *(undefined1 *)((long)puVar27 + 0xb9) = 0;
          *(ushort *)((long)puVar27 + 0xc6) =
               *(ushort *)((long)puVar27 + 0xc6) & 0xfffb | (ushort)(param_4 >> 6) & 4;
          uVar26 = FUN_10030064f(param_1);
          puVar27[0x30] = uVar26;
          puVar27[0x31] = *param_1;
          if (*(int *)((long)param_3 + 0x84) == 0x646f5069 && plVar3 != param_3) {
            if ((*(byte *)((long)param_1 + 0xd6) & 0xc0) != 0) goto LAB_1002ff8e3;
          }
          else if (((*(int *)((long)param_3 + 0x84) != 0x2062696c) ||
                   (*(int *)((long)plVar3 + 0x84) != 0x646f5069)) ||
                  (lVar28 = FUN_100300729(param_3), lVar28 != 0)) {
LAB_1002ff8e3:
            uVar26 = FUN_1002fa216(param_3);
            *puVar27 = uVar26;
          }
          *(byte *)((long)puVar27 + 0xc5) = *(byte *)((long)puVar27 + 0xc5) & 0x7f;
          *(byte *)((long)puVar27 + 0xc6) = *(byte *)((long)puVar27 + 0xc6) & 0xfe;
          *(undefined4 *)(puVar27 + 0x1a) = *(undefined4 *)(DAT_1008c76a0 + 0x1a54);
          if (((*(byte *)((long)param_3 + 0x1bb4) & 0x40) != 0) &&
             ((8 < *(byte *)((long)puVar27 + 0xcd) ||
              ((0x116U >> (*(byte *)((long)puVar27 + 0xcd) & 0x1f) & 1) == 0)))) {
            *(undefined1 *)((long)puVar27 + 0xcd) = 0;
          }
          puVar27[9] = 0;
          puVar27[10] = 0;
          puVar27[7] = 0;
          puVar27[8] = 0;
          puVar27[5] = 0;
          puVar27[6] = 0;
          lVar28 = FUN_100276e24(param_3);
          if (lVar28 == 0) {
            bVar35 = false;
          }
          else {
            iVar24 = FUN_1003a371d(puVar27,lVar28);
            FUN_1003a040b(lVar28);
            bVar35 = iVar24 != 0;
          }
          lVar28 = FUN_1004d0068(param_3);
          bVar22 = bVar35;
          if (lVar28 != 0) {
            iVar24 = FUN_1005e565a(lVar28,puVar27);
            FUN_1005e37a3(lVar28);
            bVar22 = true;
            if (iVar24 == 0) {
              bVar22 = bVar35;
            }
          }
          *(undefined2 *)((long)puVar27 + 300) = 0;
          if (*(char *)((long)param_1 + 300) != '\0') {
            FUN_100320aca(puVar27,(int)*(char *)((long)param_1 + 300),0);
          }
          if ((*(byte *)param_1[0xe] & 1) != 0) {
            FUN_100471a46(puVar27);
            puVar4 = (undefined4 *)param_1[0xe];
            puVar5 = (undefined4 *)puVar27[0xe];
            uVar25 = *puVar4;
            uVar8 = puVar4[1];
            uVar9 = puVar4[2];
            uVar10 = puVar4[3];
            uVar26 = *(undefined8 *)(puVar4 + 4);
            uVar18 = *(undefined8 *)(puVar4 + 6);
            uVar19 = *(undefined8 *)(puVar4 + 8);
            uVar20 = *(undefined8 *)(puVar4 + 10);
            uVar21 = *(undefined8 *)(puVar4 + 0xe);
            *(undefined8 *)(puVar5 + 0xc) = *(undefined8 *)(puVar4 + 0xc);
            *(undefined8 *)(puVar5 + 0xe) = uVar21;
            *(undefined8 *)(puVar5 + 8) = uVar19;
            *(undefined8 *)(puVar5 + 10) = uVar20;
            *(undefined8 *)(puVar5 + 4) = uVar26;
            *(undefined8 *)(puVar5 + 6) = uVar18;
            *puVar5 = uVar25;
            puVar5[1] = uVar8;
            puVar5[2] = uVar9;
            puVar5[3] = uVar10;
          }
          if (param_1[0x3c] != 0) {
            FUN_1004c4fb0(&local_e8);
            FUN_100217418(puVar27 + 0x3c,&local_e8);
            plVar1 = (long *)CONCAT26(uStack_da,CONCAT24(uStack_dc,local_e0));
            if (plVar1 != (long *)0x0) {
              LOCK();
              plVar2 = plVar1 + 1;
              lVar28 = *plVar2;
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (lVar28 == 0) {
                (**(code **)(*plVar1 + 0x10))(plVar1);
                std::__shared_weak_count::__release_weak();
              }
            }
          }
          if ((*(byte *)param_1[0xf] & 1) != 0) {
            FUN_100471fde(puVar27);
            puVar4 = (undefined4 *)param_1[0xf];
            puVar5 = (undefined4 *)puVar27[0xf];
            uVar25 = *puVar4;
            uVar8 = puVar4[1];
            uVar9 = puVar4[2];
            uVar10 = puVar4[3];
            uVar26 = *(undefined8 *)(puVar4 + 4);
            uVar18 = *(undefined8 *)(puVar4 + 6);
            uVar19 = *(undefined8 *)(puVar4 + 8);
            uVar20 = *(undefined8 *)(puVar4 + 10);
            uVar21 = *(undefined8 *)(puVar4 + 0xd);
            *(undefined8 *)(puVar5 + 0xb) = *(undefined8 *)(puVar4 + 0xb);
            *(undefined8 *)(puVar5 + 0xd) = uVar21;
            *(undefined8 *)(puVar5 + 8) = uVar19;
            *(undefined8 *)(puVar5 + 10) = uVar20;
            *(undefined8 *)(puVar5 + 4) = uVar26;
            *(undefined8 *)(puVar5 + 6) = uVar18;
            *puVar5 = uVar25;
            puVar5[1] = uVar8;
            puVar5[2] = uVar9;
            puVar5[3] = uVar10;
          }
          if ((*(byte *)param_1[0x10] & 1) != 0) {
            FUN_100473a90(puVar27);
            puVar4 = (undefined4 *)param_1[0x10];
            puVar5 = (undefined4 *)puVar27[0x10];
            uVar25 = *puVar4;
            uVar8 = puVar4[1];
            uVar9 = puVar4[2];
            uVar10 = puVar4[3];
            uVar26 = *(undefined8 *)(puVar4 + 6);
            *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(puVar4 + 4);
            *(undefined8 *)(puVar5 + 6) = uVar26;
            *puVar5 = uVar25;
            puVar5[1] = uVar8;
            puVar5[2] = uVar9;
            puVar5[3] = uVar10;
          }
          if (*(int *)((long)param_3 + 0x84) == 0x646f5069) {
            *(byte *)((long)puVar27 + 0xc2) = *(byte *)((long)puVar27 + 0xc2) & 0xef;
            if ((*(byte *)((long)param_3 + 0x2d1a) & 0x40) != 0) {
              puVar27[0x32] = 0;
              lVar28 = 0x198;
              goto LAB_1002ffb76;
            }
            lVar28 = 0x198;
            if ((*(byte *)((long)param_3 + 0x2d1a) & 0x20) == 0) goto LAB_1002ffb76;
          }
          else {
            *(undefined4 *)((long)puVar27 + 0x144) = 0;
            *(undefined4 *)((long)puVar27 + 0x19c) = 0;
            *(undefined8 *)((long)puVar27 + 0x14c) = 0;
            lVar28 = 0x158;
LAB_1002ffb76:
            *(undefined4 *)((long)puVar27 + lVar28) = 0;
          }
          FUN_100473489(puVar27);
          *(byte *)((long)puVar27 + 0xc2) = *(byte *)((long)puVar27 + 0xc2) | 1;
          lVar29 = FUN_1002ae820(param_2,param_4,puVar27);
          lVar28 = puVar27[0xb];
          if (*(int *)(param_1[0xe] + 0x30) != 0) {
            FUN_100471a46(puVar27);
            FUN_1001de586(plVar3 + 0x3fa,*(undefined4 *)(param_1[0xe] + 0x30),param_3 + 0x3fa,
                          puVar27[0xe] + 0x30);
          }
          if (param_1[2] == 0) {
            uVar26 = FUN_1001cc310();
            cVar23 = _os_log_type_enabled(uVar26,0x10);
            if (cVar23 != '\0') {
              pcVar30 = "TrackInfoIsValid(sourceTrackInfo)";
LAB_1003003d0:
              uStack_dc = 0x822;
              local_e0 = 1;
              uStack_e4 = 0x7a0a90;
              local_e8 = 0x8220202;
              uStack_da = SUB82(pcVar30,0);
              uStack_d8 = (undefined1)((ulong)pcVar30 >> 0x10);
              local_d7 = '\0';
              uStack_d6 = (undefined4)((ulong)pcVar30 >> 0x20);
              __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_e8,0x16)
              ;
            }
LAB_10030012c:
            FUN_1001782e9(0,0);
          }
          else {
            if (puVar27[2] == 0) {
              uVar26 = FUN_1001cc310();
              cVar23 = _os_log_type_enabled(uVar26,0x10);
              if (cVar23 != '\0') {
                pcVar30 = "TrackInfoIsValid(destTrackInfo)";
                goto LAB_1003003d0;
              }
              goto LAB_10030012c;
            }
            FUN_1001c62d9(local_58,0x20);
            lVar6 = param_1[2];
            lVar7 = puVar27[2];
            FUN_1001de586(lVar6 + 0x1c10,*(undefined4 *)(param_1 + 0x1b),lVar7 + 0x1c10,
                          puVar27 + 0x1b);
            lVar33 = lVar6 + 0x1cb0;
            lVar31 = lVar7 + 0x1cb0;
            FUN_1001de586(lVar33,*(undefined4 *)((long)param_1 + 0xec),lVar31,(long)puVar27 + 0xec);
            FUN_1001de586(lVar33,*(undefined4 *)((long)param_1 + 0xdc),lVar31,(long)puVar27 + 0xdc);
            FUN_1005389ba(local_58,4);
            FUN_1001de586(lVar33,*(undefined4 *)(param_1 + 0x1c),lVar31,puVar27 + 0x1c);
            FUN_1005389ba(local_58,0x47);
            FUN_1001de586(lVar6 + 0x1c60,*(undefined4 *)((long)param_1 + 0xe4),lVar7 + 0x1c60,
                          (long)puVar27 + 0xe4);
            FUN_1005389ba(local_58,3);
            FUN_1001de586(lVar6 + 0x1d00,*(undefined4 *)(param_1 + 0x1d),lVar7 + 0x1d00,
                          puVar27 + 0x1d);
            FUN_1001de586(lVar6 + 0x1df0,*(undefined4 *)(param_1 + 0x1e),lVar7 + 0x1df0,
                          puVar27 + 0x1e);
            FUN_1001de586(lVar6 + 0x1e40,*(undefined4 *)((long)param_1 + 0xf4),lVar7 + 0x1e40,
                          (long)puVar27 + 0xf4);
            FUN_1001de586(lVar6 + 0x1e90,*(undefined4 *)(param_1 + 0x1f),lVar7 + 0x1e90,
                          puVar27 + 0x1f);
            FUN_1001de586(lVar6 + 0x1ee0,*(undefined4 *)((long)param_1 + 0xfc),lVar7 + 0x1ee0,
                          (long)puVar27 + 0xfc);
            FUN_1001de586(lVar6 + 0x1f30,*(undefined4 *)(param_1 + 0x20),lVar7 + 0x1f30,
                          puVar27 + 0x20);
            FUN_1001de586(lVar6 + 0x1f80,*(undefined4 *)((long)param_1 + 0x104),lVar7 + 0x1f80,
                          (long)puVar27 + 0x104);
            if ((*(byte *)param_1[0xe] & 1) != 0) {
              FUN_100471a46(puVar27);
              FUN_1001de586(lVar6 + 0x1d50,*(undefined4 *)(param_1[0xe] + 0x14),lVar7 + 0x1d50,
                            puVar27[0xe] + 0x14);
              FUN_1001de586(lVar6 + 0x1da0,*(undefined4 *)(param_1[0xe] + 0x18),lVar7 + 0x1da0,
                            puVar27[0xe] + 0x18);
              lVar31 = lVar6 + 0x2020;
              lVar33 = lVar7 + 0x2020;
              FUN_1001de586(lVar31,*(undefined4 *)(param_1[0xe] + 0x20),lVar33,puVar27[0xe] + 0x20);
              FUN_1001de586(lVar31,*(undefined4 *)(param_1[0xe] + 0x24),lVar33,puVar27[0xe] + 0x24);
              FUN_1001de586(lVar31,*(undefined4 *)(param_1[0xe] + 0x28),lVar33,puVar27[0xe] + 0x28);
              FUN_1001de586(lVar6 + 0x2340,*(undefined4 *)(param_1[0xe] + 0x2c),lVar7 + 0x2340,
                            puVar27[0xe] + 0x2c);
              FUN_1001de586(lVar6 + 0x21b0,*(undefined4 *)(param_1[0xe] + 0x1c),lVar7 + 0x21b0,
                            puVar27[0xe] + 0x1c);
            }
            puVar34 = puVar27 + 0x35;
            uVar32 = 0;
            do {
              local_70 = 0;
              uStack_68 = 0;
              local_80 = 0;
              uStack_78 = 0;
              local_90 = 0;
              uStack_88 = 0;
              local_100 = 0;
              uStack_f8 = 0;
              local_110 = 0;
              uStack_108 = 0;
              local_120 = 0;
              uStack_118 = 0;
              FUN_1002fa385(param_1,uVar32 & 0xffffffff,&local_e8);
              FUN_1002fa385(puVar27,uVar32 & 0xffffffff,&local_178);
              FUN_1001de586(local_a0,*(undefined4 *)((long)param_1 + uVar32 * 4 + 0x1a8),local_130,
                            puVar34);
              uVar32 = uVar32 + 1;
              puVar34 = (undefined8 *)((long)puVar34 + 4);
            } while (uVar32 != 6);
            if ((*(byte *)param_1[0xf] & 1) != 0) {
              FUN_100471fde(puVar27);
              FUN_1001de586(lVar6 + 0x2200,*(undefined4 *)(param_1[0xf] + 0x24),lVar7 + 0x2200,
                            puVar27[0xf] + 0x24);
              FUN_1001de586(lVar6 + 0x2070,*(undefined4 *)(param_1[0xf] + 0x28),lVar7 + 0x2070,
                            puVar27[0xf] + 0x28);
              FUN_1001de586(lVar6 + 0x2160,*(undefined4 *)(param_1[0xf] + 0x2c),lVar7 + 0x2160,
                            puVar27[0xf] + 0x2c);
              FUN_1001de586(lVar6 + 0x2160,*(undefined4 *)(param_1[0xf] + 0x30),lVar7 + 0x2160,
                            puVar27[0xf] + 0x30);
              FUN_1001de586(lVar6 + 0x20c0,*(undefined4 *)(param_1[0xf] + 0x34),lVar7 + 0x20c0,
                            puVar27[0xf] + 0x34);
            }
            FUN_1002dffcc(puVar27);
            FUN_1002fe16c(puVar27,local_58,2);
          }
          FUN_1002773d4(param_3);
          lVar6 = puVar27[5];
          if (lVar6 != 0) {
            if (*(int *)(lVar6 + 8) != 0x616c6269) {
              uVar26 = FUN_1001cc310();
              cVar23 = _os_log_type_enabled(uVar26,0x10);
              if (cVar23 != '\0') {
                local_e8 = 0x8220202;
                uStack_e4 = 0x7ab58c;
                local_e0 = 1;
                uStack_dc = 0x822;
                uStack_da = 0x6aa9;
                uStack_d8 = 0x7b;
                local_d7 = '\0';
                uStack_d6 = 1;
                __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_e8,
                                    0x16);
              }
              cVar23 = FUN_1001782e9(0,1);
              if (cVar23 == '\0') goto LAB_1003001a0;
            }
            if (((*(long *)(lVar6 + 0x48) != 0) && (*(int *)(lVar6 + 0x14) == 1)) &&
               (lVar6 != param_1[5])) {
              FUN_1003a2e0a(lVar6);
            }
          }
LAB_1003001a0:
          lVar6 = puVar27[8];
          if (lVar6 != 0) {
            if (*(int *)(lVar6 + 0x58) != 0x61747369) {
              uVar26 = FUN_1001cc310();
              cVar23 = _os_log_type_enabled(uVar26,0x10);
              if (cVar23 != '\0') {
                local_e8 = 0x8220202;
                uStack_e4 = 0x7ab58c;
                local_e0 = 1;
                uStack_dc = 0x822;
                uStack_da = 0xa3ac;
                uStack_d8 = 0x7b;
                local_d7 = '\0';
                uStack_d6 = 1;
                __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_e8,
                                    0x16);
              }
              cVar23 = FUN_1001782e9(0,1);
              if (cVar23 == '\0') goto LAB_100300227;
            }
            if (((*(long *)(lVar6 + 8) != 0) && (*(int *)(lVar6 + 0x84) == 1)) &&
               (lVar7 = param_1[8], lVar7 != 0 && lVar6 != lVar7)) {
              FUN_1005e5f8e(lVar6,*(undefined1 *)(lVar7 + 0x88),*(undefined4 *)(lVar7 + 0xa4));
              *(undefined1 *)(lVar6 + 0x89) = *(undefined1 *)(lVar7 + 0x88);
            }
          }
LAB_100300227:
          FUN_1004cf6d4(param_3);
          (**(code **)(*param_3 + 0x10))(param_3,0x61747269,puVar27,0,param_1);
          if ((lVar29 != 0) && (!bVar22)) {
            if ((plVar3 != param_3) &&
               ((lVar28 != 0 && (lVar29 = FUN_1003008d3(lVar28,0), lVar29 != 0)))) {
              FUN_10048055e(puVar27,lVar29,0);
            }
            goto LAB_1002ff5bc;
          }
          FUN_1004737f5(puVar27);
        }
      }
      else if (((param_4 & 4) != 0) || ((plVar3[0x376] & 0x8000000U) == 0)) {
        if (((param_4 & 0x10) != 0) || ((param_3[0x376] & 2U) != 0)) goto LAB_1002ff6a3;
        FUN_1001c62d9(&local_e8,0x38);
        local_e8 = uVar9;
        uStack_e4 = uVar10;
        iVar24 = FUN_1002f7c7e(param_3,0x74646669,&local_e8);
        if (iVar24 == -0x80) {
LAB_1002ff65a:
          if (((*(int *)((long)param_3 + 0x84) != 0x646f5069) ||
              ((*(byte *)((long)param_3 + 0x1bb4) & 0x80) != 0)) ||
             (lVar28 = FUN_1003003ff(param_3,*param_1,0), lVar28 == 0)) goto LAB_1002ff6a3;
        }
        else {
          if (iVar24 != 0) {
            uVar26 = FUN_1001cc310();
            cVar23 = _os_log_type_enabled(uVar26,0x10);
            if (cVar23 != '\0') {
              local_178 = 0x8220202;
              local_174 = "Assertion failure";
              local_16c = 0x400;
              local_16a = iVar24;
              __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: err == (%d)",&local_178,0x12)
              ;
            }
            goto LAB_1002ff65a;
          }
          lVar28 = CONCAT26(uStack_da,CONCAT24(uStack_dc,local_e0));
          if (lVar28 == 0) goto LAB_1002ff65a;
          if (local_d7 == '\0') {
            FUN_1002ff053(param_1,*(undefined8 *)(lVar28 + 8));
            if (*(int *)((long)param_3 + 0x84) == 0x646f5069) {
              (**(code **)(*param_3 + 0x10))(param_3,0x61647472,*(undefined8 *)(lVar28 + 8),0,0);
            }
            goto LAB_1002ff5bc;
          }
        }
        FUN_1002b0cf4(lVar28);
        goto LAB_1002ff6a3;
      }
      lVar28 = 0;
      goto LAB_1002ff5bc;
    }
LAB_1002ff597:
    uVar26 = FUN_1001cc310();
    cVar23 = _os_log_type_enabled(uVar26,0x10);
    if (cVar23 != '\0') {
      pcVar30 = "TrackDataIsValid(destTrackData)";
      goto LAB_1002ff60c;
    }
  }
  lVar28 = 0;
  FUN_1001782e9(0,0);
LAB_1002ff5bc:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar28;
}

