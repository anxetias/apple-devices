// name: FUN_1004be503
// address: 1004be503

void FUN_1004be503(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  undefined8 uVar11;
  char *pcVar12;
  int *piVar13;
  int iVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulong uVar17;
  long *plVar18;
  double dVar19;
  double dVar20;
  char local_79;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined4 uStack_66;
  undefined2 uStack_62;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((*(char *)(param_1 + 0x147) != '\0') &&
     (dVar19 = (double)FUN_1001ebd46(), *(double *)(param_1 + 0x150) + DAT_100700458 <= dVar19)) {
    lVar1 = param_1 + 0x18;
    iVar10 = FUN_1001e9de0(lVar1);
    if (iVar10 != -0x80) {
      if (iVar10 == 0) {
        plVar18 = (long *)(param_1 + 0x68);
        do {
          plVar18 = (long *)*plVar18;
          cVar9 = FUN_1004aa626(plVar18);
          if (cVar9 == '\0') {
            FUN_1001e9eb9(lVar1);
            if ((*(char *)(param_1 + 0x147) != '\0') && (*(long *)(param_1 + 8) != 0)) {
              uVar11 = FUN_1001c156e();
              FUN_1001c6987(uVar11,0x64777064,0,0,0);
              *(undefined1 *)(param_1 + 0x147) = 0;
              *(undefined1 *)(*(long *)(param_1 + 8) + 0x618) = 1;
            }
            goto LAB_1004be5b9;
          }
        } while ((*(char *)(param_1 + 0x148) == '\0') || (999 < *(uint *)(plVar18 + 0x23)));
        FUN_1001e9eb9(lVar1);
      }
      else {
        uVar11 = FUN_1001cc310();
        cVar9 = _os_log_type_enabled(uVar11,0x10);
        if (cVar9 != '\0') {
          local_78 = 0x8220202;
          uStack_74 = 0x7a0a90;
          uStack_70 = 1;
          uStack_6c = 0x400;
          uStack_6a = (undefined2)iVar10;
          uStack_68 = (undefined2)((uint)iVar10 >> 0x10);
          __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_78,0x12);
        }
      }
    }
  }
