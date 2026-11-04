// name: FUN_1002fc315
// address: 1002fc315

ulong FUN_1002fc315(ulong param_1,undefined8 param_2,char *param_3,uint param_4)

{
  long lVar1;
  ulong uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  char local_c0 [80];
  undefined8 local_70;
  uint local_64;
  ulong local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = *(long *)(param_1 + 8);
  if (param_3 == (char *)0x0) {
    param_3 = local_c0;
    uVar7 = FUN_10017d477(param_2,param_3,0);
    if ((int)uVar7 == -0x80) goto LAB_1002fc66b;
    if ((int)uVar7 != 0) {
      local_60 = uVar7;
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      uVar7 = local_60;
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,(int)local_60);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
      goto LAB_1002fc66b;
    }
  }
  local_60 = param_1;
  if ((*(int *)(param_1 + 0x3c) != 0x46494c45) && (*(int *)(param_1 + 0x3c) != 0x4d46494c)) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = 
      "trackInstance->trackKind == kITFileKind || trackInstance->trackKind == kITMemoryFileKind";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  local_70 = param_2;
  local_64 = param_4;
  FUN_1001c62d9(&local_58,0x20);
  plVar9 = *(long **)(lVar1 + 0x58);
  if (plVar9 != (long *)0x0) {
    do {
      *(undefined4 *)(plVar9 + 8) = 0;
      FUN_1002af037(plVar9,0);
      *(undefined1 *)((long)plVar9 + 0x47) = 0;
      *(uint *)(plVar9 + 9) = *(uint *)(plVar9 + 9) & 0xfffffb7f;
      *(undefined2 *)(plVar9 + 0xb) = 0;
      if (plVar9[0x19] != 0) {
        plVar9[0x19] = 0;
        FUN_1005389ba(&local_58);
      }
      pbVar6 = (byte *)plVar9[2];
      if ((*pbVar6 & 1) != 0) {
        if (((plVar9[1] != 0) && (*(long *)(plVar9[1] + 0x10) != 0)) &&
           (*(long *)(pbVar6 + 0x38) != 0)) {
          FUN_1002b7851(plVar9);
          FUN_1005389ba(&local_58);
          pbVar6 = (byte *)plVar9[2];
        }
        if (*(long *)(pbVar6 + 0x40) != 0) {
          pbVar6[0x40] = 0;
          pbVar6[0x41] = 0;
          pbVar6[0x42] = 0;
          pbVar6[0x43] = 0;
          pbVar6[0x44] = 0;
          pbVar6[0x45] = 0;
          pbVar6[0x46] = 0;
          pbVar6[0x47] = 0;
          FUN_1005389ba(&local_58);
          pbVar6 = (byte *)plVar9[2];
        }
        if (*(long *)(pbVar6 + 0x48) != 0) {
          pbVar6[0x48] = 0;
          pbVar6[0x49] = 0;
          pbVar6[0x4a] = 0;
          pbVar6[0x4b] = 0;
          pbVar6[0x4c] = 0;
          pbVar6[0x4d] = 0;
          pbVar6[0x4e] = 0;
          pbVar6[0x4f] = 0;
          FUN_1005389ba(&local_58);
          pbVar6 = (byte *)plVar9[2];
        }
        if (*(long *)(pbVar6 + 0x50) != 0) {
          pbVar6[0x50] = 0;
          pbVar6[0x51] = 0;
          pbVar6[0x52] = 0;
          pbVar6[0x53] = 0;
          pbVar6[0x54] = 0;
          pbVar6[0x55] = 0;
          pbVar6[0x56] = 0;
          pbVar6[0x57] = 0;
          FUN_1005389ba(&local_58);
          pbVar6 = (byte *)plVar9[2];
        }
        if (*(long *)(pbVar6 + 0x58) != 0) {
          pbVar6[0x58] = 0;
          pbVar6[0x59] = 0;
          pbVar6[0x5a] = 0;
          pbVar6[0x5b] = 0;
          pbVar6[0x5c] = 0;
          pbVar6[0x5d] = 0;
          pbVar6[0x5e] = 0;
          pbVar6[0x5f] = 0;
          FUN_1005389ba(&local_58);
          pbVar6 = (byte *)plVar9[2];
        }
        if (*(long *)(pbVar6 + 0x60) != 0) {
          pbVar6[0x60] = 0;
          pbVar6[0x61] = 0;
          pbVar6[0x62] = 0;
          pbVar6[99] = 0;
          pbVar6[100] = 0;
          pbVar6[0x65] = 0;
          pbVar6[0x66] = 0;
          pbVar6[0x67] = 0;
          FUN_1005389ba(&local_58);
          pbVar6 = (byte *)plVar9[2];
        }
        pbVar6[0x84] = 0;
        pbVar6[0x85] = 0;
        pbVar6[0x86] = 0;
        pbVar6[0x87] = 0;
        pbVar6[4] = 0;
        pbVar6[5] = 0;
        pbVar6[6] = 0;
        pbVar6[7] = 0;
        pbVar6[8] = 0;
        pbVar6[9] = 0;
        pbVar6[10] = 0;
        pbVar6[0xb] = 0;
        pbVar6[0xc] = 0;
        pbVar6[0xd] = 0;
        pbVar6[0xe] = 0;
        pbVar6[0xf] = 0;
        pbVar6[0x10] = 0;
        pbVar6[0x11] = 0;
        pbVar6[0x12] = 0;
        pbVar6[0x13] = 0;
        pbVar6[0x14] = 0;
        pbVar6[0x15] = 0;
        pbVar6[0x16] = 0;
        pbVar6[0x17] = 0;
        pbVar6[0x18] = 0;
        pbVar6[0x19] = 0;
        pbVar6[0x1a] = 0;
        pbVar6[0x1b] = 0;
        pbVar6[0x1c] = 0;
        pbVar6[0x1d] = 0;
        pbVar6[0x1e] = 0;
        pbVar6[0x1f] = 0;
        pbVar6[0x20] = 0;
        pbVar6[0x21] = 0;
        pbVar6[0x22] = 0;
        pbVar6[0x23] = 0;
        pbVar6[0x24] = 0;
        pbVar6[0x25] = 0;
        pbVar6[0x26] = 0;
        pbVar6[0x27] = 0;
        pbVar6[0x28] = 0;
        pbVar6[0x29] = 0;
        pbVar6[0x2a] = 0;
        pbVar6[0x2b] = 0;
        pbVar6[0x2c] = 0;
        pbVar6[0x2d] = 0;
        pbVar6[0x2e] = 0;
        pbVar6[0x2f] = 0;
        pbVar6[0x30] = 0;
        pbVar6[0x31] = 0;
        pbVar6[0x32] = 0;
        pbVar6[0x33] = 0;
        pbVar6[0x34] = 0;
        pbVar6[0x35] = 0;
        pbVar6[0x36] = 0;
        pbVar6[0x37] = 0;
      }
      plVar9 = (long *)*plVar9;
    } while (plVar9 != (long *)0x0);
  }
  *(undefined1 *)(lVar1 + 0xb9) = 0;
  *(undefined1 *)(lVar1 + 0xcc) = 0;
  *(undefined4 *)(lVar1 + 200) = 0;
  FUN_1002dffcc(lVar1);
  uVar2 = local_60;
  pbVar6 = *(byte **)(lVar1 + 0x70);
  if ((*pbVar6 & 1) != 0) {
    if ((*(float *)(pbVar6 + 4) != 0.0) || (NAN(*(float *)(pbVar6 + 4)))) {
      pbVar6[4] = 0;
      pbVar6[5] = 0;
      pbVar6[6] = 0;
      pbVar6[7] = 0;
      FUN_1005389ba(&local_58,0x21);
      pbVar6 = *(byte **)(lVar1 + 0x70);
    }
    if ((*(float *)(pbVar6 + 8) != 0.0) || (NAN(*(float *)(pbVar6 + 8)))) {
      pbVar6[8] = 0;
      pbVar6[9] = 0;
      pbVar6[10] = 0;
      pbVar6[0xb] = 0;
      FUN_1005389ba(&local_58,0x26);
    }
  }
  cVar3 = FUN_100539270(&local_58);
  uVar5 = local_70;
  if (cVar3 != '\0') {
    FUN_1002fe16c(lVar1,&local_58,0);
    FUN_1004755ef(lVar1,0,&local_58);
  }
  *(undefined1 *)(uVar2 + 0x44) = 1;
  if (*param_3 == '\0') {
    lVar8 = *(long *)(param_3 + 0x28) + *(long *)(param_3 + 0x20);
  }
  else {
    lVar8 = 0;
  }
  *(long *)(uVar2 + 0x68) = lVar8;
  *(byte *)(lVar1 + 0xc2) = *(byte *)(lVar1 + 0xc2) & 0xef;
  FUN_100177f1b(*(undefined4 *)(param_3 + 8),uVar2 + 0x5c);
  FUN_1002b61c6(uVar2,0);
  FUN_1002ae6f7(*(undefined8 *)(lVar1 + 0x58));
  FUN_10053672c(uVar5,param_3,*(undefined8 *)(*(long *)(lVar1 + 0x58) + 0x80));
  if ((*(byte *)(uVar2 + 0x45) < 8) &&
     (uVar7 = 0, (0xc4U >> (*(byte *)(uVar2 + 0x45) & 0x1f) & 1) != 0)) goto LAB_1002fc66b;
  if ((*(long *)(uVar2 + 8) == 0) || (lVar8 = *(long *)(*(long *)(uVar2 + 8) + 0x10), lVar8 == 0)) {
LAB_1002fc70e:
    if ((local_64 >> 0xe & 1) == 0) {
      uVar4 = FUN_10030d3cd(local_60,local_70);
      uVar7 = (ulong)uVar4;
      if (uVar4 == 0xffffff80) goto LAB_1002fc66b;
      if (uVar4 != 0) {
        uVar5 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar5,0x10);
        if (cVar3 == '\0') goto LAB_1002fc66b;
        local_4a = (char *)CONCAT44(local_4a._4_4_,uVar4);
        goto LAB_1002fc833;
      }
    }
    *(undefined4 *)(lVar1 + 0xd4) = 0;
    uVar7 = 0;
  }
  else {
    if (*(int *)(lVar8 + 0x80) != 0x74646174) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure (expected to be true)";
        local_4c = 0x822;
        local_4a = "trackData->magic == \'tdat\'";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar3 = FUN_1001782e9(0,1);
      if (cVar3 == '\0') goto LAB_1002fc70e;
    }
    if (*(int *)(lVar8 + 0x84) == 0x646f5069) goto LAB_1002fc70e;
    uVar4 = FUN_1002fc027(local_60);
    uVar7 = (ulong)uVar4;
    if (uVar4 == 0xffffff80) goto LAB_1002fc66b;
    if (uVar4 == 0) goto LAB_1002fc70e;
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 == '\0') goto LAB_1002fc66b;
    local_4a = (char *)CONCAT44(local_4a._4_4_,uVar4);
LAB_1002fc833:
    local_4c = 0x400;
    local_54 = "Assertion failure";
    local_58 = 0x8220202;
    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x12);
  }
LAB_1002fc66b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7 & 0xffffffff;
}

