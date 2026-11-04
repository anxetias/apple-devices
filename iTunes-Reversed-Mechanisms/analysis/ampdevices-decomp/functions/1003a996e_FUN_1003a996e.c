// name: FUN_1003a996e
// address: 1003a996e

undefined8
FUN_1003a996e(long param_1,uint *param_2,ulong *param_3,int *param_4,byte *param_5,
             undefined8 *param_6,int param_7,undefined8 param_8,undefined1 *param_9,uint param_10)

{
  undefined1 *puVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  size_t sVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 uVar16;
  uint uVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  char *pcVar21;
  undefined1 uVar22;
  ulong uVar23;
  bool bVar24;
  uint local_25c;
  uint local_258;
  undefined1 local_254;
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  undefined2 uStack_22a;
  undefined6 local_228;
  undefined2 uStack_222;
  ulong local_220;
  uint local_218;
  uint local_214;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (uint *)0x0) {
    uVar20 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar20,0x10);
    if (cVar2 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x822;
      uStack_22a = 0x89e7;
      local_228 = 0x1007c;
      __os_log_error_impl(0x100000000,uVar20,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    FUN_1001782e9(0,0);
    uVar20 = 0xffffffce;
    goto LAB_1003aa57a;
  }
  uVar20 = 0;
  uVar19 = 0;
  if (param_7 < 0x5444524c) {
    if (param_7 < 0x54414c00) {
      if (param_7 < 0x4d564920) {
        if (param_7 < 0x434f4d4d) {
          if (param_7 < 0x434d3120) {
            if (param_7 != 0x41504943) {
              uVar20 = uVar19;
              if (param_7 != 0x434d3100) goto LAB_1003aa57a;
              goto LAB_1003aa0c3;
            }
            local_258 = 0;
            puVar1 = param_9 + 1;
            iVar9 = param_10 - 1;
            FUN_100427c38(param_1 + 4,0,puVar1,iVar9,&local_238,0xff,&local_258);
            uVar18 = (ulong)local_258;
            *(undefined1 *)((long)&local_238 + uVar18) = 0;
            if (uVar18 != 0) {
              lVar12 = FUN_1001e0710(&local_238,uVar18,"image",5,1);
              lVar13 = FUN_1001e0710(&local_238,local_258,"/",1,1);
              if (lVar13 == 1 || lVar13 == 6 && lVar12 == 1) {
                lVar12 = FUN_1001e0710(&local_238,local_258,"jpeg",4,1);
                lVar13 = FUN_1001e0710(&local_238,local_258,"jpg",3,1);
                uVar16 = 0xd;
                if (lVar13 == 0 && lVar12 == 0) {
                  uVar16 = 0;
                }
                lVar14 = FUN_1001e0710(&local_238,local_258,"png",3,1);
                uVar22 = 0xe;
                if (lVar14 == 0) {
                  uVar22 = uVar16;
                }
                lVar15 = FUN_1001e0710(&local_238,local_258,"bmp",3,1);
                uVar16 = 0x1b;
                if (lVar15 == 0) {
                  uVar16 = uVar22;
                }
                if (((param_4 != (int *)0x0) &&
                    ((lVar14 != 0 || lVar15 != 0) || (lVar13 != 0 || lVar12 != 0))) &&
                   (*param_4 == 0x61727477)) {
                  local_25c = local_25c & 0xffffff00;
                  uVar22 = *param_9;
                  lVar12 = FUN_1001e0710(puVar1,(long)iVar9,&local_25c,1,0);
                  param_9 = puVar1 + lVar12;
                  uVar18 = (ulong)(iVar9 - (int)lVar12);
                  goto LAB_1003aacd2;
                }
              }
            }
          }
          else {
            if (param_7 == 0x434d3120) {
LAB_1003aa0c3:
              *(byte *)((long)param_2 + 1) = *(byte *)((long)param_2 + 1) | 4;
              param_2 = param_2 + 0x382;
              goto LAB_1003aa573;
            }
            if ((param_7 == 0x434f4d00) || (param_7 == 0x434f4d20)) goto LAB_1003aa14e;
          }
          goto LAB_1003aa578;
        }
        if (param_7 < 0x47503120) {
          if (param_7 == 0x434f4d4d) {
LAB_1003aa14e:
            cVar2 = FUN_100427ed5(param_9,param_10);
            if (cVar2 == '\0') {
              cVar2 = FUN_100427fb0(param_9,param_10,&local_258,&local_25c);
              if (cVar2 != '\0') {
                if (param_3 == (ulong *)0x0 || local_258 != 0x4e4f524d) {
                  if (local_258 == 0x534d5042 && param_3 != (ulong *)0x0) {
                    iVar9 = FUN_1003a9464(param_9 + (int)local_25c,~local_25c + param_10,&local_238)
                    ;
                    if (iVar9 == 0) {
                      *(byte *)((long)param_3 + 3) = *(byte *)((long)param_3 + 3) | 0x40;
                      param_3[0xb] = CONCAT26(uStack_222,local_228);
                      param_3[0xc] = local_220;
                      param_3[0xd] = (ulong)local_214;
                      if ((local_218 & 2) == 0) {
                        local_218 = *(uint *)((long)param_3 + 0x54) & 0xfffffffd;
                      }
                      *(uint *)((long)param_3 + 0x54) = local_218 | 1;
                    }
                  }
                  else if (local_258 == 0x50474150) {
                    if ((int)(~local_25c + param_10) < 1) {
                      bVar24 = false;
                    }
                    else {
                      if (2 < ~local_25c + param_10) goto LAB_1003aa578;
                      cVar2 = FUN_1001e0e4f(param_9[(int)local_25c]);
                      bVar24 = cVar2 != '\0';
                    }
                    *(bool *)((long)param_2 + 0x1241) = bVar24;
                    *(byte *)((long)param_2 + 3) = *(byte *)((long)param_2 + 3) | 0x20;
                  }
                }
                else {
                  iVar9 = FUN_1003a92b4(param_9 + (int)local_25c,~local_25c + param_10,&local_238);
                  if (iVar9 == 0) {
                    FUN_1003aae86(&local_238,param_3);
                  }
                }
              }
            }
            else {
              *(byte *)((long)param_2 + 1) = *(byte *)((long)param_2 + 1) | 4;
              FUN_100428342(param_1 + 4,param_9,param_10,(byte *)((long)param_2 + 0xe0a),0xff,
                            &local_238);
              *(short *)(param_2 + 0x382) = (short)local_238;
            }
          }
          else if (param_7 == 0x47503100) goto LAB_1003aa139;
          goto LAB_1003aa578;
        }
        if ((param_7 != 0x47503120) && (param_7 != 0x47525031)) {
          uVar20 = 0;
          if (param_7 != 0x4d564900) goto LAB_1003aa57a;
          goto LAB_1003aa20b;
        }
LAB_1003aa139:
        *(byte *)((long)param_2 + 3) = *(byte *)((long)param_2 + 3) | 0x10;
        param_2 = param_2 + 0x495;
      }
      else {
        if (0x504942ff < param_7) {
          if (param_7 < 0x52564120) {
            if ((param_7 == 0x50494300) || (param_7 == 0x50494320)) {
              if ((int)param_10 < 4) goto LAB_1003aa57a;
              uVar22 = *param_9;
              bVar3 = FUN_1001e0934(param_9[1]);
              bVar4 = FUN_1001e0934(param_9[2]);
              bVar5 = FUN_1001e0934(param_9[3]);
              uVar8 = (uint)bVar5 << 8 | (uint)bVar4 << 0x10 | (uint)bVar3 << 0x18;
              if (uVar8 == 0x424d5000) {
                uVar16 = 0x1b;
              }
              else if (uVar8 == 0x4a504700) {
                uVar16 = 0xd;
              }
              else {
                uVar20 = 0;
                if (uVar8 != 0x504e4700) goto LAB_1003aa57a;
                uVar16 = 0xe;
              }
              uVar20 = 0;
              if ((param_4 == (int *)0x0) || (*param_4 != 0x61727477)) goto LAB_1003aa57a;
              param_9 = param_9 + 4;
              uVar18 = (ulong)(param_10 - 4);
LAB_1003aacd2:
              FUN_1003aaf2b(param_1 + 4,param_9,uVar18,uVar22,uVar16,param_4);
              goto LAB_1003aa578;
            }
            if (param_7 != 0x52564100) goto LAB_1003aa57a;
          }
          else {
            uVar20 = uVar19;
            if ((0x24 < param_7 + 0xada9bee0U) ||
               ((0x1000040001U >> ((ulong)(param_7 + 0xada9bee0U) & 0x3f) & 1) == 0))
            goto LAB_1003aa57a;
          }
          *(byte *)((long)param_2 + 1) = *(byte *)((long)param_2 + 1) | 1;
          FUN_100426b98(param_7,param_9,param_10,(byte *)((long)param_2 + 0x1012));
          goto LAB_1003aa578;
        }
        if (param_7 < 0x4d564e00) {
          if ((param_7 != 0x4d564920) && (uVar20 = uVar19, param_7 != 0x4d56494e))
          goto LAB_1003aa57a;
LAB_1003aa20b:
          uVar20 = 0;
          if (param_3 != (ulong *)0x0) {
            pcVar21 = (char *)&local_238;
            FUN_10042741e(param_1 + 4,param_9,param_10,pcVar21,0xff);
            for (; (cVar2 = *pcVar21, cVar2 != '\0' && (cVar2 != '/')); pcVar21 = pcVar21 + 1) {
            }
            uVar18 = (long)pcVar21 - (long)&local_238;
            if (uVar18 != 0) {
              uVar23 = 0x1f;
              if (uVar18 < 0x1f) {
                uVar23 = uVar18;
              }
              FUN_1001c631b(&local_238,&local_258,uVar23);
              *(undefined1 *)((long)&local_258 + uVar23) = 0;
              *(byte *)((long)param_3 + 9) = *(byte *)((long)param_3 + 9) | 0x20;
              uVar6 = FUN_1001e3338(&local_258);
              *(undefined2 *)((long)param_3 + 0x3224) = uVar6;
              cVar2 = *pcVar21;
            }
            uVar20 = 0;
            if (cVar2 != '\0') {
              uVar18 = 0xffffffffffffffff;
              do {
                lVar12 = uVar18 + 2;
                uVar18 = uVar18 + 1;
              } while (pcVar21[lVar12] != '\0');
              uVar20 = 0;
              if (uVar18 != 0) {
                uVar23 = 0x1f;
                if (uVar18 < 0x1f) {
                  uVar23 = uVar18;
                }
                FUN_1001c631b(pcVar21 + 1,&local_258,uVar23);
                *(undefined1 *)((long)&local_258 + uVar23) = 0;
                iVar9 = FUN_1001e3338(&local_258);
                uVar20 = 0;
                if ((int)(uint)*(ushort *)((long)param_3 + 0x3224) <= iVar9) {
                  *(byte *)((long)param_3 + 9) = *(byte *)((long)param_3 + 9) | 0x20;
                  *(short *)((long)param_3 + 0x3226) = (short)iVar9;
                }
              }
            }
          }
          goto LAB_1003aa57a;
        }
        if ((((param_7 != 0x4d564e00) && (param_7 != 0x4d564e20)) &&
            (uVar20 = uVar19, param_7 != 0x4d564e4d)) || (uVar20 = uVar19, param_3 == (ulong *)0x0))
        goto LAB_1003aa57a;
        *(byte *)((long)param_3 + 9) = *(byte *)((long)param_3 + 9) | 0x10;
        param_2 = (uint *)((long)param_3 + 0x3024);
      }
LAB_1003aa573:
      FUN_1004273cb(param_1 + 4,param_9,param_10,param_2);
    }
    else {
      if (param_7 < 0x54434f00) {
        if (param_7 < 0x5442504d) {
          if (param_7 < 0x54414c42) {
            if ((param_7 != 0x54414c00) && (uVar20 = uVar19, param_7 != 0x54414c20))
            goto LAB_1003aa57a;
          }
          else if (param_7 != 0x54414c42) {
            if ((param_7 != 0x54425000) && (uVar20 = uVar19, param_7 != 0x54425020))
            goto LAB_1003aa57a;
            goto LAB_1003aa4d2;
          }
          *(byte *)param_2 = (byte)*param_2 | 8;
          param_2 = param_2 + 0x182;
          goto LAB_1003aa573;
        }
        if (param_7 < 0x54434d00) {
          if (param_7 != 0x5442504d) {
            uVar20 = uVar19;
            if (param_7 != 0x54434154) goto LAB_1003aa57a;
            goto LAB_1003aa552;
          }
LAB_1003aa4d2:
          FUN_10042741e(param_1 + 4,param_9,param_10,&local_238,0xff);
          if ((char)local_238 != '\0') {
            *(byte *)((long)param_2 + 3) = *(byte *)((long)param_2 + 3) | 8;
            uVar6 = FUN_1001e3338(&local_238);
            *(undefined2 *)(param_2 + 0x494) = uVar6;
          }
          goto LAB_1003aa578;
        }
        if ((param_7 == 0x54434d00) || (param_7 == 0x54434d20)) goto LAB_1003a9ff6;
        uVar20 = uVar19;
        if (param_7 != 0x54434d50) goto LAB_1003aa57a;
      }
      else {
        if (param_7 < 0x54435020) {
          if (param_7 < 0x54434f4d) {
            if ((param_7 != 0x54434f00) && (uVar20 = uVar19, param_7 != 0x54434f20))
            goto LAB_1003aa57a;
          }
          else {
            if (param_7 == 0x54434f4d) {
LAB_1003a9ff6:
              *(byte *)((long)param_2 + 2) = *(byte *)((long)param_2 + 2) | 0x20;
              param_2 = param_2 + 0x410;
              goto LAB_1003aa573;
            }
            if (param_7 != 0x54434f4e) {
              uVar20 = uVar19;
              if (param_7 != 0x54435000) goto LAB_1003aa57a;
              goto LAB_1003aa5a2;
            }
          }
          FUN_1004273cb(param_1 + 4,param_9,param_10,&local_238);
          if ((short)local_238 != 0) {
            *(byte *)param_2 = (byte)*param_2 | 0x10;
            FUN_1003aad2e(&local_238,*(byte *)(param_1 + 0x1b) < 4,param_2 + 0x202);
          }
          goto LAB_1003aa578;
        }
        if (0x54444552 < param_7) {
          if (param_7 == 0x54444553) goto LAB_1003aa2d7;
          if (param_7 == 0x54445220) goto LAB_1003aa765;
          if (param_7 == 0x54445243) goto LAB_1003a9e0d;
          goto LAB_1003aa578;
        }
        if (param_7 != 0x54435020) {
          uVar20 = uVar19;
          if (param_7 != 0x54435420) goto LAB_1003aa57a;
LAB_1003aa552:
          uVar20 = uVar19;
          if (param_3 == (ulong *)0x0) goto LAB_1003aa57a;
          *(byte *)((long)param_3 + 3) = *(byte *)((long)param_3 + 3) | 4;
          param_2 = (uint *)((long)param_3 + 0x15c4);
          goto LAB_1003aa573;
        }
      }
LAB_1003aa5a2:
      FUN_10042741e(param_1 + 4,param_9,param_10,&local_238,0xff);
      sVar11 = _strlen((char *)&local_238);
      if (sVar11 == 1) {
        *(byte *)((long)param_2 + 2) = *(byte *)((long)param_2 + 2) | 0x40;
        iVar9 = FUN_1001e3338(&local_238);
        *(bool *)(param_2 + 0x490) = iVar9 == 1;
      }
    }
  }
  else if (param_7 < 0x54534f32) {
    if (param_7 < 0x54504120) {
      if (param_7 < 0x54503100) {
        if (param_7 < 0x54495431) {
          if (param_7 == 0x5444524c) {
LAB_1003aa765:
            uVar20 = uVar19;
            if (param_3 != (ulong *)0x0) {
              FUN_10042741e(param_1 + 4,param_9,param_10,&local_238,0xff);
              FUN_1001e04f5(&local_238,param_3 + 0x159);
              *(byte *)((long)param_3 + 2) = *(byte *)((long)param_3 + 2) | 2;
              uVar20 = 0;
            }
            goto LAB_1003aa57a;
          }
          uVar20 = uVar19;
          if (param_7 != 0x54445320) goto LAB_1003aa57a;
LAB_1003aa2d7:
          uVar20 = uVar19;
          if (param_5 == (byte *)0x0) goto LAB_1003aa57a;
          lVar12 = FUN_1001c63e1((long)(int)param_10 * 2 + 2);
          *(long *)(param_5 + 0xc) = lVar12;
          if (lVar12 != 0) {
            *param_5 = *param_5 | 1;
            FUN_100426ed6(param_1 + 4,param_9,param_10,lVar12,param_10,&local_238);
            *(undefined2 *)(*(long *)(param_5 + 0xc) + (ulong)local_238 * 2) = 0;
          }
        }
        else {
          if (param_7 == 0x54495431) goto LAB_1003a9fd8;
          if (param_7 == 0x54495432) goto LAB_1003aa284;
          if (param_7 == 0x54495433) goto LAB_1003aa266;
        }
      }
      else if (param_7 < 0x54503200) {
        if ((param_7 == 0x54503100) || (param_7 == 0x54503120)) {
LAB_1003aa524:
          *(byte *)param_2 = (byte)*param_2 | 4;
          param_2 = param_2 + 0x102;
          goto LAB_1003aa573;
        }
      }
      else {
        if ((param_7 == 0x54503200) || (param_7 == 0x54503220)) {
LAB_1003aa00b:
          uVar8 = *param_2;
          if ((uVar8 & 4) == 0) {
            *param_2 = uVar8 | 4;
            FUN_1004273cb(param_1 + 4,param_9,param_10,param_2 + 0x102);
            uVar8 = *param_2;
          }
          *param_2 = uVar8 | 0x40000000;
          param_2 = param_2 + 0x516;
          goto LAB_1003aa573;
        }
        if (param_7 == 0x54504100) goto LAB_1003aa3b7;
      }
    }
    else if (param_7 < 0x54524b00) {
      if (param_7 < 0x54504532) {
        if (param_7 == 0x54504120) {
LAB_1003aa3b7:
          pcVar21 = (char *)&local_238;
          FUN_10042741e(param_1 + 4,param_9,param_10,pcVar21,0xff);
          for (; (cVar2 = *pcVar21, cVar2 != '\0' && (cVar2 != '/')); pcVar21 = pcVar21 + 1) {
          }
          uVar18 = (long)pcVar21 - (long)&local_238;
          if (uVar18 != 0) {
            uVar23 = 0x1f;
            if (uVar18 < 0x1f) {
              uVar23 = uVar18;
            }
            FUN_1001c631b(&local_238,&local_258,uVar23);
            *(undefined1 *)((long)&local_258 + uVar23) = 0;
            *(byte *)((long)param_2 + 2) = *(byte *)((long)param_2 + 2) | 0x80;
            uVar6 = FUN_1001e3338(&local_258);
            *(undefined2 *)(param_2 + 0x491) = uVar6;
            cVar2 = *pcVar21;
          }
          uVar20 = 0;
          if (cVar2 != '\0') {
            uVar18 = 0xffffffffffffffff;
            do {
              lVar12 = uVar18 + 2;
              uVar18 = uVar18 + 1;
            } while (pcVar21[lVar12] != '\0');
            if (uVar18 != 0) {
              uVar23 = 0x1f;
              if (uVar18 < 0x1f) {
                uVar23 = uVar18;
              }
              FUN_1001c631b(pcVar21 + 1,&local_258,uVar23);
              *(undefined1 *)((long)&local_258 + uVar23) = 0;
              iVar9 = FUN_1001e3338(&local_258);
              uVar20 = 0;
              if ((int)(uint)(ushort)param_2[0x491] <= iVar9) {
                *(byte *)((long)param_2 + 2) = *(byte *)((long)param_2 + 2) | 0x80;
                *(short *)((long)param_2 + 0x1246) = (short)iVar9;
              }
            }
          }
          goto LAB_1003aa57a;
        }
        if (param_7 == 0x54504531) goto LAB_1003aa524;
      }
      else {
        if (param_7 == 0x54504532) goto LAB_1003aa00b;
        if (param_7 == 0x54504f53) goto LAB_1003aa3b7;
        if (param_7 == 0x5452434b) goto LAB_1003aa604;
      }
    }
    else if (param_7 < 0x54533220) {
      if ((param_7 == 0x54524b00) || (param_7 == 0x54524b20)) {
LAB_1003aa604:
        pcVar21 = (char *)&local_238;
        FUN_10042741e(param_1 + 4,param_9,param_10,pcVar21,0xff);
        for (; (cVar2 = *pcVar21, cVar2 != '\0' && (cVar2 != '/')); pcVar21 = pcVar21 + 1) {
        }
        uVar18 = (long)pcVar21 - (long)&local_238;
        if (uVar18 != 0) {
          uVar23 = 0x1f;
          if (uVar18 < 0x1f) {
            uVar23 = uVar18;
          }
          FUN_1001c631b(&local_238,&local_258,uVar23);
          *(undefined1 *)((long)&local_258 + uVar23) = 0;
          *(byte *)param_2 = (byte)*param_2 | 0x40;
          uVar8 = FUN_1001e3338(&local_258);
          param_2[0x402] = uVar8;
          cVar2 = *pcVar21;
        }
        uVar20 = 0;
        if (cVar2 != '\0') {
          uVar18 = 0xffffffffffffffff;
          do {
            lVar12 = uVar18 + 2;
            uVar18 = uVar18 + 1;
          } while (pcVar21[lVar12] != '\0');
          if (uVar18 != 0) {
            uVar23 = 0x1f;
            if (uVar18 < 0x1f) {
              uVar23 = uVar18;
            }
            FUN_1001c631b(pcVar21 + 1,&local_258,uVar23);
            *(undefined1 *)((long)&local_258 + uVar23) = 0;
            uVar8 = FUN_1001e3338(&local_258);
            uVar20 = 0;
            if (param_2[0x402] <= uVar8) {
              *(byte *)param_2 = (byte)*param_2 | 0x40;
              param_2[0x403] = uVar8;
            }
          }
        }
        goto LAB_1003aa57a;
      }
    }
    else {
      if (param_7 != 0x54533220) {
        if (param_7 == 0x54534120) goto LAB_1003aa0f0;
        uVar20 = 0;
        if (param_7 != 0x54534320) goto LAB_1003aa57a;
        goto LAB_1003a9eaf;
      }
LAB_1003aa701:
      *(byte *)((long)param_3 + 6) = *(byte *)((long)param_3 + 6) | 0x41;
      FUN_1004273cb(param_1 + 4,param_9,param_10,param_3 + 0x4fd);
      *(undefined1 *)((long)param_3 + 0x2deb) = 3;
    }
  }
  else if (param_7 < 0x54543220) {
    if (param_7 < 0x54535020) {
      if (0x54534f42 < param_7) {
        if (param_7 == 0x54534f43) {
LAB_1003a9eaf:
          *(byte *)((long)param_3 + 6) = *(byte *)((long)param_3 + 6) | 0x82;
          FUN_1004273cb(param_1 + 4,param_9,param_10,param_3 + 0x53d);
          *(undefined1 *)((long)param_3 + 0x2dec) = 3;
          uVar20 = 0;
          goto LAB_1003aa57a;
        }
        if (param_7 == 0x54534f50) goto LAB_1003aa72e;
        uVar20 = uVar19;
        if (param_7 != 0x54534f54) goto LAB_1003aa57a;
LAB_1003aa1c0:
        *param_3 = *param_3 | 0x8200000000000;
        FUN_1004273cb(param_1 + 4,param_9,param_10,param_3 + 0x43d);
        *(undefined1 *)(param_3 + 0x5bd) = 3;
        uVar20 = 0;
        goto LAB_1003aa57a;
      }
      if (param_7 == 0x54534f32) goto LAB_1003aa701;
      if (param_7 == 0x54534f41) {
LAB_1003aa0f0:
        *param_3 = *param_3 | 0x10400000000000;
        FUN_1004273cb(param_1 + 4,param_9,param_10,param_3 + 0x47d);
        *(undefined1 *)((long)param_3 + 0x2de9) = 3;
      }
    }
    else {
      if (param_7 < 0x54543100) {
        if (param_7 == 0x54535020) {
LAB_1003aa72e:
          *param_3 = *param_3 | 0x20800000000000;
          FUN_1004273cb(param_1 + 4,param_9,param_10,param_3 + 0x4bd);
          *(undefined1 *)((long)param_3 + 0x2dea) = 3;
          uVar20 = 0;
          goto LAB_1003aa57a;
        }
        uVar20 = uVar19;
        if (param_7 != 0x54535420) goto LAB_1003aa57a;
        goto LAB_1003aa1c0;
      }
      if ((param_7 == 0x54543100) || (param_7 == 0x54543120)) {
LAB_1003a9fd8:
        uVar20 = uVar19;
        if (param_3 == (ulong *)0x0) goto LAB_1003aa57a;
        *(byte *)((long)param_3 + 9) = *(byte *)((long)param_3 + 9) | 8;
        param_2 = (uint *)((long)param_3 + 0x2e24);
        goto LAB_1003aa573;
      }
      if (param_7 == 0x54543200) goto LAB_1003aa284;
    }
  }
  else if (param_7 < 0x55464900) {
    if (param_7 < 0x54594500) {
      if (param_7 == 0x54543220) {
LAB_1003aa284:
        *(byte *)param_2 = (byte)*param_2 | 1;
        param_2 = param_2 + 2;
        goto LAB_1003aa573;
      }
      if (param_7 == 0x54543320) {
LAB_1003aa266:
        if (param_3 != (ulong *)0x0) {
          *(byte *)((long)param_3 + 3) = *(byte *)((long)param_3 + 3) | 8;
          param_2 = (uint *)((long)param_3 + 0x17c4);
          goto LAB_1003aa573;
        }
      }
    }
    else if (((param_7 == 0x54594500) || (param_7 == 0x54594520)) || (param_7 == 0x54594552)) {
LAB_1003a9e0d:
      FUN_10042741e(param_1 + 4,param_9,param_10,&local_238,0xff);
      sVar11 = _strlen((char *)&local_238);
      if (3 < sVar11) {
        FUN_1001c631b(&local_238,&local_258,4);
        local_254 = 0;
        *(byte *)param_2 = (byte)*param_2 | 0x80;
        uVar6 = FUN_1001e3338(&local_258);
        *(undefined2 *)(param_2 + 0x404) = uVar6;
      }
    }
  }
  else if (param_7 < 0x554c5400) {
    if ((((param_7 != 0x55464900) && (param_7 != 0x55464920)) &&
        (uVar20 = uVar19, param_7 != 0x55464944)) || (uVar20 = uVar19, param_3 == (ulong *)0x0))
    goto LAB_1003aa57a;
    uVar8 = (int)param_10 >> 0x1f & param_10;
    lVar12 = 0;
    do {
      lVar13 = lVar12;
      if ((int)param_10 < 1) {
        uVar16 = (undefined1)lVar13;
        goto LAB_1003aab8b;
      }
      param_10 = param_10 - 1;
      *(undefined1 *)((long)&local_238 + lVar13 + 1) = param_9[lVar13];
      lVar12 = lVar13 + 1;
    } while (param_9[lVar13 + 1] != '\0');
    uVar16 = (undefined1)(lVar13 + 1);
    lVar13 = lVar13 + 2;
    uVar8 = param_10;
LAB_1003aab8b:
    local_238 = CONCAT31(local_238._1_3_,uVar16);
    cVar2 = FUN_1001df6e9(&local_238,"%http://www.cddb.com/id3/taginfo1.html",0);
    if ((cVar2 != '\0') ||
       (cVar2 = FUN_1001df6e9(&local_238,"$http://www.cddb.com/id3/taginfo.html",0), cVar2 != '\0'))
    {
      uVar10 = 0x7f;
      if (uVar8 < 0x7f) {
        uVar10 = uVar8;
      }
      if (uVar8 == 0) {
        uVar18 = 0;
      }
      else {
        uVar17 = 0x7f;
        if (uVar8 < 0x7f) {
          uVar17 = uVar8;
        }
        lVar12 = 0;
        do {
          if ((param_9 + lVar13)[lVar12] == '\0') {
            uVar10 = (uint)lVar12;
            break;
          }
          *(undefined1 *)((long)param_3 + lVar12 + 0x1544) = (param_9 + lVar13)[lVar12];
          lVar12 = lVar12 + 1;
        } while (uVar17 != (uint)lVar12);
        uVar18 = (ulong)uVar10;
      }
      *(undefined1 *)((long)param_3 + uVar18 + 0x1544) = 0;
      *(byte *)((long)param_3 + 2) = *(byte *)((long)param_3 + 2) | 0x40;
    }
  }
  else {
    if ((((param_7 != 0x554c5400) && (param_7 != 0x554c5420)) &&
        (uVar20 = uVar19, param_7 != 0x55534c54)) ||
       (uVar20 = uVar19, param_3 == (ulong *)0x0 && param_6 == (undefined8 *)0x0))
    goto LAB_1003aa57a;
    local_238 = 0;
    lVar12 = FUN_1001c63e1((long)(int)param_10 * 2);
    if ((lVar12 != 0) &&
       (FUN_100428342(param_1 + 4,param_9,param_10,lVar12,param_10,&local_238),
       param_6 != (undefined8 *)0x0)) {
      uVar20 = FUN_1001734b1(0,lVar12,local_238);
      *param_6 = uVar20;
    }
    if (param_3 != (ulong *)0x0) {
      *(byte *)((long)param_3 + 3) = *(byte *)((long)param_3 + 3) | 0x80;
      uVar7 = FUN_1003ab145(lVar12,local_238);
      *(undefined4 *)((long)param_3 + 0x1fe4) = uVar7;
    }
    if (lVar12 != 0) {
      FUN_1001c64c1(lVar12);
    }
  }
LAB_1003aa578:
  uVar20 = 0;
LAB_1003aa57a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar20;
}

