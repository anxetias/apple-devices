// name: FUN_100293fc2
// address: 100293fc2

int FUN_100293fc2(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 ,long param_6,undefined4 *param_7,char *param_8,uint param_9,undefined4 param_10,
                 long param_11,byte *param_12,long param_13,int *param_14,undefined4 *param_15)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  size_t sVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  byte bVar23;
  bool bVar24;
  undefined1 auVar25 [16];
  undefined1 local_1eb8 [20];
  int local_1ea4;
  undefined8 local_1ea0;
  undefined4 local_1e98;
  undefined8 local_1e90;
  undefined8 uStack_1e88;
  undefined8 local_1e80;
  undefined8 uStack_1e78;
  undefined1 local_1da0 [8];
  long *local_1d98;
  long *local_1d90;
  undefined4 local_1d88;
  undefined4 uStack_1d84;
  undefined4 uStack_1d80;
  undefined4 uStack_1d7c;
  undefined4 local_1d78;
  undefined4 uStack_1d74;
  undefined4 uStack_1d70;
  undefined4 uStack_1d6c;
  undefined1 local_1d66 [14];
  long local_1d58;
  undefined8 local_1d50;
  undefined4 local_1d48;
  undefined4 uStack_1d44;
  undefined4 uStack_1d40;
  undefined4 uStack_1d3c;
  undefined4 local_1d38;
  undefined4 uStack_1d34;
  undefined4 uStack_1d30;
  undefined4 uStack_1d2c;
  ulong local_1d20;
  undefined8 local_1d18;
  undefined8 uStack_1d10;
  byte local_1d08 [4];
  uint local_1d04;
  ulong local_1d00;
  long local_1cf8;
  undefined8 local_1cf0;
  long local_1ce8;
  undefined8 local_1ce0;
  uint local_1cd4;
  ulong local_1cd0;
  long local_1cc8;
  long local_1cc0;
  undefined8 local_1cb8;
  undefined8 uStack_1cb0;
  long local_1ca0;
  int local_1c98;
  int local_1c94;
  uint local_1c90;
  int local_1c8c;
  long local_1c88;
  undefined8 local_1c80;
  undefined8 uStack_1c78;
  char local_1c70;
  undefined2 local_1c6f;
  undefined2 local_1c58;
  undefined1 local_1a58 [2048];
  undefined4 local_1258;
  char *local_1254;
  undefined2 local_124c;
  int local_124a;
  int local_1244;
  undefined4 local_dc8;
  char *local_dc4;
  undefined2 local_dbc;
  char *local_dba;
  char local_cb8;
  char cStack_cb7;
  char cStack_cb6;
  undefined1 uStack_cb5;
  undefined4 uStack_cb4;
  undefined4 uStack_cb0;
  undefined2 uStack_cac;
  undefined2 uStack_caa;
  undefined2 uStack_ca8;
  undefined2 uStack_ca6;
  undefined2 uStack_ca4;
  undefined2 uStack_ca2;
  long local_ca0;
  undefined8 local_c98;
  undefined8 local_c90;
  undefined8 uStack_c88;
  undefined1 local_c80;
  char local_4b8 [8];
  undefined8 local_4b0;
  long *plStack_4a8;
  ulong local_468;
  ulong local_438;
  long local_430;
  long local_b0 [11];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined4 uStack_46;
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x100293fda;
  auVar25 = FUN_100108310();
  local_1cf8 = auVar25._8_8_;
  lVar5 = -auVar25._0_8_;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_1cb8 = (long *)0x0;
  uStack_1cb0 = (long *)0x0;
  local_1ea0 = 0;
  local_1e98 = 0;
  local_1e90 = 0;
  uStack_1e88 = 0;
  local_1e80 = 0;
  uStack_1e78 = 0;
  *(undefined8 *)((long)&local_38 + lVar5) = 0x10029404c;
  local_1d50 = param_4;
  local_1ce0 = param_5;
  local_1cc8 = param_2;
  FUN_1001c62d9(&local_1ca0,0x48);
  puVar9 = param_15;
  if (param_15 != (undefined4 *)0x0) {
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100294062;
    FUN_1001c62d9(param_15,0x408);
  }
  local_1cd0 = 0;
  if (param_14 != (int *)0x0) {
    *param_14 = 0;
  }
  local_1cf0 = 0;
  local_1d18 = 0;
  uStack_1d10 = (long *)0x0;
  *(undefined8 *)((long)&local_38 + lVar5) = 0x1002940a2;
  FUN_1001c62d9(&local_1258,0x488);
  local_4b8[0] = '\0';
  if ((param_8 != (char *)0x0) && (*param_8 != '\0')) {
    *(undefined8 *)((long)&local_38 + lVar5) = 0x1002940c8;
    _strlcat(local_4b8,param_8,0x400);
  }
  puVar7 = param_7;
  cVar12 = *(char *)(param_7 + 0x101);
  uVar17 = *param_7;
  *(undefined8 *)((long)&local_38 + lVar5) = 0x1002940f1;
  local_1ce8 = param_1;
  local_1cc0 = param_6;
  FUN_100132a30(&local_58);
  uVar8 = param_10;
  uVar22 = (ulong)param_9;
  *(undefined4 **)((long)&param_13 + lVar5) = &local_dc8;
  *(undefined8 *)((long)&param_12 + lVar5) = 0;
  *(byte **)((long)&param_11 + lVar5) = local_1d08;
  *(undefined8 *)((long)&param_9 + lVar5) = 0;
  *(undefined8 *)((long)&param_10 + lVar5) = 0;
  *(undefined8 *)((long)&param_7 + lVar5) = 0;
  *(undefined8 *)((long)&param_8 + lVar5) = 0;
  *(undefined1 **)(&stack0x00000000 + lVar5) = local_1da0;
  *(undefined8 **)(&stack0xfffffffffffffff8 + lVar5) = &local_1cf0;
  *(char **)(&stack0xffffffffffffffe8 + lVar5) = &local_cb8;
  *(undefined4 **)(&stack0xffffffffffffffe0 + lVar5) = &local_58;
  *(undefined8 *)(&stack0xffffffffffffffd8 + lVar5) = 0;
  *(ulong *)(&stack0xffffffffffffffd0 + lVar5) = uVar22;
  *(undefined4 *)(&stack0xfffffffffffffff0 + lVar5) = 0x800;
  *(undefined8 *)((long)&local_38 + lVar5) = 0x100294188;
  iVar13 = FUN_1001a3127(puVar7 + 1,uVar17,uVar8,local_4b8,local_1cc8,
                         (uint)(cVar12 != '\0') << 4 | 0x45);
  *(undefined8 *)((long)&local_38 + lVar5) = 0x100294194;
  FUN_1001b7a50(&local_58);
  lVar20 = local_1ce8;
  if (iVar13 != -0x80) {
    if (iVar13 == 0) {
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1002941c1;
      iVar13 = FUN_1001d78c1(local_1cf0,local_b0);
      if (iVar13 != -0x80) {
        if (iVar13 == 0) {
          if (puVar9 != (undefined4 *)0x0) {
            *(undefined8 *)((long)&local_38 + lVar5) = 0x1002941eb;
            cVar12 = FUN_1001a3062(&local_dc8);
            if (cVar12 != '\0') {
              *(undefined1 *)(puVar9 + 0x101) = *(undefined1 *)(puVar7 + 0x101);
              *(undefined8 *)((long)&local_38 + lVar5) = 0x100294220;
              cVar12 = FUN_1001a26f5(&local_cb8,"Location",puVar9 + 1,0x400);
              if (cVar12 != '\0') {
                *(undefined8 *)((long)&local_38 + lVar5) = 0x100294230;
                sVar18 = _strlen((char *)(puVar9 + 1));
                *puVar9 = (int)sVar18;
                iVar13 = -1;
                *(undefined8 *)((long)&local_38 + lVar5) = 0x100294245;
                FUN_1001d5da8(local_1cf0);
                goto LAB_100294412;
              }
            }
          }
          *(undefined8 *)((long)&local_38 + lVar5) = 0x100294308;
          cVar12 = FUN_1001a30c2(&local_dc8);
          iVar13 = -0x1389;
          if (cVar12 == '\0') {
            *(byte *)(lVar20 + 0x5a51) = local_1d08[0] & 1;
            *(undefined8 *)((long)&local_38 + lVar5) = 0x10029433f;
            FUN_10053207e(&local_58,&local_1258,local_1cf0,0);
            uVar11 = uStack_50;
            uVar10 = uStack_54;
            uVar8 = local_58;
            plVar2 = uStack_1d10;
            uVar17 = CONCAT22(uStack_4a,uStack_4c);
            local_58 = 0;
            uStack_54 = 0;
            uStack_50 = 0;
            uStack_4c = 0;
            uStack_4a = 0;
            local_1d18 = CONCAT44(uVar10,uVar8);
            uStack_1d10 = (long *)CONCAT44(uVar17,uVar11);
            if (plVar2 != (long *)0x0) {
              LOCK();
              plVar1 = plVar2 + 1;
              lVar21 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar21 == 0) {
                pcVar4 = *(code **)(*plVar2 + 0x10);
                *(undefined8 *)((long)&local_38 + lVar5) = 0x100294378;
                (*pcVar4)(plVar2);
                *(undefined8 *)((long)&local_38 + lVar5) = 0x100294380;
                std::__shared_weak_count::__release_weak();
              }
            }
            plVar2 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
            if (plVar2 != (long *)0x0) {
              LOCK();
              plVar1 = plVar2 + 1;
              lVar21 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar21 == 0) {
                pcVar4 = *(code **)(*plVar2 + 0x10);
                *(undefined8 *)((long)&local_38 + lVar5) = 0x1002943a4;
                (*pcVar4)(plVar2);
                *(undefined8 *)((long)&local_38 + lVar5) = 0x1002943ac;
                std::__shared_weak_count::__release_weak();
              }
            }
            if (local_1d18 == 0) {
              *(undefined8 *)((long)&local_38 + lVar5) = 0x1002943eb;
              uVar19 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar5) = 0x1002943fb;
              cVar12 = _os_log_type_enabled(uVar19,0x10);
              if (cVar12 != '\0') {
                local_58 = 0x8220202;
                uStack_54 = 0x7a0a90;
                uStack_50 = 1;
                uStack_4c = 0x822;
                uStack_4a = 0x7290;
                uStack_48 = 0x7b;
                uStack_46 = 1;
                *(undefined8 *)((long)&local_38 + lVar5) = 0x100294ae9;
                __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",&local_58,
                                    0x16);
              }
              iVar13 = -0x32;
              *(undefined8 *)((long)&local_38 + lVar5) = 0x100294412;
              FUN_1001782e9(0,0);
            }
            else {
              *(undefined8 *)((long)&local_38 + lVar5) = 0x1002943c9;
              FUN_100203686(&local_1cb8,&local_1d18);
              iVar13 = 0;
              *(undefined8 *)((long)&local_38 + lVar5) = 0x1002943e4;
              FUN_1001c631b(&local_cb8,local_1a58,0x800);
            }
          }
        }
        else {
          *(undefined8 *)((long)&local_38 + lVar5) = 0x10029429d;
          uVar19 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar5) = 0x1002942ad;
          cVar12 = _os_log_type_enabled(uVar19,0x10);
          if (cVar12 != '\0') {
            uStack_4a = (undefined2)iVar13;
            uStack_48 = (undefined2)((uint)iVar13 >> 0x10);
            goto LAB_1002942e4;
          }
        }
      }
    }
    else {
      *(undefined8 *)((long)&local_38 + lVar5) = 0x10029424f;
      uVar19 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar5) = 0x10029425f;
      cVar12 = _os_log_type_enabled(uVar19,0x10);
      if (cVar12 != '\0') {
        uStack_4a = (undefined2)iVar13;
        uStack_48 = (undefined2)((uint)iVar13 >> 0x10);
LAB_1002942e4:
        uStack_4c = 0x400;
        uStack_50 = 1;
        uStack_54 = 0x7a0a90;
        local_58 = 0x8220202;
        *(undefined8 *)((long)&local_38 + lVar5) = 0x1002942f7;
        __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
LAB_100294412:
  if (uStack_1d10 != (long *)0x0) {
    LOCK();
    plVar2 = uStack_1d10 + 1;
    lVar21 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar21 == 0) {
      pcVar4 = *(code **)(*uStack_1d10 + 0x10);
      *(undefined8 *)((long)&local_38 + lVar5) = 0x100294439;
      (*pcVar4)(uStack_1d10);
      *(undefined8 *)((long)&local_38 + lVar5) = 0x100294441;
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar21 = 0;
  if ((iVar13 == -0x80) || (iVar13 == -1)) goto LAB_100294773;
  if (iVar13 == 0) {
    local_1c58 = 0;
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100294488;
    FUN_1001ceb24(local_1cc8,0x7570726d,0,0xffffffffffffffff);
    lVar21 = param_11;
    if (param_11 != 0) {
      *(undefined8 *)((long)&local_38 + lVar5) = 0x100294499;
      FUN_1003af743(param_11);
    }
    pbVar6 = param_12;
    if (param_12 != (byte *)0x0) {
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1002944aa;
      FUN_1003af7fe(param_12);
    }
    *(undefined8 *)((long)&local_38 + lVar5) = 0x1002944bd;
    FUN_1001a2bef(local_1a58,&local_1cd0);
    if ((*(int *)(lVar20 + 0x10) == 0x48545450) && (local_1cd0 >> 0x1f != 0)) {
      local_1cd0 = 0;
    }
    pcVar4 = *(code **)(*local_1cb8 + 0xf8);
    *(undefined8 *)((long)&local_38 + lVar5) = 0x1002944f7;
    iVar13 = (*pcVar4)(local_1cb8,&local_1d58);
    if (iVar13 == -0x80) goto LAB_100294770;
    if (iVar13 != 0) {
      *(undefined8 *)((long)&local_38 + lVar5) = 0x100294758;
      uVar19 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar5) = 0x100294768;
      cVar12 = _os_log_type_enabled(uVar19,0x10);
      if (cVar12 != '\0') {
        uStack_caa = (undefined2)iVar13;
        uStack_ca8 = (undefined2)((uint)iVar13 >> 0x10);
        goto LAB_100294988;
      }
      goto LAB_100294770;
    }
    if (param_9 == 0) {
      local_4b0 = 0;
      plStack_4a8 = (long *)0x0;
      local_1d48 = (undefined4)local_1cb8;
      uStack_1d44 = local_1cb8._4_4_;
      uStack_1d40 = (undefined4)uStack_1cb0;
      uStack_1d3c = uStack_1cb0._4_4_;
      if (uStack_1cb0 != (long *)0x0) {
        LOCK();
        uStack_1cb0[1] = uStack_1cb0[1] + 1;
        UNLOCK();
      }
      *(undefined8 *)((long)&local_38 + lVar5) = 0x100294559;
      iVar14 = FUN_10042db01(&local_1d48,local_4b8,4,0);
      plVar2 = (long *)CONCAT44(uStack_1d3c,uStack_1d40);
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        lVar3 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar3 == 0) {
          pcVar4 = *(code **)(*plVar2 + 0x10);
          *(undefined8 *)((long)&local_38 + lVar5) = 0x100294583;
          (*pcVar4)(plVar2);
          *(undefined8 *)((long)&local_38 + lVar5) = 0x10029458b;
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar1 = uStack_1cb0;
      plVar2 = local_1cb8;
      lVar3 = param_13;
      if (iVar14 == -0x80) {
LAB_100294b2f:
        iVar13 = -0x80;
LAB_100294b3a:
        bVar24 = true;
      }
      else {
        if (iVar14 == 0) {
          if (pbVar6 != (byte *)0x0) {
            *pbVar6 = *pbVar6 | 0x40;
            pbVar6[0xb0] = 0;
            pbVar6[0xb1] = 0;
            pbVar6[0xb4] = 0;
            pbVar6[0xb5] = 0;
            pbVar6[0xb6] = 0;
            pbVar6[0xb7] = 0;
          }
          if (param_13 != 0) {
            *(undefined2 *)(param_13 + 0xc) = 0;
            *(undefined4 *)(param_13 + 0x10) = 0;
          }
          local_c90 = 0;
          uStack_c88 = 0;
          local_cb8 = (char)lVar21;
          cStack_cb7 = (char)((ulong)lVar21 >> 8);
          cStack_cb6 = (char)((ulong)lVar21 >> 0x10);
          uStack_cb5 = (undefined1)((ulong)lVar21 >> 0x18);
          uStack_cb4 = (undefined4)((ulong)lVar21 >> 0x20);
          uStack_cb0 = SUB84(pbVar6,0);
          uStack_cac = (undefined2)((ulong)pbVar6 >> 0x20);
          uStack_caa = (undefined2)((ulong)pbVar6 >> 0x30);
          uStack_ca8 = 0;
          uStack_ca6 = 0;
          uStack_ca4 = 0;
          uStack_ca2 = 0;
          local_ca0 = param_13;
          local_c98 = 0;
          local_c80 = 0;
          *(undefined8 *)(&stack0xffffffffffffffd8 + lVar5) = 0;
          *(undefined8 *)(&stack0xffffffffffffffe0 + lVar5) = 0;
          *(undefined4 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
          *(undefined8 *)((long)&local_38 + lVar5) = 0x100294623;
          iVar14 = FUN_100428630(local_4b8,FUN_100298a64,local_4b8,&local_cb8,0,0);
          if ((iVar14 != -0x80) && (iVar14 != 0)) {
            *(undefined8 *)((long)&local_38 + lVar5) = 0x100294635;
            uVar19 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar5) = 0x100294645;
            cVar12 = _os_log_type_enabled(uVar19,0x10);
            if (cVar12 != '\0') {
              local_1258 = 0x8220202;
              local_1254 = "Assertion failure";
              local_124c = 0x400;
              *(undefined8 *)((long)&local_38 + lVar5) = 0x100295330;
              local_124a = iVar14;
              __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)",&local_1258,0x12
                                 );
            }
          }
          if (pbVar6 != (byte *)0x0 && lVar3 != 0) {
            *(undefined2 *)(pbVar6 + 0xb0) = *(undefined2 *)(lVar3 + 0xc);
            *(undefined4 *)(pbVar6 + 0xb4) = *(undefined4 *)(lVar3 + 0x10);
          }
          if (local_468 < local_438) {
            pcVar4 = *(code **)(*local_1cb8 + 0xc0);
            *(undefined8 *)((long)&local_38 + lVar5) = 0x1002946a1;
            iVar14 = (*pcVar4)(local_1cb8,(int)local_438 - (int)local_468,local_1cc8);
            if ((iVar14 != -0x80) && (iVar14 != 0)) {
              *(undefined8 *)((long)&local_38 + lVar5) = 0x1002946b3;
              uVar19 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar5) = 0x1002946c3;
              cVar12 = _os_log_type_enabled(uVar19,0x10);
              if (cVar12 != '\0') {
                local_1258 = 0x8220202;
                local_1254 = "Assertion failure";
                local_124c = 0x400;
                *(undefined8 *)((long)&local_38 + lVar5) = 0x100295418;
                local_124a = iVar14;
                __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)",&local_1258,
                                    0x12);
              }
            }
          }
          *(undefined8 *)((long)&local_38 + lVar5) = 0x1002946d7;
          FUN_100426c81(local_4b8);
          *(ulong *)(lVar20 + 0xd48) = local_438;
          if (local_430 != 0) {
            *(long *)(lVar20 + 0xd40) = local_430;
          }
