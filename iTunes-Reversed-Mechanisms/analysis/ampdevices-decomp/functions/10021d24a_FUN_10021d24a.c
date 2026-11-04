// name: FUN_10021d24a
// address: 10021d24a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10021d24a(int param_1,long *param_2,int *param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined8 uVar13;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar14;
  long local_420 [43];
  char local_2c8 [12];
  undefined2 uStack_2bc;
  undefined2 uStack_2ba;
  undefined2 uStack_2b8;
  undefined2 uStack_2b6;
  undefined2 uStack_2b4;
  undefined2 uStack_2b2;
  undefined1 local_2b0 [632];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0x696e6974) {
    puVar11 = operator_new(0x4c8,(nothrow_t *)PTR_nothrow_10082c970);
    if (puVar11 == (undefined4 *)0x0) {
      uVar13 = FUN_1001cc310();
      cVar8 = _os_log_type_enabled(uVar13,0x10);
      if (cVar8 != '\0') {
        local_2c8[0] = '\x02';
        local_2c8[1] = '\x02';
        local_2c8[2] = '\"';
        local_2c8[3] = '\b';
        local_2c8[4] = -0x70;
        local_2c8[5] = '\n';
        local_2c8[6] = 'z';
        local_2c8[7] = '\0';
        local_2c8[8] = '\x01';
        local_2c8[9] = '\0';
        local_2c8[10] = '\0';
        local_2c8[0xb] = '\0';
        uStack_2bc = 0x822;
        uStack_2ba = 0xe9a;
        uStack_2b8 = 0x7b;
        uStack_2b6 = 1;
        uStack_2b4 = 0;
        __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_2c8,0x16);
      }
      FUN_1001782e9(0,0);
      uVar14 = 0xffffff94;
      goto LAB_10021d9e8;
    }
    *puVar11 = 0x61616368;
    *(undefined8 *)(puVar11 + 10) = 0;
    puVar11[0xc] = 0;
    *(undefined8 *)(puVar11 + 0xe) = 0;
    *(undefined8 *)(puVar11 + 0x100) = 0;
    *(undefined8 *)(puVar11 + 0x102) = 0x1f40000000000;
    *(undefined8 *)(puVar11 + 2) = 0;
    *(undefined8 *)(puVar11 + 4) = 0;
    *(undefined8 *)(puVar11 + 5) = 0;
    *(undefined8 *)(puVar11 + 7) = 0;
    *(undefined8 *)(puVar11 + 0xfb) = 0;
    *(undefined8 *)(puVar11 + 0xfd) = 0;
    *(undefined2 *)(puVar11 + 0x104) = 0;
    *(undefined8 *)(puVar11 + 0x130) = 0;
    puVar1 = puVar11 + 0xa6;
    *(undefined8 *)(puVar11 + 0x111) = 0;
    *(undefined8 *)(puVar11 + 0x113) = 0;
    puVar11[0x115] = 0;
    FUN_1001c62d9(puVar1,0x154);
    puVar11[0xa6] = 0;
    puVar2 = puVar11 + 0xa7;
    FUN_1001dfb1f("iTunesPlus",puVar2,0xff);
    puVar11[0x12e] = 0;
    *(undefined8 *)(puVar11 + 0x12a) = 0;
    *(undefined8 *)(puVar11 + 300) = 0;
    *(undefined8 *)(puVar11 + 0x126) = 0;
    *(undefined8 *)(puVar11 + 0x128) = 0;
    *(undefined8 *)(puVar11 + 0x122) = 0;
    *(undefined8 *)(puVar11 + 0x124) = 0;
    *(undefined8 *)(puVar11 + 0x11e) = 0;
    *(undefined8 *)(puVar11 + 0x120) = 0;
    *(undefined8 *)(puVar11 + 0x11a) = 0;
    *(undefined8 *)(puVar11 + 0x11c) = 0;
    *(undefined8 *)(puVar11 + 0x116) = 0;
    *(undefined8 *)(puVar11 + 0x118) = 0;
    *puVar11 = 0x61616368;
    lVar12 = param_2[4];
    *(long *)(puVar11 + 2) = param_2[3];
    *(long *)(puVar11 + 4) = lVar12;
    local_420[0] = 0;
    local_2c8[0] = s_cnea_caalppa_100718a80[0];
    local_2c8[1] = s_cnea_caalppa_100718a80[1];
    local_2c8[2] = s_cnea_caalppa_100718a80[2];
    local_2c8[3] = s_cnea_caalppa_100718a80[3];
    local_2c8[4] = s_cnea_caalppa_100718a80[4];
    local_2c8[5] = s_cnea_caalppa_100718a80[5];
    local_2c8[6] = s_cnea_caalppa_100718a80[6];
    local_2c8[7] = s_cnea_caalppa_100718a80[7];
    local_2c8[8] = s_cnea_caalppa_100718a80[8];
    local_2c8[9] = s_cnea_caalppa_100718a80[9];
    local_2c8[10] = s_cnea_caalppa_100718a80[10];
    local_2c8[0xb] = s_cnea_caalppa_100718a80[0xb];
    uStack_2bc = (undefined2)ram0x000100718a8c;
    uStack_2ba = (undefined2)((uint)ram0x000100718a8c >> 0x10);
    uStack_2b8 = 0;
    uStack_2b6 = 0;
    lVar12 = _AudioComponentFindNext(0);
    *(long *)(puVar11 + 6) = lVar12;
    if (lVar12 == 0) {
      uVar13 = FUN_1001cc310();
      cVar8 = _os_log_type_enabled(uVar13,0x10);
      if (cVar8 != '\0') {
        local_2c8[0] = '\x02';
        local_2c8[1] = '\x02';
        local_2c8[2] = '\"';
        local_2c8[3] = '\b';
        local_2c8[4] = -0x70;
        local_2c8[5] = '\n';
        local_2c8[6] = 'z';
        local_2c8[7] = '\0';
        local_2c8[8] = '\x01';
        local_2c8[9] = '\0';
        local_2c8[10] = '\0';
        local_2c8[0xb] = '\0';
        uStack_2bc = 0x822;
        uStack_2ba = 0xdba;
        uStack_2b8 = 0x7b;
        uStack_2b6 = 1;
        uStack_2b4 = 0;
        __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_2c8,0x16);
      }
      FUN_1001782e9(0,0);
      uVar14 = 0xffffffd5;
    }
    else {
      local_420[0] = 0;
      uVar9 = _AudioComponentInstanceNew(lVar12);
      uVar14 = (ulong)uVar9;
      if (uVar9 != 0xffffff80) {
        if (uVar9 == 0) {
          local_2c8[0] = '\0';
          local_2c8[1] = '\0';
          local_2c8[2] = '\0';
          local_2c8[3] = '\0';
          _AudioComponentGetVersion(*(undefined8 *)(puVar11 + 6));
          puVar11[8] = local_2c8._0_4_;
          uVar9 = _AudioCodecInitialize(local_420[0],0,0,0,0);
          uVar14 = (ulong)uVar9;
          if ((uVar9 != 0xffffff80) && (uVar9 != 0)) {
            uVar13 = FUN_1001cc310();
            cVar8 = _os_log_type_enabled(uVar13,0x10);
            if (cVar8 != '\0') {
              uStack_2ba = (undefined2)uVar9;
              uStack_2b8 = (undefined2)(uVar9 >> 0x10);
              goto LAB_10021de6e;
            }
          }
        }
        else {
          uVar13 = FUN_1001cc310();
          cVar8 = _os_log_type_enabled(uVar13,0x10);
          if (cVar8 != '\0') {
            uStack_2ba = (undefined2)uVar9;
            uStack_2b8 = (undefined2)(uVar9 >> 0x10);
LAB_10021de6e:
            uStack_2bc = 0x400;
            local_2c8[8] = '\x01';
            local_2c8[9] = '\0';
            local_2c8[10] = '\0';
            local_2c8[0xb] = '\0';
            local_2c8[4] = -0x70;
            local_2c8[5] = '\n';
            local_2c8[6] = 'z';
            local_2c8[7] = '\0';
            local_2c8[0] = '\x02';
            local_2c8[1] = '\x02';
            local_2c8[2] = '\"';
            local_2c8[3] = '\b';
            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",local_2c8,0x12);
          }
        }
      }
    }
    if (local_420[0] != 0) {
      _AudioComponentInstanceDispose();
    }
    iVar10 = (int)uVar14;
    if (iVar10 != -0x80) {
      if (iVar10 == 0) {
        lVar12 = FUN_1002cdd62(0x61616368);
        *(long *)(puVar11 + 10) = lVar12;
        if (lVar12 == 0) {
LAB_10021d833:
          *(undefined8 *)(puVar11 + 10) = 0;
          puVar11[0xc] = 0;
        }
        else {
          local_420[0] = 0;
          iVar10 = _AudioComponentInstanceNew(lVar12);
          if (iVar10 != -0x80) {
            if (iVar10 == 0) {
              local_2c8[0] = '\0';
              local_2c8[1] = '\0';
              local_2c8[2] = '\0';
              local_2c8[3] = '\0';
              _AudioComponentGetVersion(*(undefined8 *)(puVar11 + 10));
              puVar11[0xc] = local_2c8._0_4_;
              iVar10 = _AudioCodecInitialize(local_420[0],0,0,0,0);
              if ((iVar10 != -0x80) && (iVar10 != 0)) {
                uVar13 = FUN_1001cc310();
                cVar8 = _os_log_type_enabled(uVar13,0x10);
                if (cVar8 != '\0') {
                  uStack_2ba = (undefined2)iVar10;
                  uStack_2b8 = (undefined2)((uint)iVar10 >> 0x10);
                  goto LAB_10021df53;
                }
              }
            }
            else {
              uVar13 = FUN_1001cc310();
              cVar8 = _os_log_type_enabled(uVar13,0x10);
              if (cVar8 != '\0') {
                uStack_2ba = (undefined2)iVar10;
                uStack_2b8 = (undefined2)((uint)iVar10 >> 0x10);
LAB_10021df53:
                uStack_2bc = 0x400;
                local_2c8[8] = '\x01';
                local_2c8[9] = '\0';
                local_2c8[10] = '\0';
                local_2c8[0xb] = '\0';
                local_2c8[4] = -0x70;
                local_2c8[5] = '\n';
                local_2c8[6] = 'z';
                local_2c8[7] = '\0';
                local_2c8[0] = '\x02';
                local_2c8[1] = '\x02';
                local_2c8[2] = '\"';
                local_2c8[3] = '\b';
                __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",local_2c8,0x12
                                   );
              }
            }
          }
          if (local_420[0] != 0) {
            _AudioComponentInstanceDispose();
          }
          if (iVar10 != 0) goto LAB_10021d833;
        }
        ___bzero(puVar11 + 0x12,0x250);
        *(undefined8 *)(puVar11 + 0x10) = 0xfa0000000001;
        puVar11[0x12] = 0x1f400;
        *(undefined8 *)(puVar11 + 0x29) = 0x1f40000000001;
        puVar11[0x2b] = 0x3e800;
        puVar11[0x2d] = 0xac44;
        *(undefined8 *)(puVar11 + 0x2f) = 0x7f00000001;
        *(undefined8 *)(puVar11 + 0x42) = 0x7d0000000001;
        puVar11[0x44] = 64000;
        *(undefined **)(puVar11 + 0x46) = &DAT_100005622;
        *(undefined8 *)(puVar11 + 0x5b) = 0xfa0000000003;
        puVar11[0x5d] = 0x1f400;
        *(undefined8 *)(puVar11 + 0x74) = 0x1770000000003;
        puVar11[0x76] = 0x2ee00;
        *(undefined8 *)(puVar11 + 0x8d) = 0x1f40000000003;
        puVar11[0x8f] = 0x3e800;
        uVar13 = *(undefined8 *)(puVar11 + 2);
        UNRECOVERED_JUMPTABLE = *(code **)(puVar11 + 4);
        ___bzero(local_2b0,0x26c);
        uStack_2bc = SUB82(puVar1,0);
        uStack_2ba = (undefined2)((ulong)puVar1 >> 0x10);
        uStack_2b8 = (undefined2)((ulong)puVar1 >> 0x20);
        uStack_2b6 = (undefined2)((ulong)puVar1 >> 0x30);
        uStack_2b4 = 0x154;
        uStack_2b2 = 0;
        local_2c8[0] = '\n';
        local_2c8[1] = '\0';
        local_2c8[2] = '\0';
        local_2c8[3] = '\0';
        local_2c8[4] = '\t';
        local_2c8[5] = '\0';
        local_2c8[6] = '\0';
        local_2c8[7] = '\0';
        local_2c8[8] = -0x7c;
        local_2c8[9] = '\x02';
        local_2c8[10] = '\0';
        local_2c8[0xb] = '\0';
        iVar10 = (*UNRECOVERED_JUMPTABLE)(uVar13,0x67707266,local_2c8);
        if (iVar10 == 0) {
          uVar9 = *puVar1;
          *puVar1 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
          cVar8 = FUN_1001df7be("Best",puVar2,0);
          if (cVar8 != '\0') {
            FUN_1001c62d9(puVar1,0x154);
            puVar11[0xa6] = 0;
            FUN_1001dfb1f("iTunesPlus",puVar2,0xff);
            _memcpy(local_420,puVar1,0x154);
            local_420[0] = CONCAT44(local_420[0]._4_4_,
                                    (uint)local_420[0] >> 0x18 |
                                    ((uint)local_420[0] & 0xff0000) >> 8 |
                                    ((uint)local_420[0] & 0xff00) << 8 | (uint)local_420[0] << 0x18)
            ;
            uVar13 = *(undefined8 *)(puVar11 + 2);
            UNRECOVERED_JUMPTABLE = *(code **)(puVar11 + 4);
            ___bzero(local_2b0,0x26c);
            uStack_2bc = SUB82(local_420,0);
            uStack_2ba = (undefined2)((ulong)local_420 >> 0x10);
            uStack_2b8 = (undefined2)((ulong)local_420 >> 0x20);
            uStack_2b6 = (undefined2)((ulong)local_420 >> 0x30);
            uStack_2b4 = 0x154;
            uStack_2b2 = 0;
            local_2c8[0] = '\n';
            local_2c8[1] = '\0';
            local_2c8[2] = '\0';
            local_2c8[3] = '\0';
            local_2c8[4] = '\t';
            local_2c8[5] = '\0';
            local_2c8[6] = '\0';
            local_2c8[7] = '\0';
            local_2c8[8] = -0x7c;
            local_2c8[9] = '\x02';
            local_2c8[10] = '\0';
            local_2c8[0xb] = '\0';
            iVar10 = (*UNRECOVERED_JUMPTABLE)(uVar13,0x73707266,local_2c8);
            if ((iVar10 != -0x80) && (iVar10 != 0)) {
              uVar13 = FUN_1001cc310();
              cVar8 = _os_log_type_enabled(uVar13,0x10);
              if (cVar8 != '\0') {
                local_2c8[0] = '\x02';
                local_2c8[1] = '\x02';
                local_2c8[2] = '\"';
                local_2c8[3] = '\b';
                local_2c8[4] = -0x70;
                local_2c8[5] = '\n';
                local_2c8[6] = 'z';
                local_2c8[7] = '\0';
                local_2c8[8] = '\x01';
                local_2c8[9] = '\0';
                local_2c8[10] = '\0';
                local_2c8[0xb] = '\0';
                uStack_2bc = 0x400;
                uStack_2ba = (undefined2)iVar10;
                uStack_2b8 = (undefined2)((uint)iVar10 >> 0x10);
                __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",local_2c8,0x12
                                   );
              }
            }
          }
        }
        if (*puVar1 != 0) {
          uVar13 = FUN_1001cc310();
          cVar8 = _os_log_type_enabled(uVar13,0x10);
          if (cVar8 != '\0') {
            local_2c8[0] = '\x02';
            local_2c8[1] = '\x02';
            local_2c8[2] = '\"';
            local_2c8[3] = '\b';
            local_2c8[4] = -0x70;
            local_2c8[5] = '\n';
            local_2c8[6] = 'z';
            local_2c8[7] = '\0';
            local_2c8[8] = '\x01';
            local_2c8[9] = '\0';
            local_2c8[10] = '\0';
            local_2c8[0xb] = '\0';
            uStack_2bc = 0x822;
            uStack_2ba = 0xdf3;
            uStack_2b8 = 0x7b;
            uStack_2b6 = 1;
            uStack_2b4 = 0;
            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_2c8,0x16);
          }
          FUN_1001782e9(0,0);
          FUN_1001c62d9(puVar1,0x154);
          *puVar1 = 0;
          FUN_1001dfb1f("iTunesPlus",puVar2,0xff);
        }
      }
      else {
        uVar13 = FUN_1001cc310();
        cVar8 = _os_log_type_enabled(uVar13,0x10);
        uVar7 = uStack_2b8;
        uVar6 = uStack_2ba;
        uStack_2ba = (undefined2)uVar14;
        uVar4 = uStack_2ba;
        uStack_2b8 = (undefined2)(uVar14 >> 0x10);
        uVar5 = uStack_2b8;
        if (cVar8 != '\0') {
          local_2c8[0] = '\x02';
          local_2c8[1] = '\x02';
          local_2c8[2] = '\"';
          local_2c8[3] = '\b';
          local_2c8[4] = -0x70;
          local_2c8[5] = '\n';
          local_2c8[6] = 'z';
          local_2c8[7] = '\0';
          local_2c8[8] = '\x01';
          local_2c8[9] = '\0';
          local_2c8[10] = '\0';
          local_2c8[0xb] = '\0';
          uStack_2bc = 0x400;
          __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",local_2c8,0x12);
          uVar6 = uStack_2ba;
          uVar7 = uStack_2b8;
        }
        uStack_2b8 = uVar7;
        uStack_2ba = uVar6;
        if (iVar10 != 0) {
          uVar13 = FUN_1001cc310();
          cVar8 = _os_log_type_enabled(uVar13,0x10);
          if (cVar8 != '\0') {
            local_2c8[0] = '\x02';
            local_2c8[1] = '\x02';
            local_2c8[2] = '\"';
            local_2c8[3] = '\b';
            local_2c8[4] = -0x70;
            local_2c8[5] = '\n';
            local_2c8[6] = 'z';
            local_2c8[7] = '\0';
            local_2c8[8] = '\x01';
            local_2c8[9] = '\0';
            local_2c8[10] = '\0';
            local_2c8[0xb] = '\0';
            uStack_2bc = 0x400;
            uStack_2ba = uVar4;
            uStack_2b8 = uVar5;
            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",local_2c8,0x12);
          }
          goto LAB_10021d75b;
        }
      }
      *(undefined4 **)((long)param_2 + 0x2c) = puVar11;
      goto LAB_10021d9e5;
    }
