// name: FUN_1001f9ede
// address: 1001f9ede

int FUN_1001f9ede(undefined8 *param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  bool bVar13;
  undefined1 auVar14 [16];
  undefined1 local_1d18 [4];
  ushort local_1d14;
  ulong local_1c88;
  short local_1c7c [2];
  long local_1c78;
  ulong local_1c70;
  long local_1c68;
  int local_1c5c;
  undefined1 local_1c58 [1024];
  undefined1 local_1858 [1024];
  undefined1 local_1458 [3072];
  short local_858 [1024];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x1001f9ef6;
  auVar14 = FUN_100108310();
  lVar4 = -auVar14._0_8_;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_1c78 = 0;
  lVar8 = param_1[3];
  if (lVar8 != 0) {
    iVar6 = *(int *)(param_1 + 0x88);
    iVar1 = *(int *)((long)param_1 + 0x444);
    *(undefined8 *)((long)&local_38 + lVar4) = 0x1001f9f43;
    iVar6 = FUN_1001ceb24(lVar8,0x7570726d,iVar6 * 100,iVar1 * 100,param_4);
    if (iVar6 == -0x80) goto LAB_1001fa482;
    if (iVar6 != 0) {
      *(undefined8 *)((long)&local_38 + lVar4) = 0x1001f9ff9;
      uVar7 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa009;
      cVar5 = _os_log_type_enabled(uVar7,0x10);
      if (cVar5 != '\0') {
        *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa01c;
        FUN_1006cb623(iVar6,uVar7);
      }
      goto LAB_1001fa482;
    }
  }
  *(undefined8 *)((long)&local_38 + lVar4) = 0x1001f9f77;
  iVar6 = FUN_10017dbe8(param_2,param_1 + 4,local_858,0x3ff,local_1c7c);
  if (iVar6 == -0x80) goto LAB_1001fa482;
  if (iVar6 != 0) {
    *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa026;
    uVar7 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa036;
    cVar5 = _os_log_type_enabled(uVar7,0x10);
    if (cVar5 != '\0') {
      *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa049;
      FUN_1006cbae5(iVar6,uVar7);
    }
    goto LAB_1001fa482;
  }
  if (local_858[0] != 0x2f) {
    *(undefined8 *)((long)&local_38 + lVar4) = 0x1001f9f9e;
    uVar7 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar4) = 0x1001f9fae;
    cVar5 = _os_log_type_enabled(uVar7,0x10);
    if (cVar5 != '\0') {
      *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa4b3;
      FUN_1006cb68f(uVar7);
    }
    *(undefined8 *)((long)&local_38 + lVar4) = 0x1001f9fbf;
    FUN_1001782e9(0,0);
  }
  local_858[0] = local_1c7c[0] + -1;
  lVar8 = param_1[1];
  local_1c68 = auVar14._8_8_;
  if (lVar8 == 0) {
    local_1858[0] = 0;
  }
  else {
    *(undefined8 *)((long)&local_38 + lVar4) = 0x1001f9ff2;
    FUN_1001dfbb3(lVar8,local_1858,0x400);
  }
  *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa070;
  FUN_1001e5b77(local_858,local_1458,0xbfe);
  *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa084;
  FUN_1001df1e7(local_1458,local_1858,0x400);
  if (param_1[0x89] == 0) {
    param_1[0x8a] = 1000000;
    *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa0a3;
    lVar8 = FUN_1001c64e6(1000000);
    param_1[0x89] = lVar8;
    if (lVar8 != 0) goto LAB_1001fa0b3;
    *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa3fb;
    uVar7 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa40b;
    cVar5 = _os_log_type_enabled(uVar7,0x10);
    if (cVar5 != '\0') {
      *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa570;
      FUN_1006cba6f(uVar7);
    }
    *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa41c;
    FUN_1001782e9(0,0);
    iVar6 = -0x6c;
  }
  else {
LAB_1001fa0b3:
    bVar13 = false;
    if ((*(byte *)(param_1 + 2) & 0x10) != 0) {
      *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa0d4;
      cVar5 = FUN_1001df957("mimetype",local_1858,0);
      bVar13 = cVar5 != '\0';
    }
    if (*param_2 == 0x41464350) {
      local_1c5c = 0;
LAB_1001fa0f5:
      *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa10e;
      iVar6 = FUN_10017cc65(param_2,0x64617461,0x201,&local_1c78);
      if (iVar6 == -0x80) goto LAB_1001fa482;
      if (iVar6 != 0) {
        *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa3a4;
        uVar7 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa3b4;
        cVar5 = _os_log_type_enabled(uVar7,0x10);
        if (cVar5 != '\0') {
          *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa3c7;
          FUN_1006cba03(iVar6,uVar7);
        }
        goto LAB_1001fa482;
      }
      uVar7 = *param_1;
      uVar2 = *(undefined4 *)(local_1c68 + 8);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa145;
      iVar6 = FUN_1001f975b(uVar7,local_1858,uVar2,local_1c5c,bVar13);
      if (iVar6 != -0x80) {
        if (iVar6 == 0) {
          uVar12 = *(ulong *)(local_1c68 + 0x20);
          do {
            do {
              if (uVar12 == 0) {
                uVar7 = *param_1;
                *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa4c0;
                iVar6 = FUN_1001f9a8d(uVar7);
                if ((iVar6 != -0x80) && (iVar6 != 0)) {
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa4d2;
                  uVar7 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa4e2;
                  cVar5 = _os_log_type_enabled(uVar7,0x10);
                  if (cVar5 != '\0') {
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa4f1;
                    FUN_1006cb92b(iVar6,uVar7);
                  }
                }
                goto LAB_1001fa46b;
              }
              uVar7 = param_1[0x89];
              uVar11 = param_1[0x8a];
              if (uVar12 <= (ulong)param_1[0x8a]) {
                uVar11 = uVar12;
              }
              *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa19e;
              iVar6 = FUN_10017d186(local_1c78,uVar7,uVar11,1,&local_1c70);
              if (iVar6 != 0) {
                if (iVar6 != -0x80) {
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa507;
                  uVar7 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa517;
                  cVar5 = _os_log_type_enabled(uVar7,0x10);
                  if (cVar5 != '\0') {
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa52a;
                    FUN_1006cb8bf(iVar6,uVar7);
                  }
                }
                goto LAB_1001fa46b;
              }
              uVar10 = uVar11;
              if (local_1c70 != uVar11) {
                *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa1b7;
                uVar7 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa1c7;
                cVar5 = _os_log_type_enabled(uVar7,0x10);
                if (cVar5 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  local_4a = "readCount == ioBufferCount";
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa2cf;
                  __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa1d8;
                FUN_1001782e9(0,0);
                uVar10 = local_1c70;
              }
              uVar7 = *param_1;
              uVar3 = param_1[0x89];
              *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa1f5;
              iVar6 = FUN_1001f9964(uVar7,uVar3,uVar10,&local_1c88);
              if (iVar6 != 0) {
                if (iVar6 != -0x80) {
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa540;
                  uVar7 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa550;
                  cVar5 = _os_log_type_enabled(uVar7,0x10);
                  if (cVar5 != '\0') {
                    *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa563;
                    FUN_1006cb853(iVar6,uVar7);
                  }
                }
                goto LAB_1001fa46b;
              }
              if (local_1c88 != local_1c70) {
                *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa212;
                uVar7 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa222;
                cVar5 = _os_log_type_enabled(uVar7,0x10);
                if (cVar5 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  local_4a = "writeCount == readCount";
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa31c;
                  __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa233;
                FUN_1001782e9(0,0);
              }
              uVar12 = uVar12 - uVar11;
              lVar8 = param_1[3];
            } while (lVar8 == 0);
            uVar11 = *(ulong *)(local_1c68 + 0x20);
            iVar6 = *(int *)(param_1 + 0x88);
            iVar1 = *(int *)((long)param_1 + 0x444);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa27a;
            iVar6 = FUN_1001ceb24(lVar8,0x7570726d,
                                  iVar6 * 100 + (int)(((uVar11 - uVar12) * 100) / uVar11),
                                  iVar1 * 100,param_4);
          } while (iVar6 == 0);
          if (iVar6 != -0x80) {
            *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa586;
            uVar7 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa596;
            cVar5 = _os_log_type_enabled(uVar7,0x10);
            if (cVar5 != '\0') {
              *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa5a9;
              FUN_1006cb7e7(iVar6,uVar7);
            }
          }
        }
        else {
          *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa453;
          uVar7 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa463;
          cVar5 = _os_log_type_enabled(uVar7,0x10);
          if (cVar5 != '\0') {
            *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa5c6;
            FUN_1006cb997(iVar6,uVar7);
          }
        }
      }
    }
    else {
      *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa335;
      iVar6 = FUN_10017de88(param_2,local_1c58,0x400);
      if (iVar6 != -0x80) {
        if (iVar6 == 0) {
          *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa35d;
          iVar6 = _lstat_INODE64(local_1c58,local_1d18);
          if (iVar6 == 0) {
            local_1c5c = (uint)local_1d14 << 0x10;
            if ((local_1d14 & 0xf000) == 0xa000) {
              bVar13 = true;
            }
            goto LAB_1001fa0f5;
          }
          *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa36a;
          uVar7 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa37a;
          cVar5 = _os_log_type_enabled(uVar7,0x10);
          if (cVar5 != '\0') {
            *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa5b6;
            FUN_1006cb705(uVar7);
          }
          *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa38b;
          FUN_1001782e9(0,0);
          *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa390;
          piVar9 = ___error();
          iVar6 = *piVar9;
          *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa397;
          iVar6 = FUN_1001eb020(iVar6);
        }
        else {
          *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa3d1;
          uVar7 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa3e1;
          cVar5 = _os_log_type_enabled(uVar7,0x10);
          if (cVar5 != '\0') {
            *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa3f4;
            FUN_1006cb77b(iVar6,uVar7);
          }
        }
      }
    }
  }
LAB_1001fa46b:
  if (local_1c78 != 0) {
    *(undefined8 *)((long)&local_38 + lVar4) = 0x1001fa47c;
    FUN_10017cdfb();
  }
  *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
LAB_1001fa482:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(code **)((long)&local_38 + lVar4) = FUN_1001fa5d0;
    ___stack_chk_fail();
  }
  return iVar6;
}