LAB_100294b29:
          if (iVar14 == -0x80) goto LAB_100294b2f;
          iVar13 = 0;
          goto LAB_100294b3a;
        }
        local_1d98 = local_1cb8;
        local_1d90 = uStack_1cb0;
        if (uStack_1cb0 != (long *)0x0) {
          LOCK();
          uStack_1cb0[1] = uStack_1cb0[1] + 1;
          UNLOCK();
        }
        *(undefined8 *)((long)&local_38 + lVar5) = 0x100294871;
        ___bzero(&local_1258,0x118);
        local_b0[0] = 10;
        pcVar4 = *(code **)(*plVar2 + 0xb0);
        *(undefined8 *)((long)&local_38 + lVar5) = 0x10029489a;
        iVar13 = (*pcVar4)(plVar2,local_b0,&local_cb8,1,&local_1258);
        if (iVar13 != -0x80) {
          if (iVar13 == 0) {
            if (local_1244 == 1) {
              do {
                if (local_1cc8 != 0) {
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x1002948d4;
                  uVar19 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x1002948e4;
                  cVar12 = _os_log_type_enabled(uVar19,0x10);
                  if (cVar12 != '\0') {
                    local_dc8 = 0x8220202;
                    local_dc4 = "Assertion failure";
                    local_dbc = 0x822;
                    local_dba = "progressInfo == nullptr";
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x100294954;
                    __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",
                                        &local_dc8,0x16);
                  }
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x1002948f1;
                  FUN_1001782e9(0,0);
                }
              } while (local_1244 == 1);
            }
            iVar13 = -0x27;
            if ((local_1244 == 0) && (local_b0[0] == 10)) {
              if ((local_cb8 == 'I') && ((cStack_cb7 == 'D' && (cStack_cb6 == '3')))) {
                lVar20 = 0;
                bVar23 = 0x15;
                uVar15 = 0;
                do {
                  cVar12 = *(char *)((long)&uStack_cb4 + lVar20 + 2);
                  if (cVar12 < '\0') {
                    iVar13 = -0x32;
                    goto LAB_100294af4;
                  }
                  uVar15 = uVar15 | (int)cVar12 << (bVar23 & 0x1f);
                  bVar23 = bVar23 - 7;
                  lVar20 = lVar20 + 1;
                } while (lVar20 != 4);
                pcVar4 = *(code **)(*plVar2 + 0xc0);
                *(undefined8 *)((long)&local_38 + lVar5) = 0x100294a81;
                (*pcVar4)(plVar2,uVar15,local_1cc8);
              }
              else {
                pcVar4 = *(code **)(*plVar2 + 0xe8);
                *(undefined8 *)((long)&local_38 + lVar5) = 0x100294a9b;
                (*pcVar4)(plVar2,10,&local_cb8);
              }
              iVar13 = 0;
            }
          }
          else {
            *(undefined8 *)((long)&local_38 + lVar5) = 0x1002949a5;
            uVar19 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar5) = 0x1002949b5;
            cVar12 = _os_log_type_enabled(uVar19,0x10);
            if (cVar12 != '\0') {
              local_dc8 = 0x8220202;
              local_dc4 = "Assertion failure";
              local_dbc = 0x400;
              local_dba = (char *)CONCAT44(local_dba._4_4_,iVar13);
              *(undefined8 *)((long)&local_38 + lVar5) = 0x100294a02;
              __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)",&local_dc8,0x12)
              ;
            }
          }
        }