LAB_10021d75b:
    FUN_10021c122(puVar11);
    operator_delete(puVar11);
  }
  else {
    if ((param_3 == (int *)0x0) || (*param_3 != 0x61616368)) {
      uVar13 = FUN_1001cc310();
      cVar8 = _os_log_type_enabled(uVar13,0x10);
      if (cVar8 != '\0') {
        local_2c8[0] = '\x02';
        local_2c8[1] = '\x02';
        local_2c8[2] = '\"';
        local_2c8[3] = '\b';
        local_2c8[4] = -0x70;
        local_2c8[5] = '\n';
        local_2c8[6] = 'z';
        local_2c8[7] = '\0';
        local_2c8[8] = '\x01';
        local_2c8[9] = '\0';
        local_2c8[10] = '\0';
        local_2c8[0xb] = '\0';
        uStack_2bc = 0x822;
        uStack_2ba = 0xe6a;
        uStack_2b8 = 0x7b;
        uStack_2b6 = 1;
        uStack_2b4 = 0;
        __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_2c8,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_10021d522;
    }
    plVar3 = (long *)*param_2;
    uVar14 = 0xfffffffc;
    if (param_1 < 0x66696e65) {
      if (param_1 < 0x636e7463) {
        if (param_1 != 0x636c7220) {
          if (param_1 == 0x636e6667) {
            uVar14 = FUN_10021c40e(param_3,(long)param_2 + 0xc);
            return uVar14;
          }
          goto LAB_10021d9e8;
        }
        if (plVar3 != (long *)0x0) {
          uVar13 = FUN_1001cc310();
          cVar8 = _os_log_type_enabled(uVar13,0x10);
          if (cVar8 != '\0') {
            local_2c8[0] = '\x02';
            local_2c8[1] = '\x02';
            local_2c8[2] = '\"';
            local_2c8[3] = '\b';
            local_2c8[4] = -0x70;
            local_2c8[5] = '\n';
            local_2c8[6] = 'z';
            local_2c8[7] = '\0';
            local_2c8[8] = '\x01';
            local_2c8[9] = '\0';
            local_2c8[10] = '\0';
            local_2c8[0xb] = '\0';
            uStack_2bc = 0x822;
            uStack_2ba = 0xead;
            uStack_2b8 = 0x7b;
            uStack_2b6 = 1;
            uStack_2b4 = 0;
            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_2c8,0x16);
          }
          FUN_1001782e9(0,0);
        }
        if (*(long *)(param_3 + 0xe) != 0) {
          _AudioComponentInstanceDispose();
          param_3[0xe] = 0;
          param_3[0xf] = 0;
        }
        FUN_10021c122(param_3);
        operator_delete(param_3);
      }
      else if (param_1 == 0x636e7463) {
        *(undefined4 *)((long)param_2 + 0xc) = 4;
      }
      else {
        if (param_1 != 0x636f6e66) {
          if (param_1 == 0x656e6364) {
            if (plVar3 != (long *)0x0) {
              FUN_10021e0e2(param_3,(long)param_2 + 0xc);
              UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x20);
              if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) goto LAB_10021dca5;
              goto LAB_10021e0af;
            }
            uVar13 = FUN_1001cc310();
            cVar8 = _os_log_type_enabled(uVar13,0x10);
            if (cVar8 != '\0') {
              local_2c8[0] = '\x02';
              local_2c8[1] = '\x02';
              local_2c8[2] = '\"';
              local_2c8[3] = '\b';
              local_2c8[4] = -0x70;
              local_2c8[5] = '\n';
              local_2c8[6] = 'z';
              local_2c8[7] = '\0';
              local_2c8[8] = '\x01';
              local_2c8[9] = '\0';
              local_2c8[10] = '\0';
              local_2c8[0xb] = '\0';
              uStack_2bc = 0x822;
              uStack_2ba = 0xe43;
              uStack_2b8 = 0x7b;
              uStack_2b6 = 1;
              uStack_2b4 = 0;
              __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_2c8,0x16)
              ;
            }
            FUN_1001782e9(0,0);
            goto LAB_10021d522;
          }
          goto LAB_10021d9e8;
        }
        FUN_10021c5cc(param_3,(long)param_2 + 0xc);
      }
    }
    else if (param_1 < 0x73646366) {
      if (param_1 == 0x66696e65) {
        if (plVar3 != (long *)0x0) {
          UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 0x28);
          if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
LAB_10021dca5:
                    /* WARNING: Could not recover jumptable at 0x00010021dcbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar14 = (*UNRECOVERED_JUMPTABLE)(plVar3,(long)param_2 + 0xc);
            return uVar14;
          }
          goto LAB_10021e0af;
        }
        uVar13 = FUN_1001cc310();
        cVar8 = _os_log_type_enabled(uVar13,0x10);
        if (cVar8 != '\0') {
          local_2c8[0] = '\x02';
          local_2c8[1] = '\x02';
          local_2c8[2] = '\"';
          local_2c8[3] = '\b';
          local_2c8[4] = -0x70;
          local_2c8[5] = '\n';
          local_2c8[6] = 'z';
          local_2c8[7] = '\0';
          local_2c8[8] = '\x01';
          local_2c8[9] = '\0';
          local_2c8[10] = '\0';
          local_2c8[0xb] = '\0';
          uStack_2bc = 0x822;
          uStack_2ba = 0xe43;
          uStack_2b8 = 0x7b;
          uStack_2b6 = 1;
          uStack_2b4 = 0;
          __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_2c8,0x16);
        }
        FUN_1001782e9(0,0);
LAB_10021d522:
        uVar14 = 0xffffffce;
        goto LAB_10021d9e8;
      }
      if (param_1 != 0x67646366) {
        if (param_1 == 0x69636e66) {
          uVar14 = FUN_10021c9c8((long)param_2 + 0xc);
          return uVar14;
        }
        goto LAB_10021d9e8;
      }
      FUN_1001dfc9d(param_3 + 0xa7,*(undefined8 *)((long)param_2 + 0xc));
    }
    else {
      if (param_1 != 0x73646366) {
        if (param_1 != 0x73746f70) {
          if (param_1 == 0x73747274) {
            uVar14 = FUN_10021cc8a(param_3,(long)param_2 + 0xc,param_2);
            return uVar14;
          }
          goto LAB_10021d9e8;
        }
        if (plVar3 != (long *)0x0) {
          uVar9 = (**(code **)(*plVar3 + 0x30))(plVar3,(long)param_2 + 0xc);
          (**(code **)(*plVar3 + 8))(plVar3);
          *param_2 = 0;
          if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
            return (ulong)uVar9;
          }
          goto LAB_10021e0af;
        }
        uVar13 = FUN_1001cc310();
        cVar8 = _os_log_type_enabled(uVar13,0x10);
        if (cVar8 != '\0') {
          local_2c8[0] = '\x02';
          local_2c8[1] = '\x02';
          local_2c8[2] = '\"';
          local_2c8[3] = '\b';
          local_2c8[4] = -0x70;
          local_2c8[5] = '\n';
          local_2c8[6] = 'z';
          local_2c8[7] = '\0';
          local_2c8[8] = '\x01';
          local_2c8[9] = '\0';
          local_2c8[10] = '\0';
          local_2c8[0xb] = '\0';
          uStack_2bc = 0x822;
          uStack_2ba = 0xe43;
          uStack_2b8 = 0x7b;
          uStack_2b6 = 1;
          uStack_2b4 = 0;
          __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",local_2c8,0x16);
        }
        FUN_1001782e9(0,0);
        goto LAB_10021d522;
      }
      FUN_10021cb50(param_3,*(undefined8 *)((long)param_2 + 0xc));
    }
LAB_10021d9e5:
    uVar14 = 0;
  }
LAB_10021d9e8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar14;
  }
LAB_10021e0af:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

