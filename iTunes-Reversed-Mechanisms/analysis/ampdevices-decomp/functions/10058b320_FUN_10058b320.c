// name: FUN_10058b320
// address: 10058b320

int FUN_10058b320(long param_1,char param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined8 ****ppppuVar1;
  short sVar2;
  undefined4 uVar3;
  undefined8 **ppuVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 ***pppuVar13;
  undefined8 ****ppppuVar14;
  undefined8 ****ppppuVar15;
  long lVar16;
  char extraout_DL;
  char *pcVar17;
  undefined *puVar18;
  undefined4 *puVar19;
  undefined1 local_1168 [16];
  undefined8 ***local_1158;
  undefined8 ***local_1150;
  undefined8 uStack_1148;
  undefined8 local_1140;
  undefined8 local_1138;
  long local_1130;
  long local_1128;
  long local_1120;
  long local_1118;
  long local_1110;
  long local_1108;
  long local_1100;
  long local_10f8;
  long local_10f0;
  long local_10e8;
  uint local_10dc;
  undefined8 **local_10d8;
  undefined8 *local_10d0;
  undefined *local_10c8;
  undefined8 **local_10c0;
  undefined4 local_10b8;
  undefined4 uStack_10b4;
  undefined4 local_10b0 [6];
  undefined4 local_1098;
  char *local_1094;
  undefined2 local_108c;
  char *local_108a;
  short local_e98 [256];
  undefined4 local_c98;
  char *local_c94;
  undefined2 local_c8c;
  char *local_c8a;
  int local_46c [267];
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x10058b338;
  lVar9 = FUN_100108310();
  lVar9 = -lVar9;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_1150 = (undefined8 ****)0x0;
  uStack_1148 = 0;
  local_1158 = &local_1150;
  local_1140 = param_4;
  local_10e8 = param_5;
  if (param_1 == 0) {
LAB_10058c272:
    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c277;
    uVar10 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c287;
    cVar5 = _os_log_type_enabled(uVar10,0x10);
    if (cVar5 != '\0') {
      local_c8a = "TrackDataIsValid(trackData)";
LAB_10058c2f8:
      local_c8c = 0x822;
      local_c94 = "Assertion failure";
      local_c98 = 0x8220202;
      *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c31d;
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_c98,0x16);
    }
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      *(undefined8 *)((long)&local_38 + lVar9) = 0x10058b38e;
      uVar10 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar9) = 0x10058b39e;
      cVar5 = _os_log_type_enabled(uVar10,0x10);
      if (cVar5 != '\0') {
        local_c98 = 0x8220202;
        local_c94 = "Assertion failure (expected to be true)";
        local_c8c = 0x822;
        local_c8a = "trackData->magic == \'tdat\'";
        *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c425;
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_c98,0x16);
      }
      *(undefined8 *)((long)&local_38 + lVar9) = 0x10058b3b2;
      cVar5 = FUN_1001782e9(0,1);
      if (cVar5 == '\0') goto LAB_10058c272;
    }
    if (local_10e8 != 0) {
      *(undefined8 *)((long)&local_38 + lVar9) = 0x10058b3cd;
      local_1138 = FUN_1003070df();
      local_10c0 = (undefined8 ***)0x0;
      *(undefined8 *)((long)&local_38 + lVar9) = 0x10058b3e7;
      FUN_1003071cd(param_1);
      *(undefined8 *)((long)&local_38 + lVar9) = 0x10058b3f8;
      iVar7 = FUN_1001601fd(local_10e8,0x20000);
      if (iVar7 != -0x80) {
        if (iVar7 == 0) {
          *(undefined8 *)((long)&local_38 + lVar9) = 0x10058b427;
          iVar7 = FUN_1001f2303(FUN_1001f42e5,local_10e8,&local_10c0);
          if (iVar7 != -0x80) {
            if (iVar7 == 0) {
              *(undefined8 *)((long)&local_38 + lVar9) = 0x10058b448;
              iVar7 = FUN_1001f3a72(local_10c0);
              if (iVar7 != -0x80) {
                if (iVar7 == 0) {
                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058b46b;
                  iVar7 = FUN_1001f3883(local_10c0,0);
                  if (iVar7 != -0x80) {
                    if (iVar7 == 0) {
                      *(undefined8 *)((long)&local_38 + lVar9) = 0x10058b493;
                      iVar7 = FUN_1001f3964(local_10c0,"Books");
                      if (iVar7 != -0x80) {
                        if (iVar7 == 0) {
                          *(undefined8 *)((long)&local_38 + lVar9) = 0x10058b4b0;
                          puVar11 = (undefined8 *)FUN_1002f930c(param_1);
                          local_1130 = param_1 + 0x1c10;
                          local_1128 = param_1 + 0x1cb0;
                          local_1120 = param_1 + 0x1c60;
                          local_1118 = param_1 + 0x2340;
                          local_1110 = param_1 + 0x1df0;
                          local_1108 = param_1 + 0x2430;
                          local_1100 = param_1 + 0x24d0;
                          local_10f8 = param_1 + 0x2480;
                          local_10f0 = param_1 + 0x2250;
                          while (puVar11 != (undefined8 *)0x0) {
                            *(undefined8 *)((long)&local_38 + lVar9) = 0x10058b544;
                            uVar12 = FUN_1004744bf(puVar11,0);
                            local_10d0 = puVar11;
                            if (((uVar12 & 0xc00000) != 0) &&
                               ((param_2 != '\0' || (-1 < *(int *)((long)puVar11 + 0xc2))))) {
                              *(undefined8 *)((long)&local_38 + lVar9) = 0x10058b57c;
                              local_10c8 = (undefined *)FUN_1005974ad(puVar11);
                              local_10dc = 0;
                              if ((local_10c8 == (undefined *)0x0) ||
                                 (*(int *)(local_10c8 + 0x3c) != 0x46494c45)) {
LAB_10058b5d2:
                                if (param_2 == '\0') goto LAB_10058c0ba;
                              }
                              else {
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058b5b3;
                                iVar7 = FUN_1002b0559(local_10c8);
                                if (iVar7 != 0) goto LAB_10058b5d2;
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058b5ca;
                                iVar7 = FUN_1002b3b9a(local_10c8);
                                if (iVar7 != 0) goto LAB_10058b5d2;
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c0f4;
                                iVar7 = FUN_10017dbe8(local_46c,local_1140,&local_c98,0x400,
                                                      &local_10dc);
                                if (iVar7 == 0) {
                                  if (local_46c[0] == 0x41464350) {
                                    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c1b3;
                                    FUN_1001dfe56(&local_c98,local_10dc,0x2f,0x2f);
                                    if ((local_10dc != 0) && ((short)local_c98 == 0x2f)) {
                                      local_10dc = local_10dc - 1;
                                      *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c1ed;
                                      FUN_1001c631b((long)&local_c98 + 2,&local_c98,
                                                    (ulong)local_10dc * 2);
                                    }
                                  }
                                }
                                else if (param_2 == '\0') {
                                  if (iVar7 != -0x80) {
                                    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c112;
                                    local_10c8 = (undefined *)FUN_1001cc310();
                                    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c12a;
                                    cVar5 = _os_log_type_enabled(local_10c8);
                                    if (cVar5 != '\0') {
                                      local_1098 = 0x8220202;
                                      local_1094 = "Assertion failure";
                                      local_108c = 0x400;
                                      local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                      *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c182;
                                      __os_log_error_impl(0x100000000,local_10c8,0x10,
                                                          "%{public}s: err == (%d)",&local_1098,0x12
                                                         );
                                    }
                                  }
                                  goto LAB_10058c0ba;
                                }
                              }
                              *(undefined8 *)((long)&local_38 + lVar9) = 0x10058b5ef;
                              FUN_10030666b(local_10c8,local_e98,0);
                              *(undefined8 *)((long)&local_38 + lVar9) = 0x10058b5fd;
                              iVar7 = FUN_1001f3883(local_10c0,0);
                              if (iVar7 != 0) {
                                if (iVar7 == -0x80) goto LAB_10058c52d;
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c657;
                                uVar10 = FUN_1001cc310();
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c667;
                                cVar5 = _os_log_type_enabled(uVar10,0x10);
                                if (cVar5 == '\0') goto LAB_10058c52d;
                                puVar19 = &local_1098;
                                local_1098 = 0x8220202;
                                local_1094 = "Assertion failure";
                                local_108c = 0x400;
                                local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                goto LAB_10058c51a;
                              }
                              uVar3 = *(undefined4 *)(local_10d0 + 0x1b);
                              *(undefined8 *)((long)&local_38 + lVar9) = 0x10058b62f;
                              iVar7 = FUN_10058d802(local_10c0,"Name",local_1130,uVar3);
                              if (iVar7 != 0) {
                                if (iVar7 == -0x80) goto LAB_10058c52d;
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c6b5;
                                uVar10 = FUN_1001cc310();
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c6c5;
                                cVar5 = _os_log_type_enabled(uVar10,0x10);
                                if (cVar5 == '\0') goto LAB_10058c52d;
                                puVar19 = &local_1098;
                                local_1098 = 0x8220202;
                                local_1094 = "Assertion failure";
                                local_108c = 0x400;
                                local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                goto LAB_10058c51a;
                              }
                              uVar3 = *(undefined4 *)((long)local_10d0 + 0xdc);
                              *(undefined8 *)((long)&local_38 + lVar9) = 0x10058b661;
                              iVar7 = FUN_10058d802(local_10c0,"Artist",local_1128,uVar3);
                              if (iVar7 != 0) {
                                if (iVar7 == -0x80) goto LAB_10058c52d;
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c767;
                                uVar10 = FUN_1001cc310();
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c777;
                                cVar5 = _os_log_type_enabled(uVar10,0x10);
                                if (cVar5 == '\0') goto LAB_10058c52d;
                                puVar19 = &local_1098;
                                local_1098 = 0x8220202;
                                local_1094 = "Assertion failure";
                                local_108c = 0x400;
                                local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                goto LAB_10058c51a;
                              }
                              uVar3 = *(undefined4 *)((long)local_10d0 + 0xe4);
                              *(undefined8 *)((long)&local_38 + lVar9) = 0x10058b693;
                              iVar7 = FUN_10058d802(local_10c0,"Album",local_1120,uVar3);
                              if (iVar7 != 0) {
                                if (iVar7 == -0x80) goto LAB_10058c52d;
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c7c5;
                                uVar10 = FUN_1001cc310();
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c7d5;
                                cVar5 = _os_log_type_enabled(uVar10,0x10);
                                if (cVar5 == '\0') goto LAB_10058c52d;
                                puVar19 = &local_1098;
                                local_1098 = 0x8220202;
                                local_1094 = "Assertion failure";
                                local_108c = 0x400;
                                local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                goto LAB_10058c51a;
                              }
                              uVar3 = *(undefined4 *)(local_10d0[0xe] + 0x2c);
                              *(undefined8 *)((long)&local_38 + lVar9) = 0x10058b6c6;
                              iVar7 = FUN_10058d802(local_10c0,"Copyright",local_1118,uVar3);
                              if (iVar7 != 0) {
                                if (iVar7 == -0x80) goto LAB_10058c52d;
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c823;
                                uVar10 = FUN_1001cc310();
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c833;
                                cVar5 = _os_log_type_enabled(uVar10,0x10);
                                if (cVar5 == '\0') goto LAB_10058c52d;
                                puVar19 = &local_1098;
                                local_1098 = 0x8220202;
                                local_1094 = "Assertion failure";
                                local_108c = 0x400;
                                local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                goto LAB_10058c51a;
                              }
                              uVar3 = *(undefined4 *)(local_10d0 + 0x1e);
                              *(undefined8 *)((long)&local_38 + lVar9) = 0x10058b6f8;
                              iVar7 = FUN_10058d802(local_10c0,"Genre",local_1110,uVar3);
                              if (iVar7 != 0) {
                                if (iVar7 == -0x80) goto LAB_10058c52d;
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c881;
                                uVar10 = FUN_1001cc310();
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c891;
                                cVar5 = _os_log_type_enabled(uVar10,0x10);
                                if (cVar5 == '\0') goto LAB_10058c52d;
                                puVar19 = &local_1098;
                                local_1098 = 0x8220202;
                                local_1094 = "Assertion failure";
                                local_108c = 0x400;
                                local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                goto LAB_10058c51a;
                              }
                              uVar3 = *(undefined4 *)(local_10d0 + 0x35);
                              *(undefined8 *)((long)&local_38 + lVar9) = 0x10058b72a;
                              iVar7 = FUN_10058d802(local_10c0,"Sort Name",local_1108,uVar3);
                              if (iVar7 != 0) {
                                if (iVar7 == -0x80) goto LAB_10058c52d;
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c8df;
                                uVar10 = FUN_1001cc310();
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c8ef;
                                cVar5 = _os_log_type_enabled(uVar10,0x10);
                                if (cVar5 == '\0') goto LAB_10058c52d;
                                puVar19 = &local_1098;
                                local_1098 = 0x8220202;
                                local_1094 = "Assertion failure";
                                local_108c = 0x400;
                                local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                goto LAB_10058c51a;
                              }
                              uVar3 = *(undefined4 *)(local_10d0 + 0x36);
                              *(undefined8 *)((long)&local_38 + lVar9) = 0x10058b75c;
                              iVar7 = FUN_10058d802(local_10c0,"Sort Artist",local_1100,uVar3);
                              if (iVar7 != 0) {
                                if (iVar7 == -0x80) goto LAB_10058c52d;
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c93d;
                                uVar10 = FUN_1001cc310();
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c94d;
                                cVar5 = _os_log_type_enabled(uVar10,0x10);
                                if (cVar5 == '\0') goto LAB_10058c52d;
                                puVar19 = &local_1098;
                                local_1098 = 0x8220202;
                                local_1094 = "Assertion failure";
                                local_108c = 0x400;
                                local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                goto LAB_10058c51a;
                              }
                              uVar3 = *(undefined4 *)((long)local_10d0 + 0x1ac);
                              *(undefined8 *)((long)&local_38 + lVar9) = 0x10058b78e;
                              iVar7 = FUN_10058d802(local_10c0,"Sort Album",local_10f8,uVar3);
                              if (iVar7 != 0) {
                                if (iVar7 == -0x80) goto LAB_10058c52d;
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c99b;
                                uVar10 = FUN_1001cc310();
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c9ab;
                                cVar5 = _os_log_type_enabled(uVar10,0x10);
                                if (cVar5 == '\0') goto LAB_10058c52d;
                                puVar19 = &local_1098;
                                local_1098 = 0x8220202;
                                local_1094 = "Assertion failure";
                                local_108c = 0x400;
                                local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                goto LAB_10058c51a;
                              }
                              uVar10 = *local_10d0;
                              *(undefined8 *)((long)&local_38 + lVar9) = 0x10058b7b6;
                              iVar7 = FUN_1001f2bbe(local_10c0,"Persistent ID",uVar10);
                              if (iVar7 != 0) {
                                if (iVar7 == -0x80) goto LAB_10058c52d;
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c9f9;
                                uVar10 = FUN_1001cc310();
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058ca09;
                                cVar5 = _os_log_type_enabled(uVar10,0x10);
                                if (cVar5 == '\0') goto LAB_10058c52d;
                                puVar19 = &local_1098;
                                local_1098 = 0x8220202;
                                local_1094 = "Assertion failure";
                                local_108c = 0x400;
                                local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                goto LAB_10058c51a;
                              }
                              if (local_10c8 == (undefined *)0x0) {
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058cc19;
                                uVar10 = FUN_1001cc310();
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058cc29;
                                cVar5 = _os_log_type_enabled(uVar10,0x10);
                                if (cVar5 != '\0') {
                                  local_1098 = 0x8220202;
                                  local_1094 = "Assertion failure";
                                  local_108c = 0x822;
                                  local_108a = "trackInstance";
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058d6af;
                                  __os_log_error_impl(0x100000000,uVar10,0x10,
                                                      "%{public}s: (%{public}s)",&local_1098,0x16);
                                }
                                iVar7 = -0x32;
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058cc40;
                                FUN_1001782e9(0,0);
                                goto LAB_10058c52d;
                              }
                              sVar2 = *(short *)(local_10c8 + 0x74);
                              *(undefined8 *)((long)&local_38 + lVar9) = 0x10058b7ee;
                              iVar7 = FUN_1001f24c1(local_10c0,"Has Artwork",sVar2 != 0);
                              ppuVar4 = local_10c0;
                              if (iVar7 != 0) {
                                if (iVar7 == -0x80) goto LAB_10058c52d;
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058ca57;
                                uVar10 = FUN_1001cc310();
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058ca67;
                                cVar5 = _os_log_type_enabled(uVar10,0x10);
                                if (cVar5 == '\0') goto LAB_10058c52d;
                                puVar19 = &local_1098;
                                local_1098 = 0x8220202;
                                local_1094 = "Assertion failure";
                                local_108c = 0x400;
                                local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                goto LAB_10058c51a;
                              }
                              *(undefined8 *)((long)&local_38 + lVar9) = 0x10058b80c;
                              uVar6 = FUN_10047eee6(local_10d0);
                              *(undefined8 *)((long)&local_38 + lVar9) = 0x10058b814;
                              uVar10 = FUN_10015009d(uVar6);
                              *(undefined8 *)((long)&local_38 + lVar9) = 0x10058b826;
                              iVar7 = FUN_1001f32a7(ppuVar4,"Kind",uVar10);
                              if (iVar7 != 0) {
                                if (iVar7 == -0x80) goto LAB_10058c52d;
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058cab5;
                                uVar10 = FUN_1001cc310();
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058cac5;
                                cVar5 = _os_log_type_enabled(uVar10,0x10);
                                if (cVar5 == '\0') goto LAB_10058c52d;
                                puVar19 = &local_1098;
                                local_1098 = 0x8220202;
                                local_1094 = "Assertion failure";
                                local_108c = 0x400;
                                local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                goto LAB_10058c51a;
                              }
                              if (extraout_DL == '\0') {
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058b844;
                                uVar8 = FUN_1004744bf(local_10d0,0);
                                if ((uVar8 >> 0x17 & 1) == 0) goto LAB_10058b84e;
                              }
                              else {
LAB_10058b84e:
                                if (((*(long *)(local_10c8 + 8) != 0) &&
                                    (*(long *)(*(long *)(local_10c8 + 8) + 0x10) != 0)) &&
                                   (*(long *)(*(long *)(local_10c8 + 0x10) + 0x38) != 0)) {
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058b88c;
                                  iVar7 = FUN_1001f2bbe(local_10c0,"Item ID");
                                  if (iVar7 != 0) {
                                    if (iVar7 == -0x80) goto LAB_10058c52d;
                                    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058d40a;
                                    uVar10 = FUN_1001cc310();
                                    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058d41a;
                                    cVar5 = _os_log_type_enabled(uVar10,0x10);
                                    if (cVar5 == '\0') goto LAB_10058c52d;
                                    puVar19 = &local_1098;
                                    local_1098 = 0x8220202;
                                    local_1094 = "Assertion failure";
                                    local_108c = 0x400;
                                    local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                    goto LAB_10058c51a;
                                  }
                                }
                                lVar16 = *(long *)(local_10c8 + 0x10);
                                if (*(long *)(lVar16 + 0x58) != 0) {
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058b8be;
                                  iVar7 = FUN_1001f2bbe(local_10c0,"Collection ID");
                                  if (iVar7 != 0) {
                                    if (iVar7 == -0x80) goto LAB_10058c52d;
                                    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058cc54;
                                    uVar10 = FUN_1001cc310();
                                    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058cc64;
                                    cVar5 = _os_log_type_enabled(uVar10,0x10);
                                    if (cVar5 == '\0') goto LAB_10058c52d;
                                    puVar19 = &local_1098;
                                    local_1098 = 0x8220202;
                                    local_1094 = "Assertion failure";
                                    local_108c = 0x400;
                                    local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                    goto LAB_10058c51a;
                                  }
                                  lVar16 = *(long *)(local_10c8 + 0x10);
                                }
                                if (*(long *)(lVar16 + 0x60) != 0) {
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058b8f0;
                                  iVar7 = FUN_1001f2bbe(local_10c0,"Storefront ID");
                                  if (iVar7 != 0) {
                                    if (iVar7 == -0x80) goto LAB_10058c52d;
                                    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058ccb2;
                                    uVar10 = FUN_1001cc310();
                                    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058ccc2;
                                    cVar5 = _os_log_type_enabled(uVar10,0x10);
                                    if (cVar5 == '\0') goto LAB_10058c52d;
                                    puVar19 = &local_1098;
                                    local_1098 = 0x8220202;
                                    local_1094 = "Assertion failure";
                                    local_108c = 0x400;
                                    local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                    goto LAB_10058c51a;
                                  }
                                  lVar16 = *(long *)(local_10c8 + 0x10);
                                }
                                uVar3 = *(undefined4 *)(lVar16 + 0x68);
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058b923;
                                iVar7 = FUN_10058d802(local_10c0,"XID",local_10f0,uVar3);
                                if (iVar7 != 0) {
                                  if (iVar7 == -0x80) goto LAB_10058c52d;
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058cb71;
                                  uVar10 = FUN_1001cc310();
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058cb81;
                                  cVar5 = _os_log_type_enabled(uVar10,0x10);
                                  if (cVar5 == '\0') goto LAB_10058c52d;
                                  puVar19 = &local_1098;
                                  local_1098 = 0x8220202;
                                  local_1094 = "Assertion failure";
                                  local_108c = 0x400;
                                  local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                  goto LAB_10058c51a;
                                }
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058b93a;
                                pppuVar13 = (undefined8 ***)FUN_1002b5390(local_10c8);
                                if (pppuVar13 == (undefined8 ***)0x0) goto LAB_10058ba8b;
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058b964;
                                local_10d8 = pppuVar13;
                                iVar7 = FUN_1001f2bbe(local_10c0,"DSID",pppuVar13);
                                if (iVar7 != 0) {
                                  if (iVar7 == -0x80) goto LAB_10058c52d;
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058cd6e;
                                  uVar10 = FUN_1001cc310();
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058cd7e;
                                  cVar5 = _os_log_type_enabled(uVar10,0x10);
                                  if (cVar5 == '\0') goto LAB_10058c52d;
                                  puVar19 = &local_1098;
                                  local_1098 = 0x8220202;
                                  local_1094 = "Assertion failure";
                                  local_108c = 0x400;
                                  local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                  goto LAB_10058c51a;
                                }
                                if (param_2 == '\0') goto LAB_10058ba8b;
                                ppppuVar14 = (undefined8 ****)local_1150;
                                ppppuVar15 = &local_1150;
                                if ((undefined8 ****)local_1150 == (undefined8 ****)0x0) {
LAB_10058b9b2:
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058b9c5;
                                  cVar5 = FUN_10031ec31(local_1138,local_10d8,&local_1098);
                                  if (cVar5 == '\0') {
                                    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058b9df;
                                    cVar5 = FUN_10031ec31(param_1,local_10d8,&local_1098);
                                    if (cVar5 == '\0') {
                                      if (DAT_1008c75c0 != -1) {
                                        *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c270;
                                        _dispatch_once(&DAT_1008c75c0,
                                                       &PTR___NSConcreteGlobalBlock_100857068);
                                      }
                                      uVar10 = DAT_1008c75b8;
                                      *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c210;
                                      cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
                                      if (cVar5 != '\0') {
                                        local_10b8 = 0x8000100;
                                        uStack_10b4 = SUB84(local_10d8,0);
                                        local_10b0[0] = (undefined4)((ulong)local_10d8 >> 0x20);
                                        *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c258;
                                        __os_log_impl(0x100000000,uVar10,1,
                                                                                                            
                                                  "airtraffic> failed to find Apple ID for account %llu"
                                                  ,&local_10b8,0xc);
                                      }
                                      goto LAB_10058ba8b;
                                    }
                                  }
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058b9fd;
                                  FUN_1001b8dfc(local_1168,&local_1098);
                                  local_10b8 = SUB84(local_10d8,0);
                                  uStack_10b4 = (undefined4)((ulong)local_10d8 >> 0x20);
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058ba1a;
                                  FUN_1001b7a88(local_10b0,local_1168);
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058ba30;
                                  ppppuVar15 = (undefined8 ****)
                                               FUN_10032470e(&local_1158,&local_10b8);
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058ba3f;
                                  FUN_1001b7a50(local_10b0);
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058ba4b;
                                  FUN_1001b7a50(local_1168);
                                  if (ppppuVar15 == &local_1150) goto LAB_10058ba8b;
                                }
                                else {
                                  do {
                                    if (ppppuVar14[4] >= local_10d8) {
                                      ppppuVar15 = ppppuVar14;
                                    }
                                    ppppuVar1 = ppppuVar14 + (ppppuVar14[4] < local_10d8);
                                    ppppuVar14 = (undefined8 ****)*ppppuVar1;
                                  } while ((undefined8 ****)*ppppuVar1 != (undefined8 ****)0x0);
                                  if ((ppppuVar15 == &local_1150) || (local_10d8 < ppppuVar15[4]))
                                  goto LAB_10058b9b2;
                                }
                                local_10d8 = local_10c0;
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058ba6a;
                                uVar10 = FUN_1001b83ae(ppppuVar15 + 5);
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058ba80;
                                iVar7 = FUN_1001f3550(local_10d8,"Apple ID",uVar10);
                                if (iVar7 != 0) {
                                  if (iVar7 == -0x80) goto LAB_10058c52d;
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058d4c6;
                                  uVar10 = FUN_1001cc310();
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058d4d6;
                                  cVar5 = _os_log_type_enabled(uVar10,0x10);
                                  if (cVar5 == '\0') goto LAB_10058c52d;
                                  puVar19 = &local_1098;
                                  local_1098 = 0x8220202;
                                  local_1094 = "Assertion failure";
                                  local_108c = 0x400;
                                  local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                  goto LAB_10058c51a;
                                }
                              }
LAB_10058ba8b:
                              lVar16 = *(long *)(*(long *)(local_10c8 + 0x10) + 8);
                              *(undefined8 *)((long)&local_38 + lVar9) = 0x10058bab3;
                              iVar7 = FUN_1001f24c1(local_10c0,"Is Protected",lVar16 != 0);
                              if (iVar7 != 0) {
                                if (iVar7 == -0x80) goto LAB_10058c52d;
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058cb13;
                                uVar10 = FUN_1001cc310();
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058cb23;
                                cVar5 = _os_log_type_enabled(uVar10,0x10);
                                if (cVar5 == '\0') goto LAB_10058c52d;
                                puVar19 = &local_1098;
                                local_1098 = 0x8220202;
                                local_1094 = "Assertion failure";
                                local_108c = 0x400;
                                local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                goto LAB_10058c51a;
                              }
                              if (*(char *)(local_10d0 + 0x17) == '\x01') {
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058bae6;
                                iVar7 = FUN_1001f24c1(local_10c0,"isExplicit",1);
                                if (iVar7 != 0) {
                                  if (iVar7 == -0x80) goto LAB_10058c52d;
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058cdcc;
                                  uVar10 = FUN_1001cc310();
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058cddc;
                                  cVar5 = _os_log_type_enabled(uVar10,0x10);
                                  if (cVar5 == '\0') goto LAB_10058c52d;
                                  puVar19 = &local_1098;
                                  local_1098 = 0x8220202;
                                  local_1094 = "Assertion failure";
                                  local_108c = 0x400;
                                  local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                  goto LAB_10058c51a;
                                }
                              }
                              if ((*(byte *)((long)local_10d0 + 0xc3) & 0x10) != 0) {
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058bb19;
                                iVar7 = FUN_1001f24c1(local_10c0,"Is Sample",1);
                                if (iVar7 != 0) {
                                  if (iVar7 == -0x80) goto LAB_10058c52d;
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058ce2a;
                                  uVar10 = FUN_1001cc310();
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058ce3a;
                                  cVar5 = _os_log_type_enabled(uVar10,0x10);
                                  if (cVar5 == '\0') goto LAB_10058c52d;
                                  puVar19 = &local_1098;
                                  local_1098 = 0x8220202;
                                  local_1094 = "Assertion failure";
                                  local_108c = 0x400;
                                  local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                  goto LAB_10058c51a;
                                }
                              }
                              lVar16 = *(long *)(local_10c8 + 0x10);
                              if (100000 < *(uint *)(lVar16 + 0x8c)) {
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058bb50;
                                iVar7 = FUN_1001f2787(local_10c0);
                                if (iVar7 != 0) {
                                  if (iVar7 == -0x80) goto LAB_10058c52d;
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058ce88;
                                  uVar10 = FUN_1001cc310();
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058ce98;
                                  cVar5 = _os_log_type_enabled(uVar10,0x10);
                                  if (cVar5 == '\0') goto LAB_10058c52d;
                                  puVar19 = &local_1098;
                                  local_1098 = 0x8220202;
                                  local_1094 = "Assertion failure";
                                  local_108c = 0x400;
                                  local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                  goto LAB_10058c51a;
                                }
                                lVar16 = *(long *)(local_10c8 + 0x10);
                              }
                              lVar16 = *(long *)(lVar16 + 0x98);
                              if (lVar16 != 0) {
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058bb82;
                                lVar16 = FUN_100166c1b(lVar16,PTR_cf_cover_image_hash_100853688);
                                if (lVar16 != 0) {
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058bb9d;
                                  iVar7 = FUN_1001f36e2(local_10c0,"Cover Hash",lVar16);
                                  if (iVar7 != 0) {
                                    if (iVar7 == -0x80) goto LAB_10058c52d;
                                    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058d000;
                                    uVar10 = FUN_1001cc310();
                                    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058d010;
                                    cVar5 = _os_log_type_enabled(uVar10,0x10);
                                    if (cVar5 == '\0') goto LAB_10058c52d;
                                    puVar19 = &local_1098;
                                    local_1098 = 0x8220202;
                                    local_1094 = "Assertion failure";
                                    local_108c = 0x400;
                                    local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                    goto LAB_10058c51a;
                                  }
                                }
                                uVar10 = *(undefined8 *)(*(long *)(local_10c8 + 0x10) + 0x98);
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058bbc6;
                                lVar16 = FUN_100166c1b(uVar10,PTR_cf_cover_image_path_100853680);
                                if (lVar16 != 0) {
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058bbe1;
                                  iVar7 = FUN_1001f36e2(local_10c0,"Cover Path",lVar16);
                                  if (iVar7 != 0) {
                                    if (iVar7 == -0x80) goto LAB_10058c52d;
                                    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058d05e;
                                    uVar10 = FUN_1001cc310();
                                    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058d06e;
                                    cVar5 = _os_log_type_enabled(uVar10,0x10);
                                    if (cVar5 == '\0') goto LAB_10058c52d;
                                    puVar19 = &local_1098;
                                    local_1098 = 0x8220202;
                                    local_1094 = "Assertion failure";
                                    local_108c = 0x400;
                                    local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                    goto LAB_10058c51a;
                                  }
                                }
                                uVar10 = *(undefined8 *)(*(long *)(local_10c8 + 0x10) + 0x98);
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058bc0a;
                                lVar16 = FUN_100166c1b(uVar10,PTR_cf_package_file_hash_1008536a0);
                                if (lVar16 == 0) {
                                  uVar10 = *(undefined8 *)(*(long *)(local_10c8 + 0x10) + 0x98);
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058bc2d;
                                  lVar16 = FUN_100166c1b(uVar10,PTR_cf_file_hash_1008536a8);
                                  if (lVar16 != 0) goto LAB_10058bc32;
                                }
                                else {
LAB_10058bc32:
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058bc48;
                                  iVar7 = FUN_1001f36e2(local_10c0,"Package Hash",lVar16);
                                  if (iVar7 != 0) {
                                    if (iVar7 == -0x80) goto LAB_10058c52d;
                                    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058cee6;
                                    uVar10 = FUN_1001cc310();
                                    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058cef6;
                                    cVar5 = _os_log_type_enabled(uVar10,0x10);
                                    if (cVar5 == '\0') goto LAB_10058c52d;
                                    puVar19 = &local_1098;
                                    local_1098 = 0x8220202;
                                    local_1094 = "Assertion failure";
                                    local_108c = 0x400;
                                    local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                    goto LAB_10058c51a;
                                  }
                                }
                                uVar10 = *(undefined8 *)(*(long *)(local_10c8 + 0x10) + 0x98);
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058bc71;
                                lVar16 = FUN_100166c1b(uVar10,PTR_cf_publisher_unique_id_100853690);
                                if (lVar16 != 0) {
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058bc8c;
                                  iVar7 = FUN_1001f36e2(local_10c0,"Publisher Unique ID",lVar16);
                                  if (iVar7 != 0) {
                                    if (iVar7 == -0x80) goto LAB_10058c52d;
                                    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058d178;
                                    uVar10 = FUN_1001cc310();
                                    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058d188;
                                    cVar5 = _os_log_type_enabled(uVar10,0x10);
                                    if (cVar5 == '\0') goto LAB_10058c52d;
                                    puVar19 = &local_1098;
                                    local_1098 = 0x8220202;
                                    local_1094 = "Assertion failure";
                                    local_108c = 0x400;
                                    local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                    goto LAB_10058c51a;
                                  }
                                }
                                uVar10 = *(undefined8 *)(*(long *)(local_10c8 + 0x10) + 0x98);
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058bcb5;
                                lVar16 = FUN_100167d88(uVar10,PTR_cf_unique_id_100853698);
                                if (lVar16 != 0) {
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058bcd0;
                                  iVar7 = FUN_1001f2bbe(local_10c0,"Unique ID",lVar16);
                                  if (iVar7 != 0) {
                                    if (iVar7 == -0x80) goto LAB_10058c52d;
                                    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058d234;
                                    uVar10 = FUN_1001cc310();
                                    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058d244;
                                    cVar5 = _os_log_type_enabled(uVar10,0x10);
                                    if (cVar5 == '\0') goto LAB_10058c52d;
                                    puVar19 = &local_1098;
                                    local_1098 = 0x8220202;
                                    local_1094 = "Assertion failure";
                                    local_108c = 0x400;
                                    local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                    goto LAB_10058c51a;
                                  }
                                }
                                if (local_e98[0] == 0) {
                                  uVar10 = *(undefined8 *)(*(long *)(local_10c8 + 0x10) + 0x98);
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058bd03;
                                  lVar16 = FUN_100166b7f(uVar10,PTR_cf_asset_info_1008536b0);
                                  if (lVar16 != 0) {
                                    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058bd1e;
                                    FUN_100166ce2(lVar16,PTR_cf_flavor_1008527e8,local_e98);
                                  }
                                }
                                uVar10 = *(undefined8 *)(*(long *)(local_10c8 + 0x10) + 0x98);
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058bd3c;
                                lVar16 = FUN_100166c1b(uVar10,PTR_cf_artwork_template_name_1008536c0
                                                      );
                                if (lVar16 != 0) {
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058bd57;
                                  iVar7 = FUN_1001f36e2(local_10c0,"artwork-template-name",lVar16);
                                  if (iVar7 != 0) {
                                    if (iVar7 == -0x80) goto LAB_10058c52d;
                                    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058d292;
                                    uVar10 = FUN_1001cc310();
                                    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058d2a2;
                                    cVar5 = _os_log_type_enabled(uVar10,0x10);
                                    if (cVar5 == '\0') goto LAB_10058c52d;
                                    puVar19 = &local_1098;
                                    local_1098 = 0x8220202;
                                    local_1094 = "Assertion failure";
                                    local_108c = 0x400;
                                    local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                    goto LAB_10058c51a;
                                  }
                                }
                                uVar10 = *(undefined8 *)(*(long *)(local_10c8 + 0x10) + 0x98);
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058bd80;
                                lVar16 = FUN_100167d88(uVar10,PTR_cf_publication_version_1008536c8);
                                if (lVar16 != 0) {
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058bd9b;
                                  iVar7 = FUN_1001f29da(local_10c0,"Publication Version",lVar16);
                                  if (iVar7 != 0) {
                                    if (iVar7 == -0x80) goto LAB_10058c52d;
                                    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058d2f0;
                                    uVar10 = FUN_1001cc310();
                                    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058d300;
                                    cVar5 = _os_log_type_enabled(uVar10,0x10);
                                    if (cVar5 == '\0') goto LAB_10058c52d;
                                    puVar19 = &local_1098;
                                    local_1098 = 0x8220202;
                                    local_1094 = "Assertion failure";
                                    local_108c = 0x400;
                                    local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                    goto LAB_10058c51a;
                                  }
                                }
                                uVar10 = *(undefined8 *)(*(long *)(local_10c8 + 0x10) + 0x98);
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058bdc4;
                                lVar16 = FUN_100166c1b(uVar10,
                                                  PTR_cf_human_friendly_publication_version_1008536d0
                                                  );
                                if (lVar16 != 0) {
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058bddf;
                                  iVar7 = FUN_1001f36e2(local_10c0,
                                                        "Human Readable Publication Version",lVar16)
                                  ;
                                  if (iVar7 != 0) {
                                    if (iVar7 == -0x80) goto LAB_10058c52d;
                                    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058d34e;
                                    uVar10 = FUN_1001cc310();
                                    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058d35e;
                                    cVar5 = _os_log_type_enabled(uVar10,0x10);
                                    if (cVar5 == '\0') goto LAB_10058c52d;
                                    puVar19 = &local_1098;
                                    local_1098 = 0x8220202;
                                    local_1094 = "Assertion failure";
                                    local_108c = 0x400;
                                    local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                    goto LAB_10058c51a;
                                  }
                                }
                                uVar10 = *(undefined8 *)(*(long *)(local_10c8 + 0x10) + 0x98);
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058be08;
                                lVar16 = FUN_100166844(uVar10,PTR_cf_languages_1008536e0);
                                if (lVar16 != 0) {
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058be23;
                                  iVar7 = FUN_1001f3eb9(local_10c0,"Languages",lVar16);
                                  if (iVar7 != 0) {
                                    if (iVar7 == -0x80) goto LAB_10058c52d;
                                    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058d3ac;
                                    uVar10 = FUN_1001cc310();
                                    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058d3bc;
                                    cVar5 = _os_log_type_enabled(uVar10,0x10);
                                    if (cVar5 == '\0') goto LAB_10058c52d;
                                    puVar19 = &local_1098;
                                    local_1098 = 0x8220202;
                                    local_1094 = "Assertion failure";
                                    local_108c = 0x400;
                                    local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                    goto LAB_10058c51a;
                                  }
                                }
                                uVar10 = *(undefined8 *)(*(long *)(local_10c8 + 0x10) + 0x98);
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058be4c;
                                lVar16 = FUN_100166c1b(uVar10);
                                if (lVar16 != 0) {
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058be67;
                                  iVar7 = FUN_1001f36e2(local_10c0,"Page Progression Direction",
                                                        lVar16);
                                  if (iVar7 != 0) {
                                    if (iVar7 == -0x80) goto LAB_10058c52d;
                                    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058d468;
                                    uVar10 = FUN_1001cc310();
                                    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058d478;
                                    cVar5 = _os_log_type_enabled(uVar10,0x10);
                                    if (cVar5 == '\0') goto LAB_10058c52d;
                                    puVar19 = &local_1098;
                                    local_1098 = 0x8220202;
                                    local_1094 = "Assertion failure";
                                    local_108c = 0x400;
                                    local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                    goto LAB_10058c51a;
                                  }
                                }
                              }
                              if (local_e98[0] != 0) {
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058be96;
                                iVar7 = FUN_1001f361e(local_10c0,"Flavor",local_e98);
                                if (iVar7 != 0) {
                                  if (iVar7 == -0x80) goto LAB_10058c52d;
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058cf44;
                                  uVar10 = FUN_1001cc310();
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058cf54;
                                  cVar5 = _os_log_type_enabled(uVar10,0x10);
                                  if (cVar5 == '\0') goto LAB_10058c52d;
                                  puVar19 = &local_1098;
                                  local_1098 = 0x8220202;
                                  local_1094 = "Assertion failure";
                                  local_108c = 0x400;
                                  local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                  goto LAB_10058c51a;
                                }
                              }
                              if (local_10dc != 0) {
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058bec5;
                                iVar7 = FUN_1001f2c28(local_10c0,"Path",&local_c98);
                                if (iVar7 != 0) {
                                  if (iVar7 == -0x80) goto LAB_10058c52d;
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058cfa2;
                                  uVar10 = FUN_1001cc310();
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058cfb2;
                                  cVar5 = _os_log_type_enabled(uVar10,0x10);
                                  if (cVar5 == '\0') goto LAB_10058c52d;
                                  puVar19 = &local_1098;
                                  local_1098 = 0x8220202;
                                  local_1094 = "Assertion failure";
                                  local_108c = 0x400;
                                  local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                  goto LAB_10058c51a;
                                }
                              }
                              *(undefined8 *)((long)&local_38 + lVar9) = 0x10058bede;
                              uVar12 = FUN_1004744bf(local_10d0,0);
                              uVar8 = (uint)uVar12;
                              local_10d8 = (undefined8 **)CONCAT44(local_10d8._4_4_,uVar8);
                              if ((uVar8 >> 0x16 & 1) == 0) {
                                if ((uVar8 >> 0x17 & 1) != 0) {
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058bf0e;
                                  iVar7 = FUN_1001f32a7(local_10c0,"Extension","pdf");
                                  if (iVar7 != 0) {
                                    if (iVar7 == -0x80) goto LAB_10058c52d;
                                    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058d558;
                                    uVar10 = FUN_1001cc310();
                                    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058d568;
                                    cVar5 = _os_log_type_enabled(uVar10,0x10);
                                    if (cVar5 == '\0') goto LAB_10058c52d;
                                    puVar19 = &local_1098;
                                    local_1098 = 0x8220202;
                                    local_1094 = "Assertion failure";
                                    local_108c = 0x400;
                                    local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                    goto LAB_10058c51a;
                                  }
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058bf33;
                                  iVar7 = FUN_1001f32a7(local_10c0,"MIME Type","application/pdf");
                                  uVar12 = (ulong)local_10d8 & 0xffffffff;
                                  if (iVar7 != 0) {
                                    if (iVar7 == -0x80) goto LAB_10058c52d;
                                    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058d5b6;
                                    uVar10 = FUN_1001cc310();
                                    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058d5c6;
                                    cVar5 = _os_log_type_enabled(uVar10,0x10);
                                    if (cVar5 == '\0') goto LAB_10058c52d;
                                    puVar19 = &local_1098;
                                    local_1098 = 0x8220202;
                                    local_1094 = "Assertion failure";
                                    local_108c = 0x400;
                                    local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                    goto LAB_10058c51a;
                                  }
                                }
                              }
                              else {
                                uVar10 = *(undefined8 *)(*(long *)(local_10c8 + 0x10) + 0x98);
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058bf68;
                                local_10c8 = (undefined *)
                                             FUN_100166c1b(uVar10,PTR_cf_mime_type_1008536b8);
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058bf7b;
                                cVar5 = FUN_1002f3b9d(local_10c8);
                                pcVar17 = "ibooks";
                                if (cVar5 == '\0') {
                                  pcVar17 = "epub";
                                }
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058bfa2;
                                iVar7 = FUN_1001f32a7(local_10c0,"Extension",pcVar17);
                                if (iVar7 != 0) {
                                  if (iVar7 == -0x80) goto LAB_10058c52d;
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058d0bc;
                                  uVar10 = FUN_1001cc310();
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058d0cc;
                                  cVar5 = _os_log_type_enabled(uVar10,0x10);
                                  if (cVar5 == '\0') goto LAB_10058c52d;
                                  puVar19 = &local_1098;
                                  local_1098 = 0x8220202;
                                  local_1094 = "Assertion failure";
                                  local_108c = 0x400;
                                  local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                  goto LAB_10058c51a;
                                }
                                puVar18 = local_10c8;
                                if (local_10c8 == (undefined *)0x0) {
                                  puVar18 = PTR_cf_application_epub_zip_1008536e8;
                                }
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058bfd2;
                                iVar7 = FUN_1001f36e2(local_10c0,"MIME Type",puVar18);
                                uVar12 = (ulong)local_10d8 & 0xffffffff;
                                if (iVar7 != 0) {
                                  if (iVar7 == -0x80) goto LAB_10058c52d;
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058d11a;
                                  uVar10 = FUN_1001cc310();
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058d12a;
                                  cVar5 = _os_log_type_enabled(uVar10,0x10);
                                  if (cVar5 == '\0') goto LAB_10058c52d;
                                  puVar19 = &local_1098;
                                  local_1098 = 0x8220202;
                                  local_1094 = "Assertion failure";
                                  local_108c = 0x400;
                                  local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                  goto LAB_10058c51a;
                                }
                              }
                              if ((uVar12 & 4) == 0) {
                                if (((uint)uVar12 >> 0x15 & 1) != 0) {
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c005;
                                  iVar7 = FUN_1001f24c1(local_10c0,"Is iTunes U",1);
                                  uVar12 = (ulong)local_10d8 & 0xffffffff;
                                  if (iVar7 != 0) {
                                    if (iVar7 == -0x80) goto LAB_10058c52d;
                                    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058d614;
                                    uVar10 = FUN_1001cc310();
                                    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058d624;
                                    cVar5 = _os_log_type_enabled(uVar10,0x10);
                                    if (cVar5 == '\0') goto LAB_10058c52d;
                                    puVar19 = &local_1098;
                                    local_1098 = 0x8220202;
                                    local_1094 = "Assertion failure";
                                    local_108c = 0x400;
                                    local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                    goto LAB_10058c51a;
                                  }
                                }
                              }
                              else {
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c030;
                                iVar7 = FUN_1001f24c1(local_10c0,"Is Podcast",1);
                                uVar12 = (ulong)local_10d8 & 0xffffffff;
                                if (iVar7 != 0) {
                                  if (iVar7 == -0x80) goto LAB_10058c52d;
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058d1d6;
                                  uVar10 = FUN_1001cc310();
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058d1e6;
                                  cVar5 = _os_log_type_enabled(uVar10,0x10);
                                  if (cVar5 == '\0') goto LAB_10058c52d;
                                  puVar19 = &local_1098;
                                  local_1098 = 0x8220202;
                                  local_1094 = "Assertion failure";
                                  local_108c = 0x400;
                                  local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                  goto LAB_10058c51a;
                                }
                              }
                              if ((uVar12 & 0x200004) != 0) {
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c066;
                                FUN_10047d1cb(&local_10b8,local_10d0,
                                              PTR_cf_podcast_feed_url_100844b30);
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c06e;
                                cVar5 = FUN_1001b8428(&local_10b8);
                                if (cVar5 == '\0') {
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c08c;
                                  iVar7 = FUN_1001f384d(local_10c0,"Feed URL",&local_10b8);
                                  if (iVar7 != 0) {
                                    if (iVar7 != -0x80) {
                                      *(undefined8 *)((long)&local_38 + lVar9) = 0x10058d520;
                                      uVar10 = FUN_1001cc310();
                                      *(undefined8 *)((long)&local_38 + lVar9) = 0x10058d530;
                                      cVar5 = _os_log_type_enabled(uVar10,0x10);
                                      if (cVar5 != '\0') {
                                        local_1098 = 0x8220202;
                                        local_1094 = "Assertion failure";
                                        local_108c = 0x400;
                                        local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                        *(undefined8 *)((long)&local_38 + lVar9) = 0x10058d6fe;
                                        __os_log_error_impl(0x100000000,uVar10,0x10,
                                                            "%{public}s: err == (%d)",&local_1098,
                                                            0x12);
                                      }
                                    }
                                    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058d544;
                                    FUN_1001b7a50(&local_10b8);
                                    goto LAB_10058c52d;
                                  }
                                }
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c0a3;
                                FUN_1001b7a50(&local_10b8);
                              }
                              *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c0af;
                              iVar7 = FUN_1001f3953(local_10c0);
                              if (iVar7 != 0) {
                                if (iVar7 == -0x80) goto LAB_10058c52d;
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058cd10;
                                uVar10 = FUN_1001cc310();
                                *(undefined8 *)((long)&local_38 + lVar9) = 0x10058cd20;
                                cVar5 = _os_log_type_enabled(uVar10,0x10);
                                if (cVar5 == '\0') goto LAB_10058c52d;
                                puVar19 = &local_1098;
                                local_1098 = 0x8220202;
                                local_1094 = "Assertion failure";
                                local_108c = 0x400;
                                local_108a = (char *)CONCAT44(local_108a._4_4_,iVar7);
                                goto LAB_10058c51a;
                              }
                            }
LAB_10058c0ba:
                            *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c0c6;
                            puVar11 = (undefined8 *)FUN_1002f9451(local_10d0);
                          }
                          *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c5a1;
                          iVar7 = FUN_1001f3a61(local_10c0);
                          if (iVar7 != -0x80) {
                            if (iVar7 == 0) {
                              *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c5be;
                              iVar7 = FUN_1001f3953(local_10c0);
                              if (iVar7 != -0x80) {
                                if (iVar7 == 0) {
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c5df;
                                  iVar7 = FUN_1001f3c2b(local_10c0);
                                  if ((iVar7 != -0x80) && (iVar7 != 0)) {
                                    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c5f9;
                                    uVar10 = FUN_1001cc310();
                                    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c609;
                                    cVar5 = _os_log_type_enabled(uVar10,0x10);
                                    if (cVar5 != '\0') {
                                      puVar19 = &local_c98;
                                      local_c98 = 0x8220202;
                                      local_c94 = "Assertion failure";
                                      local_c8c = 0x400;
                                      local_c8a = (char *)CONCAT44(local_c8a._4_4_,iVar7);
                                      goto LAB_10058c51a;
                                    }
                                  }
                                }
                                else {
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058cbc5;
                                  uVar10 = FUN_1001cc310();
                                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058cbd5;
                                  cVar5 = _os_log_type_enabled(uVar10,0x10);
                                  if (cVar5 != '\0') {
                                    puVar19 = &local_c98;
                                    local_c98 = 0x8220202;
                                    local_c94 = "Assertion failure";
                                    local_c8c = 0x400;
                                    local_c8a = (char *)CONCAT44(local_c8a._4_4_,iVar7);
LAB_10058c51a:
                                    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c52d;
                                    __os_log_error_impl(0x100000000,uVar10,0x10,
                                                        "%{public}s: err == (%d)",puVar19,0x12);
                                  }
                                }
                              }
                            }
                            else {
                              *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c709;
                              uVar10 = FUN_1001cc310();
                              *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c719;
                              cVar5 = _os_log_type_enabled(uVar10,0x10);
                              if (cVar5 != '\0') {
                                puVar19 = &local_c98;
                                local_c98 = 0x8220202;
                                local_c94 = "Assertion failure";
                                local_c8c = 0x400;
                                local_c8a = (char *)CONCAT44(local_c8a._4_4_,iVar7);
                                goto LAB_10058c51a;
                              }
                            }
                          }
                        }
                        else {
                          *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c4d4;
                          uVar10 = FUN_1001cc310();
                          *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c4e4;
                          cVar5 = _os_log_type_enabled(uVar10,0x10);
                          if (cVar5 != '\0') {
                            puVar19 = &local_c98;
                            local_c98 = 0x8220202;
                            local_c94 = "Assertion failure";
                            local_c8c = 0x400;
                            local_c8a = (char *)CONCAT44(local_c8a._4_4_,iVar7);
                            goto LAB_10058c51a;
                          }
                        }
                      }
                    }
                    else {
                      *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c483;
                      uVar10 = FUN_1001cc310();
                      *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c493;
                      cVar5 = _os_log_type_enabled(uVar10,0x10);
                      if (cVar5 != '\0') {
                        puVar19 = &local_c98;
                        local_c98 = 0x8220202;
                        local_c94 = "Assertion failure";
                        local_c8c = 0x400;
                        local_c8a = (char *)CONCAT44(local_c8a._4_4_,iVar7);
                        goto LAB_10058c51a;
                      }
                    }
                  }
                }
                else {
                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c42f;
                  uVar10 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c43f;
                  cVar5 = _os_log_type_enabled(uVar10,0x10);
                  if (cVar5 != '\0') {
                    puVar19 = &local_c98;
                    local_c98 = 0x8220202;
                    local_c94 = "Assertion failure";
                    local_c8c = 0x400;
                    local_c8a = (char *)CONCAT44(local_c8a._4_4_,iVar7);
                    goto LAB_10058c51a;
                  }
                }
              }
            }
            else {
              *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c38a;
              uVar10 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c39a;
              cVar5 = _os_log_type_enabled(uVar10,0x10);
              if (cVar5 != '\0') {
                puVar19 = &local_c98;
                local_c98 = 0x8220202;
                local_c94 = "Assertion failure";
                local_c8c = 0x400;
                local_c8a = (char *)CONCAT44(local_c8a._4_4_,iVar7);
                goto LAB_10058c51a;
              }
            }
          }
        }
        else {
          *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c336;
          uVar10 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c346;
          cVar5 = _os_log_type_enabled(uVar10,0x10);
          if (cVar5 != '\0') {
            puVar19 = &local_c98;
            local_c98 = 0x8220202;
            local_c94 = "Assertion failure";
            local_c8c = 0x400;
            local_c8a = (char *)CONCAT44(local_c8a._4_4_,iVar7);
            goto LAB_10058c51a;
          }
        }
      }
LAB_10058c52d:
      *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c535;
      FUN_100307383(param_1);
      if ((undefined8 ***)local_10c0 != (undefined8 ***)0x0) {
        *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c546;
        FUN_1001f23c4();
      }
      if (iVar7 == 0) {
        iVar7 = 0;
      }
      else {
        *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c557;
        FUN_10016013b(local_10e8);
      }
      goto LAB_10058c55c;
    }
    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c2bd;
    uVar10 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c2cd;
    cVar5 = _os_log_type_enabled(uVar10,0x10);
    if (cVar5 != '\0') {
      local_c8a = "buffer != nullptr";
      goto LAB_10058c2f8;
    }
  }
  iVar7 = -0x32;
  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c32c;
  FUN_1001782e9(0,0);
LAB_10058c55c:
  *(undefined8 *)((long)&local_38 + lVar9) = 0x10058c56c;
  FUN_10032484e(&local_1158,local_1150);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((long)&local_38 + lVar9) = 0x10058d6b9;
    ___stack_chk_fail();
  }
  return iVar7;
}

