// name: FUN_1004e9e57
// address: 1004e9e57

uint FUN_1004e9e57(long param_1,int param_2,undefined8 param_3,undefined8 param_4,char param_5)

{
  ushort uVar1;
  long lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 local_4d18 [4116];
  undefined4 local_3d04;
  byte local_3ce0;
  undefined4 local_38c4;
  ulong local_36c0;
  ulong local_36b8;
  undefined8 local_36b0;
  undefined8 local_36a8;
  undefined8 uStack_36a0;
  uint local_368c;
  undefined8 local_3630;
  undefined8 local_3628;
  undefined4 local_3618;
  undefined8 local_3610;
  undefined8 local_3608;
  undefined1 local_29a0;
  ulong local_16d4;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x1004e9e6f;
  auVar12 = FUN_100108310();
  lVar11 = auVar12._8_8_;
  lVar2 = -auVar12._0_8_;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_2 != 0x4d46494c) && (uVar6 = 10, param_2 != 0x46494c45)) goto LAB_1004e9f6e;
  if (lVar11 == 0) {
    uVar6 = 0xb;
    goto LAB_1004e9f6e;
  }
  local_36a8 = 0;
  uStack_36a0 = 0;
  *(undefined8 *)((long)&local_38 + lVar2) = 0x1004e9eca;
  FUN_1003af743(local_4d18);
  *(undefined8 *)((long)&local_38 + lVar2) = 0x1004e9ed2;
  FUN_1003af7fe(&local_36a8);
  if ((*(int *)(lVar11 + 0x420) == 0x6469736b) || (*(int *)(lVar11 + 0x420) == 0x666f6c64)) {
    uVar6 = 0;
    if (*(long *)(param_1 + 0x440) == 0) goto LAB_1004e9f6e;
LAB_1004e9eff:
    *(undefined8 *)((long)&local_38 + lVar2) = 0x1004e9f07;
    cVar4 = FUN_10017cbd0(lVar11);
    if (cVar4 == '\0') goto LAB_1004e9f6e;
    *(undefined8 *)((long)&local_38 + lVar2) = 0x1004e9f26;
    iVar5 = FUN_1005353ef(lVar11,local_4d18,&local_36a8,0,0);
    if (iVar5 != 0) goto LAB_1004e9f6e;
  }
  else {
    *(undefined8 *)((long)&local_38 + lVar2) = 0x1004e9f9f;
    local_36b0 = FUN_1004e9a46(lVar11);
    uVar6 = 0xb;
    iVar5 = (int)local_36b0;
    if (iVar5 < 0x4d345620) {
      if (iVar5 < 0x41554458) {
        if (iVar5 < 0x33677070) {
          if (((iVar5 != 0x33673220) && (iVar5 != 0x33677020)) && (iVar5 != 0x33677032))
          goto LAB_1004e9f6e;
        }
        else if (iVar5 != 0x33677070) {
          if (iVar5 == 0x41494646) goto LAB_1004ea0e6;
          if (iVar5 != 0x41554442) goto LAB_1004e9f6e;
LAB_1004ea093:
          uVar6 = 7;
          goto LAB_1004e9f6e;
        }
      }
      else if (iVar5 < 0x4d344220) {
        if (iVar5 == 0x41554458) goto LAB_1004ea093;
        if ((iVar5 != 0x45505542) && (iVar5 != 0x4d344120)) goto LAB_1004e9f6e;
      }
      else if (((iVar5 != 0x4d344220) && (iVar5 != 0x4d345020)) && (iVar5 != 0x4d345220))
      goto LAB_1004e9f6e;
LAB_1004ea1da:
      *(undefined8 *)((long)&local_38 + lVar2) = 0x1004ea1e2;
      cVar4 = FUN_10017cbd0(lVar11);
      uVar6 = 5;
      if (cVar4 == '\0') goto LAB_1004e9f6e;
      *(undefined8 *)((long)&local_38 + lVar2) = 0x1004ea20e;
      iVar5 = FUN_1005353ef(lVar11,local_4d18,&local_36a8,0,0x800);
      if (iVar5 != 0) goto LAB_1004e9f6e;
      *(undefined8 **)(&stack0xffffffffffffffd0 + lVar2) = &local_36a8;
      *(undefined8 *)((long)&local_38 + lVar2) = 0x1004ea240;
      uVar7 = FUN_1004ea578(param_1,param_4,lVar11,local_36b0,0,local_4d18);
      uVar6 = uVar7;
      if (3 < uVar7) goto LAB_1004e9f6e;
      uVar9 = (ulong)local_368c;
      if (local_368c == 0) {
        *(undefined8 *)((long)&local_38 + lVar2) = 0x1004ea265;
        uVar9 = FUN_10031f884(local_29a0);
      }
      uVar6 = 0x22;
      if ((short)uVar9 < 0) goto LAB_1004e9f6e;
      *(int *)(&stack0xffffffffffffffd0 + lVar2) = (int)uVar9;
      *(undefined8 *)(&stack0xffffffffffffffd8 + lVar2) = 0;
      *(undefined8 *)((long)&local_38 + lVar2) = 0x1004ea2b2;
      local_36b8 = uVar9;
      uVar8 = FUN_1002d813d(param_1,local_3630,local_3610,local_3628,local_3608,local_3618);
      uVar6 = uVar7;
      if (uVar8 != 0) {
        uVar6 = uVar8;
      }
      bVar3 = false;
    }
    else {
      if (iVar5 < 0x57415645) {
        if (iVar5 < 0x4d504732) {
          if ((iVar5 != 0x4d345620) && (iVar5 != 0x4d503420)) goto LAB_1004e9f6e;
        }
        else {
          if (iVar5 + 0xb2afb8ceU < 2) {
            *(undefined8 *)((long)&local_38 + lVar2) = 0x1004ea2ca;
            cVar4 = FUN_10017cbd0(lVar11);
            if (cVar4 == '\0') {
              uVar6 = (uint)((int)local_36b0 != 0x4d504733) * 5;
              bVar3 = true;
              local_36b8 = 0;
            }
            else {
              *(undefined8 *)((long)&local_38 + lVar2) = 0x1004ea2ed;
              iVar5 = FUN_1005353ef(lVar11,local_4d18,&local_36a8,0,0);
              uVar6 = 5;
              if (iVar5 != 0) goto LAB_1004e9f6e;
              local_36b8 = 0;
              *(undefined8 **)(&stack0xffffffffffffffd0 + lVar2) = &local_36a8;
              *(undefined8 *)((long)&local_38 + lVar2) = 0x1004ea330;
              uVar6 = FUN_1004ea578(param_1,param_4,lVar11,local_36b0,0,local_4d18);
              bVar3 = false;
            }
            goto LAB_1004ea115;
          }
          if ((iVar5 != 0x4d6f6f56) && (iVar5 != 0x50444620)) goto LAB_1004e9f6e;
        }
        goto LAB_1004ea1da;
      }
      if (iVar5 < 0x69706720) {
        if (iVar5 != 0x57415645) {
          if (iVar5 == 0x69626f6f) goto LAB_1004ea1da;
          if (iVar5 != 0x69706120) goto LAB_1004e9f6e;
        }
      }
      else if (iVar5 != 0x69706720) {
        if ((iVar5 != 0x69746520) && (iVar5 != 0x69746c70)) goto LAB_1004e9f6e;
        goto LAB_1004ea1da;
      }
LAB_1004ea0e6:
      *(undefined8 *)(&stack0xffffffffffffffd0 + lVar2) = 0;
      local_36b8 = 0;
      *(undefined8 *)((long)&local_38 + lVar2) = 0x1004ea110;
      uVar6 = FUN_1004ea578(param_1,param_4,lVar11,local_36b0,0,0);
      bVar3 = true;
    }
LAB_1004ea115:
    uVar7 = uVar6;
    if (param_5 == '\x01' && uVar6 < 4) {
      uVar9 = local_36b8;
      if ((int)local_36b8 == 0) {
        if (local_368c == 0) {
          *(undefined8 *)((long)&local_38 + lVar2) = 0x1004ea350;
          local_368c = FUN_10031f884(local_29a0);
        }
        uVar7 = local_368c | 2;
        if ((local_3ce0 & 0x40) == 0) {
          uVar7 = local_368c;
        }
        if ((local_368c & 0xce2) != 0) {
          uVar7 = local_368c;
        }
        uVar9 = (ulong)uVar7;
        iVar5 = (int)local_36b0;
        if (iVar5 == 0x69746520) {
          uVar9 = 0x10002;
          if (uVar7 != 0) {
            uVar9 = (ulong)(uVar7 | 0x10000);
          }
        }
        else if (iVar5 == 0x69746c70) {
          uVar9 = (ulong)(uVar7 + (uVar7 == 0) | 0x10000);
        }
        else if (uVar7 == 0) {
          uVar9 = 1;
          if (iVar5 < 0x4d345220) {
            if (iVar5 < 0x41554442) {
              if (iVar5 < 0x33677032) {
                if ((iVar5 == 0x33673220) || (iVar5 == 0x33677020)) {
LAB_1004ea504:
                  uVar9 = 2;
                }
              }
              else if ((iVar5 == 0x33677032) || (iVar5 == 0x33677070)) goto LAB_1004ea504;
            }
            else if (iVar5 < 0x45505542) {
              if ((iVar5 == 0x41554442) || (iVar5 == 0x41554458)) {
LAB_1004ea525:
                uVar9 = 8;
              }
            }
            else if (iVar5 == 0x45505542) {
LAB_1004ea54b:
              uVar9 = 0x400000;
            }
            else if (iVar5 == 0x4d344220) goto LAB_1004ea525;
          }
          else if (iVar5 < 0x50444620) {
            if (iVar5 < 0x4d503420) {
              if (iVar5 == 0x4d345220) {
                uVar9 = 0x4000;
              }
              else if (iVar5 == 0x4d345620) goto LAB_1004ea504;
            }
            else if ((iVar5 == 0x4d503420) || (iVar5 == 0x4d6f6f56)) goto LAB_1004ea504;
          }
          else if (iVar5 < 0x69706120) {
            if (iVar5 == 0x50444620) {
              uVar9 = 0x800000;
            }
            else if (iVar5 == 0x69626f6f) goto LAB_1004ea54b;
          }
          else if (iVar5 == 0x69706120) {
            uVar9 = 0x20000;
          }
          else if (iVar5 == 0x69706720) {
            uVar9 = 0x1000;
          }
        }
      }
      *(undefined8 *)((long)&local_38 + lVar2) = 0x1004ea13f;
      uVar7 = FUN_1004eb10a(param_1,uVar9);
      if (uVar7 != 0) goto LAB_1004ea14b;
    }
    else {
LAB_1004ea14b:
      uVar6 = uVar7;
      if (3 < uVar7) goto LAB_1004e9f6e;
    }
    if (*(long *)(param_1 + 0x440) == 0) goto LAB_1004e9f6e;
    if (bVar3) goto LAB_1004e9eff;
  }
  if (uVar6 == 3) {
    uVar9 = local_16d4;
    if (local_16d4 == 0) {
      *(undefined8 *)((long)&local_38 + lVar2) = 0x1004ea18a;
      uVar10 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar2) = 0x1004ea19a;
      cVar4 = _os_log_type_enabled(uVar10,0x10);
      if (cVar4 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "fileSize != 0";
        *(undefined8 *)((long)&local_38 + lVar2) = 0x1004ea493;
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      uVar9 = 0;
      *(undefined8 *)((long)&local_38 + lVar2) = 0x1004ea1ad;
      FUN_1001782e9(0,0);
    }
  }
  else {
    uVar9 = local_36c0;
    if (uVar6 == 1) {
      uVar1 = *(ushort *)(param_1 + 0x14df6);
      *(undefined8 *)((long)&local_38 + lVar2) = 0x1004e9f60;
      uVar9 = FUN_1005dfe52(local_38c4,local_3d04,(uint)uVar1 * 1000,0);
    }
  }
  if (*(ulong *)(param_1 + 0x440) <= uVar9) {
    uVar6 = 0x19;
  }
LAB_1004e9f6e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(code **)((long)&local_38 + lVar2) = FUN_1004ea578;
    ___stack_chk_fail();
  }
  return uVar6;
}