LAB_100294af4:
        if (plVar1 != (long *)0x0) {
          LOCK();
          plVar2 = plVar1 + 1;
          lVar20 = *plVar2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (lVar20 == 0) {
            pcVar4 = *(code **)(*plVar1 + 0x10);
            *(undefined8 *)((long)&local_38 + lVar5) = 0x100294b16;
            (*pcVar4)(plVar1);
            *(undefined8 *)((long)&local_38 + lVar5) = 0x100294b1e;
            std::__shared_weak_count::__release_weak();
          }
        }
        if (iVar13 != -0x80) {
          if (iVar13 == 0) goto LAB_100294b29;
          *(undefined8 *)((long)&local_38 + lVar5) = 0x100294b44;
          uVar19 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar5) = 0x100294b54;
          cVar12 = _os_log_type_enabled(uVar19,0x10);
          if (cVar12 != '\0') {
            local_cb8 = '\x02';
            cStack_cb7 = '\x02';
            cStack_cb6 = '\"';
            uStack_cb5 = 8;
            uStack_cb4 = 0x7a0a90;
            uStack_cb0 = 1;
            uStack_cac = 0x400;
            uStack_caa = (undefined2)iVar13;
            uStack_ca8 = (undefined2)((uint)iVar13 >> 0x10);
            *(undefined8 *)((long)&local_38 + lVar5) = 0x10029537a;
            __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)",&local_cb8,0x12);
          }
        }
        bVar24 = false;
      }
      if (plStack_4a8 != (long *)0x0) {
        LOCK();
        plVar2 = plStack_4a8 + 1;
        lVar20 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar20 == 0) {
          pcVar4 = *(code **)(*plStack_4a8 + 0x10);
          *(undefined8 *)((long)&local_38 + lVar5) = 0x100294b86;
          (*pcVar4)(plStack_4a8);
          *(undefined8 *)((long)&local_38 + lVar5) = 0x100294b8e;
          std::__shared_weak_count::__release_weak();
        }
      }
      if (!bVar24) goto LAB_100294770;
    }
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100294ba1;
    lVar21 = FUN_1001c63e1(0x1000);
    if (lVar21 == 0) {
      *(undefined8 *)((long)&local_38 + lVar5) = 0x100294de7;
      uVar19 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar5) = 0x100294df7;
      cVar12 = _os_log_type_enabled(uVar19,0x10);
      if (cVar12 != '\0') {
        local_cb8 = '\x02';
        cStack_cb7 = '\x02';
        cStack_cb6 = '\"';
        uStack_cb5 = 8;
        uStack_cb4 = 0x7a0a90;
        uStack_cb0 = 1;
        uStack_cac = 0x822;
        uStack_caa = 0xd9a;
        uStack_ca8 = 0x7a;
        uStack_ca6 = 1;
        uStack_ca4 = 0;
        *(undefined8 *)((long)&local_38 + lVar5) = 0x100294fad;
        __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",&local_cb8,0x16);
      }
      lVar21 = 0;
      *(undefined8 *)((long)&local_38 + lVar5) = 0x100294e0b;
      FUN_1001782e9(0,0);
      iVar13 = -0x6c;
    }
    else {
      iVar14 = 0;
      do {
        plVar2 = uStack_1cb0;
        if (iVar14 == 0x14) break;
        local_1d88 = (undefined4)local_1cb8;
        uStack_1d84 = local_1cb8._4_4_;
        uStack_1d80 = (undefined4)uStack_1cb0;
        uStack_1d7c = uStack_1cb0._4_4_;
        if (uStack_1cb0 != (long *)0x0) {
          LOCK();
          uStack_1cb0[1] = uStack_1cb0[1] + 1;
          UNLOCK();
        }
        *(undefined8 *)((long)&local_38 + lVar5) = 0x100294bfb;
        iVar13 = FUN_1002994d8(&local_1d88,local_1ce0,local_1cc8,0x10000);
        if (plVar2 != (long *)0x0) {
          LOCK();
          plVar1 = plVar2 + 1;
          lVar20 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar20 == 0) {
            pcVar4 = *(code **)(*plVar2 + 0x10);
            *(undefined8 *)((long)&local_38 + lVar5) = 0x100294c1e;
            (*pcVar4)(plVar2);
            *(undefined8 *)((long)&local_38 + lVar5) = 0x100294c26;
            std::__shared_weak_count::__release_weak();
          }
        }
        if (iVar13 != 0) {
          if (iVar13 == -0x80) goto LAB_100294773;
          *(undefined8 *)((long)&local_38 + lVar5) = 0x100294e25;
          uVar19 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar5) = 0x100294e35;
          cVar12 = _os_log_type_enabled(uVar19,0x10);
          if (cVar12 == '\0') goto LAB_100294773;
          uStack_caa = (undefined2)iVar13;
          uStack_ca8 = (undefined2)((uint)iVar13 >> 0x10);
          goto LAB_10029525f;
        }
        *(undefined8 *)((long)&local_38 + lVar5) = 0x100294c42;
        iVar13 = FUN_10026b3e0(local_1ce0,local_1cc0);
        if (iVar13 != 0) {
          if (iVar13 == -0x80) goto LAB_100294773;
          *(undefined8 *)((long)&local_38 + lVar5) = 0x100294e83;
          uVar19 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar5) = 0x100294e93;
          cVar12 = _os_log_type_enabled(uVar19,0x10);
          if (cVar12 == '\0') goto LAB_100294773;
          uStack_caa = (undefined2)iVar13;
          uStack_ca8 = (undefined2)((uint)iVar13 >> 0x10);
          goto LAB_10029525f;
        }
        if (0x700 < *(uint *)(local_1cc0 + 0x14)) {
          *(undefined8 *)((long)&local_38 + lVar5) = 0x100294f35;
          uVar19 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar5) = 0x100294f45;
          cVar12 = _os_log_type_enabled(uVar19,0x10);
          if (cVar12 != '\0') {
            local_cb8 = '\x02';
            cStack_cb7 = '\x02';
            cStack_cb6 = '\"';
            uStack_cb5 = 8;
            uStack_cb4 = 0x7a0a90;
            uStack_cb0 = 1;
            uStack_cac = 0x822;
            uStack_caa = 0x75f1;
            uStack_ca8 = 0x7b;
            uStack_ca6 = 1;
            uStack_ca4 = 0;
            *(undefined8 *)((long)&local_38 + lVar5) = 0x100295469;
            __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",&local_cb8,0x16);
          }
          iVar13 = -0x32;
          *(undefined8 *)((long)&local_38 + lVar5) = 0x100294f5c;
          FUN_1001782e9(0,0);
          goto LAB_100294773;
        }
        *(undefined8 *)((long)&local_38 + lVar5) = 0x100294c75;
        FUN_1001c62d9(local_1eb8,0x118);
        local_1d20 = (ulong)*(uint *)(local_1cc0 + 0x14);
        pcVar4 = *(code **)(*local_1cb8 + 0xb0);
        *(undefined8 *)((long)&local_38 + lVar5) = 0x100294ca8;
        iVar13 = (*pcVar4)(local_1cb8,&local_1d20,lVar21,1,local_1eb8);
        if (iVar13 != 0) {
          if (iVar13 == -0x80) goto LAB_100294773;
          *(undefined8 *)((long)&local_38 + lVar5) = 0x100294ee1;
          uVar19 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar5) = 0x100294ef1;
          cVar12 = _os_log_type_enabled(uVar19,0x10);
          if (cVar12 == '\0') goto LAB_100294773;
          uStack_caa = (undefined2)iVar13;
          uStack_ca8 = (undefined2)((uint)iVar13 >> 0x10);
          goto LAB_10029525f;
        }
        iVar14 = iVar14 + 1;
        while (local_1ea4 == 1) {
          *(undefined8 *)((long)&local_38 + lVar5) = 0x100294cd8;
          iVar13 = FUN_1001ceb57(local_1cc8,0,0xffffffffffffffff);
          if (iVar13 != 0) goto LAB_100294773;
        }
        iVar13 = -0x27;
        if ((local_1ea4 != 0) || (local_1d20 != *(uint *)(local_1cc0 + 0x14))) goto LAB_100294773;
        *(undefined8 *)((long)&local_38 + lVar5) = 0x100294d16;
        cVar12 = FUN_100271d11(local_1cc0,lVar21);
        plVar2 = uStack_1cb0;
        if (cVar12 != '\0') {
          *(undefined8 *)((long)&local_38 + lVar5) = 0x100294fbe;
          uVar15 = FUN_10026b75e(local_1d66);
          *(undefined8 *)((long)&local_38 + lVar5) = 0x100294fcc;
          uVar16 = FUN_10026b75e(local_1ce0);
          local_1d04 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                       uVar15 << 0x18;
          local_1cd4 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                       uVar16 << 0x18;
          goto LAB_100294fea;
        }
        local_1d78 = (undefined4)local_1cb8;
        uStack_1d74 = local_1cb8._4_4_;
        uStack_1d70 = (undefined4)uStack_1cb0;
        uStack_1d6c = uStack_1cb0._4_4_;
        if (uStack_1cb0 != (long *)0x0) {
          LOCK();
          uStack_1cb0[1] = uStack_1cb0[1] + 1;
          UNLOCK();
        }
        *(undefined8 *)((long)&local_38 + lVar5) = 0x100294d59;
        iVar13 = FUN_1002994d8(&local_1d78,local_1d66,local_1cc8,0);
        if (plVar2 != (long *)0x0) {
          LOCK();
          plVar1 = plVar2 + 1;
          lVar20 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar20 == 0) {
            pcVar4 = *(code **)(*plVar2 + 0x10);
            *(undefined8 *)((long)&local_38 + lVar5) = 0x100294d7c;
            (*pcVar4)(plVar2);
            *(undefined8 *)((long)&local_38 + lVar5) = 0x100294d84;
            std::__shared_weak_count::__release_weak();
          }
        }
      } while (iVar13 != 0);
      *(undefined8 *)((long)&local_38 + lVar5) = 0x100294d99;
      uVar15 = FUN_10026b75e(local_1d66);
      *(undefined8 *)((long)&local_38 + lVar5) = 0x100294da7;
      uVar16 = FUN_10026b75e(local_1ce0);
      local_1d04 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                   uVar15 << 0x18;
      local_1cd4 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                   uVar16 << 0x18;
      pcVar4 = *(code **)(*local_1cb8 + 0xe8);
      *(undefined8 *)((long)&local_38 + lVar5) = 0x100294dcf;
      (*pcVar4)(local_1cb8,4);
