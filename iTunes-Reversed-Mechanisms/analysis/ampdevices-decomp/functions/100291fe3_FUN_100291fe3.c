// name: FUN_100291fe3
// address: 100291fe3

/* WARNING: Type propagation algorithm not settling */

int FUN_100291fe3(long param_1,int *param_2)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  code *pcVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  char *pcVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  uint uVar16;
  float fVar17;
  uint local_19d4 [15];
  undefined8 local_1998;
  undefined8 uStack_1990;
  long *local_1988;
  undefined8 uStack_1980;
  undefined8 local_1978;
  undefined8 uStack_1970;
  undefined8 local_1968;
  undefined8 uStack_1960;
  undefined8 local_1958;
  undefined8 uStack_1950;
  undefined8 local_1948;
  undefined8 uStack_1940;
  undefined8 local_1938;
  undefined8 uStack_1930;
  undefined8 local_1928;
  undefined8 uStack_1920;
  ulong local_1918;
  ulong uStack_1910;
  undefined8 local_1900;
  undefined4 local_18f8;
  int local_18f4;
  undefined8 local_18f0;
  int local_18e8;
  undefined8 local_18e0;
  undefined1 local_18d6 [14];
  undefined4 local_18c8;
  undefined4 uStack_18c4;
  undefined4 uStack_18c0;
  undefined4 uStack_18bc;
  undefined4 local_18b8;
  undefined4 uStack_18b4;
  undefined4 uStack_18b0;
  undefined4 uStack_18ac;
  undefined1 local_18a4 [4];
  undefined1 local_18a0 [8];
  undefined4 local_1898;
  undefined4 uStack_1894;
  undefined4 uStack_1890;
  undefined4 uStack_188c;
  undefined8 local_1888;
  undefined8 uStack_1880;
  ulong local_1878;
  long *local_1870;
  long *local_1868;
  uint local_1860 [3];
  undefined4 local_1854;
  ulong local_1850;
  ulong local_1848;
  ulong local_1840;
  ulong local_1838;
  long local_1830;
  ulong local_1828;
  ulong local_1820;
  ulong local_1818;
  long local_1810;
  ulong local_1808;
  undefined4 local_1800;
  byte local_17f9;
  undefined4 local_17f8;
  char *local_17f4;
  undefined2 local_17ec;
  int local_17ea;
  undefined4 local_17d8;
  char *local_17d4;
  undefined2 local_17cc;
  char *local_17ca;
  undefined1 local_178;
  int local_177;
  undefined4 uStack_173;
  short local_16f;
  long local_78;
  undefined1 local_70 [48];
  long local_40;
  long local_38;
  
  local_40 = 0x100291ffb;
  lVar10 = FUN_100108310();
  lVar10 = -lVar10;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_1918 = 0;
  uStack_1910 = 0;
  local_1928 = 0;
  uStack_1920 = 0;
  local_1938 = 0;
  uStack_1930 = 0;
  local_1948 = 0;
  uStack_1940 = 0;
  local_1958 = 0;
  uStack_1950 = 0;
  local_1968 = 0;
  uStack_1960 = 0;
  local_1978 = 0;
  uStack_1970 = 0;
  local_1988 = (long *)0x0;
  uStack_1980 = 0;
  local_1998 = 0;
  uStack_1990 = 0;
  local_17f9 = 0;
  local_1860[1] = 0;
  if (*(char *)(param_1 + 0xd21) == '\x01') {
    if ((*param_2 == 0x46494c45) || (*param_2 == 0x4d46494c)) {
      if (*(long *)(param_1 + 0xca8) == 0) {
        *(undefined8 *)((long)&local_38 + lVar10) = 0x100292477;
        uVar11 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar10) = 0x100292487;
        cVar6 = _os_log_type_enabled(uVar11,0x10);
        if (cVar6 != '\0') {
          local_17ca = "connectionData->dataHandler != nullptr";
          goto LAB_1002924f8;
        }
      }
      else {
        if (*(long *)(param_2 + 8) != 0) {
          *(undefined8 *)((long)&local_38 + lVar10) = 0x1002920b1;
          FUN_1001c62d9(&local_178,0x100);
          *(undefined8 *)((long)&local_38 + lVar10) = 0x1002920bf;
          FUN_1001c62d9(&local_78,0x40);
          local_1820 = 0;
          plVar15 = *(long **)(param_1 + 0xca8);
          pcVar4 = *(code **)(*plVar15 + 0x100);
          *(undefined8 *)((long)&local_38 + lVar10) = 0x1002920e1;
          iVar7 = (*pcVar4)(plVar15,&local_1818);
          uVar14 = local_1818;
          if (iVar7 == -0x80) goto LAB_10029252c;
          if (iVar7 == 0) {
            plVar15 = *(long **)(param_1 + 0xca8);
            pcVar4 = *(code **)(*plVar15 + 0xf0);
            *(undefined8 *)((long)&local_38 + lVar10) = 0x10029210f;
            iVar7 = (*pcVar4)(plVar15,0);
            plVar15 = (long *)(param_2 + 8);
            if (iVar7 == 0) {
              local_1898 = *(undefined4 *)(param_1 + 0xca8);
              uStack_1894 = *(undefined4 *)(param_1 + 0xcac);
              uStack_1890 = *(undefined4 *)(param_1 + 0xcb0);
              uStack_188c = *(undefined4 *)(param_1 + 0xcb4);
              if (*(long *)(param_1 + 0xcb0) != 0) {
                LOCK();
                plVar1 = (long *)(*(long *)(param_1 + 0xcb0) + 8);
                *plVar1 = *plVar1 + 1;
                UNLOCK();
              }
              *(undefined8 *)((long)&local_38 + lVar10) = 0x100292152;
              iVar7 = FUN_10042db01(&local_1898,&local_1998,0,0);
              *(undefined8 *)((long)&local_38 + lVar10) = 0x100292161;
              FUN_10021e316(&local_1898);
              if (iVar7 == 0) {
                if (uStack_1910 != 0) {
                  local_1818 = uStack_1910;
                }
                *(undefined8 *)(&stack0xffffffffffffffd8 + lVar10) = 0;
                *(undefined8 *)(&stack0xffffffffffffffe0 + lVar10) = 0;
                *(undefined4 *)(&stack0xffffffffffffffd0 + lVar10) = 0;
                *(undefined8 *)((long)&local_38 + lVar10) = 0x1002921b3;
                FUN_100428630(&local_1998,FUN_1002999b1,plVar15,&local_178,&local_17f9,
                              local_1860 + 1);
                *(undefined8 *)((long)&local_38 + lVar10) = 0x1002921bf;
                FUN_100426d30(&local_1998);
              }
            }
            plVar1 = *(long **)(param_1 + 0xcb0);
            local_18c8 = *(undefined4 *)(param_1 + 0xca8);
            uStack_18c4 = *(undefined4 *)(param_1 + 0xcac);
            uStack_18c0 = *(undefined4 *)(param_1 + 0xcb0);
            uStack_18bc = *(undefined4 *)(param_1 + 0xcb4);
            if (plVar1 != (long *)0x0) {
              LOCK();
              plVar1[1] = plVar1[1] + 1;
              UNLOCK();
            }
            lVar5 = *(long *)(param_1 + 0xcd8);
            *(undefined8 *)((long)&local_38 + lVar10) = 0x1002921ff;
            iVar7 = FUN_100298e0d(&local_18c8,local_18d6,lVar5 + 0x10,0);
            if (plVar1 != (long *)0x0) {
              LOCK();
              plVar2 = plVar1 + 1;
              lVar5 = *plVar2;
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (lVar5 == 0) {
                pcVar4 = *(code **)(*plVar1 + 0x10);
                *(undefined8 *)((long)&local_38 + lVar10) = 0x100292222;
                (*pcVar4)(plVar1);
                *(undefined8 *)((long)&local_38 + lVar10) = 0x10029222a;
                std::__shared_weak_count::__release_weak();
              }
            }
            if (iVar7 == -0x80) goto LAB_10029252c;
            if (iVar7 == 0) {
              plVar1 = *(long **)(param_1 + 0xca8);
              pcVar4 = *(code **)(*plVar1 + 0xf8);
              *(undefined8 *)((long)&local_38 + lVar10) = 0x100292254;
              iVar7 = (*pcVar4)(plVar1,&local_1820);
              if (iVar7 == -0x80) goto LAB_10029252c;
              if (iVar7 == 0) {
                if (local_1820 == local_1918 + 0x80) {
                  local_1918 = local_1820;
                }
                lVar5 = *(long *)(param_1 + 0xcd8);
                iVar7 = ((int)local_1818 - (int)local_1820) + 1;
                *(undefined8 *)((long)&local_38 + lVar10) = 0x1002922b4;
                local_18f8 = FUN_100271c4a(lVar5 + 0x10,iVar7,&local_18e0);
                local_1900 = 0;
                local_18f0 = local_18e0;
                local_18e8 = 0;
                *(undefined8 *)((long)&local_38 + lVar10) = 0x1002922e0;
                local_18f4 = iVar7;
                iVar8 = FUN_100299491();
                iVar7 = local_18e8;
                if (iVar8 != 0) {
                  *(undefined8 *)((long)&local_38 + lVar10) = 0x1002922f0;
                  uVar11 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar10) = 0x100292300;
                  cVar6 = _os_log_type_enabled(uVar11,0x10);
                  if (cVar6 != '\0') {
                    local_17d8 = 0x8220202;
                    local_17d4 = "Assertion failure";
                    local_17cc = 0x400;
                    local_17ca = (char *)CONCAT44(local_17ca._4_4_,iVar8);
                    *(undefined8 *)((long)&local_38 + lVar10) = 0x1002927eb;
                    __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",
                                        &local_17d8,0x12);
                  }
                  local_1888 = *(undefined8 *)(param_1 + 0xca8);
                  uStack_1880 = *(undefined8 *)(param_1 + 0xcb0);
                  if (*(long *)(param_1 + 0xcb0) != 0) {
                    LOCK();
                    plVar1 = (long *)(*(long *)(param_1 + 0xcb0) + 8);
                    *plVar1 = *plVar1 + 1;
                    UNLOCK();
                  }
                  *(undefined8 *)(&stack0x00000000 + lVar10) = 0;
                  *(undefined8 *)((long)(&stack0x00000000 + lVar10) + 8) = 0;
                  *(undefined8 *)(&stack0xfffffffffffffff0 + lVar10) = 0;
                  *(undefined8 *)(&stack0xfffffffffffffff8 + lVar10) = 0;
                  *(undefined8 *)(&stack0xffffffffffffffe0 + lVar10) = 0;
                  *(undefined8 *)(&stack0xffffffffffffffe8 + lVar10) = 0;
                  *(undefined8 *)(&stack0xffffffffffffffd0 + lVar10) = 0;
                  *(undefined8 *)(&stack0xffffffffffffffd8 + lVar10) = 0;
                  *(undefined8 *)((long)&local_38 + lVar10) = 0x100292368;
                  iVar7 = FUN_100297013(&local_1888,0,local_18d6,local_19d4,local_18a4,&local_17d8);
                  *(undefined8 *)((long)&local_38 + lVar10) = 0x100292377;
                  FUN_10021e316(&local_1888);
                  if (iVar7 != -0x80) {
                    if (iVar7 != 0) {
                      *(undefined8 *)((long)&local_38 + lVar10) = 0x100292387;
                      uVar11 = FUN_1001cc310();
                      *(undefined8 *)((long)&local_38 + lVar10) = 0x100292397;
                      cVar6 = _os_log_type_enabled(uVar11,0x10);
                      if (cVar6 != '\0') {
                        local_17f8 = 0x8220202;
                        local_17f4 = "Assertion failure";
                        local_17ec = 0x400;
                        *(undefined8 *)((long)&local_38 + lVar10) = 0x1002930b1;
                        local_17ea = iVar7;
                        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",
                                            &local_17f8,0x12);
                      }
                      if (iVar7 != 0) goto LAB_1002923d8;
                    }
                    *(undefined8 *)((long)&local_38 + lVar10) = 0x1002923b0;
                    iVar8 = FUN_100299491(&local_1900);
                    iVar7 = local_18e8;
                    if (iVar8 == 0) goto LAB_100292693;
                    *(undefined8 *)((long)&local_38 + lVar10) = 0x1002923c0;
                    uVar11 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar10) = 0x1002923d0;
                    cVar6 = _os_log_type_enabled(uVar11,0x10);
                    if (cVar6 != '\0') {
                      local_17f8 = 0x8220202;
                      local_17f4 = "Assertion failure";
                      local_17ec = 0x400;
                      *(undefined8 *)((long)&local_38 + lVar10) = 0x1002930fb;
                      local_17ea = iVar8;
                      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",
                                          &local_17f8,0x12);
                    }
                  }
LAB_1002923d8:
                  iVar7 = 0;
                }
LAB_100292693:
                if (local_17f9 == 0) {
                  local_17f9 = *(int *)(*(long *)(param_1 + 0xcd8) + 0x1c) == 0xac44;
                }
                local_1828 = (ulong)(uint)(*(int *)(*(long *)(param_1 + 0xcd8) + 0x30) * iVar7);
                *(undefined8 *)((long)&local_38 + lVar10) = 0x1002926c4;
                uVar11 = FUN_1001c15fb();
                *(undefined8 *)((long)&local_38 + lVar10) = 0x1002926cc;
                pcVar12 = (char *)FUN_1001b83ae(uVar11);
                *(undefined8 *)((long)&local_38 + lVar10) = 0x1002926de;
                pcVar12 = _strstr((char *)&local_177,pcVar12);
                local_1808 = 0x210;
                if (pcVar12 == (char *)0x0) {
                  *(undefined8 *)((long)&local_38 + lVar10) = 0x100292702;
                  pcVar12 = _strstr((char *)&local_177,"Apple");
                  if (pcVar12 == (char *)0x0) {
                    if (local_16f == 0x6863 && CONCAT44(uStack_173,local_177) == 0x74614d636973754d)
                    {
                      local_1808 = 0x2d6;
LAB_100292815:
                      local_17f9 = 1;
                    }
                    else if (local_16f == 0x7265 &&
                             CONCAT44(uStack_173,local_177) == 0x666f686e75617246) {
                      local_1808 = 0x2d6;
                      if (*(uint *)(*plVar15 + 0x58) != 0) {
                        local_1808 = (ulong)*(uint *)(*plVar15 + 0x58);
                      }
                    }
                    else {
                      if (local_16f == 0x6d6f &&
                          CONCAT44(uStack_173,local_177) == 0x632e6e6f7a616d41) {
                        local_1808 = 0x240;
                        goto LAB_100292815;
                      }
                      local_1808 = 0x210;
                      if (local_177 == 0x454d414c) {
                        local_1808 = 0x240;
                      }
                    }
                  }
                }
                bVar3 = *(byte *)(*(long *)(param_1 + 0xcd8) + 0x15);
                local_1840 = (ulong)bVar3;
                local_1854 = *(undefined4 *)(*(long *)(param_1 + 0xcd8) + 0x30);
                *(undefined8 *)((long)&local_38 + lVar10) = 0x100292845;
                local_1830 = FUN_1001c63e1((ulong)bVar3 * 0x1200);
                if (local_1830 == 0) {
                  *(undefined8 *)((long)&local_38 + lVar10) = 0x100292d04;
                  uVar11 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar10) = 0x100292d14;
                  cVar6 = _os_log_type_enabled(uVar11,0x10);
                  if (cVar6 != '\0') {
                    local_17d8 = 0x8220202;
                    local_17d4 = "Assertion failure";
                    local_17cc = 0x822;
                    local_17ca = "frameSampleBuffer != nullptr";
                    *(undefined8 *)((long)&local_38 + lVar10) = 0x100292fc5;
                    __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",
                                        &local_17d8,0x16);
                  }
                  iVar7 = -0x6c;
                  *(undefined8 *)((long)&local_38 + lVar10) = 0x100292d2b;
                  FUN_1001782e9(0,0);
                }
                else {
                  *(undefined8 *)((long)&local_38 + lVar10) = 0x10029286d;
                  local_1810 = FUN_1001c63e1((ulong)(uint)((int)local_1840 << 0xb) * 9);
                  if (local_1810 == 0) {
                    *(undefined8 *)((long)&local_38 + lVar10) = 0x100292d35;
                    uVar11 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar10) = 0x100292d45;
                    cVar6 = _os_log_type_enabled(uVar11,0x10);
                    if (cVar6 != '\0') {
                      local_17d8 = 0x8220202;
                      local_17d4 = "Assertion failure";
                      local_17cc = 0x822;
                      local_17ca = "trackSampleBuffer != nullptr";
                      *(undefined8 *)((long)&local_38 + lVar10) = 0x100293067;
                      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",
                                          &local_17d8,0x16);
                    }
                    iVar7 = -0x6c;
                    *(undefined8 *)((long)&local_38 + lVar10) = 0x100292d5c;
                    FUN_1001782e9(0,0);
                  }
                  else {
                    uVar16 = *(uint *)(*(long *)(param_1 + 0xcd8) + 0x30);
                    *(uint *)(*(long *)(param_1 + 0xcd8) + 0x80) = uVar16;
                    fVar17 = (float)uVar16 * DAT_100717f3c;
                    *(int *)(param_1 + 0xd30) = iVar7;
                    fVar17 = fVar17 / (float)*(int *)(param_1 + 0xd28);
                    uVar13 = (ulong)fVar17;
                    local_1860[2] = (uint)((float)(uVar13 & 0xffffffff) < fVar17) + (int)uVar13;
                    local_1870 = (long *)(param_1 + 0xd48);
                    local_1848 = 0;
                    iVar8 = 0x1900;
                    local_1800 = (undefined4)CONCAT71((int7)((ulong)local_1870 >> 8),1);
                    local_1838 = uVar14;
                    local_1868 = plVar15;
                    while( true ) {
                      plVar1 = *(long **)(param_1 + 0xca8);
                      pcVar4 = *(code **)(*plVar1 + 0x100);
                      *(undefined8 *)((long)&local_38 + lVar10) = 0x100292921;
                      iVar7 = (*pcVar4)(plVar1,&local_1850);
                      if (iVar7 != 0) break;
                      if (local_1850 != uVar14) {
                        *(undefined8 *)((long)&local_38 + lVar10) = 0x100292e5d;
                        uVar11 = FUN_1001cc310();
                        *(undefined8 *)((long)&local_38 + lVar10) = 0x100292e6d;
                        cVar6 = _os_log_type_enabled(uVar11,0x10);
                        if (cVar6 != '\0') {
                          local_17d8 = 0x8220202;
                          local_17d4 = "Assertion failure";
                          local_17cc = 0x822;
                          local_17ca = "trackEOFCheck == trackEOF";
                          *(undefined8 *)((long)&local_38 + lVar10) = 0x10029319d;
                          __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",
                                              &local_17d8,0x16);
                        }
                        iVar7 = -0x2f;
                        *(undefined8 *)((long)&local_38 + lVar10) = 0x100292e84;
                        FUN_1001782e9(0,0);
                        goto LAB_100292e84;
                      }
                      uVar13 = (ulong)(iVar8 * local_1860[2] >> 3);
                      uVar14 = local_1818 - uVar13;
                      if (local_1818 < uVar13) {
                        uVar14 = local_1820;
                      }
                      plVar1 = *(long **)(param_1 + 0xca8);
                      pcVar4 = *(code **)(*plVar1 + 0xf0);
                      *(undefined8 *)((long)&local_38 + lVar10) = 0x10029296b;
                      (*pcVar4)(plVar1,uVar14);
                      local_18b8 = *(undefined4 *)(param_1 + 0xca8);
                      uStack_18b4 = *(undefined4 *)(param_1 + 0xcac);
                      uStack_18b0 = *(undefined4 *)(param_1 + 0xcb0);
                      uStack_18ac = *(undefined4 *)(param_1 + 0xcb4);
                      if (*(long *)(param_1 + 0xcb0) != 0) {
                        LOCK();
                        plVar1 = (long *)(*(long *)(param_1 + 0xcb0) + 8);
                        *plVar1 = *plVar1 + 1;
                        UNLOCK();
                      }
                      uVar11 = *(undefined8 *)(param_1 + 0xcd8);
                      *(undefined8 *)((long)&local_38 + lVar10) = 0x1002929a8;
                      iVar7 = FUN_1002994d8(&local_18b8,uVar11,0,0x10000);
                      *(undefined8 *)((long)&local_38 + lVar10) = 0x1002929b3;
                      FUN_10021e316(&local_18b8);
                      plVar1 = *(long **)(param_1 + 0xca8);
                      pcVar4 = *(code **)(*plVar1 + 0xf8);
                      *(undefined8 *)((long)&local_38 + lVar10) = 0x1002929ca;
                      (*pcVar4)(plVar1,local_1870);
                      *local_1870 = *local_1870 + -4;
                      if (iVar7 == 0) {
                        *(undefined1 *)(*(long *)(param_1 + 0xcd8) + 0x838c) = 1;
                        local_1878 = uVar14;
                        while( true ) {
                          *(undefined8 *)((long)&local_38 + lVar10) = 0x100292a1a;
                          iVar7 = FUN_1002906aa(param_1,local_1830,local_19d4,local_18a0,0);
                          if ((iVar7 != -0x27) && (iVar7 != 0)) {
                            *(undefined8 *)((long)&local_38 + lVar10) = 0x100292a2c;
                            uVar11 = FUN_1001cc310();
                            *(undefined8 *)((long)&local_38 + lVar10) = 0x100292a3c;
                            cVar6 = _os_log_type_enabled(uVar11,0x10);
                            if (cVar6 != '\0') {
                              local_17d8 = 0x8220202;
                              local_17d4 = "Assertion failure";
                              local_17cc = 0x822;
                              local_17ca = "(status == noErr) || (status == eofErr)";
                              *(undefined8 *)((long)&local_38 + lVar10) = 0x100292bb0;
                              __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)"
                                                  ,&local_17d8,0x16);
                            }
                            *(undefined8 *)((long)&local_38 + lVar10) = 0x100292a4d;
                            FUN_1001782e9(0,0);
                          }
                          uVar16 = local_19d4[0];
                          *(undefined1 *)(*(long *)(param_1 + 0xcd8) + 0x838c) = 0;
                          uVar13 = (ulong)(local_19d4[0] * (int)local_1840);
                          uVar14 = (ulong)((0x1200 - local_19d4[0]) * (int)local_1840);
                          *(undefined8 *)((long)&local_38 + lVar10) = 0x100292a93;
                          FUN_1001c631b(local_1810 + uVar13 * 4,local_1810,uVar14 * 4);
                          *(undefined8 *)((long)&local_38 + lVar10) = 0x100292ab1;
                          FUN_1001c631b(local_1830,local_1810 + uVar14 * 4,uVar13 << 2);
                          local_1848 = (ulong)((int)local_1848 + uVar16);
                          plVar15 = local_1868;
                          if (iVar7 != 0) break;
                          if ((*(ushort *)(param_1 + 0xd30) & 0x3ff) == 0) {
                            plVar15 = *(long **)(param_1 + 0xca8);
                            pcVar4 = *(code **)(*plVar15 + 0x100);
                            *(undefined8 *)((long)&local_38 + lVar10) = 0x100292af1;
                            iVar7 = (*pcVar4)(plVar15,&local_1850);
                            if (iVar7 != 0) {
                              if (iVar7 == -0x80) goto LAB_100292e84;
                              *(undefined8 *)((long)&local_38 + lVar10) = 0x100292d70;
                              uVar11 = FUN_1001cc310();
                              *(undefined8 *)((long)&local_38 + lVar10) = 0x100292d80;
                              cVar6 = _os_log_type_enabled(uVar11,0x10);
                              if (cVar6 == '\0') goto LAB_100292e84;
                              local_17ca = (char *)CONCAT44(local_17ca._4_4_,iVar7);
                              goto LAB_100292e15;
                            }
                            if (local_1850 != local_1838) {
                              *(undefined8 *)((long)&local_38 + lVar10) = 0x100292e2f;
                              uVar11 = FUN_1001cc310();
                              *(undefined8 *)((long)&local_38 + lVar10) = 0x100292e3f;
                              cVar6 = _os_log_type_enabled(uVar11,0x10);
                              if (cVar6 != '\0') {
                                local_17d8 = 0x8220202;
                                local_17d4 = "Assertion failure";
                                local_17cc = 0x822;
                                local_17ca = "trackEOFCheck == trackEOF";
                                *(undefined8 *)((long)&local_38 + lVar10) = 0x10029314c;
                                __os_log_error_impl(0x100000000,uVar11,0x10,
                                                    "%{public}s: (%{public}s)",&local_17d8,0x16);
                              }
                              *(undefined8 *)((long)&local_38 + lVar10) = 0x100292e56;
                              FUN_1001782e9(0,0);
                              iVar7 = -0x2f;
                              goto LAB_100292e84;
                            }
                          }
                          *(undefined8 *)((long)&local_38 + lVar10) = 0x100292b22;
                          FUN_1001c631b(local_70,&local_78,0x38);
                          local_40 = 0;
                          if (local_1820 <= local_1878) {
                            local_40 = local_1878 - local_1820;
                          }
                          plVar15 = *(long **)(param_1 + 0xca8);
                          pcVar4 = *(code **)(*plVar15 + 0xf8);
                          *(undefined8 *)((long)&local_38 + lVar10) = 0x100292b54;
                          (*pcVar4)(plVar15,&local_1878);
                        }
                      }
                      uVar13 = local_1820;
                      uVar14 = local_1838;
                      if ((~(byte)local_1800 & 1) != 0 || local_78 != 0) {
                        uVar9 = (uint)local_1848;
                        uVar16 = 0x1200;
                        if (uVar9 < 0x1200) {
                          uVar16 = uVar9;
                        }
                        if (uVar9 == 0) {
                          *(undefined8 *)((long)&local_38 + lVar10) = 0x100292ec7;
                          uVar11 = FUN_1001cc310();
                          *(undefined8 *)((long)&local_38 + lVar10) = 0x100292ed7;
                          cVar6 = _os_log_type_enabled(uVar11,0x10);
                          if (cVar6 != '\0') {
                            local_17d8 = 0x8220202;
                            local_17d4 = "Assertion failure";
                            local_17cc = 0x822;
                            local_17ca = "numSamplesInBuffer > 0";
                            *(undefined8 *)((long)&local_38 + lVar10) = 0x1002931ee;
                            __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",
                                                &local_17d8,0x16);
                          }
                          *(undefined8 *)((long)&local_38 + lVar10) = 0x100292ee8;
                          FUN_1001782e9(0,0);
                          plVar15 = local_1868;
                        }
                        *(uint **)(&stack0xffffffffffffffd8 + lVar10) = local_1860;
                        *(uint *)(&stack0xffffffffffffffd0 + lVar10) = (uint)local_17f9;
                        *(undefined8 *)((long)&local_38 + lVar10) = 0x100292f36;
                        iVar7 = FUN_100299c24(local_1810,uVar16,local_1840,(int)local_1808 + 0x211,
                                              local_1828,local_1854);
                        iVar8 = 0;
                        if (iVar7 != -0x28) {
                          iVar8 = iVar7;
                        }
                        lVar5 = *plVar15;
                        if ((*(uint *)(lVar5 + 0x54) & 3) == 1) {
                          iVar7 = iVar8;
                          if (local_78 != 0 && *(long *)(lVar5 + 0x68) == 0) {
                            *(long *)(lVar5 + 0x68) = local_78;
                          }
                        }
                        else if (iVar8 == 0) {
                          *(byte *)(lVar5 + 3) = *(byte *)(lVar5 + 3) | 0x40;
                          *(int *)(lVar5 + 0x58) = (int)local_1808;
                          *(uint *)(lVar5 + 0x5c) =
                               (int)local_1828 - ((int)local_1808 + local_1860[0]);
                          *(ulong *)(lVar5 + 0x60) = (ulong)local_1860[0];
                          *(long *)(lVar5 + 0x68) = local_78;
                          *(uint *)(lVar5 + 0x54) = *(uint *)(lVar5 + 0x54) & 0xfffffc | 0x2000003;
                          iVar7 = 0;
                        }
                        goto LAB_100292e84;
                      }
                      plVar1 = *(long **)(param_1 + 0xca8);
                      pcVar4 = *(code **)(*plVar1 + 0xf0);
                      *(undefined8 *)((long)&local_38 + lVar10) = 0x100292bf8;
                      (*pcVar4)(plVar1,local_1820);
                      *(ulong *)(param_1 + 0xd48) = uVar13;
                      *(undefined1 *)(param_1 + 0x5a52) = 1;
                      uVar13 = 0;
                      while( true ) {
                        *(undefined8 *)((long)&local_38 + lVar10) = 0x100292c25;
                        iVar7 = FUN_1002906aa(param_1,0,local_19d4,local_18a0,0);
                        if ((iVar7 != -0x27) && (iVar7 != 0)) break;
                        uVar13 = uVar13 + local_19d4[0];
                        if (iVar7 != 0) goto LAB_100292c7f;
                        pcVar4 = *(code **)(**(long **)(param_1 + 0xca8) + 0xf8);
                        *(undefined8 *)((long)&local_38 + lVar10) = 0x100292c52;
                        (*pcVar4)();
                      }
                      *(undefined8 *)((long)&local_38 + lVar10) = 0x100292c59;
                      uVar11 = FUN_1001cc310();
                      *(undefined8 *)((long)&local_38 + lVar10) = 0x100292c69;
                      cVar6 = _os_log_type_enabled(uVar11,0x10);
                      if (cVar6 != '\0') {
                        local_17d8 = 0x8220202;
                        local_17d4 = "Assertion failure";
                        local_17cc = 0x822;
                        local_17ca = "(status == noErr) || (status == eofErr)";
                        *(undefined8 *)((long)&local_38 + lVar10) = 0x100292cfa;
                        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",
                                            &local_17d8,0x16);
                      }
                      *(undefined8 *)((long)&local_38 + lVar10) = 0x100292c76;
                      FUN_1001782e9(0,0);
                      uVar13 = uVar13 + local_19d4[0];
