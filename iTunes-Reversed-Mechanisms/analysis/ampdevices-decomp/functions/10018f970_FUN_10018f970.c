// name: FUN_10018f970
// address: 10018f970

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10018f970(long param_1,char *param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  ssize_t sVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  char *path;
  bool bVar12;
  undefined1 auVar13 [16];
  utimbuf local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  uint uStack_34;
  ushort local_30;
  ushort local_2e;
  uint local_2c;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      FUN_10069395c(uVar7);
    }
  }
  else {
    if (param_2 != (char *)0x0) {
      FUN_1001c62d9(&local_58,0x10);
      local_58.actime = (ulong)*(uint *)(param_2 + 0x10) - 0x7c25b080;
      local_58.modtime = (ulong)*(uint *)(param_2 + 8) - 0x7c25b080;
      path = (char *)(param_1 + 0x19);
      iVar4 = _utime(path,&local_58);
      if (iVar4 == 0) {
        sVar6 = _getxattr(path,"com.apple.FinderInfo",&local_48,0x20,0,1);
        if (sVar6 == 0x20) {
LAB_10018fa11:
          if (*param_2 != '\0') goto LAB_10018fa87;
LAB_10018fafa:
          auVar13._8_8_ = 0;
          auVar13._0_8_ = *(ulong *)(param_2 + 0x30);
          auVar13 = pshufb(auVar13,_DAT_10070e4b0);
          local_48 = auVar13._0_8_;
          auVar13 = pshufb(*(undefined1 (*) [16])(param_2 + 0x38),_DAT_10070c140);
          uStack_40 = auVar13._0_8_;
          uStack_38 = auVar13._8_4_;
          uStack_34 = auVar13._12_4_;
          lVar8 = 0x4c;
          lVar10 = 0x4a;
          lVar11 = 0x48;
        }
        else {
          if (*param_2 == '\0') {
            if ((*(int *)(param_2 + 0x30) == 0) && (*(int *)(param_2 + 0x34) == 0)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            bVar12 = true;
            if (*(short *)(param_2 + 0x38) == 0) {
              bVar12 = bVar2;
            }
            if (*(short *)(param_2 + 0x48) == 0) {
LAB_10018fba9:
              if (!bVar12) {
                uVar5 = 0;
                goto LAB_10018fb8b;
              }
              goto LAB_10018fa11;
            }
            goto LAB_10018fafa;
          }
          bVar12 = *(short *)(param_2 + 0x28) != 0;
          if (*(short *)(param_2 + 0x38) == 0) goto LAB_10018fba9;
LAB_10018fa87:
          auVar13 = pshufb(*(undefined1 (*) [16])(param_2 + 0x20),_DAT_10070c140);
          local_48 = auVar13._0_8_;
          uStack_40 = auVar13._8_8_;
          auVar13 = pshufb(ZEXT416(*(uint *)(param_2 + 0x30)),_DAT_10070c140);
          uStack_38 = auVar13._0_4_;
          uVar1 = *(uint *)(param_2 + 0x34);
          uStack_34 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                      uVar1 << 0x18;
          lVar8 = 0x3c;
          lVar10 = 0x3a;
          lVar11 = 0x38;
        }
        local_30 = *(ushort *)(param_2 + lVar11) << 8 | *(ushort *)(param_2 + lVar11) >> 8;
        local_2e = *(ushort *)(param_2 + lVar10) << 8 | *(ushort *)(param_2 + lVar10) >> 8;
        uVar1 = *(uint *)(param_2 + lVar8);
        local_2c = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
        uVar5 = 0;
        iVar4 = _setxattr(path,"com.apple.FinderInfo",&local_48,0x20,0,1);
        if (iVar4 == 0) goto LAB_10018fb8b;
      }
      piVar9 = ___error();
      uVar5 = FUN_1001eb020(*piVar9);
      goto LAB_10018fb8b;
    }
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      FUN_1006938e6(uVar7);
    }
  }
  FUN_1001782e9(0,0);
  uVar5 = 0xffffffce;
LAB_10018fb8b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

