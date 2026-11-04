// name: FUN_10035ea2d
// address: 10035ea2d

undefined1 FUN_10035ea2d(undefined8 param_1,char param_2,char *param_3,uint *param_4,long param_5)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  uint uVar10;
  uint uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  char cVar14;
  undefined1 uVar15;
  char *pcVar16;
  undefined8 uVar17;
  uint uVar18;
  double dVar19;
  float fVar20;
  undefined4 local_68;
  uint local_64;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined2 uStack_56;
  uint uStack_54;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 uStack_4c;
  double local_4a;
  long local_38;
  
  uVar13 = local_4e;
  uVar12 = local_50;
  uVar10 = uStack_54;
  uVar8 = uStack_56;
  uVar6 = uStack_58;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  fVar20 = (float)param_4[6];
  if ((fVar20 == 0.0) && (!NAN(fVar20))) {
    fVar20 = (float)param_4[5];
  }
  uVar3 = *param_4;
  uVar18 = *(uint *)(param_5 + 0x30);
  uStack_58 = (undefined2)param_1;
  uVar7 = uStack_58;
  uStack_56 = (undefined2)((ulong)param_1 >> 0x10);
  uVar9 = uStack_56;
  uStack_54 = (uint)((ulong)param_1 >> 0x20);
  uVar11 = uStack_54;
  uStack_58 = uVar6;
  uStack_56 = uVar8;
  uStack_54 = uVar10;
  if (uVar18 < uVar3) {
    cVar14 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
    if (cVar14 == '\0') goto LAB_10035ed2a;
    uStack_5e = (undefined2)param_4[3];
    uStack_5c = (undefined2)(param_4[3] >> 0x10);
    local_4e = (undefined2)uVar18;
    uStack_4c = (undefined2)(uVar18 >> 0x10);
    pcVar16 = "Height %u of track %u of \"%{public}s\" exceeds maximum height %u";
    local_64 = uVar3;
    goto LAB_10035ed1a;
  }
  uVar18 = param_4[1];
  uVar4 = *(uint *)(param_5 + 0x2c);
  if (uVar4 < uVar18) {
    cVar14 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
    if (cVar14 != '\0') {
      uStack_5e = (undefined2)param_4[3];
      uStack_5c = (undefined2)(param_4[3] >> 0x10);
      local_4e = (undefined2)uVar4;
      uStack_4c = (undefined2)(uVar4 >> 0x10);
      pcVar16 = "Width %u of track %u of \"%{public}s\" exceeds maximum width %u";
      local_64 = uVar18;
      goto LAB_10035ed1a;
    }
  }
  else {
    uVar4 = *(uint *)(param_5 + 0x28);
    if (uVar3 < uVar4) {
      cVar14 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
      if (cVar14 != '\0') {
        uStack_5e = (undefined2)param_4[3];
        uStack_5c = (undefined2)(param_4[3] >> 0x10);
        local_4e = (undefined2)uVar4;
        uStack_4c = (undefined2)(uVar4 >> 0x10);
        pcVar16 = "Height %u of track %u of \"%{public}s\" is less than minimum height %u";
        local_64 = uVar3;
        goto LAB_10035ed1a;
      }
    }
    else {
      uVar4 = *(uint *)(param_5 + 0x24);
      if (uVar18 < uVar4) {
        cVar14 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
        if (cVar14 != '\0') {
          uStack_5e = (undefined2)param_4[3];
          uStack_5c = (undefined2)(param_4[3] >> 0x10);
          local_4e = (undefined2)uVar4;
          uStack_4c = (undefined2)(uVar4 >> 0x10);
          pcVar16 = "Width %u of track %u of \"%{public}s\" is less than minimum width %u";
          local_64 = uVar18;
          goto LAB_10035ed1a;
        }
      }
      else {
        uVar18 = uVar18 * uVar3;
        uVar4 = *(uint *)(param_5 + 0x1c);
        if (uVar4 < uVar18) {
          cVar14 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
          if (cVar14 != '\0') {
            uStack_5e = (undefined2)param_4[3];
            uStack_5c = (undefined2)(param_4[3] >> 0x10);
            local_4e = (undefined2)uVar4;
            uStack_4c = (undefined2)(uVar4 >> 0x10);
            pcVar16 = "Resolution %d of track %u of \"%{public}s\" exceeds maximum resolution %u";
            local_64 = uVar18;
            goto LAB_10035ed1a;
          }
        }
        else {
          uVar4 = *(uint *)(param_5 + 0x34);
          if ((uVar4 == 0) || (uVar5 = param_4[2], uVar5 <= uVar4)) {
            local_50 = (undefined2)((ulong)param_1 >> 0x20);
            uVar6 = local_50;
            local_4e = (undefined2)((ulong)param_1 >> 0x30);
            uVar8 = local_4e;
            local_50 = uVar12;
            local_4e = uVar13;
            if (param_2 == '\0') {
LAB_10035ed8a:
              fVar1 = (float)param_4[7];
              fVar2 = *(float *)(param_5 + 0xc);
              uStack_54 = (uint)param_1;
              uVar3 = uStack_54;
              if (fVar1 <= fVar2) {
                fVar2 = *(float *)(param_5 + 0x3c);
                if (((fVar2 == 0.0) && (!NAN(fVar2))) || (fVar20 <= fVar2)) {
                  uVar4 = *(uint *)(param_5 + 0x40);
                  if (uVar4 != 0) {
                    if ((float)uVar4 < fVar20 * (float)uVar18) {
                      uStack_54 = uVar10;
                      cVar14 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
                      if (cVar14 != '\0') {
                        uStack_5e = (undefined2)param_4[3];
                        uStack_5c = (undefined2)(param_4[3] >> 0x10);
                        local_4e = (undefined2)uVar4;
                        uStack_4c = (undefined2)(uVar4 >> 0x10);
                        pcVar16 = 
                        "Pixel rate %u of track %u of \"%{public}s\" exceeds maximum pixel rate %u";
                        local_64 = (uint)(long)(fVar20 * (float)uVar18);
                        goto LAB_10035ed1a;
                      }
                      goto LAB_10035ed2a;
                    }
                  }
                  uVar18 = *(uint *)(param_5 + 0x18);
                  if ((uVar18 == 0) || (uVar4 = param_4[8], uVar4 <= uVar18)) {
                    uVar18 = *(uint *)(param_5 + 0x14);
                    if ((uVar18 == 0) || (uVar4 = param_4[9], uVar4 <= uVar18)) {
                      uVar18 = *(uint *)(param_5 + 0x20);
                      if ((uVar18 == 0) || (uVar4 = param_4[10], uVar4 <= uVar18)) {
                        if ((*(char *)(param_5 + 8) == '\0') && ((char)param_4[0xd] != '\0')) {
                          uStack_54 = uVar10;
                          cVar14 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
                          if (cVar14 != '\0') {
                            pcVar16 = "\"%{public}s\" is interlaced and interlaced is not supported"
                            ;
LAB_10035f2f3:
                            local_68 = 0x8220102;
                            uVar17 = 0xc;
                            local_64 = uVar3;
                            uStack_60 = uVar6;
                            uStack_5e = uVar8;
                            goto LAB_10035ed25;
                          }
                        }
                        else if ((*(char *)(param_5 + 7) == '\0') && (param_3[1] != '\0')) {
                          uStack_54 = uVar10;
                          cVar14 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
                          if (cVar14 != '\0') {
                            pcVar16 = 
                            "\"%{public}s\" is compressed and compression is not supported";
                            goto LAB_10035f2f3;
                          }
                        }
                        else {
                          if (*param_3 == '\0') {
                            uVar15 = 1;
                            uStack_54 = uVar10;
                            goto LAB_10035ed2c;
                          }
                          uStack_54 = uVar10;
                          cVar14 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
                          if (cVar14 != '\0') {
                            pcVar16 = 
                            "\"%{public}s\" is not self contained and external references not supported"
                            ;
                            goto LAB_10035f2f3;
                          }
                        }
                      }
                      else {
                        uStack_54 = uVar10;
                        cVar14 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
                        if (cVar14 != '\0') {
                          uStack_5e = (undefined2)param_4[3];
                          uStack_5c = (undefined2)(param_4[3] >> 0x10);
                          local_4e = (undefined2)uVar18;
                          uStack_4c = (undefined2)(uVar18 >> 0x10);
                          pcVar16 = 
                          "Buffer size %u of track %u of \"%{public}s\" exceeds maximum buffer size %u"
                          ;
                          local_64 = uVar4;
                          goto LAB_10035ed1a;
                        }
                      }
                    }
                    else {
                      uStack_54 = uVar10;
                      cVar14 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
                      if (cVar14 != '\0') {
                        uStack_5e = (undefined2)param_4[3];
                        uStack_5c = (undefined2)(param_4[3] >> 0x10);
                        local_4e = (undefined2)uVar18;
                        uStack_4c = (undefined2)(uVar18 >> 0x10);
                        pcVar16 = 
                        "Peak bit rate %u of track %u of \"%{public}s\" exceeds maximum peak bit rate %u"
                        ;
                        local_64 = uVar4;
                        goto LAB_10035ed1a;
                      }
                    }
                  }
                  else {
                    uStack_54 = uVar10;
                    cVar14 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
                    if (cVar14 != '\0') {
                      uStack_5e = (undefined2)param_4[3];
                      uStack_5c = (undefined2)(param_4[3] >> 0x10);
                      local_4e = (undefined2)uVar18;
                      uStack_4c = (undefined2)(uVar18 >> 0x10);
                      pcVar16 = 
                      "Average bit rate %u of track %u of \"%{public}s\" exceeds maximum average bit rate %u"
                      ;
                      local_64 = uVar4;
LAB_10035ed1a:
                      local_50 = 0x400;
                      uStack_5a = 0x822;
                      uStack_60 = 0x400;
                      local_68 = 0x4000402;
                      uVar17 = 0x1e;
                      uStack_58 = uVar7;
                      uStack_56 = uVar9;
                      uStack_54 = uVar11;
                      goto LAB_10035ed25;
                    }
                  }
                }
                else {
                  uStack_54 = uVar10;
                  cVar14 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
                  if (cVar14 != '\0') {
                    dVar19 = (double)fVar20;
                    local_64 = SUB84(dVar19,0);
                    uStack_60 = (undefined2)((ulong)dVar19 >> 0x20);
                    uStack_5e = (undefined2)((ulong)dVar19 >> 0x30);
                    uStack_5a = (undefined2)param_4[3];
                    uStack_58 = (undefined2)(param_4[3] >> 0x10);
                    pcVar16 = 
                    "Frame rate %f of track %u of \"%{public}s\" exceeds maximum frame rate %f";
                    goto LAB_10035eec1;
                  }
                }
              }
              else {
                uStack_54 = uVar10;
                cVar14 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
                if (cVar14 != '\0') {
                  dVar19 = (double)fVar1;
                  local_64 = SUB84(dVar19,0);
                  uStack_60 = (undefined2)((ulong)dVar19 >> 0x20);
                  uStack_5e = (undefined2)((ulong)dVar19 >> 0x30);
                  uStack_5a = (undefined2)param_4[3];
                  uStack_58 = (undefined2)(param_4[3] >> 0x10);
                  pcVar16 = "Encryption pct %f of track %u of \"%{public}s\" exceeds maximum pct %f"
                  ;
LAB_10035eec1:
                  local_4a = (double)fVar2;
                  uStack_4c = 0x800;
                  uStack_56 = 0x822;
                  uStack_5c = 0x400;
                  local_68 = 0x8000402;
                  uVar17 = 0x26;
                  uStack_54 = uVar3;
                  local_50 = uVar6;
                  local_4e = uVar8;
                  goto LAB_10035ed25;
                }
              }
            }
            else {
              if (*(char *)(param_5 + 4) != '\0') {
                if (0x1e0 < uVar3) {
                  if (*(char *)(param_5 + 5) == '\0') {
                    cVar14 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
                    if (cVar14 != '\0') {
                      local_64 = param_4[3];
                      pcVar16 = 
                      "Track %u of \"%{public}s\" has height %u and is encrypted and 720p encryption is not supported"
                      ;
LAB_10035f252:
                      uStack_56 = 0x400;
                      uStack_60 = 0x822;
                      local_68 = 0x4000302;
                      uVar17 = 0x18;
                      uStack_5e = uVar7;
                      uStack_5c = uVar9;
                      uStack_5a = uVar6;
                      uStack_58 = uVar8;
                      uStack_54 = uVar3;
                      goto LAB_10035ed25;
                    }
                  }
                  else {
                    if ((uVar3 < 0x2d1) || (*(char *)(param_5 + 6) != '\0')) goto LAB_10035ed8a;
                    cVar14 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
                    if (cVar14 != '\0') {
                      local_64 = param_4[3];
                      pcVar16 = 
                      "Track %u of \"%{public}s\" has height %u and is encrypted and 1080p encryption is not supported"
                      ;
                      goto LAB_10035f252;
                    }
                  }
                  goto LAB_10035ed2a;
                }
                goto LAB_10035ed8a;
              }
              cVar14 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
              if (cVar14 == '\0') goto LAB_10035ed2a;
              local_64 = param_4[3];
              local_68 = 0x4000202;
              uStack_60 = 0x822;
              pcVar16 = "Track %u of \"%{public}s\" is encrypted and encryption is not supported";
              uVar17 = 0x12;
              uStack_5e = uVar7;
              uStack_5c = uVar9;
              uStack_5a = uVar6;
              uStack_58 = uVar8;
LAB_10035ed25:
              __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,pcVar16,&local_68,uVar17);
            }
          }
          else {
            cVar14 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
            if (cVar14 != '\0') {
              uStack_5e = (undefined2)param_4[3];
              uStack_5c = (undefined2)(param_4[3] >> 0x10);
              local_4e = (undefined2)uVar4;
              uStack_4c = (undefined2)(uVar4 >> 0x10);
              pcVar16 = "Depth %u of track %u of \"%{public}s\" exceeds maximum depth %u";
              local_64 = uVar5;
              goto LAB_10035ed1a;
            }
          }
        }
      }
    }
  }
LAB_10035ed2a:
  uVar15 = 0;
LAB_10035ed2c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

