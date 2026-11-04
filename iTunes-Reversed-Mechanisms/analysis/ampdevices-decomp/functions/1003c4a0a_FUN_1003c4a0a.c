// name: FUN_1003c4a0a
// address: 1003c4a0a

int FUN_1003c4a0a(long *param_1,long param_2,undefined8 param_3,long param_4,int *param_5)

{
  long *plVar1;
  double *pdVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  uint uVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  char cVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  byte bVar17;
  undefined8 *puVar18;
  uint *puVar20;
  undefined1 auVar21 [16];
  undefined4 local_1d18 [2];
  undefined8 local_1d10;
  undefined1 uStack_1d08;
  undefined7 uStack_1d07;
  undefined1 uStack_1d00;
  undefined8 uStack_1cff;
  undefined8 local_1cf4;
  undefined8 local_1ce8;
  long lStack_1ce0;
  undefined8 local_1cd8;
  undefined8 uStack_1cd0;
  undefined4 local_1cc8;
  undefined8 local_1cc0;
  undefined8 uStack_1cb8;
  undefined8 *local_1cb0;
  undefined4 uStack_1ca8;
  undefined4 uStack_1ca4;
  undefined4 uStack_1ca0;
  undefined8 uStack_1c9c;
  undefined8 local_1c90;
  undefined8 uStack_1c88;
  undefined1 local_1c80 [40];
  undefined2 local_1c58;
  undefined8 local_1c50;
  undefined6 uStack_1c48;
  undefined2 uStack_1c42;
  undefined6 uStack_1c40;
  undefined8 local_1c38;
  undefined1 uStack_1c30;
  undefined7 uStack_1c2f;
  undefined1 uStack_1c28;
  undefined8 uStack_1c27;
  undefined8 local_1c14;
  ulong *local_1be0;
  undefined4 local_1bd8;
  undefined4 uStack_1bd4;
  undefined4 uStack_1bd0;
  undefined4 uStack_1bcc;
  double local_1bc0 [3];
  undefined4 local_1ba4;
  undefined8 local_1b98;
  undefined8 uStack_1b90;
  undefined4 local_1b7c;
  ulong local_1b78;
  undefined8 local_1b70;
  undefined8 local_1b68;
  long local_1b60;
  ulong local_1b58;
  undefined8 local_1b50;
  ulong local_1b48;
  ulong local_1b40;
  int *local_1b38;
  undefined4 local_1b2c;
  undefined4 local_1b28;
  undefined4 uStack_1b24;
  undefined4 uStack_1b20;
  undefined2 local_1b1c;
  int local_1b1a;
  undefined4 local_1b08;
  char *local_1b04;
  undefined2 local_1afc;
  char *local_1afa;
  undefined8 local_1ad8;
  undefined8 uStack_1ad0;
  undefined4 local_7f8;
  undefined8 local_7f0;
  undefined8 uStack_7e8;
  undefined8 local_7e0;
  undefined8 uStack_7d8;
  undefined8 local_7d0;
  undefined8 uStack_7c8;
  undefined8 local_7c0;
  undefined4 uStack_7b8;
  undefined4 uStack_7b4;
  undefined4 uStack_7b0;
  undefined8 uStack_7ac;
  undefined8 local_7a0;
  undefined8 uStack_798;
  undefined8 local_790;
  undefined8 uStack_788;
  code *local_1e0;
  undefined1 local_1d8 [48];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_180 [16];
  long *local_170;
  undefined8 uStack_40;
  long local_38;
  ulong uVar19;
  
  uStack_40 = 0x1003c4a22;
  auVar21 = FUN_100108310();
  puVar20 = auVar21._8_8_;
  lVar8 = -auVar21._0_8_;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_1b60 = 0;
  *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c4a61;
  lVar15 = param_4;
  local_1b38 = param_5;
  ___bzero(local_180,0x148);
  local_1d18[0] = 0;
  local_1cf4 = 0;
  local_1d10 = 0;
  uStack_1d08 = 0;
  uStack_1d07 = 0;
  uStack_1d00 = 0;
  uStack_1cff = 0;
  local_1ce8 = 0;
  lStack_1ce0 = 0;
  local_1cd8 = 0;
  uStack_1cd0 = 0;
  local_1cc8 = 0;
  local_1cc0 = 0;
  uStack_1cb8 = 0;
  local_1cb0 = (undefined8 *)0x0;
  uStack_1ca8 = 0;
  uStack_1ca4 = 0;
  uStack_1ca0 = 0;
  uStack_1c9c = 0;
  local_1c90 = 0;
  uStack_1c88 = 0;
  *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c4aa8;
  FUN_1001c62d9(local_1c80,0x28);
  local_1c58 = 0;
  local_1c50 = 0;
  uStack_1c48 = 0;
  uStack_1c42 = 0;
  uStack_1c40 = 0;
  local_1c38 = 0;
  uStack_1c30 = 0;
  uStack_1c2f = 0;
  uStack_1c28 = 0;
  uStack_1c27 = 0;
  local_1b98 = (long *)0x0;
  uStack_1b90 = (long *)0x0;
  if ((*puVar20 & 2) != 0) {
    pcVar6 = *(code **)(*param_1 + 0x2a8);
    *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c4b38;
    iVar12 = (*pcVar6)(param_1,param_2,puVar20,param_4,local_1b38);
    goto LAB_1003c5212;
  }
  pcVar6 = *(code **)(*param_1 + 0x10);
  *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c4aeb;
  cVar10 = (*pcVar6)(param_1);
  if (cVar10 == '\x12') {
    *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c4af4;
    uVar14 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c4b04;
    cVar10 = _os_log_type_enabled(uVar14,0x10);
    if (cVar10 != '\0') {
      local_1b08 = 0x8220202;
      local_1b04 = "Assertion failure";
      local_1afc = 0x822;
      local_1afa = "this->GetPossiblyVirtualHandlerID() != kITCoreMediaPlayerPluginID";
      *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c5131;
      __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_1b08,0x16);
    }
    iVar12 = 0x2355;
    *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c4b1a;
    FUN_1001782e9(0,0);
    goto LAB_1003c5212;
  }
  local_1b60 = param_2;
  if (param_2 == 0) {
    local_1b60 = 0;
    *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c4b82;
    iVar12 = FUN_1001ed0ff(&local_1b60,0,"");
    if (iVar12 == -0x80) goto LAB_1003c5212;
    if (iVar12 != 0) {
      *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c4b96;
      uVar14 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c4ba6;
      cVar10 = _os_log_type_enabled(uVar14,0x10);
      if (cVar10 != '\0') {
        local_1b08 = 0x8220202;
        local_1b04 = "Assertion failure";
        local_1afc = 0x400;
        local_1afa = (char *)CONCAT44(local_1afa._4_4_,iVar12);
        *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c4bf3;
        __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: err == (%d)",&local_1b08,0x12);
      }
      goto LAB_1003c5212;
    }
  }
  uVar5 = *puVar20;
  if ((uVar5 & 4) == 0) {
    local_1b2c = 0;
  }
  else {
    lVar15 = CONCAT71((int7)((ulong)lVar15 >> 8),(byte)puVar20[4] != 0);
    local_1b2c = (undefined4)lVar15;
  }
  if ((uVar5 & 8) == 0) {
    local_1b50 = (ulong)local_1b50._4_4_ << 0x20;
  }
  else {
    local_1b50 = CONCAT44(local_1b50._4_4_,
                          (int)CONCAT71((int7)((ulong)lVar15 >> 8),(byte)puVar20[4] != 0));
  }
  local_1b78 = 0;
  local_1b40 = 0;
  local_1b48 = 0;
  local_1d18[0] = 0x42c101;
  local_1cf4 = 0;
  local_1ce8 = 0;
  lStack_1ce0 = local_1b60;
  if ((uVar5 & 1) != 0) {
    *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c4c7f;
    FUN_1001c62d9(&local_1c14,0x34);
    pcVar6 = *(code **)(*param_1 + 0xf0);
    *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c4c96;
    local_1cb0 = &local_1c14;
    iVar12 = (*pcVar6)(param_1);
    if ((iVar12 == 0) && (((int)local_1c14 != 0x6954756e || (local_1c14._4_4_ != 0x4e4f524d)))) {
      *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c4cbf;
      cVar10 = FUN_1001ee041();
      if (cVar10 == '\0') {
        local_1ad8 = 0;
        uStack_1ad0 = 0;
        local_7f8 = 0;
        local_7f0 = 0;
        uStack_7e8 = 0;
        local_7e0 = 0;
        uStack_7d8 = 0;
        local_7d0 = 0;
        uStack_7c8 = 0;
        local_7c0 = 0;
        uStack_7b8 = 0;
        uStack_7b4 = 0;
        uStack_7b0 = 0;
        uStack_7ac = 0;
        local_7a0 = 0;
        uStack_798 = 0;
        local_790 = 0;
        uStack_788 = 0;
        local_1a8 = 0;
        uStack_1a0 = 0;
        pcVar6 = *(code **)(*param_1 + 0x248);
        *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c4d22;
        lVar15 = (*pcVar6)(param_1);
        if (lVar15 != 0) {
          local_1b7c = 0;
          local_1b68 = 0;
          uVar4 = *(undefined2 *)(lVar15 + 0x56);
          uVar3 = *(undefined4 *)(lVar15 + 0x50);
          *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c4d5d;
          FUN_10015d841(uVar3,uVar4,1,local_1bc0);
          *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c4d78;
          iVar12 = FUN_1002e8de0((long)local_1bc0[0],local_1ba4,&local_1b70);
          if (iVar12 == 0) {
            *(undefined4 *)(&stack0xffffffffffffffe0 + lVar8) = 0;
            *(undefined4 *)(&stack0xffffffffffffffd8 + lVar8) = 0;
            *(undefined4 **)(&stack0xffffffffffffffd0 + lVar8) = &local_1b08;
            *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c4db8;
            iVar12 = FUN_1005f3e48(1,0,lVar15,local_1bc0,0x400,local_1b60);
            if (iVar12 == 0) {
              local_1b08 = 1;
              local_1e0 = FUN_1003c56ef;
              uVar14 = *(undefined8 *)(puVar20 + 2);
              *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c4df9;
              FUN_1001ceabd(local_1d8,0,FUN_1003c57e3,local_1b70,0,uVar14);
              *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c4e05;
              iVar13 = FUN_1005f4971(&local_1b08);
              iVar12 = 0;
              if (iVar13 != -0x27) {
                iVar12 = iVar13;
              }
              if ((iVar12 != -0x80) && (iVar12 != 0)) {
                *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c4e1b;
                local_1b58 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c4e2f;
                cVar10 = _os_log_type_enabled(local_1b58,0x10);
                if (cVar10 != '\0') {
                  local_1b28 = 0x8220202;
                  uStack_1b24 = 0x7a0a90;
                  uStack_1b20 = 1;
                  local_1b1c = 0x400;
                  *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c5683;
                  local_1b1a = iVar12;
                  __os_log_error_impl(0x100000000,local_1b58,0x10,"%{public}s: err == (%d)",
                                      &local_1b28,0x12);
                }
              }
              *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c4e43;
              FUN_1005f47a7(&local_1b08);
              if (iVar12 == 0) {
                *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c4e70;
                iVar12 = FUN_1002e9f72(local_1b70,local_1ba4,0x6954756e,&local_1b68,&local_1b7c);
                if (iVar12 == 0) {
                  local_1c14 = 0x4e4f524d6954756e;
                  *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c4e91;
                  lVar15 = FUN_100170f7f(local_1b68);
                  *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c4ea0;
                  iVar12 = FUN_100170ef7(local_1b68);
                  *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c4ebe;
                  iVar12 = FUN_1003a92b4(lVar15 + 0xc,iVar12 + -0xc,&local_1c14);
                  puVar18 = (undefined8 *)0x0;
                  if (iVar12 == 0) {
                    puVar18 = &local_1c14;
                  }
                  *(undefined8 **)(param_4 + 0x28) = puVar18;
                  *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c4ed6;
                  FUN_10017060f(local_1b68);
                }
              }
            }
            *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c4ee2;
            FUN_1002ea25a(local_1b70);
          }
        }
        *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c4eee;
        FUN_100235b24(&local_790);
        *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c4efa;
        FUN_100235b24(&local_1ad8);
      }
    }
    pcVar6 = *(code **)(*param_1 + 0xf8);
    *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c4f06;
    (*pcVar6)(param_1);
    local_1cb0 = (undefined8 *)0x0;
  }
  pcVar6 = *(code **)(*param_1 + 0xf0);
  *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c4f24;
  iVar12 = (*pcVar6)(param_1,local_1d18);
  if (iVar12 != 0) goto LAB_1003c51ed;
  bVar11 = (byte)local_1b2c;
  bVar17 = bVar11 | (byte)local_1b50;
  uVar19 = (ulong)bVar17;
  local_1b58 = CONCAT71(local_1b58._1_7_,bVar17);
  if ((bVar17 & 1) == 0) {
LAB_1003c4f99:
    if (bVar11 != 0) {
      pcVar6 = *(code **)(*param_1 + 0xa0);
      *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c4fb6;
      iVar12 = (*pcVar6)(param_1,0,0,0,&local_1b40);
      if (iVar12 == 0) {
        pcVar6 = *(code **)(*param_1 + 0xa0);
        *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c4fdc;
        iVar12 = (*pcVar6)(param_1,0xffffffff,0,0,&local_1b48);
        if (iVar12 == 0) {
          uVar16 = local_1b48 - local_1b40;
          uVar19 = local_1b58 & 0xff;
          goto LAB_1003c5020;
        }
      }
      goto LAB_1003c51e1;
    }
    if ((byte)local_1b50 != '\0') {
      local_1b40 = 0;
      local_1b48 = local_1b78;
    }
    uVar16 = 0;
LAB_1003c5020:
    if ((*puVar20 & 1) != 0) {
      local_1b28 = 0;
      uStack_1b24 = 0;
      plVar1 = (long *)(local_1b38 + 0x10);
      local_1be0 = (ulong *)(local_1b38 + 0x12);
      pcVar6 = *(code **)(*param_1 + 0x1e8);
      *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c51d7;
      local_1b50 = uVar16;
      iVar12 = (*pcVar6)(param_1,param_4);
      if (iVar12 == 0) {
        if ((char)local_1b2c == '\0') {
LAB_1003c5456:
          pcVar6 = *(code **)(*param_1 + 0xf8);
          *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c5462;
          (*pcVar6)(param_1);
          *(ulong *)(local_1b38 + 2) = local_1b40;
          *(ulong *)(local_1b38 + 4) = local_1b48;
          if ((local_1b58 & 1) != 0) {
            uVar5 = puVar20[4];
            *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c549a;
            FUN_100179732((byte)uVar5,local_1bc0);
            lVar15 = *plVar1;
            *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c54b6;
            FUN_10017983e(local_1bc0[0],(local_1b40 & 0xffffffff) + lVar15,local_1b50 & 0xffffffff);
            *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c54cd;
            FUN_1001799f1(local_1bc0[0],local_1b38 + 6);
            *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c54d9;
            FUN_100179a7b(local_1bc0[0]);
          }
LAB_1003c54d9:
          iVar12 = 0;
          goto LAB_1003c51ed;
        }
        local_1b40 = CONCAT44(uStack_1b24,local_1b28);
        local_1b48 = local_1b40 + local_1b50;
        if (CARRY8(local_1b40,local_1b50)) {
          *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c531a;
          uVar14 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c532a;
          cVar10 = _os_log_type_enabled(uVar14,0x10);
          if (cVar10 != '\0') {
            local_1afa = "startByteOffset <= endByteOffset";
LAB_1003c5610:
            local_1afc = 0x822;
            local_1b04 = "Assertion failure";
            local_1b08 = 0x8220202;
            *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c5635;
            __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_1b08,0x16)
            ;
          }
        }
        else {
          if (local_1b48 <= *local_1be0) goto LAB_1003c5456;
          *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c542b;
          uVar14 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c543b;
          cVar10 = _os_log_type_enabled(uVar14,0x10);
          if (cVar10 != '\0') {
            local_1afa = "endByteOffset <= outResults->trackByteCount";
            goto LAB_1003c5610;
          }
        }
        iVar12 = -0xd0;
        *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c5451;
        FUN_1001782e9(0,0);
      }
      goto LAB_1003c51e1;
    }
    local_1b38[0x10] = 0;
    local_1b38[0x11] = 0;
    local_1b38[0x12] = 0;
    local_1b38[0x13] = 0;
    if (local_1b78 < local_1b48) {
      local_1b48 = local_1b78;
    }
    if (local_1b48 < local_1b40) {
      local_1b40 = local_1b48;
    }
    plVar1 = (long *)(local_1b38 + 0x10);
    pdVar2 = (double *)(local_1b38 + 0x12);
    *(ulong *)(local_1b38 + 2) = local_1b40;
    *(ulong *)(local_1b38 + 4) = local_1b48;
    if ((uVar19 & 1) != 0) {
      local_1bd8 = (undefined4)local_1b98;
      uStack_1bd4 = local_1b98._4_4_;
      uStack_1bd0 = (undefined4)uStack_1b90;
      uStack_1bcc = uStack_1b90._4_4_;
      if (uStack_1b90 != (long *)0x0) {
        LOCK();
        uStack_1b90[1] = uStack_1b90[1] + 1;
        UNLOCK();
      }
      uVar5 = puVar20[4];
      *(int **)(&stack0xffffffffffffffd0 + lVar8) = local_1b38 + 6;
      *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c50d2;
      iVar12 = FUN_1003c3df8(&local_1bd8,local_1b40,local_1b48,plVar1,pdVar2,(byte)uVar5);
      *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c50e0;
      FUN_10021e316(&local_1bd8);
      goto LAB_1003c51e1;
    }
    if (*(int *)((long)param_1 + 0x1c) == 0x4d46494c) {
      lVar15 = param_1[0x8f];
      *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c52b2;
      lVar15 = FUN_1001c63e1((int)lVar15);
      *plVar1 = lVar15;
      if (lVar15 == 0) {
        *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c53ef;
        uVar14 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c53ff;
        cVar10 = _os_log_type_enabled(uVar14,0x10);
        if (cVar10 != '\0') {
          local_1b08 = 0x8220202;
          local_1b04 = "Assertion failure";
          local_1afc = 0x822;
          local_1afa = "outResults->trackBytes != __null";
          *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c55e4;
          __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_1b08,0x16);
        }
        iVar12 = -0x6c;
        *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c5415;
        FUN_1001782e9(0,0);
      }
      else {
        lVar7 = param_1[0x8e];
        lVar9 = param_1[0x8f];
        *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c52d4;
        FUN_1001c631b(lVar7,lVar15,(int)lVar9);
        *pdVar2 = (double)(ulong)*(uint *)(param_1 + 0x8f);
        iVar12 = 0;
      }
      goto LAB_1003c51e1;
    }
    local_1bc0[0] = 0.0;
    pcVar6 = *(code **)(*param_1 + 0xf8);
    *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c5375;
    (*pcVar6)(param_1);
    if (*(int *)((long)param_1 + 0x1c) == 0x46494c45) {
      *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c5397;
      iVar12 = FUN_100180bd2((long)param_1 + 0x4c,plVar1,local_1bc0,0);
      if (iVar12 != -0x80) {
        if (iVar12 == 0) {
          *pdVar2 = local_1bc0[0];
          goto LAB_1003c54d9;
        }
        *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c54e5;
        uVar14 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c54f5;
        cVar10 = _os_log_type_enabled(uVar14,0x10);
        if (cVar10 != '\0') {
          local_1b08 = 0x8220202;
          local_1b04 = "Assertion failure";
          local_1afc = 0x400;
          local_1afa = (char *)CONCAT44(local_1afa._4_4_,iVar12);
          *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c5542;
          __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: err == (%d)",&local_1b08,0x12);
        }
      }
    }
    else {
      *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c53bf;
      uVar14 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c53cf;
      cVar10 = _os_log_type_enabled(uVar14,0x10);
      if (cVar10 != '\0') {
        local_1b08 = 0x8220202;
        local_1b04 = "Assertion failure";
        local_1afc = 0x822;
        local_1afa = "mTrackKind == kITFileKind";
        *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c5593;
        __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_1b08,0x16);
      }
      iVar12 = -0x32;
      *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c53e5;
      FUN_1001782e9(0,0);
    }
  }
  else {
    pcVar6 = *(code **)(*param_1 + 0x20);
    *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c4f59;
    iVar12 = (*pcVar6)(param_1,0,&local_1b98);
    if (iVar12 != -0x80) {
      if (iVar12 == 0) {
        pcVar6 = *(code **)(*local_1b98 + 0x100);
        *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c4f83;
        iVar12 = (*pcVar6)(local_1b98,&local_1b78);
        bVar11 = (byte)local_1b2c;
        uVar19 = local_1b58 & 0xff;
        if (iVar12 == 0) goto LAB_1003c4f99;
      }
      else {
        *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c513b;
        uVar14 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c514b;
        cVar10 = _os_log_type_enabled(uVar14,0x10);
        if (cVar10 != '\0') {
          local_1b08 = 0x8220202;
          local_1b04 = "Assertion failure";
          local_1afc = 0x400;
          local_1afa = (char *)CONCAT44(local_1afa._4_4_,iVar12);
          *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c5198;
          __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: err == (%d)",&local_1b08,0x12);
        }
      }
    }
LAB_1003c51e1:
    pcVar6 = *(code **)(*param_1 + 0xf8);
    *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c51ed;
    (*pcVar6)(param_1);
  }
LAB_1003c51ed:
  if (local_1b60 != param_2 && local_1b60 != 0) {
    *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c5209;
    FUN_1001ed1fc();
  }
  *local_1b38 = iVar12;
LAB_1003c5212:
  if (uStack_1b90 != (long *)0x0) {
    LOCK();
    plVar1 = uStack_1b90 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      pcVar6 = *(code **)(*uStack_1b90 + 0x10);
      *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c5239;
      (*pcVar6)(uStack_1b90);
      *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c5241;
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_170 != (long *)0x0) {
    LOCK();
    plVar1 = local_170 + 1;
    lVar15 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar15 == 0) {
      pcVar6 = *(code **)(*local_170 + 0x10);
      *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c5268;
      (*pcVar6)(local_170);
      *(undefined8 *)((long)&local_38 + lVar8) = 0x1003c5270;
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)&local_38 + lVar8) = &UNK_1003c568d;
    ___stack_chk_fail();
  }
  return iVar12;
}

