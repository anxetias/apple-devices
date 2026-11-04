// name: FUN_10046653c
// address: 10046653c

void FUN_10046653c(short *param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  short *psVar1;
  bool bVar2;
  char cVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  short *psVar10;
  short *psVar11;
  ushort uVar12;
  ulong uVar13;
  short *psVar14;
  bool bVar15;
  uint local_24c;
  char local_248 [16];
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  psVar14 = param_1;
  if (param_2 != 0) {
    psVar1 = param_1 + param_2;
    psVar10 = param_1;
    do {
      sVar5 = *psVar10;
      cVar3 = FUN_1001e689d(sVar5);
      if (cVar3 == '\0') {
        if (sVar5 == 0x26) {
          psVar11 = psVar10 + 1;
          local_248[0] = '\0';
          local_248[1] = '\0';
          if (psVar11 < psVar1) {
            uVar8 = 0;
            psVar10 = psVar10 + 2;
            while (psVar10[-1] != 0x3b) {
              local_248[uVar8] = (char)psVar10[-1];
              uVar13 = uVar8 + 1;
              if ((0xe < uVar8) ||
                 (bVar15 = psVar1 <= psVar10, uVar8 = uVar13, psVar10 = psVar10 + 1, bVar15))
              goto LAB_100466718;
            }
            local_248[uVar8] = '\0';
            uVar13 = uVar8;
LAB_100466718:
            if (local_248[0] != '\0') {
              if (local_248[0] == '#') {
                local_24c = 0;
                if (local_248[1] == 'x') {
                  iVar6 = _sscanf(local_248 + 2,"%x",&local_24c);
                  if (iVar6 != 1) {
                    uVar9 = FUN_1001cc310();
                    cVar3 = _os_log_type_enabled(uVar9,0x10);
                    if (cVar3 != '\0') {
                      local_22a = "sscanf(&entity[2], \"%x\", &unicode) == 1";
LAB_1004669bf:
                      local_22c = 0x822;
                      local_234 = "Assertion failure";
                      local_238 = 0x8220202;
                      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",
                                          &local_238,0x16);
                    }
LAB_10046686f:
                    FUN_1001782e9(0,0);
                  }
                }
                else {
                  iVar6 = _sscanf(local_248 + 1,"%u",&local_24c);
                  if (iVar6 != 1) {
                    uVar9 = FUN_1001cc310();
                    cVar3 = _os_log_type_enabled(uVar9,0x10);
                    if (cVar3 != '\0') {
                      local_22a = "sscanf(&entity[1], \"%u\", &unicode) == 1";
                      goto LAB_1004669bf;
                    }
                    goto LAB_10046686f;
                  }
                }
                if (0x10fffe < local_24c - 1) goto LAB_100466a56;
                if (local_24c < 0x10000) {
                  psVar10 = psVar14 + 1;
                  uVar7 = local_24c;
                  if ((local_24c & 0xf800) == 0xd800) {
                    uVar7 = 0xfffd;
                  }
                  sVar5 = (short)uVar7;
                }
                else {
                  sVar5 = (short)(local_24c - 10000 >> 10) + -0x2800;
                  psVar10 = psVar14 + 2;
                  psVar14[1] = (ushort)(local_24c - 10000) & 0x3ff | 0xdc00;
                }
                *psVar14 = sVar5;
              }
              else {
                cVar3 = FUN_1001df957(local_248,"amp",0);
                if (cVar3 == '\0') {
                  cVar3 = FUN_1001df957(local_248,"copy",0);
                  if (cVar3 == '\0') {
                    cVar3 = FUN_1001df957(local_248,"hellip",0);
                    if (cVar3 == '\0') {
                      cVar3 = FUN_1001df957(local_248,"mdash",0);
                      if (cVar3 == '\0') {
                        cVar3 = FUN_1001df957(local_248,"nbsp",0);
                        if (cVar3 == '\0') {
                          cVar3 = FUN_1001df957(local_248,"ndash",0);
                          if (cVar3 == '\0') {
                            cVar3 = FUN_1001df957(local_248,"reg",0);
                            if (cVar3 == '\0') {
                              cVar3 = FUN_1001df957(local_248,"trade",0);
                              if (cVar3 == '\0') goto LAB_100466a56;
                              *psVar14 = 0x2122;
                            }
                            else {
                              *psVar14 = 0xae;
                            }
                          }
                          else {
                            *psVar14 = 0x2013;
                          }
                        }
                        else {
                          *psVar14 = 0xa0;
                        }
                      }
                      else {
                        *psVar14 = 0x2014;
                      }
                    }
                    else {
                      *psVar14 = 0x2026;
                    }
                  }
                  else {
                    *psVar14 = 0xa9;
                  }
                }
                else {
                  *psVar14 = 0x26;
                }
                psVar10 = psVar14 + 1;
              }
              psVar11 = psVar11 + uVar13 + 1;
              psVar14 = psVar10;
              goto LAB_100466a63;
            }
          }
LAB_100466a56:
          *psVar14 = 0x26;
          psVar14 = psVar14 + 1;
        }
        else if (sVar5 == 0x3c) {
          if (psVar14 == param_1) {
            uVar12 = 0;
          }
          else {
            uVar12 = psVar14[-1];
          }
          psVar11 = psVar10 + 1;
          local_238 = local_238 & 0xffff0000;
          if (psVar11 < psVar1) {
            uVar4 = 0;
            bVar15 = false;
            do {
              sVar5 = *psVar11;
              if (sVar5 == 0x3e) {
                cVar3 = FUN_1001e4e7c("li",&local_238,1);
                if (cVar3 != '\0') {
                  if ((param_3 & 1) == 0) {
                    psVar14[1] = 9;
                    psVar10 = psVar14 + 2;
                    sVar5 = 10;
                  }
                  else {
                    psVar10 = psVar14 + 1;
                    sVar5 = 0x20;
                  }
                  *psVar14 = sVar5;
                  psVar10[0] = 0x2a;
                  psVar10[1] = 0x20;
                  psVar14 = psVar10 + 2;
                  goto LAB_10046665f;
                }
                cVar3 = FUN_1001e4e7c("p",&local_238,1);
                if ((cVar3 == '\0') && (cVar3 = FUN_1001e4e7c("br",&local_238,1), cVar3 == '\0'))
                goto LAB_10046665f;
                psVar10 = psVar11;
                if ((param_3 & 1) == 0) {
                  *psVar14 = 10;
                }
                else {
                  if ((uVar12 & 0xffdf) == 0) goto LAB_10046665f;
                  *psVar14 = 0x20;
                }
                goto LAB_10046665b;
              }
              bVar2 = !bVar15;
              bVar15 = true;
              if ((bVar2) && (sVar5 != 0x20)) {
                if (uVar4 < 0xff) {
                  uVar4 = uVar4 + 1;
                  *(short *)((long)&local_238 + (ulong)uVar4 * 2) = sVar5;
                  local_238 = CONCAT22(local_238._2_2_,uVar4);
                }
                bVar15 = false;
              }
              psVar11 = psVar11 + 1;
            } while (psVar11 < psVar1);
          }
        }
        else {
          *psVar14 = sVar5;
LAB_10046665b:
          psVar14 = psVar14 + 1;
          psVar11 = psVar10;
LAB_10046665f:
          psVar11 = psVar11 + 1;
        }
      }
      else {
        do {
          psVar11 = psVar10 + 1;
          if (psVar1 <= psVar11) break;
          cVar3 = FUN_1001e689d(*psVar11);
          psVar10 = psVar11;
        } while (cVar3 != '\0');
        if ((param_1 < psVar14) && (psVar14[-1] != 0x20)) {
          *psVar14 = 0x20;
          psVar14 = psVar14 + 1;
        }
      }
LAB_100466a63:
      psVar10 = psVar11;
    } while (psVar11 < psVar1);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = (int)((ulong)((long)psVar14 - (long)param_1) >> 1);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