LAB_100294fea:
      lVar3 = local_1cc0;
      lVar20 = local_1ce8;
      uVar17 = *(undefined4 *)(local_1cc0 + 0x14);
      pcVar4 = *(code **)(*local_1cb8 + 0xe8);
      *(undefined8 *)((long)&local_38 + lVar5) = 0x100295000;
      (*pcVar4)(local_1cb8,uVar17,lVar21);
      pcVar4 = *(code **)(*local_1cb8 + 0xe8);
      *(undefined8 *)((long)&local_38 + lVar5) = 0x10029501c;
      (*pcVar4)(local_1cb8,4,&local_1cd4);
      pcVar4 = *(code **)(*local_1cb8 + 0xf8);
      *(undefined8 *)((long)&local_38 + lVar5) = 0x100295033;
      iVar13 = (*pcVar4)(local_1cb8,&local_1d00);
      if (iVar13 != -0x80) {
        if (iVar13 == 0) {
          local_1d00 = local_1d00 - local_1d58;
          *(ulong *)(lVar20 + 0xd38) = local_1d00;
          plVar2 = (long *)(lVar20 + 0xd48);
          *plVar2 = *plVar2 - local_1d58;
          if (local_1cd0 < local_1d00) {
            local_1cd0 = local_1d00;
          }
          local_1ca0 = lVar3;
          local_1c98 = (int)local_1d00;
          local_1c94 = (int)local_1cd0;
          local_1c8c = local_1c94 - local_1c98;
          bVar24 = false;
          *(undefined8 *)((long)&local_38 + lVar5) = 0x1002950ae;
          local_1c90 = FUN_100271c4a(lVar3,local_1c8c,0);
          local_1c88 = local_1cf8;
          local_1c6f = 0;
          local_1c80 = 0;
          uStack_1c78 = 0;
          if (*(uint *)(lVar3 + 0x14) < 0x24) {
LAB_1002951b3:
            *(bool *)(local_1ce8 + 0x6064) = bVar24;
            iVar13 = local_124a;
          }
          else {
            *(undefined8 *)((long)&local_38 + lVar5) = 0x1002950ee;
            cVar12 = FUN_1002711e9(lVar21,&local_1ca0);
            bVar24 = cVar12 != '\0';
            if ((char)local_1c6f == '\0') goto LAB_1002951b3;
            local_1d38 = (undefined4)local_1cb8;
            uStack_1d34 = local_1cb8._4_4_;
            uStack_1d30 = (undefined4)uStack_1cb0;
            uStack_1d2c = uStack_1cb0._4_4_;
            if (uStack_1cb0 != (long *)0x0) {
              LOCK();
              uStack_1cb0[1] = uStack_1cb0[1] + 1;
              UNLOCK();
            }
            *(undefined8 *)((long)&local_38 + lVar5) = 0x10029513c;
            iVar14 = FUN_1002994d8(&local_1d38,local_4b8,local_1cc8,0);
            *(undefined8 *)((long)&local_38 + lVar5) = 0x10029514a;
            FUN_10021e316(&local_1d38);
            iVar13 = local_124a;
            if (iVar14 != -0x80) {
              if (iVar14 == 0) {
                *(undefined8 *)((long)&local_38 + lVar5) = 0x10029516a;
                iVar14 = FUN_10026b3e0(local_4b8,&local_cb8);
                iVar13 = local_124a;
                if (iVar14 == -0x80) goto LAB_1002951c1;
                if (iVar14 == 0) {
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x100295185;
                  local_dc8 = FUN_10026b75e(local_4b8);
                  pcVar4 = *(code **)(*local_1cb8 + 0xe8);
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x1002951a3;
                  (*pcVar4)(local_1cb8,4);
                  *(uint *)(local_1cc0 + 0x10) = CONCAT22(uStack_ca6,uStack_ca8);
                  goto LAB_1002951b3;
                }
                *(undefined8 *)((long)&local_38 + lVar5) = 0x100295473;
                uVar19 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar5) = 0x100295483;
                cVar12 = _os_log_type_enabled(uVar19,0x10);
                iVar13 = local_124a;
              }
              else {
                *(undefined8 *)((long)&local_38 + lVar5) = 0x100295384;
                uVar19 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar5) = 0x100295394;
                cVar12 = _os_log_type_enabled(uVar19,0x10);
                iVar13 = local_124a;
              }
              local_124a = iVar14;
              if (cVar12 != '\0') {
                local_124c = 0x400;
                local_1254 = "Assertion failure";
                local_1258 = 0x8220202;
                *(undefined8 *)((long)&local_38 + lVar5) = 0x1002954d0;
                __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)",&local_1258,
                                    0x12);
                iVar13 = local_124a;
              }
            }
          }
