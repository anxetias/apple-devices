// name: FUN_10035e308
// address: 10035e308

ulong FUN_10035e308(undefined4 param_1,undefined4 param_2,long param_3,char *param_4,uint *param_5,
                   long param_6,short param_7,undefined1 param_8,char param_9,undefined4 param_10,
                   undefined4 param_11,undefined4 param_12)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  char cVar10;
  undefined4 uVar11;
  int iVar12;
  char *pcVar13;
  bool bVar14;
  char *pcVar15;
  ulong uVar16;
  long lVar17;
  undefined *puVar18;
  undefined8 uVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  uint *puVar23;
  undefined4 local_68;
  uint local_64;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  ushort local_5a;
  undefined2 uStack_58;
  undefined4 uStack_56;
  undefined2 uStack_52;
  undefined2 local_50;
  uint local_4e;
  undefined2 local_4a;
  uint local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == 0) {
    uVar19 = FUN_1001cc310();
    cVar10 = _os_log_type_enabled(uVar19,0x10);
    if (cVar10 != '\0') {
      pcVar13 = "videoCharacteristics != nullptr";
LAB_10035e998:
      uStack_5c = 0x822;
      uStack_5e = 0;
      uStack_60 = 1;
      local_64 = 0x7a0a90;
      local_68 = 0x8220202;
      local_5a = (ushort)pcVar13;
      uStack_58 = (undefined2)((ulong)pcVar13 >> 0x10);
      uStack_56 = (undefined4)((ulong)pcVar13 >> 0x20);
      __os_log_error_impl(0x100000000,uVar19,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
LAB_10035e9bd:
    FUN_1001782e9(0,0);
    uVar22 = 0xe;
  }
  else {
    if (param_5 == (uint *)0x0) {
      uVar19 = FUN_1001cc310();
      cVar10 = _os_log_type_enabled(uVar19,0x10);
      if (cVar10 != '\0') {
        pcVar13 = "videoCodecList != nullptr";
        goto LAB_10035e998;
      }
      goto LAB_10035e9bd;
    }
    if (param_6 == 0) {
      uVar19 = FUN_1001cc310();
      cVar10 = _os_log_type_enabled(uVar19,0x10);
      if (cVar10 != '\0') {
        pcVar13 = "audioCodecList != nullptr";
        goto LAB_10035e998;
      }
      goto LAB_10035e9bd;
    }
    if (*(int *)(param_3 + 4) == 0) {
      uVar11 = FUN_10035d3fb();
      uVar22 = FUN_10035da29(param_1,param_2,uVar11,param_6,param_8,param_10,param_11,param_12);
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
        return uVar22;
      }
      goto LAB_10035ea28;
    }
    pcVar13 = "";
    if (param_4 != (char *)0x0) {
      pcVar13 = param_4;
    }
    uVar16 = 0;
    bVar14 = false;
    do {
      if (*(int *)(param_3 + 0x18 + uVar16 * 0x38) == 0x64766831) {
        uVar22 = 0;
        cVar10 = FUN_1001cd44e("sync-dolby-vision-videos",0,0);
        if (cVar10 != '\0') goto LAB_10035e9cc;
      }
      if (*param_5 != 0) {
        lVar17 = uVar16 * 0x38 + param_3 + 8;
        uVar20 = 0;
        puVar23 = param_5 + 0x13;
        do {
          uVar8 = uStack_52;
          uVar11 = uStack_56;
          uVar5 = uStack_58;
          puVar18 = PTR___os_log_default_10082cb88;
          uVar21 = puVar23[-0x12];
          if (uVar21 == *(uint *)(lVar17 + 0x10)) {
            uStack_58 = SUB82(pcVar13,0);
            uVar6 = uStack_58;
            uStack_52 = (undefined2)((ulong)pcVar13 >> 0x30);
            uVar9 = uStack_52;
            uStack_56 = (undefined4)((ulong)pcVar13 >> 0x10);
            uVar7 = uStack_56;
            uStack_58 = uVar5;
            uStack_56 = uVar11;
            uStack_52 = uVar8;
            if (uVar21 == 0x61766331) {
LAB_10035e44e:
              bVar1 = *(byte *)(lVar17 + 0x2d);
              if (bVar1 == *(byte *)((long)puVar23 + -0x37)) {
                bVar2 = *(byte *)(lVar17 + 0x2e);
                bVar3 = *(byte *)((long)puVar23 + -0x36);
                if (bVar3 < bVar2) {
                  cVar10 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
                  if (cVar10 != '\0') {
                    uStack_5e = (undefined2)*(undefined4 *)(lVar17 + 0xc);
                    uStack_5c = (undefined2)((uint)*(undefined4 *)(lVar17 + 0xc) >> 0x10);
                    pcVar15 = 
                    "Level %u of track %u of \"%{public}s\" exceeds maximum level %u for profile \'%c\'"
                    ;
                    local_64 = (uint)bVar2;
                    local_4e = (uint)bVar3;
LAB_10035e75f:
                    local_4a = 0x400;
                    local_50 = 0x400;
                    local_5a = 0x822;
                    uStack_60 = 0x400;
                    local_68 = 0x4000502;
                    uVar19 = 0x24;
                    uStack_58 = uVar6;
                    uStack_56 = uVar7;
                    uStack_52 = uVar9;
                    local_48 = (uint)bVar1;
                    goto LAB_10035e769;
                  }
                }
                else {
                  uVar21 = puVar23[-4];
                  if (((int)uVar21 < 0) || (uVar4 = *(uint *)(lVar17 + 0x30), uVar4 <= uVar21)) {
                    if ((*(char *)((long)puVar23 + -0x3f) == '\0') &&
                       (*(char *)(lVar17 + 0x35) != '\0')) {
                      cVar10 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
                      if (cVar10 != '\0') {
                        local_68 = 0x8220202;
                        local_64 = (uint)pcVar13;
                        uStack_60 = (undefined2)((ulong)pcVar13 >> 0x20);
                        uStack_5c = 0x400;
                        local_5a = (ushort)bVar1;
                        uStack_58 = 0;
                        pcVar15 = 
                        "\"%{public}s\" has B frames and B frames is not supported for profile \'%c\'"
                        ;
                        uVar19 = 0x12;
                        uStack_5e = uVar9;
                        goto LAB_10035e769;
                      }
                    }
                    else {
                      cVar10 = FUN_10035ea2d(pcVar13,param_8,param_3,lVar17);
                      if (cVar10 != '\0') goto LAB_10035e68e;
                    }
                  }
                  else {
                    cVar10 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
                    if (cVar10 != '\0') {
                      uStack_5e = (undefined2)*(undefined4 *)(lVar17 + 0xc);
                      uStack_5c = (undefined2)((uint)*(undefined4 *)(lVar17 + 0xc) >> 0x10);
                      pcVar15 = 
                      "Complexity level %d of track %u of \"%{public}s\" exceeds maximum complexity level %d for profile \'%c\'"
                      ;
                      local_64 = uVar4;
                      local_4e = uVar21;
                      goto LAB_10035e75f;
                    }
                  }
                }
              }
              else {
                cVar10 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
                if (cVar10 != '\0') {
                  local_68 = 0x4000302;
                  uStack_60 = 0x400;
                  uStack_5e = (undefined2)*(undefined4 *)(lVar17 + 0xc);
                  uStack_5c = (undefined2)((uint)*(undefined4 *)(lVar17 + 0xc) >> 0x10);
                  local_5a = 0x822;
                  pcVar15 = "Profile \'%c\' of track %u of \"%{public}s\" is not supported";
                  uVar19 = 0x18;
                  local_64 = (uint)bVar1;
                  uStack_58 = uVar6;
                  uStack_56 = uVar7;
                  uStack_52 = uVar9;
LAB_10035e769:
                  __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,pcVar15,&local_68,
                                uVar19);
                }
              }
              bVar14 = (bool)(bVar14 | *(char *)(lVar17 + 0x2d) == 'M');
            }
            else if (uVar21 == 0x68766331) {
              bVar1 = *(byte *)(lVar17 + 0x2c);
              if ((byte)puVar23[-0xe] < bVar1) {
                cVar10 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
                if (cVar10 != '\0') {
                  local_68 = 0x4000302;
                  uStack_5e = (undefined2)*(undefined4 *)(lVar17 + 0xc);
                  uStack_5c = (undefined2)((uint)*(undefined4 *)(lVar17 + 0xc) >> 0x10);
                  pcVar15 = "Tier %u of track %u of \"%{public}s\" is not supported";
                  uVar19 = 0x18;
LAB_10035e563:
                  local_64 = (uint)bVar1;
                  local_5a = 0x822;
                  uStack_60 = 0x400;
                  uStack_58 = uVar6;
                  uStack_56 = uVar7;
                  uStack_52 = uVar9;
                  __os_log_impl(0x100000000,puVar18,1,pcVar15,&local_68,uVar19);
                }
              }
              else {
                bVar2 = *(byte *)(lVar17 + 0x2d);
                if (bVar2 == *(byte *)((long)puVar23 + -0x37)) {
                  bVar1 = *(byte *)(lVar17 + 0x2e);
                  bVar3 = *(byte *)((long)puVar23 + -0x36);
                  if (bVar1 <= bVar3) goto LAB_10035e673;
                  cVar10 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
                  if (cVar10 != '\0') {
                    local_68 = 0x4000502;
                    uStack_5e = (undefined2)*(undefined4 *)(lVar17 + 0xc);
                    uStack_5c = (undefined2)((uint)*(undefined4 *)(lVar17 + 0xc) >> 0x10);
                    local_50 = 0x400;
                    local_4a = 0x400;
                    pcVar15 = 
                    "Level %u of track %u of \"%{public}s\" exceeds maximum level %u for profile %u"
                    ;
                    uVar19 = 0x24;
                    puVar18 = PTR___os_log_default_10082cb88;
                    local_4e = (uint)bVar3;
                    local_48 = (uint)bVar2;
                    goto LAB_10035e563;
                  }
                }
                else {
                  cVar10 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
                  if (cVar10 != '\0') {
                    local_68 = 0x4000302;
                    uStack_60 = 0x400;
                    uStack_5e = (undefined2)*(undefined4 *)(lVar17 + 0xc);
                    uStack_5c = (undefined2)((uint)*(undefined4 *)(lVar17 + 0xc) >> 0x10);
                    local_5a = 0x822;
                    local_64 = (uint)bVar2;
                    uStack_58 = uVar6;
                    uStack_56 = uVar7;
                    uStack_52 = uVar9;
                    __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,
                                  "Profile %u of track %u of \"%{public}s\" is not supported",
                                  &local_68,0x18);
                  }
                }
              }
            }
            else {
              if (uVar21 == 0x68323633) goto LAB_10035e44e;
LAB_10035e673:
              cVar10 = FUN_10035ea2d(pcVar13,param_8,param_3,lVar17);
              if (cVar10 != '\0') goto LAB_10035e68e;
            }
          }
          else {
            if (uVar21 != 0x2a2a2a2a) goto LAB_10035e789;
LAB_10035e68e:
            uVar22 = 0;
            if (param_7 == 2) goto LAB_10035e9cc;
            uVar11 = FUN_10035d3fb(param_7);
            iVar12 = FUN_10035da29(param_1,param_2,uVar11,puVar23,param_8,param_10,param_11,param_12
                                  );
            if (iVar12 == 0) goto LAB_10035e9cc;
          }
LAB_10035e789:
          uVar20 = uVar20 + 1;
          puVar23 = puVar23 + 199;
        } while (uVar20 < *param_5);
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < *(uint *)(param_3 + 4));
    uVar21 = 0x38;
    if (!bVar14) {
      uVar21 = 0xe;
    }
    if (param_9 == '\0') {
      uVar21 = 0xe;
    }
    uVar22 = (ulong)uVar21;
  }
LAB_10035e9cc:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar22;
  }
LAB_10035ea28:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

