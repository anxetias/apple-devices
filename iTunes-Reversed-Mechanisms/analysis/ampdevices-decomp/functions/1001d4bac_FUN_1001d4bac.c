// name: FUN_1001d4bac
// address: 1001d4bac

void FUN_1001d4bac(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar14 = FUN_1001ead5c();
  do {
    if (lVar14 == 0) {
LAB_1001d587d:
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    iVar13 = *(int *)(lVar14 + 0x10);
    uVar12 = *(uint *)(lVar14 + 0x14);
    lVar2 = *(long *)(param_1 + 0x9b0);
    if (lVar2 == lVar14 || lVar2 == 0) {
      if (iVar13 < 0x4755524c) {
        if (iVar13 < 0x46696c6c) {
          if (iVar13 < 0x44526441) {
            if (iVar13 == 0x416c6f63) {
              uVar21 = 0xffffffce;
              if (*(int *)(*(long *)(lVar14 + 8) + 0x98) != 1) goto switchD_1001d4e95_caseD_3;
              uVar12 = FUN_10017d0ec(*(undefined8 *)(*(long *)(lVar14 + 8) + 0x4c0),
                                     *(undefined4 *)(lVar14 + 0xf8),*(undefined8 *)(lVar14 + 0x100),
                                     *(undefined8 *)(lVar14 + 0x108));
            }
            else if (iVar13 == 0x436c6f73) {
              lVar2 = *(long *)(lVar14 + 8);
              *(undefined1 *)(lVar2 + 0x9d1) = 1;
              *(undefined2 *)(lVar2 + 0x951) = 0;
              goto LAB_1001d55a4;
            }
          }
          else if (iVar13 == 0x44526441) {
            uVar12 = FUN_1001db65d(lVar14);
          }
          else if (iVar13 == 0x45526441) {
            lVar2 = *(long *)(lVar14 + 8);
            uVar21 = 0;
            switch(*(undefined4 *)(lVar2 + 0x98)) {
            case 1:
              piVar4 = *(int **)(lVar14 + 0xf8);
              if (piVar4 == (int *)0x0) {
LAB_1001d531a:
                uVar16 = FUN_1001cc310();
                cVar11 = _os_log_type_enabled(uVar16,0x10);
                if (cVar11 != '\0') {
                  local_58 = 0x8220202;
                  uStack_54 = 0x7a0a90;
                  uStack_50 = 1;
                  local_4c = 0x822;
                  local_4a = 
                  "info != nullptr && ((info->magic == \'srai\') ? true : HandleAssert(AssertCategory::None, \"Assertion failure (expected to be true)\", \"info->magic == \'srai\'\", \"/AppleInternal/Library/BuildRoots/4~CakmugD0CR2Rb-cGHdD_ypyZft5Sukl8ug0NgCk/Library/Caches/com.apple.xbs/Sources/Devices/Utilities/StreamUtilities.cpp\", 752, true))"
                  ;
                  __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
              else {
                if (*piVar4 != 0x73726169) {
                  uVar16 = FUN_1001cc310();
                  cVar11 = _os_log_type_enabled(uVar16,0x10);
                  if (cVar11 != '\0') {
                    local_58 = 0x8220202;
                    uStack_54 = 0x7ab58c;
                    uStack_50 = 1;
                    local_4c = 0x822;
                    local_4a = "info->magic == \'srai\'";
                    __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_58
                                        ,0x16);
                  }
                  cVar11 = FUN_1001782e9(0,1);
                  if (cVar11 == '\0') goto LAB_1001d531a;
                }
                lVar18 = *(long *)(piVar4 + 6);
                if (lVar18 == 0) {
                  uVar16 = FUN_1001cc310();
                  cVar11 = _os_log_type_enabled(uVar16,0x10);
                  if (cVar11 != '\0') {
                    local_4a = "sizePerBuffer != 0";
LAB_1001d54fa:
                    local_4c = 0x822;
                    uStack_50 = 1;
                    uStack_54 = 0x7a0a90;
                    local_58 = 0x8220202;
                    __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_58
                                        ,0x16);
                  }
                }
                else {
                  uVar12 = piVar4[4];
                  if (uVar12 == 0) {
                    uVar16 = FUN_1001cc310();
                    cVar11 = _os_log_type_enabled(uVar16,0x10);
                    if (cVar11 != '\0') {
                      local_4a = "numBuffers != 0";
                      goto LAB_1001d54fa;
                    }
                  }
                  else if (*(long *)(piVar4 + 8) == 0) {
                    if (*(long *)(lVar2 + 0x968) == 0) {
                      if (*(char *)(lVar2 + 0x951) == '\0') {
                        lVar19 = *(long *)(piVar4 + 2);
                        *(long *)(lVar2 + 0x968) = lVar19;
                        *(int **)(lVar2 + 0x960) = piVar4;
                        *(long *)(piVar4 + 8) = lVar2;
                        uVar20 = (ulong)uVar12;
                        do {
                          *(long *)(lVar19 + 8) = lVar18;
                          *(long *)(lVar19 + 0x28) = lVar2;
                          *(long *)(lVar19 + 0x78) = lVar19;
                          FUN_1001c2470(lVar2 + 0x988,lVar19);
                          lVar19 = lVar19 + 0x148;
                          uVar20 = uVar20 - 1;
                        } while (uVar20 != 0);
                        *(undefined2 *)(lVar2 + 0x951) = 0x101;
                        *(uint *)(lVar2 + 0x94c) = uVar12;
                        *(ulong *)(lVar2 + 0x970) = lVar18 * (ulong)uVar12;
                        goto LAB_1001d55a4;
                      }
                      uVar16 = FUN_1001cc310();
                      cVar11 = _os_log_type_enabled(uVar16,0x10);
                      if (cVar11 != '\0') {
                        local_58 = 0x8220202;
                        uStack_54 = 0x7a0a90;
                        uStack_50 = 1;
                        local_4c = 0x822;
                        local_4a = "stream->readAheadEnabled == false";
                        __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",
                                            &local_58,0x16);
                      }
                      FUN_1001782e9(0,0);
                      uVar21 = 0xffffffce;
                      break;
                    }
                    uVar16 = FUN_1001cc310();
                    cVar11 = _os_log_type_enabled(uVar16,0x10);
                    if (cVar11 != '\0') {
                      local_4a = "stream->readAheadBuffers == nullptr";
                      goto LAB_1001d54fa;
                    }
                  }
                  else {
                    uVar16 = FUN_1001cc310();
                    cVar11 = _os_log_type_enabled(uVar16,0x10);
                    if (cVar11 != '\0') {
                      local_4a = "info->stream == nullptr";
                      goto LAB_1001d54fa;
                    }
                  }
                }
                FUN_1001782e9(0,0);
              }
              uVar21 = 0xffffffce;
              break;
            default:
              uVar21 = 0xffffffce;
              break;
            case 3:
              break;
            }
            goto switchD_1001d4e95_caseD_3;
          }
        }
        else if (iVar13 < 0x47495049) {
          if (iVar13 == 0x46696c6c) goto LAB_1001d4d73;
          if (iVar13 == 0x47454f46) {
            lVar2 = *(long *)(lVar14 + 8);
            if (*(int *)(lVar2 + 0x98) == 3) {
              uVar21 = 0;
              if (*(long *)(lVar14 + 0xf8) != 0) {
                uVar16 = FUN_1001c4cf4(lVar2 + 0x4c0);
                **(undefined8 **)(lVar14 + 0xf8) = uVar16;
                uVar21 = 0;
              }
            }
            else {
              uVar21 = 0xffffffce;
              if (*(int *)(lVar2 + 0x98) == 1) {
                uVar12 = FUN_10017ce92(*(undefined8 *)(lVar2 + 0x4c0),&local_58);
                if (*(undefined8 **)(lVar14 + 0xf8) != (undefined8 *)0x0) {
                  **(undefined8 **)(lVar14 + 0xf8) = CONCAT44(uStack_54,local_58);
                }
                goto LAB_1001d4d93;
              }
            }
            goto switchD_1001d4e95_caseD_3;
          }
        }
        else {
          if (iVar13 == 0x47495049) {
            lVar2 = *(long *)(lVar14 + 8);
            if (*(int *)(lVar2 + 0x98) == 2) {
              lVar18 = 0x4e0;
            }
            else {
              uVar21 = 0xffffffce;
              if (*(int *)(lVar2 + 0x98) != 4) goto switchD_1001d4e95_caseD_3;
              lVar18 = 0x8e0;
            }
            puVar3 = *(undefined8 **)(lVar14 + 0xf8);
            puVar3[10] = *(undefined8 *)(lVar2 + 0x50 + lVar18);
            puVar1 = (undefined8 *)(lVar2 + 0x40 + lVar18);
            uVar16 = puVar1[1];
            puVar3[8] = *puVar1;
            puVar3[9] = uVar16;
            uVar16 = *(undefined8 *)(lVar2 + lVar18);
            uVar5 = ((undefined8 *)(lVar2 + lVar18))[1];
            puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar18);
            uVar6 = *puVar1;
            uVar7 = puVar1[1];
            puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar18);
            uVar8 = *puVar1;
            uVar9 = puVar1[1];
            puVar1 = (undefined8 *)(lVar2 + 0x30 + lVar18);
            uVar10 = puVar1[1];
            puVar3[6] = *puVar1;
            puVar3[7] = uVar10;
            puVar3[4] = uVar8;
            puVar3[5] = uVar9;
            puVar3[2] = uVar6;
            puVar3[3] = uVar7;
            *puVar3 = uVar16;
            puVar3[1] = uVar5;
            goto LAB_1001d55a4;
          }
          if (iVar13 == 0x47506f73) goto LAB_1001d4c7f;
        }
LAB_1001d4d93:
        uVar21 = uVar12;
        if (uVar12 != 1) goto switchD_1001d4e95_caseD_3;
LAB_1001d5873:
        uVar21 = 1;
LAB_1001d5879:
        *(uint *)(lVar14 + 0x14) = uVar21;
        goto LAB_1001d587d;
      }
      if (0x52697464 < iVar13) {
        if (iVar13 < 0x53495049) {
          if (iVar13 == 0x52697465) {
            uVar12 = FUN_1001daf19(lVar14);
          }
          else if (iVar13 == 0x53454f46) {
            lVar2 = *(long *)(lVar14 + 8);
            if (*(int *)(lVar2 + 0x98) == 3) {
              uVar12 = FUN_1001c4eea(lVar2 + 0x4c0,*(undefined8 *)(lVar14 + 0xf8));
              if (uVar12 != 0) goto LAB_1001d4d93;
              lVar2 = *(long *)(lVar14 + 8);
              uVar20 = *(ulong *)(lVar14 + 0xf8);
              if (uVar20 < *(ulong *)(lVar2 + 0x958)) {
                *(ulong *)(lVar2 + 0x958) = uVar20;
                uVar20 = *(ulong *)(lVar14 + 0xf8);
              }
              uVar21 = 0;
              if (uVar20 < *(ulong *)(lVar2 + 0x500)) {
                *(ulong *)(lVar2 + 0x500) = uVar20;
              }
            }
            else {
              uVar21 = 0xffffffce;
              if (*(int *)(lVar2 + 0x98) == 1) {
                uVar12 = FUN_10017cf3c(*(undefined8 *)(lVar2 + 0x4c0),*(undefined8 *)(lVar14 + 0xf8)
                                      );
                if (uVar12 == 0) {
                  lVar2 = *(long *)(lVar14 + 8);
                  lVar18 = lVar2;
                  if (*(long *)(lVar2 + 0x980) != 0) {
                    do {
                      FUN_1001d41e3(lVar2);
                    } while (*(long *)(lVar2 + 0x980) != 0);
                    lVar18 = *(long *)(lVar14 + 8);
                  }
                  *(undefined1 *)(lVar2 + 0x952) = *(undefined1 *)(lVar2 + 0x951);
                  uVar12 = FUN_10017cfbe(*(undefined8 *)(lVar18 + 0x4c0),&local_58);
                  *(ulong *)(*(long *)(lVar14 + 8) + 0x958) = CONCAT44(uStack_54,local_58);
                }
                goto LAB_1001d4d93;
              }
            }
            goto switchD_1001d4e95_caseD_3;
          }
        }
        else if (iVar13 == 0x53495049) {
          uVar12 = FUN_1001db3b0(lVar14);
        }
        else if (iVar13 == 0x53506f73) {
          lVar2 = *(long *)(lVar14 + 8);
          uVar21 = 0xffffffce;
          if (*(int *)(lVar2 + 0x98) == 3) {
            uVar20 = *(ulong *)(lVar14 + 0xf8);
            uVar22 = FUN_1001c4cf4(lVar2 + 0x4c0);
            if (uVar20 <= uVar22) {
              uVar16 = *(undefined8 *)(lVar14 + 0xf8);
              *(undefined8 *)(lVar2 + 0x500) = uVar16;
LAB_1001d559c:
              *(undefined8 *)(lVar2 + 0x958) = uVar16;
              goto LAB_1001d55a4;
            }
            uVar16 = FUN_1001cc310();
            cVar11 = _os_log_type_enabled(uVar16,0x10);
            if (cVar11 != '\0') {
              local_58 = 0x8220202;
              uStack_54 = 0x7a0a90;
              uStack_50 = 1;
              local_4c = 0x822;
              local_4a = 
              "pb->u.setFPos.fPos <= MemBufferGetBufferSize(&stream->control.buffer.memBuffer)";
              __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_58,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
          else if (*(int *)(lVar2 + 0x98) == 1) {
            uVar20 = *(ulong *)(lVar2 + 0x958);
            uVar22 = *(ulong *)(lVar14 + 0xf8);
            uVar15 = uVar20 - uVar22;
            if (uVar15 == 0) goto LAB_1001d55a4;
            if (uVar20 < uVar22) {
              for (uVar22 = uVar22 - uVar20; uVar22 != 0; uVar22 = uVar22 - uVar20) {
                lVar18 = *(long *)(lVar2 + 0x980);
                if (lVar18 == 0) goto LAB_1001d5427;
                lVar19 = *(long *)(lVar18 + 0x10);
                uVar20 = lVar19 - *(long *)(lVar18 + 0x18);
                if (uVar22 <= uVar20) {
                  uVar20 = uVar22;
                }
                lVar17 = *(long *)(lVar18 + 0x18) + uVar20;
                *(long *)(lVar18 + 0x18) = lVar17;
                if (*(char *)(lVar18 + 0x138) == '\0') {
                  *(long *)(lVar2 + 0x978) = *(long *)(lVar2 + 0x978) - uVar20;
                }
                if (lVar17 == lVar19) {
                  FUN_1001d41e3(lVar2);
                }
              }
LAB_1001d5595:
              uVar16 = *(undefined8 *)(lVar14 + 0xf8);
              goto LAB_1001d559c;
            }
            lVar18 = *(long *)(lVar2 + 0x980);
            if (lVar18 != 0) {
              if (*(char *)(lVar18 + 0x138) == '\0') {
                if (uVar15 <= *(ulong *)(lVar18 + 0x18)) {
                  *(ulong *)(lVar18 + 0x18) = *(ulong *)(lVar18 + 0x18) - uVar15;
                  *(long *)(lVar2 + 0x978) = *(long *)(lVar2 + 0x978) + uVar15;
                  goto LAB_1001d5595;
                }
                do {
                  FUN_1001d41e3(lVar2);
                } while (*(long *)(lVar2 + 0x980) != 0);
              }
              else {
                do {
                  FUN_1001d41e3(lVar2);
                } while (*(long *)(lVar2 + 0x980) != 0);
              }
            }
LAB_1001d5427:
            *(undefined1 *)(lVar2 + 0x952) = *(undefined1 *)(lVar2 + 0x951);
            *(undefined8 *)(lVar2 + 0x958) = *(undefined8 *)(lVar14 + 0xf8);
            uVar12 = FUN_10017d068(*(undefined8 *)(lVar2 + 0x4c0));
            uVar21 = 0;
            if (uVar12 != 0) {
              iVar13 = FUN_10017cfbe(*(undefined8 *)(lVar2 + 0x4c0),&local_58);
              if (iVar13 == 0) {
                *(ulong *)(lVar2 + 0x958) = CONCAT44(uStack_54,local_58);
              }
              while (*(long *)(lVar2 + 0x980) != 0) {
                FUN_1001d41e3(lVar2);
              }
              *(undefined1 *)(lVar2 + 0x952) = *(undefined1 *)(lVar2 + 0x951);
              goto LAB_1001d4d93;
            }
          }
          goto switchD_1001d4e95_caseD_3;
        }
        goto LAB_1001d4d93;
      }
      if (0x50757367 < iVar13) {
        if (iVar13 == 0x50757368) goto LAB_1001d4eb9;
        if (iVar13 == 0x52656164) goto LAB_1001d4d00;
        goto LAB_1001d4d93;
      }
      if (iVar13 != 0x4755524c) {
        if (iVar13 != 0x4b696c6c) goto LAB_1001d4d93;
        if (lVar2 == 0) goto LAB_1001d55a4;
        goto LAB_1001d5873;
      }
      lVar2 = *(long *)(lVar14 + 8);
      uVar21 = 0xffffffce;
      if ((*(int *)(lVar2 + 0x98) != 4) ||
         ((ulong)*(uint *)(lVar14 + 0x100) <= *(ulong *)(lVar2 + 0x4d8)))
      goto switchD_1001d4e95_caseD_3;
      _memcpy(*(void **)(lVar14 + 0xf8),(void *)(lVar2 + 0x4e0),*(ulong *)(lVar2 + 0x4d8));
      *(undefined1 *)(*(long *)(lVar14 + 0xf8) + *(long *)(lVar2 + 0x4d8)) = 0;
    }
    else if (iVar13 < 0x50757368) {
      if (iVar13 != 0x46696c6c) {
        if (iVar13 == 0x47506f73) {
LAB_1001d4c7f:
          uVar21 = 0xffffffce;
          if (3 < *(int *)(*(long *)(lVar14 + 8) + 0x98) - 1U) goto switchD_1001d4e95_caseD_3;
          **(undefined8 **)(lVar14 + 0xf8) = *(undefined8 *)(*(long *)(lVar14 + 8) + 0x958);
          goto LAB_1001d55a4;
        }
        goto LAB_1001d587d;
      }
LAB_1001d4d73:
      if (*(char *)(*(long *)(lVar14 + 8) + 0x952) != '\0') {
        uVar12 = (uint)(*(long *)(*(long *)(lVar14 + 8) + 0x988) != 0);
        goto LAB_1001d4d93;
      }
    }
    else {
      if (iVar13 != 0x50757368) {
        if (iVar13 == 0x52656164) {
LAB_1001d4d00:
          uVar12 = FUN_1001da878(lVar14);
          goto LAB_1001d4d93;
        }
        goto LAB_1001d587d;
      }
LAB_1001d4eb9:
      uVar20 = *(ulong *)(lVar14 + 0x100);
      uVar21 = 0;
      if (uVar20 == 0) goto switchD_1001d4e95_caseD_3;
      lVar2 = *(long *)(lVar14 + 8);
      do {
        lVar18 = *(long *)(lVar2 + 0x980);
        if (((lVar18 == 0) || (*(char *)(lVar18 + 0x138) == '\0')) ||
           (uVar22 = *(ulong *)(lVar18 + 0x18), uVar22 == 0)) {
          lVar18 = FUN_1001c26bc(lVar2 + 0x990);
          if (lVar18 == 0) {
            uVar21 = 0xffffffd8;
            goto switchD_1001d4e95_caseD_3;
          }
          *(undefined8 *)(lVar18 + 0x10) = *(undefined8 *)(lVar18 + 8);
          *(undefined8 *)(lVar18 + 0x18) = *(undefined8 *)(lVar18 + 8);
          FUN_1001c23fc((long *)(lVar2 + 0x980),lVar18);
          uVar22 = *(ulong *)(lVar18 + 0x18);
        }
        uVar15 = uVar20;
        if (uVar22 < uVar20) {
          uVar15 = uVar22;
        }
        *(ulong *)(lVar18 + 0x18) = uVar22 - uVar15;
        *(long *)(lVar2 + 0x958) = *(long *)(lVar2 + 0x958) - uVar15;
        uVar20 = uVar20 - uVar15;
        FUN_1001c631b(*(long *)(lVar14 + 0xf8) + uVar20,
                      (uVar22 - uVar15) + *(long *)(lVar18 + 0x140));
      } while (uVar20 != 0);
    }
LAB_1001d55a4:
    uVar21 = 0;
switchD_1001d4e95_caseD_3:
    if (*(long *)(param_1 + 0x9b0) == lVar14) goto LAB_1001d5879;
    iVar13 = FUN_1001eacad(lVar14,param_1 + 0x9b8);
    if ((iVar13 != -0x80) && (iVar13 != 0)) {
      uVar16 = FUN_1001cc310();
      cVar11 = _os_log_type_enabled(uVar16,0x10);
      if (cVar11 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar13);
        __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    if (*(long *)(param_1 + 0x9b0) == lVar14) {
      uVar16 = FUN_1001cc310();
      cVar11 = _os_log_type_enabled(uVar16,0x10);
      if (cVar11 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        local_4c = 0x822;
        local_4a = "stream->pendingIO != pb";
        __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    *(uint *)(lVar14 + 0x14) = uVar21;
    if (*(code **)(lVar14 + 0x50) != (code *)0x0) {
      (**(code **)(lVar14 + 0x50))(lVar14);
    }
    lVar14 = FUN_1001ead5c(param_1 + 0x9b8);
  } while( true );
}