LAB_1004be5b9:
  lVar1 = param_1 + 0x18;
  iVar10 = FUN_1001e9de0();
  if (iVar10 == -0x80) goto LAB_1004beed8;
  if (iVar10 == 0) {
    lVar5 = *(long *)(param_1 + 0x68);
    uVar16 = 0;
    if (lVar5 == 0) {
      puVar15 = (undefined8 *)0x0;
    }
    else {
      uVar11 = FUN_1003070df();
      FUN_100313e0b(uVar11);
      puVar15 = *(undefined8 **)(param_1 + 0x68);
    }
    lVar2 = param_1 + 0x80;
    cVar9 = FUN_1004aa626(puVar15);
    if (cVar9 != '\0') {
      uVar16 = 0;
      do {
        if (*(char *)(puVar15 + 0x37) != '\0') {
          *(undefined1 *)(puVar15 + 0x37) = 0;
          FUN_1004ade8e(puVar15);
        }
        if (*(char *)(puVar15 + 0x39) != '\0') {
          *(undefined1 *)(puVar15 + 0x39) = 0;
          FUN_1004affd8(puVar15);
        }
        if ((*(char *)((long)puVar15 + 0x1c9) != '\0') &&
           (*(undefined1 *)((long)puVar15 + 0x1c9) = 0, *(char *)(param_1 + 0x17) != '\0')) {
          FUN_1001c6987(lVar2,0x646d696e,puVar15,0,0);
        }
        if (puVar15[0x30] != 0) {
          local_48 = puVar15[0x36];
          uVar11 = puVar15[0x31];
          uVar8 = puVar15[0x32];
          uStack_60 = puVar15[0x33];
          local_58 = *(undefined4 *)(puVar15 + 0x34);
          uStack_54 = *(undefined4 *)((long)puVar15 + 0x1a4);
          uStack_50 = *(undefined4 *)(puVar15 + 0x35);
          uStack_4c = *(undefined4 *)((long)puVar15 + 0x1ac);
          uStack_68 = (undefined2)uVar8;
          uStack_66 = (undefined4)((ulong)uVar8 >> 0x10);
          uStack_62 = (undefined2)((ulong)uVar8 >> 0x30);
          local_78 = (undefined4)puVar15[0x30];
          uStack_74 = (undefined4)((ulong)puVar15[0x30] >> 0x20);
          uStack_70 = (undefined4)uVar11;
          uStack_6c = (undefined2)((ulong)uVar11 >> 0x20);
          uStack_6a = (undefined2)((ulong)uVar11 >> 0x30);
          puVar15[0x30] = 0;
          FUN_1001c62d9(puVar15 + 0x31,0x30);
          (*(code *)CONCAT44(uStack_74,local_78))(puVar15,0,0);
        }
        if (*(int *)(puVar15 + 0x23) == 2) {
          cVar9 = *(char *)(puVar15 + 0xef);
          FUN_1004bef97(puVar15 + 0xc9);
          if (cVar9 == '\0') {
            if (((((double)puVar15[0x370] != DAT_100701af0) ||
                 (NAN((double)puVar15[0x370]) || NAN(DAT_100701af0))) &&
                ((*(char *)(puVar15 + 0xef) != '\0' ||
                 (*(int *)((long)puVar15 + 0x1304) != 0x636f7079)))) &&
               (dVar19 = (double)FUN_1001ebd46(),
               (double)puVar15[0x370] + (double)puVar15[0x371] < dVar19)) {
              FUN_1004ac2b6(puVar15,0,0xfffff345);
            }
          }
        }
        else if ((*(int *)(puVar15 + 0x23) == 4) && (uVar16 < 200)) {
          *(undefined8 **)(param_1 + 0x160 + (ulong)uVar16 * 8) = puVar15;
          uVar16 = uVar16 + 1;
        }
        puVar15 = (undefined8 *)*puVar15;
        cVar9 = FUN_1004aa626(puVar15);
      } while (cVar9 != '\0');
    }
    iVar10 = FUN_1001e9eb9(lVar1);
    if (lVar5 != 0) {
      uVar11 = FUN_1003070df();
      FUN_1002fbbfc(uVar11);
    }
    if (iVar10 == -0x80) goto LAB_1004beed8;
    if (iVar10 == 0) {
      dVar19 = (double)FUN_1001ebd46();
      if (uVar16 != 0) {
        dVar19 = dVar19 + DAT_100700b00;
        uVar17 = 0;
        do {
          lVar5 = *(long *)(param_1 + 0x160 + uVar17 * 8);
          local_79 = '\0';
          cVar9 = FUN_1004aa626(lVar5);
          if (cVar9 == '\0') {
            uVar11 = FUN_1001cc310();
            cVar9 = _os_log_type_enabled(uVar11,0x10);
            if (cVar9 != '\0') {
              local_78 = 0x8220202;
              uStack_74 = 0x7a0a90;
              uStack_70 = 1;
              uStack_6c = 0x822;
              uStack_6a = 0x393b;
              uStack_68 = 0x7d;
              uStack_66 = 1;
              __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_78,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
          else {
            FUN_1001cc3a4(2);
            FUN_1004befd9(lVar5,0,&local_79);
            lVar6 = *(long *)(param_1 + 8);
            if (lVar6 != 0) {
              iVar10 = *(int *)(lVar5 + 0x120);
              uVar3 = *(uint *)(lVar5 + 0x144);
              iVar4 = *(int *)(lVar5 + 0x170);
              if (iVar10 == 0) {
                *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + -1;
                lVar7 = lVar6;
                if ((uVar3 >> 0x1c & 1) == 0) goto LAB_1004be93e;
              }
              else {
                if (iVar10 == 0x73746f72) {
                  iVar14 = 1;
                }
                else if (iVar10 == 0x64657669) {
                  iVar14 = 2;
                }
                else {
                  iVar14 = 3;
                }
                piVar13 = (int *)(lVar6 + 0x14 + (ulong)(uint)(iVar14 * 0x50));
                *piVar13 = *piVar13 + -1;
                if ((uVar3 >> 0x1c & 1) == 0) {
                  lVar7 = lVar6 + (ulong)(uint)(iVar14 * 0x50);
LAB_1004be93e:
                  if (iVar4 == -0x80) {
                    *(int *)(lVar7 + 0x20) = *(int *)(lVar7 + 0x20) + 1;
                  }
                  else if (iVar4 == 0) {
                    *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
                  }
                  else {
                    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                  }
                  if (iVar10 != 0) {
                    *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + -1;
                    if (iVar4 == -0x80) {
                      *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + 1;
                    }
                    else if (iVar4 == 0) {
                      *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1;
                    }
                    else {
                      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                    }
                  }
                }
                else if (iVar10 != 0) {
                  *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + -1;
                }
              }
              *(undefined1 *)(lVar6 + 0x61a) = 1;
            }
            if (*(char *)(param_1 + 0x17) != '\0') {
              FUN_1001c6987(lVar2,0x646d6964,lVar5,(long)*(int *)(lVar5 + 0x170),0);
            }
            if (*(char *)(param_1 + 0x14) == '\0') {
              cVar9 = FUN_1004aa626(lVar5);
              if (cVar9 == '\0') {
                uVar11 = FUN_1001cc310();
                cVar9 = _os_log_type_enabled(uVar11);
                if (cVar9 != '\0') {
                  local_78 = 0x8220202;
                  uStack_74 = 0x7a0a90;
                  uStack_70 = 1;
                  uStack_6c = 0x822;
                  uStack_6a = 0x393b;
                  uStack_68 = 0x7d;
                  uStack_66 = 1;
                  __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_78,
                                      0x16);
                }
                FUN_1001782e9(0);
              }
              else if (*(uint *)(lVar5 + 0x118) == 1000 || 1999 < *(uint *)(lVar5 + 0x118))
              goto LAB_1004be9ab;
LAB_1004bea49:
              FUN_1001e9de0(lVar1);
              cVar9 = local_79;
              if (*(char *)(lVar5 + 0x1cb) == '\0') {
                FUN_1001e9eb9(lVar1);
                if ((cVar9 != '\0') && (*(char *)(param_1 + 0x17) != '\0')) {
                  FUN_1001c6987(lVar2,0x646d6963,lVar5,0,0);
                }
              }
              else {
                *(undefined1 *)(lVar5 + 0x1cb) = 0;
                if (*(int *)(lVar5 + 0x170) != -0x80) goto LAB_1004bec8a;
                cVar9 = FUN_1004aa626(lVar5);
                if (cVar9 == '\0') {
                  uVar11 = FUN_1001cc310();
                  cVar9 = _os_log_type_enabled(uVar11);
                  if (cVar9 != '\0') {
                    pcVar12 = "DownloadItem_IsValid(inDownloadItem)";
LAB_1004bec58:
                    uStack_6c = 0x822;
                    uStack_70 = 1;
                    uStack_74 = 0x7a0a90;
                    local_78 = 0x8220202;
                    uStack_6a = SUB82(pcVar12,0);
                    uStack_68 = (undefined2)((ulong)pcVar12 >> 0x10);
                    uStack_66 = (undefined4)((ulong)pcVar12 >> 0x20);
                    __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_78
                                        ,0x16);
                  }
LAB_1004bec81:
                  FUN_1001782e9(0);
                }
                else {
                  if (*(long *)(lVar5 + 0x20) == 0) {
                    uVar11 = FUN_1001cc310();
                    cVar9 = _os_log_type_enabled(uVar11);
                    if (cVar9 != '\0') {
                      pcVar12 = "inDownloadItem->downloadManager != __null";
                      goto LAB_1004bec58;
                    }
                    goto LAB_1004bec81;
                  }
                  if (*(uint *)(lVar5 + 0x118) == 0) {
                    uVar11 = FUN_1001cc310();
                    cVar9 = _os_log_type_enabled(uVar11);
                    if (cVar9 != '\0') {
                      pcVar12 = "itemState > kDownloadItemState_Init";
                      goto LAB_1004bec58;
                    }
                    goto LAB_1004bec81;
                  }
                  if (1000 < *(uint *)(lVar5 + 0x118)) {
                    *(undefined4 *)(lVar5 + 0x118) = 1;
                    iVar10 = FUN_1004b11c8(lVar5);
                    if (iVar10 != -0x80) {
                      if (iVar10 == 0) {
                        lVar6 = *(long *)(param_1 + 8);
                        if (lVar6 != 0) {
                          iVar10 = *(int *)(lVar5 + 0x120);
                          if (iVar10 != 0) {
                            if (iVar10 == 0x73746f72) {
                              iVar10 = 1;
LAB_1004bed70:
                              piVar13 = (int *)((ulong)(uint)(iVar10 * 0x50) + lVar6 + 0x14);
                            }
                            else {
                              if (iVar10 == 0x64657669) {
                                iVar10 = 2;
                                goto LAB_1004bed70;
                              }
                              piVar13 = (int *)(lVar6 + 0x104);
                            }
                            *piVar13 = *piVar13 + 1;
                          }
                          *(int *)(lVar6 + 0x14) = *(int *)(lVar6 + 0x14) + 1;
                          *(undefined1 *)(lVar6 + 0x61a) = 1;
                        }
                        iVar10 = FUN_1004b132d(param_1);
                        if (iVar10 != -0x80) {
                          if (iVar10 == 0) {
                            if (*(char *)(param_1 + 0x17) != '\0') {
                              FUN_1001c6987(lVar2,0x646d6963,lVar5,0,0);
                            }
                            *(undefined1 *)(*(long *)(param_1 + 8) + 0x618) = 1;
                            FUN_1004b10ec();
                          }
                          else {
                            uVar11 = FUN_1001cc310();
                            cVar9 = _os_log_type_enabled(uVar11);
                            if (cVar9 != '\0') {
                              uStack_6a = (undefined2)iVar10;
                              uStack_68 = (undefined2)((uint)iVar10 >> 0x10);
                              goto LAB_1004bee33;
                            }
                          }
                        }
                      }
                      else {
                        uVar11 = FUN_1001cc310();
                        cVar9 = _os_log_type_enabled(uVar11);
                        if (cVar9 == '\0') goto LAB_1004bec8a;
                        uStack_6a = (undefined2)iVar10;
                        uStack_68 = (undefined2)((uint)iVar10 >> 0x10);
LAB_1004bee33:
                        uStack_6c = 0x400;
                        uStack_70 = 1;
                        uStack_74 = 0x7a0a90;
                        local_78 = 0x8220202;
                        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",
                                            &local_78,0x12);
                      }
                    }
                  }
                }
LAB_1004bec8a:
                FUN_1001e9eb9(lVar1);
              }
            }
            else {
LAB_1004be9ab:
              uVar3 = *(uint *)(lVar5 + 0x144);
              if (((-1 < (int)uVar3) && ((uVar3 < 0x40000000 || (*(int *)(lVar5 + 0x170) != 0)))) &&
                 (((uVar3 >> 0x1d & 1) == 0 ||
                  (((iVar10 = *(int *)(lVar5 + 0x170), iVar10 - 0x1f41U < 2 || (iVar10 == -0x80)) ||
                   (iVar10 == 0)))))) goto LAB_1004bea49;
              FUN_1004af08a(param_1,lVar5,0);
            }
            FUN_1001cc4fc(2);
          }
        } while (((uVar17 < 4) || (dVar20 = (double)FUN_1001ebd46(), dVar20 <= dVar19)) &&
                (uVar17 = uVar17 + 1, uVar17 != uVar16));
        lVar1 = *(long *)(param_1 + 8);
        if (lVar1 != 0) {
          *(undefined1 *)(lVar1 + 0x618) = 1;
          *(undefined1 *)(lVar1 + 0x61a) = 1;
          cVar9 = FUN_1004adbcd(*(undefined8 *)(lVar1 + 0x150),0);
          if (cVar9 == '\0') {
            *(undefined1 *)(*(long *)(param_1 + 8) + 0x619) = 1;
          }
        }
      }
      goto LAB_1004beed8;
    }
    uVar11 = FUN_1001cc310();
    cVar9 = _os_log_type_enabled(uVar11,0x10);
    if (cVar9 == '\0') goto LAB_1004beed8;
    uStack_6a = (undefined2)iVar10;
    uStack_68 = (undefined2)((uint)iVar10 >> 0x10);
  }
  else {
    uVar11 = FUN_1001cc310();
    cVar9 = _os_log_type_enabled(uVar11,0x10);
    if (cVar9 == '\0') goto LAB_1004beed8;
    uStack_6a = (undefined2)iVar10;
    uStack_68 = (undefined2)((uint)iVar10 >> 0x10);
  }
  uStack_6c = 0x400;
  uStack_70 = 1;
  uStack_74 = 0x7a0a90;
  local_78 = 0x8220202;
  __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_78,0x12);
LAB_1004beed8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

