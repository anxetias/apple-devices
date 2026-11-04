// name: FUN_100234e77
// address: 100234e77

int FUN_100234e77(ulong param_1,int *param_2,undefined8 param_3,uint *param_4,ulong *param_5,
                 byte *param_6,int *param_7)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  byte *pbVar13;
  undefined1 auVar14 [12];
  char local_4fe0 [84];
  byte local_4f8c [68];
  undefined4 local_4f48;
  undefined4 local_4f44;
  long local_4f40;
  int *local_4f38;
  long local_4f30;
  uint local_4f24;
  ulong *local_4f20;
  undefined1 local_4f11;
  byte *local_4f10;
  undefined4 local_4f08;
  undefined4 uStack_4f04;
  undefined4 uStack_4f00;
  undefined2 local_4efc;
  int local_4efa;
  undefined1 local_4ee8 [512];
  undefined8 local_4ce8;
  undefined4 uStack_4ce0;
  undefined2 uStack_4cdc;
  undefined2 uStack_4cda;
  undefined2 uStack_4cd8;
  uint local_1698;
  char *local_1694;
  undefined2 local_168c;
  char *local_168a;
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x100234e8f;
  auVar14 = FUN_100108310();
  lVar2 = -auVar14._0_8_;
  iVar8 = (int)param_1;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_1698 = 0;
  local_4f20 = param_5;
  if (iVar8 < 0x4d46494c) {
    if (iVar8 == 0x46494c45) {
LAB_100234ef3:
      local_4ce8._0_4_ = 0;
      *(undefined8 *)((long)&local_38 + lVar2) = 0x100234f17;
      local_4f24 = auVar14._8_4_;
      uVar5 = FUN_1003b73be(param_1 & 0xffffffff,param_2,0,&local_4ce8);
      *(undefined8 *)((long)&local_38 + lVar2) = 0x100234f38;
      iVar6 = FUN_100466aac("  AABDUABDUA XAAXDUAXDUABUPEBUPEBUPEOOBIoobioobi FDP FDP FDP",uVar5,
                            (undefined4)local_4ce8,&local_1698,0,0xf);
      goto LAB_100234f60;
    }
    if (iVar8 == 0x48545450) goto LAB_100234f3a;
LAB_100234fa1:
    iVar6 = -0x32;
  }
  else {
    if (iVar8 != 0x53485244) {
      if (iVar8 != 0x4d46494c) goto LAB_100234fa1;
      goto LAB_100234ef3;
    }
LAB_100234f3a:
    *(undefined8 *)((long)&local_38 + lVar2) = 0x100234f60;
    local_4f24 = auVar14._8_4_;
    iVar6 = FUN_100466bcf("  AABDUABDUA XAAXDUAXDUABUPEBUPEBUPEOOBIoobioobi FDP FDP FDP",
                          param_2 + 0xb,&local_1698,0,0xf);
LAB_100234f60:
    uVar3 = local_1698;
    if (iVar6 == 0) {
      local_4f10 = param_6;
      iVar6 = -0x32;
      if ((int)local_1698 < 0x45505542) {
        if ((local_1698 != 0x41554442) && (local_1698 != 0x41554458)) goto LAB_100234fc4;
      }
      else if ((local_1698 != 0x45505542) &&
              ((local_1698 != 0x69626f6f && (local_1698 != 0x50444620)))) goto LAB_100234fc4;
      local_4ce8._0_4_ = 0;
      local_4ce8._4_4_ = 0;
      uStack_4ce0 = 0;
      uStack_4cdc = 0;
      uStack_4cda = 0;
      if (param_2 == (int *)0x0) {
        *(undefined8 *)((long)&local_38 + lVar2) = 0x1002350d7;
        uVar9 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar2) = 0x1002350e7;
        cVar4 = _os_log_type_enabled(uVar9,0x10);
        pbVar13 = local_4f10;
        if (cVar4 != '\0') {
          local_1698 = 0x8220202;
          local_1694 = "Assertion failure";
          local_168c = 0x822;
          local_168a = "location != nullptr";
          *(undefined8 *)((long)&local_38 + lVar2) = 0x1002355ce;
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_1698,0x16);
        }
        *(undefined8 *)((long)&local_38 + lVar2) = 0x100235101;
        FUN_1001782e9(0,0);
        lVar11 = 0;
        goto LAB_100235489;
      }
      if (iVar8 == 0x48545450) {
LAB_100235480:
        lVar11 = 0;
        pbVar13 = local_4f10;
      }
      else {
        if (param_4 == (uint *)0x0) {
          param_4 = &local_1698;
          *(undefined8 *)((long)&local_38 + lVar2) = 0x100235033;
          FUN_1003af743(param_4);
        }
        if (local_4f20 == (ulong *)0x0) {
          local_4f20 = &local_4ce8;
          *(undefined8 *)((long)&local_38 + lVar2) = 0x100235050;
          FUN_1003af7fe();
        }
        if (local_4f10 == (byte *)0x0) {
          local_4f10 = local_4f8c;
          *(undefined8 *)((long)&local_38 + lVar2) = 0x10023506d;
          FUN_1003af8bd();
        }
        if ((int)uVar3 < 0x45505542) {
          if ((uVar3 == 0x41554442) || (uVar3 == 0x41554458)) {
            *(undefined8 *)((long)local_4f20 + 0x1c) = 0xffffffff00000008;
            *(ushort *)((long)local_4f20 + 0x1a) = (ushort)(uVar3 != 0x41554442) * 2 + 0x194;
            *local_4f20 = *local_4f20 | 0x4000000004;
          }
        }
        else {
          if (uVar3 == 0x45505542) {
LAB_10023509d:
            *(undefined8 *)((long)local_4f20 + 0x1c) = 0xffffffff00400000;
            *(byte *)((long)local_4f20 + 4) = *(byte *)((long)local_4f20 + 4) | 0x40;
          }
          else if (uVar3 != 0x50444620) {
            if (uVar3 != 0x69626f6f) goto LAB_1002351a2;
            goto LAB_10023509d;
          }
          *(byte *)((long)param_4 + 0x103b) = *(byte *)((long)param_4 + 0x103b) | 0x20;
          param_4[0x405] = 0;
          *param_4 = *param_4 | 0x20800;
        }
LAB_1002351a2:
        local_4f20[0x16] = 0x10000;
        *local_4f20 = *local_4f20 | 0x1c0;
        if ((param_7 != (int *)0x0) && (*param_7 == 0x61727477)) {
          *(undefined1 *)(param_7 + 2) = 1;
          param_7[3] = 0x10000;
          param_7[4] = 0;
        }
        if ((iVar8 != 0x4d46494c) && (iVar8 != 0x46494c45)) goto LAB_100235480;
        local_4f38 = param_2 + 0xb;
        *(undefined8 *)((long)&local_38 + lVar2) = 0x100235209;
        iVar6 = FUN_10017d477(local_4f38,local_4fe0,local_4ee8);
        if (iVar6 == -0x80) goto LAB_100235480;
        if (iVar6 != 0) {
          *(undefined8 *)((long)&local_38 + lVar2) = 0x100235468;
          uVar9 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar2) = 0x100235478;
          cVar4 = _os_log_type_enabled(uVar9,0x10);
          if (cVar4 != '\0') {
            local_4f08 = 0x8220202;
            uStack_4f04 = 0x7a0a90;
            uStack_4f00 = 1;
            local_4efc = 0x400;
            *(undefined8 *)((long)&local_38 + lVar2) = 0x100235648;
            local_4efa = iVar6;
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_4f08,0x12);
          }
          goto LAB_100235480;
        }
        if ((*param_4 & 1) == 0) {
          *(undefined8 *)((long)&local_38 + lVar2) = 0x100235236;
          FUN_1001e1c39(local_4ee8,param_4 + 2);
          *(undefined8 *)((long)&local_38 + lVar2) = 0x100235240;
          FUN_1001e3e43(param_4 + 2,0);
          *(byte *)param_4 = (byte)*param_4 | 1;
        }
        *(undefined8 *)((long)&local_38 + lVar2) = 0x10023525d;
        local_4f30 = FUN_1002307cb(local_4f38,(local_4f24 >> 0xb & 1) == 0);
        if (local_4f30 == 0) {
          iVar6 = 0;
LAB_1002354b1:
          if ((*(int *)((long)local_4f20 + 0x1c) == 0x400000) && (local_4fe0[0] == '\0')) {
            if (((local_4f24 >> 0xc & 1) == 0) && (*param_2 != 0)) {
              *(undefined8 *)((long)&local_38 + lVar2) = 0x1002354e3;
              lVar11 = FUN_10030252b(param_2);
              if ((lVar11 != 0) && (*(long *)(*(long *)(lVar11 + 0x10) + 0xa0) != 0))
              goto LAB_100235524;
            }
            *(undefined8 *)((long)&local_38 + lVar2) = 0x100235515;
            iVar8 = FUN_1001f8a2c(local_4f38,0x1000,(long)local_4f20 + 0x1fd4);
            if (iVar8 == 0) {
              *(byte *)((long)local_4f20 + 7) = *(byte *)((long)local_4f20 + 7) | 0x20;
            }
          }
LAB_100235524:
          pbVar13 = local_4f10;
          lVar11 = local_4f30;
          if ((local_4f10 != local_4f8c && uVar3 == 0x41554458) && ((*local_4f10 & 2) == 0)) {
            *(undefined8 *)((long)&local_38 + lVar2) = 0x10023556c;
            lVar10 = FUN_10023590f(param_1 & 0xffffffff,param_2,local_4f24);
            *(long *)(pbVar13 + 4) = lVar10;
            if (lVar10 != 0) {
              *pbVar13 = *pbVar13 | 2;
            }
          }
        }
        else {
          *(undefined8 *)((long)&local_38 + lVar2) = 0x10023528e;
          iVar6 = FUN_10032b890(local_4f30,0,param_4,local_4f20,local_4f10,4);
          lVar11 = local_4f30;
          pbVar13 = local_4f10;
          if (iVar6 != -0x80) {
            if (iVar6 == 0) {
              if (*(int *)((long)local_4f20 + 0x1c) == 0x400000) {
                *(undefined8 *)((long)&local_38 + lVar2) = 0x1002352c9;
                uVar9 = FUN_100166b7f(local_4f30,PTR_cf_book_info_100853678);
                *(undefined8 *)((long)&local_38 + lVar2) = 0x1002352d1;
                lVar10 = FUN_1001705fc(uVar9);
                *(long *)(local_4f10 + 0x34) = lVar10;
                if (lVar10 != 0) {
                  *local_4f10 = *local_4f10 | 0x20;
                }
              }
              if (uVar3 == 0x41554442) {
                *(undefined8 *)((long)&local_38 + lVar2) = 0x100235303;
                uVar9 = FUN_100166844(lVar11,PTR_cf_BKChapterTimes_10083e488);
                *(undefined8 *)((long)&local_38 + lVar2) = 0x10023530b;
                lVar10 = FUN_100235704(uVar9);
                *(long *)(local_4f10 + 4) = lVar10;
                if (lVar10 != 0) {
                  *local_4f10 = *local_4f10 | 2;
                }
              }
              iVar6 = 0;
              iVar8 = 0;
              if ((local_4f24 >> 0xb & 1) == 0) {
                *(undefined8 *)((long)&local_38 + lVar2) = 0x100235345;
                lVar11 = FUN_10016696d(lVar11,PTR_cf_BKCoverImageData_10083e490);
                if (lVar11 == 0) {
                  *(undefined8 *)((long)&local_38 + lVar2) = 0x100235652;
                  uVar9 = FUN_10023046d();
                  *(undefined8 *)((long)&local_38 + lVar2) = 0x100235662;
                  cVar4 = _os_log_type_enabled(uVar9,1);
                  iVar6 = iVar8;
                  if (cVar4 != '\0') {
                    *(undefined8 *)((long)&local_38 + lVar2) = 0x10023567d;
                    uVar12 = FUN_100166c1b(local_4f30,PTR_cf_itemName_10083e4b0);
                    local_4f08 = 0x8420102;
                    uStack_4f04 = (undefined4)uVar12;
                    uStack_4f00 = (undefined4)((ulong)uVar12 >> 0x20);
                    *(undefined8 *)((long)&local_38 + lVar2) = 0x1002356b0;
                    __os_log_impl(0x100000000,uVar9,1,
                                  "bookkit> missing BKCoverImageData key in metadata for book \"%{public}@\""
                                  ,&local_4f08,0xc);
                  }
                }
                else {
                  *(undefined8 *)((long)&local_38 + lVar2) = 0x100235359;
                  iVar7 = FUN_100170ef7(lVar11);
                  *(undefined4 *)(local_4f20 + 0x16) = 0x10001;
                  *(int *)((long)local_4f20 + 0xb4) = iVar7;
                  if ((param_7 != (int *)0x0) && (*param_7 == 0x61727477)) {
                    param_7[3] = 0x10001;
                    param_7[4] = iVar7;
                    lVar10 = *(long *)(param_7 + 6);
                    iVar6 = iVar8;
                    if (lVar10 != 0) {
                      *(undefined8 *)((long)&local_38 + lVar2) = 0x1002353b3;
                      local_4f40 = lVar10;
                      FUN_1005d3fdc(lVar10,0,1);
                      *(undefined8 *)((long)&local_38 + lVar2) = 0x1002353c6;
                      iVar6 = FUN_1005d20ad(lVar11,0,0,&local_4f08);
                      if (iVar6 == 0) {
                        local_4f48 = 3;
                        local_4f44 = 0x44;
                        local_4f11 = 1;
                        *(undefined8 *)((long)&local_38 + lVar2) = 0x100235406;
                        FUN_1005d36e5(CONCAT44(uStack_4f04,local_4f08),0x61777372);
                        *(undefined8 *)((long)&local_38 + lVar2) = 0x10023541a;
                        FUN_1005d36e5(CONCAT44(uStack_4f04,local_4f08),0x61777470,&local_4f48);
                        *(undefined8 *)((long)&local_38 + lVar2) = 0x100235432;
                        FUN_1005d36e5(CONCAT44(uStack_4f04,local_4f08),0x61776765,&local_4f11);
                        *(undefined8 *)((long)&local_38 + lVar2) = 0x10023544a;
                        FUN_1005d3b11(local_4f40,0x7fffffff,CONCAT44(uStack_4f04,local_4f08));
                        if (CONCAT44(uStack_4f04,local_4f08) != 0) {
                          LOCK();
                          piVar1 = (int *)(CONCAT44(uStack_4f04,local_4f08) + 4);
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                          if (*piVar1 == 0) {
                            *(undefined8 *)((long)&local_38 + lVar2) = 0x100235461;
                            FUN_1005d25cb();
                          }
                        }
                      }
                    }
                  }
                }
              }
              goto LAB_1002354b1;
            }
            *(undefined8 *)((long)&local_38 + lVar2) = 0x1002355d8;
            uVar9 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar2) = 0x1002355e8;
            cVar4 = _os_log_type_enabled(uVar9,0x10);
            lVar11 = local_4f30;
            pbVar13 = local_4f10;
            if (cVar4 != '\0') {
              local_4f08 = 0x8220202;
              uStack_4f04 = 0x7a0a90;
              uStack_4f00 = 1;
              local_4efc = 0x400;
              *(undefined8 *)((long)&local_38 + lVar2) = 0x1002356fa;
              local_4efa = iVar6;
              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_4f08,0x12)
              ;
              lVar11 = local_4f30;
              pbVar13 = local_4f10;
            }
          }
        }
      }