LAB_100292c7f:
                      *(undefined1 *)(param_1 + 0x5a52) = 0;
                      iVar8 = 32000;
                      local_1800 = 0;
                      local_1828 = uVar13;
                    }
                    if (iVar7 != -0x80) {
                      *(undefined8 *)((long)&local_38 + lVar10) = 0x100292dcb;
                      uVar11 = FUN_1001cc310();
                      *(undefined8 *)((long)&local_38 + lVar10) = 0x100292ddb;
                      cVar6 = _os_log_type_enabled(uVar11,0x10);
                      if (cVar6 != '\0') {
                        local_17ca = (char *)CONCAT44(local_17ca._4_4_,iVar7);
LAB_100292e15:
                        local_17cc = 0x400;
                        local_17d4 = "Assertion failure";
                        local_17d8 = 0x8220202;
                        *(undefined8 *)((long)&local_38 + lVar10) = 0x100292e28;
                        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",
                                            &local_17d8,0x12);
                      }
                    }
                  }
LAB_100292e84:
                  *(undefined8 *)((long)&local_38 + lVar10) = 0x100292e90;
                  FUN_1001c64c1(local_1830);
                  if (local_1810 != 0) {
                    *(undefined8 *)((long)&local_38 + lVar10) = 0x100292ea5;
                    FUN_1001c64c1();
                  }
                }
                goto LAB_10029252c;
              }
              *(undefined8 *)((long)&local_38 + lVar10) = 0x10029262a;
              uVar11 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar10) = 0x10029263a;
              cVar6 = _os_log_type_enabled(uVar11,0x10);
              if (cVar6 == '\0') goto LAB_10029252c;
              local_17ca = (char *)CONCAT44(local_17ca._4_4_,iVar7);
            }
            else {
              *(undefined8 *)((long)&local_38 + lVar10) = 0x1002925d9;
              uVar11 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar10) = 0x1002925e9;
              cVar6 = _os_log_type_enabled(uVar11,0x10);
              if (cVar6 == '\0') goto LAB_10029252c;
              local_17ca = (char *)CONCAT44(local_17ca._4_4_,iVar7);
            }
          }
          else {
            *(undefined8 *)((long)&local_38 + lVar10) = 0x100292589;
            uVar11 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar10) = 0x100292599;
            cVar6 = _os_log_type_enabled(uVar11,0x10);
            if (cVar6 == '\0') goto LAB_10029252c;
            local_17ca = (char *)CONCAT44(local_17ca._4_4_,iVar7);
          }
          local_17cc = 0x400;
          local_17d4 = "Assertion failure";
          local_17d8 = 0x8220202;
          *(undefined8 *)((long)&local_38 + lVar10) = 0x100292687;
          __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_17d8,0x12);
          goto LAB_10029252c;
        }
        *(undefined8 *)((long)&local_38 + lVar10) = 0x1002924bd;
        uVar11 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar10) = 0x1002924cd;
        cVar6 = _os_log_type_enabled(uVar11,0x10);
        if (cVar6 != '\0') {
          local_17ca = "msg->itTrackInfoPriv != nullptr";
          goto LAB_1002924f8;
        }
      }
    }
    else {
      *(undefined8 *)((long)&local_38 + lVar10) = 0x10029242e;
      uVar11 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar10) = 0x10029243e;
      cVar6 = _os_log_type_enabled(uVar11,0x10);
      if (cVar6 != '\0') {
        local_17ca = "(msg->trackKind == kITFileKind) || (msg->trackKind == kITMemoryFileKind)";
        goto LAB_1002924f8;
      }
    }
  }
  else {
    *(undefined8 *)((long)&local_38 + lVar10) = 0x1002923e5;
    uVar11 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar10) = 0x1002923f5;
    cVar6 = _os_log_type_enabled(uVar11,0x10);
    if (cVar6 != '\0') {
      local_17ca = "connectionData->playerOpen == true";
LAB_1002924f8:
      local_17cc = 0x822;
      local_17d4 = "Assertion failure";
      local_17d8 = 0x8220202;
      *(undefined8 *)((long)&local_38 + lVar10) = 0x10029251d;
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_17d8,0x16);
    }
  }
  iVar7 = -0x32;
  *(undefined8 *)((long)&local_38 + lVar10) = 0x10029252c;
  FUN_1001782e9(0,0);
LAB_10029252c:
  if (local_1988 != (long *)0x0) {
    LOCK();
    plVar15 = local_1988 + 1;
    lVar5 = *plVar15;
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (lVar5 == 0) {
      pcVar4 = *(code **)(*local_1988 + 0x10);
      *(undefined8 *)((long)&local_38 + lVar10) = 0x100292553;
      (*pcVar4)(local_1988);
      *(undefined8 *)((long)&local_38 + lVar10) = 0x10029255b;
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)&local_38 + lVar10) = &UNK_1002931f8;
    ___stack_chk_fail();
  }
  return iVar7;
}