LAB_1002951c1:
          local_124a = iVar13;
          uVar22 = ((ulong)*(uint *)(local_1cc0 + 0x20) * (ulong)local_1c90 * 1000) /
                   (ulong)*(uint *)(local_1cc0 + 0xc);
          if ((bVar24 != false) && ((char)local_1c6f == '\0')) {
            if ((int)uVar22 == 0) {
              uVar17 = 0;
            }
            else {
              uVar17 = (undefined4)((ulong)(uint)(local_1c8c << 3) / (uVar22 & 0xffffffff));
            }
            *(undefined4 *)(local_1cc0 + 0x10) = uVar17;
          }
          if ((local_1cf8 != 0) && (local_1c70 == '\0')) {
            *(undefined4 *)(&stack0xffffffffffffffd0 + lVar5) = 0x100;
            *(undefined8 *)((long)&local_38 + lVar5) = 0x1002952bd;
            FUN_100271810(local_1cf8,0,0,local_1d00 & 0xffffffff,local_1cd0 & 0xffffffff,
                          uVar22 & 0xffffffff);
          }
          if (param_14 != (int *)0x0) {
            *param_14 = (int)uVar22;
          }
          *(undefined8 *)((long)&local_38 + lVar5) = 0x1002952d0;
          FUN_1001c64c1(lVar21);
          *(undefined8 *)((long)&local_38 + lVar5) = 0x1002952e3;
          FUN_100203686(local_1d50,&local_1cb8);
          iVar13 = 0;
          goto LAB_1002947de;
        }
        *(undefined8 *)((long)&local_38 + lVar5) = 0x100295215;
        uVar19 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar5) = 0x100295225;
        cVar12 = _os_log_type_enabled(uVar19,0x10);
        if (cVar12 != '\0') {
          uStack_caa = (undefined2)iVar13;
          uStack_ca8 = (undefined2)((uint)iVar13 >> 0x10);
LAB_10029525f:
          uStack_cac = 0x400;
          uStack_cb0 = 1;
          uStack_cb4 = 0x7a0a90;
          uStack_cb5 = 8;
          cStack_cb6 = '\"';
          cStack_cb7 = '\x02';
          local_cb8 = '\x02';
          *(undefined8 *)((long)&local_38 + lVar5) = 0x100295272;
          __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)",&local_cb8,0x12);
        }
      }
    }
  }
  else {
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100294708;
    uVar19 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100294718;
    cVar12 = _os_log_type_enabled(uVar19,0x10);
    if (cVar12 != '\0') {
      uStack_caa = (undefined2)iVar13;
      uStack_ca8 = (undefined2)((uint)iVar13 >> 0x10);
LAB_100294988:
      uStack_cac = 0x400;
      uStack_cb0 = 1;
      uStack_cb4 = 0x7a0a90;
      uStack_cb5 = 8;
      cStack_cb6 = '\"';
      cStack_cb7 = '\x02';
      local_cb8 = '\x02';
      *(undefined8 *)((long)&local_38 + lVar5) = 0x10029499b;
      __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: err == (%d)",&local_cb8,0x12);
    }
LAB_100294770:
    lVar21 = 0;
  }
