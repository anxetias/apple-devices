// name: FUN_10018f1cd
// address: 10018f1cd

/* WARNING: Removing unreachable block (ram,0x00010018f42f) */
/* WARNING: Removing unreachable block (ram,0x00010018f442) */
/* WARNING: Removing unreachable block (ram,0x00010018f44b) */
/* WARNING: Removing unreachable block (ram,0x00010018f45c) */
/* WARNING: Removing unreachable block (ram,0x00010018f45f) */
/* WARNING: Removing unreachable block (ram,0x00010018f463) */
/* WARNING: Removing unreachable block (ram,0x00010018f468) */
/* WARNING: Removing unreachable block (ram,0x00010018f482) */
/* WARNING: Removing unreachable block (ram,0x00010018f407) */
/* WARNING: Removing unreachable block (ram,0x00010018f2e5) */
/* WARNING: Removing unreachable block (ram,0x00010018f3c1) */
/* WARNING: Removing unreachable block (ram,0x00010018f3e4) */
/* WARNING: Removing unreachable block (ram,0x00010018f4a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10018f1cd(long param_1,uint param_2,undefined1 (*param_3) [16],undefined2 *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined2 *puVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  size_t sVar7;
  ssize_t sVar8;
  undefined8 uVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 local_490 [16];
  char *local_480;
  undefined2 *local_478;
  uint local_470;
  char local_469;
  char local_468 [1040];
  ulong local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  uint uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_480 = (char *)(param_1 + 0x19);
  local_478 = param_4;
  local_470 = param_2;
  iVar5 = _lstat_INODE64();
  if (iVar5 != 0) {
    piVar6 = ___error();
    iVar5 = FUN_1001eb020(*piVar6);
    if (param_3 != (undefined1 (*) [16])0x0) {
      param_3[4] = (undefined1  [16])0x0;
      param_3[3] = (undefined1  [16])0x0;
      param_3[2] = (undefined1  [16])0x0;
      param_3[1] = (undefined1  [16])0x0;
      *param_3 = (undefined1  [16])0x0;
    }
    if (local_478 != (undefined2 *)0x0) {
      *local_478 = 0;
    }
    goto LAB_10018f291;
  }
  local_470 = local_470 & 1;
  local_469 = '\0';
  pauVar11 = param_3;
  if (param_3 == (undefined1 (*) [16])0x0) {
    pauVar11 = (undefined1 (*) [16])local_468;
  }
  FUN_1001c62d9(pauVar11,0x50);
  (*pauVar11)[0] = 0;
  pauVar10 = param_3;
  if (param_3 == (undefined1 (*) [16])0x0) {
    pauVar10 = (undefined1 (*) [16])local_468;
  }
  (*pauVar10)[2] = 0;
  (*pauVar10)[3] = 0;
  *(undefined4 *)(*pauVar10 + 4) = 0x7c25b080;
  *(undefined4 *)(*pauVar10 + 8) = 0x7c25b080;
  *(undefined4 *)pauVar10[1] = 0x7c25b080;
  *(undefined8 *)(pauVar10[1] + 8) = 0;
  *(undefined4 *)(param_1 + 0x41c) = 0;
  pauVar10 = (undefined1 (*) [16])local_468;
  if (param_3 != (undefined1 (*) [16])0x0) {
    pauVar10 = param_3;
  }
  *(undefined8 *)pauVar10[2] = 0;
  *(undefined8 *)(pauVar10[2] + 8) = 0;
  FUN_10017d7a3(param_1,pauVar11);
  if (local_478 == (undefined2 *)0x0) {
LAB_10018f558:
    if (param_3 == (undefined1 (*) [16])0x0) {
      iVar5 = 0;
      goto LAB_10018f291;
    }
  }
  else {
    if (local_469 == '\0') {
      FUN_10018f68d(param_1);
      goto LAB_10018f558;
    }
    FUN_1001b7a44(local_490);
    iVar5 = FUN_100191e06(param_1,local_468);
    puVar3 = local_478;
    if (iVar5 == -0x80) {
LAB_10018f613:
      FUN_1001b7a50(local_490);
      goto LAB_10018f291;
    }
    if (iVar5 != 0) {
      uVar9 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar9,0x10);
      if (cVar4 != '\0') {
        FUN_100693718(iVar5,uVar9);
      }
      goto LAB_10018f613;
    }
    sVar7 = _strlen(local_468);
    FUN_100191ef1(local_468,sVar7,(*param_3)[1] != '\0',local_490);
    FUN_1001bb41a(local_490,puVar3);
    FUN_1001b7a50(local_490);
  }
  sVar8 = _getxattr(local_480,"com.apple.FinderInfo",&local_58,0x20,0,local_470);
  auVar14 = _DAT_10070c140;
  iVar5 = 0;
  if (sVar8 == 0x20) {
    if ((*param_3)[0] == '\0') {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = local_58;
      auVar14 = pshufb(auVar12,_DAT_10070e4b0);
      *(long *)param_3[3] = auVar14._0_8_;
      auVar12 = _DAT_10070c140;
      auVar14._8_4_ = local_48;
      auVar14._0_8_ = uStack_50;
      auVar14._12_4_ = uStack_44;
      auVar14 = pshufb(auVar14,_DAT_10070c140);
      *(undefined1 (*) [16])(param_3[3] + 8) = auVar14;
      auVar15._4_4_ = uStack_3c;
      auVar15._0_4_ = uStack_40;
      auVar15._8_8_ = 0;
      auVar14 = pshufb(auVar15,auVar12);
      *(int *)(param_3[4] + 8) = auVar14._0_4_;
      *(uint *)(param_3[4] + 0xc) =
           uStack_3c >> 0x18 | (uStack_3c & 0xff0000) >> 8 | (uStack_3c & 0xff00) << 8 |
           uStack_3c << 0x18;
      iVar5 = 0;
    }
    else {
      auVar1._8_8_ = uStack_50;
      auVar1._0_8_ = local_58;
      auVar12 = pshufb(auVar1,_DAT_10070c140);
      param_3[2] = auVar12;
      auVar2._4_4_ = uStack_44;
      auVar2._0_4_ = local_48;
      auVar2._8_4_ = uStack_40;
      auVar2._12_4_ = uStack_3c;
      auVar12 = pshufb(auVar2,auVar14);
      *(int *)param_3[3] = auVar12._0_4_;
      *(uint *)(param_3[3] + 4) =
           uStack_44 >> 0x18 | (uStack_44 & 0xff0000) >> 8 | (uStack_44 & 0xff00) << 8 |
           uStack_44 << 0x18;
      auVar13._4_4_ = uStack_3c;
      auVar13._0_4_ = uStack_40;
      auVar13._8_8_ = 0;
      auVar14 = pshufb(auVar13,auVar14);
      *(int *)(param_3[3] + 8) = auVar14._0_4_;
      *(uint *)(param_3[3] + 0xc) =
           uStack_3c >> 0x18 | (uStack_3c & 0xff0000) >> 8 | (uStack_3c & 0xff00) << 8 |
           uStack_3c << 0x18;
    }
  }
LAB_10018f291:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