LAB_100235489:
      *(undefined8 *)((long)&local_38 + lVar2) = 0x100235491;
      FUN_10017060f(lVar11);
      if (pbVar13 == local_4f8c) {
        *(undefined8 *)((long)&local_38 + lVar2) = 0x1002354a9;
        FUN_1003ae783(pbVar13);
      }
      goto LAB_100234fc4;
    }
  }
  *(undefined8 *)((long)&local_38 + lVar2) = 0x100234fac;
  uVar9 = FUN_1001cc310();
  *(undefined8 *)((long)&local_38 + lVar2) = 0x100234fbc;
  cVar4 = _os_log_type_enabled(uVar9,0x10);
  if (cVar4 != '\0') {
    local_4ce8._0_4_ = 0x8220202;
    local_4ce8._4_4_ = 0x7a0a90;
    uStack_4ce0 = 1;
    uStack_4cdc = 0x400;
    uStack_4cda = (undefined2)iVar6;
    uStack_4cd8 = (undefined2)((uint)iVar6 >> 0x10);
    *(undefined8 *)((long)&local_38 + lVar2) = 0x10023514b;
    __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_4ce8,0x12);
  }
LAB_100234fc4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(code **)((long)&local_38 + lVar2) = FUN_100235704;
    ___stack_chk_fail();
  }
  return iVar6;
}

