// name: FUN_100317e16
// address: 100317e16

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100317e16(long param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar15 [16];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == (undefined8 *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_4a = "trackTotals != nullptr";
LAB_10031855b:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    FUN_1001c62d9(param_3,0x228);
    if (param_1 != 0) {
      if (*(int *)(param_1 + 0x80) != 0x74646174) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure (expected to be true)";
          local_4c = 0x822;
          local_4a = "trackData->magic == \'tdat\'";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        cVar1 = FUN_1001782e9(0,1);
        if (cVar1 == '\0') goto LAB_1003184e9;
      }
      lVar5 = FUN_1002f9fc5(param_1);
      if (lVar5 != 0) {
        do {
          cVar1 = FUN_100474f2b(*(undefined8 *)(lVar5 + 8));
          if ((cVar1 == '\0') && (*(char *)(lVar5 + 0x45) == '\0')) {
            lVar12 = *(long *)(lVar5 + 0x68);
            if (param_2 != 0) {
              uVar11 = lVar12 + ((ulong)param_2 - 1);
              lVar12 = uVar11 - uVar11 % (ulong)param_2;
            }
            if (*(int *)(lVar5 + 0x70) == 0) {
              uVar13 = *(uint *)(lVar5 + 100);
            }
            else {
              uVar13 = *(int *)(lVar5 + 0x70) * 1000;
            }
            uVar2 = FUN_1002b1255(lVar5,0);
            auVar15._8_8_ = extraout_XMM0_Qb;
            auVar15._0_8_ = extraout_XMM0_Qa;
            iVar3 = -((int)~*(uint *)(*(long *)(lVar5 + 8) + 0xc2) >> 0x1f);
            auVar15 = pmovsxbd(auVar15,_DAT_1007115d0);
            iVar14 = auVar15._0_4_;
            *param_3 = CONCAT44((int)((ulong)*param_3 >> 0x20) + iVar3,(int)*param_3 + iVar14);
            uVar11 = (ulong)uVar13;
            if ((uVar2 & 0xc62) == 0) {
              if ((uVar2 & 0x130410d) != 0) {
                lVar7 = 0x20;
                lVar8 = 0x10;
                lVar6 = 0x18;
                lVar9 = 0xc;
                lVar10 = 8;
                goto LAB_100317fa1;
              }
            }
            else {
              lVar7 = 0x40;
              lVar8 = 0x30;
              lVar6 = 0x38;
              lVar9 = 0x2c;
              lVar10 = 0x28;
LAB_100317fa1:
              *(int *)((long)param_3 + lVar10) = *(int *)((long)param_3 + lVar10) + 1;
              *(int *)((long)param_3 + lVar9) = *(int *)((long)param_3 + lVar9) + iVar3;
              lVar9 = *(long *)((long)param_3 + lVar6);
              *(ulong *)((long)param_3 + lVar6) = lVar9 + uVar11;
              *(int *)((long)param_3 + lVar8) = (int)((lVar9 + uVar11 + 500) / 1000);
              *(long *)((long)param_3 + lVar7) = *(long *)((long)param_3 + lVar7) + lVar12;
            }
            if ((uVar2 & 4) == 0) {
              if ((uVar2 >> 0x15 & 1) == 0) {
                if ((uVar2 & 0x101) == 0) {
                  if ((uVar2 & 0x20) == 0) {
                    if ((uVar2 & 0x40) == 0) {
                      if ((uVar2 & 0x802) == 0) {
                        if ((uVar2 >> 10 & 1) == 0) {
                          if ((uVar2 & 8) == 0) {
                            if ((uVar2 & 0xc00000) == 0) {
                              if ((uVar2 >> 0xe & 1) == 0) {
                                if ((uVar2 >> 0x18 & 1) == 0) {
                                  if ((uVar2 >> 0x14 & 1) == 0) {
                                    if ((uVar2 & 0x10090) == 0) {
                                      if ((uVar2 >> 0xc & 1) == 0) {
                                        if ((uVar2 & 0x60000) == 0) goto LAB_1003180bb;
                                        param_3[0x43] =
                                             CONCAT44((int)((ulong)param_3[0x43] >> 0x20) + iVar3,
                                                      (int)param_3[0x43] + iVar14);
                                        lVar6 = 0x220;
                                      }
                                      else {
                                        param_3[0x41] =
                                             CONCAT44((int)((ulong)param_3[0x41] >> 0x20) + iVar3,
                                                      (int)param_3[0x41] + iVar14);
                                        lVar6 = 0x210;
                                      }
                                    }
                                    else {
                                      param_3[0x3f] =
                                           CONCAT44((int)((ulong)param_3[0x3f] >> 0x20) + iVar3,
                                                    (int)param_3[0x3f] + iVar14);
                                      lVar6 = 0x200;
                                    }
                                  }
                                  else {
                                    param_3[0x39] =
                                         CONCAT44((int)((ulong)param_3[0x39] >> 0x20) + iVar3,
                                                  (int)param_3[0x39] + iVar14);
                                    lVar6 = param_3[0x3b];
                                    param_3[0x3b] = lVar6 + uVar11;
                                    *(int *)(param_3 + 0x3a) = (int)((lVar6 + uVar11 + 500) / 1000);
                                    lVar6 = 0x1e0;
                                  }
                                }
                                else {
                                  param_3[0x35] =
                                       CONCAT44((int)((ulong)param_3[0x35] >> 0x20) + iVar3,
                                                (int)param_3[0x35] + iVar14);
                                  lVar6 = param_3[0x37];
                                  param_3[0x37] = lVar6 + uVar11;
                                  *(int *)(param_3 + 0x36) = (int)((lVar6 + uVar11 + 500) / 1000);
                                  lVar6 = 0x1c0;
                                }
                              }
                              else {
                                param_3[0x31] =
                                     CONCAT44((int)((ulong)param_3[0x31] >> 0x20) + iVar3,
                                              (int)param_3[0x31] + iVar14);
                                lVar6 = param_3[0x33];
                                param_3[0x33] = lVar6 + uVar11;
                                *(int *)(param_3 + 0x32) = (int)((lVar6 + uVar11 + 500) / 1000);
                                lVar6 = 0x1a0;
                              }
                            }
                            else {
                              param_3[0x3d] =
                                   CONCAT44((int)((ulong)param_3[0x3d] >> 0x20) + iVar3,
                                            (int)param_3[0x3d] + iVar14);
                              lVar6 = 0x1f0;
                            }
                          }
                          else {
                            param_3[0xd] = CONCAT44((int)((ulong)param_3[0xd] >> 0x20) + iVar3,
                                                    (int)param_3[0xd] + iVar14);
                            lVar6 = param_3[0xf];
                            param_3[0xf] = lVar6 + uVar11;
                            *(int *)(param_3 + 0xe) = (int)((lVar6 + uVar11 + 500) / 1000);
                            lVar6 = 0x80;
                          }
                        }
                        else {
                          param_3[0x1d] =
                               CONCAT44((int)((ulong)param_3[0x1d] >> 0x20) + iVar3,
                                        (int)param_3[0x1d] + iVar14);
                          lVar6 = param_3[0x1f];
                          param_3[0x1f] = lVar6 + uVar11;
                          *(int *)(param_3 + 0x1e) = (int)((lVar6 + uVar11 + 500) / 1000);
                          lVar6 = 0x100;
                        }
                      }
                      else if ((short)uVar2 < 0) {
                        param_3[0x19] =
                             CONCAT44((int)((ulong)param_3[0x19] >> 0x20) + iVar3,
                                      (int)param_3[0x19] + iVar14);
                        lVar6 = param_3[0x1b];
                        param_3[0x1b] = lVar6 + uVar11;
                        *(int *)(param_3 + 0x1a) = (int)((lVar6 + uVar11 + 500) / 1000);
                        lVar6 = 0xe0;
                      }
                      else {
                        param_3[0x15] =
                             CONCAT44((int)((ulong)param_3[0x15] >> 0x20) + iVar3,
                                      (int)param_3[0x15] + iVar14);
                        lVar6 = param_3[0x17];
                        param_3[0x17] = lVar6 + uVar11;
                        *(int *)(param_3 + 0x16) = (int)((lVar6 + uVar11 + 500) / 1000);
                        lVar6 = 0xc0;
                      }
                    }
                    else if ((short)uVar2 < 0) {
                      param_3[0x25] =
                           CONCAT44((int)((ulong)param_3[0x25] >> 0x20) + iVar3,
                                    (int)param_3[0x25] + iVar14);
                      lVar6 = param_3[0x27];
                      param_3[0x27] = lVar6 + uVar11;
                      *(int *)(param_3 + 0x26) = (int)((lVar6 + uVar11 + 500) / 1000);
                      lVar6 = 0x140;
                    }
                    else {
                      param_3[0x21] =
                           CONCAT44((int)((ulong)param_3[0x21] >> 0x20) + iVar3,
                                    (int)param_3[0x21] + iVar14);
                      lVar6 = param_3[0x23];
                      param_3[0x23] = lVar6 + uVar11;
                      *(int *)(param_3 + 0x22) = (int)((lVar6 + uVar11 + 500) / 1000);
                      lVar6 = 0x120;
                    }
                  }
                  else {
                    param_3[0x11] =
                         CONCAT44((int)((ulong)param_3[0x11] >> 0x20) + iVar3,
                                  (int)param_3[0x11] + iVar14);
                    lVar6 = param_3[0x13];
                    param_3[0x13] = lVar6 + uVar11;
                    *(int *)(param_3 + 0x12) = (int)((lVar6 + uVar11 + 500) / 1000);
                    lVar6 = 0xa0;
                  }
                }
                else {
                  param_3[9] = CONCAT44((int)((ulong)param_3[9] >> 0x20) + iVar3,
                                        (int)param_3[9] + iVar14);
                  lVar6 = param_3[0xb];
                  param_3[0xb] = lVar6 + uVar11;
                  *(int *)(param_3 + 10) = (int)((lVar6 + uVar11 + 500) / 1000);
                  lVar6 = 0x60;
                }
              }
              else {
                param_3[0x2d] =
                     CONCAT44((int)((ulong)param_3[0x2d] >> 0x20) + iVar3,
                              (int)param_3[0x2d] + iVar14);
                lVar6 = param_3[0x2f];
                param_3[0x2f] = lVar6 + uVar11;
                *(int *)(param_3 + 0x2e) = (int)((lVar6 + uVar11 + 500) / 1000);
                lVar6 = 0x180;
              }
            }
            else {
              param_3[0x29] =
                   CONCAT44((int)((ulong)param_3[0x29] >> 0x20) + iVar3,(int)param_3[0x29] + iVar14)
              ;
              lVar6 = param_3[0x2b];
              param_3[0x2b] = lVar6 + uVar11;
              *(int *)(param_3 + 0x2a) = (int)((lVar6 + uVar11 + 500) / 1000);
              lVar6 = 0x160;
            }
            *(long *)((long)param_3 + lVar6) = *(long *)((long)param_3 + lVar6) + lVar12;
          }
LAB_1003180bb:
          lVar5 = FUN_1002fa118(lVar5);
        } while (lVar5 != 0);
      }
      uVar4 = 0;
      goto LAB_100318514;
    }
LAB_1003184e9:
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_4a = "TrackDataIsValid(trackData)";
      goto LAB_10031855b;
    }
  }
  FUN_1001782e9(0,0);
  uVar4 = 0xffffffce;
LAB_100318514:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