LAB_100294773:
  if (local_1cb8 != (long *)0x0) {
    pcVar4 = *(code **)(*local_1cb8 + 0x110);
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100294788;
    (*pcVar4)();
    pcVar4 = *(code **)(*local_1cb8 + 0x1d0);
    *(undefined8 *)((long)&local_38 + lVar5) = 0x100294798;
    (*pcVar4)();
    plVar2 = uStack_1cb0;
    local_1cb8 = (long *)0x0;
    uStack_1cb0 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      lVar20 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar20 == 0) {
        pcVar4 = *(code **)(*plVar2 + 0x10);
        *(undefined8 *)((long)&local_38 + lVar5) = 0x1002947c9;
        (*pcVar4)(plVar2);
        *(undefined8 *)((long)&local_38 + lVar5) = 0x1002947d1;
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  if (lVar21 != 0) {
    *(undefined8 *)((long)&local_38 + lVar5) = 0x1002947de;
    FUN_1001c64c1(lVar21);
  }
LAB_1002947de:
  if (uStack_1cb0 != (long *)0x0) {
    LOCK();
    plVar2 = uStack_1cb0 + 1;
    lVar20 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      pcVar4 = *(code **)(*uStack_1cb0 + 0x10);
      *(undefined8 *)((long)&local_38 + lVar5) = 0x100294805;
      (*pcVar4)(uStack_1cb0);
      *(undefined8 *)((long)&local_38 + lVar5) = 0x10029480d;
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar13;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)&local_38 + lVar5) = &UNK_1002954da;
  ___stack_chk_fail();
}

