// name: FUN_100519810
// address: 100519810

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100519810(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ushort *puVar10;
  void *pvVar11;
  long lVar12;
  bool bVar13;
  undefined1 auVar14 [16];
  ulong local_498;
  long local_490;
  undefined4 *local_488;
  int local_480;
  undefined4 uStack_47c;
  undefined4 local_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined2 local_46c;
  int local_46a;
  undefined1 local_458 [1056];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_1 + 0x33c) == '\0') goto LAB_100519c88;
  lVar6 = param_1 + 0x75e0;
  FUN_100246142(lVar6,1,*(undefined8 *)(param_1 + 0x151a8));
  FUN_100246142(lVar6,2,*(undefined8 *)(param_1 + 0x151b0));
  FUN_100246142(lVar6,3,*(undefined8 *)(param_1 + 0x151b8));
  FUN_100246142(lVar6,4,*(undefined8 *)(param_1 + 0x151c0));
  FUN_100246cb1(lVar6,*(undefined8 *)(param_1 + 0x151c8));
  lVar12 = *(long *)(param_1 + 0x151a0) + 0x4c0;
  FUN_1001b7a44(&local_478);
  FUN_1001b80b2(lVar12,&local_478);
  FUN_1001b7a50(&local_478);
  iVar5 = FUN_1001888ba(lVar6,"PhotosFolderName",local_458);
  if ((iVar5 == 0) && (iVar5 = FUN_100180bd2(local_458,&local_480,&local_498), iVar5 != -0x80)) {
    if (iVar5 == 0) {
      if (local_498 < 3) {
LAB_100519c38:
        puVar10 = (ushort *)CONCAT44(uStack_47c,local_480);
        if (puVar10 == (ushort *)0x0) goto LAB_1005198fc;
      }
      else {
        puVar10 = (ushort *)CONCAT44(uStack_47c,local_480);
        if ((ulong)*puVar10 + 2 <= local_498) {
          FUN_1001b8dfc(&local_478);
          FUN_1001b80b2(lVar12,&local_478);
          FUN_1001b7a50(&local_478);
          goto LAB_100519c38;
        }
      }
      FUN_1001c64c1(puVar10);
    }
    else {
      uVar8 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar8,0x10);
      if (cVar3 != '\0') {
        local_478 = 0x8220202;
        uStack_474 = 0x7a0a90;
        uStack_470 = 1;
        local_46c = 0x400;
        local_46a = iVar5;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_478,0x12);
      }
    }
  }
LAB_1005198fc:
  puVar1 = *(undefined4 **)(param_1 + 0x151a0);
  lVar6 = FUN_100170f7f(*(undefined8 *)(param_1 + 0x151a8));
  auVar14 = pshufb(ZEXT416(*(uint *)(lVar6 + 8)),_DAT_100753500);
  *puVar1 = auVar14._0_4_;
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(lVar6 + 0x14);
  auVar14 = pshuflw(ZEXT416(*(uint *)(lVar6 + 0x16)),ZEXT416(*(uint *)(lVar6 + 0x16)),0xe1);
  puVar1[1] = auVar14._0_4_;
  FUN_10022ba82(puVar1 + 4,*(undefined4 *)(lVar6 + 0xc));
  if (*(int *)(lVar6 + 0xc) != 0) {
    puVar7 = (undefined8 *)(lVar6 + 100);
    lVar12 = 0;
    uVar9 = 0;
    do {
      lVar2 = *(long *)(puVar1 + 4);
      *(undefined4 *)(lVar2 + 8 + lVar12) = *(undefined4 *)(puVar7 + 1);
      *(undefined8 *)(lVar2 + lVar12) = *puVar7;
      puVar7 = (undefined8 *)((long)puVar7 + (ulong)*(uint *)(lVar6 + 0x10));
      uVar9 = uVar9 + 1;
      lVar12 = lVar12 + 0xc;
    } while (uVar9 < *(uint *)(lVar6 + 0xc));
  }
  lVar6 = FUN_100170f7f(*(undefined8 *)(param_1 + 0x151b0));
  *(undefined1 *)(puVar1 + 10) = *(undefined1 *)(lVar6 + 8);
  *(undefined1 *)((long)puVar1 + 0x29) = *(undefined1 *)(lVar6 + 9);
  *(undefined1 *)((long)puVar1 + 0x2a) = *(undefined1 *)(lVar6 + 10);
  *(undefined1 *)((long)puVar1 + 0x2b) = *(undefined1 *)(lVar6 + 0x14);
  FUN_10051cc94(puVar1 + 0xc,*(undefined4 *)(lVar6 + 0xc));
  if (*(int *)(lVar6 + 0xc) != 0) {
    puVar7 = (undefined8 *)(lVar6 + 100);
    lVar12 = 0;
    uVar9 = 0;
    do {
      lVar2 = *(long *)(puVar1 + 0xc);
      *(undefined4 *)(lVar2 + 8 + lVar12) = *(undefined4 *)(puVar7 + 1);
      *(undefined8 *)(lVar2 + lVar12) = *puVar7;
      puVar7 = (undefined8 *)((long)puVar7 + (ulong)*(uint *)(lVar6 + 0x10));
      uVar9 = uVar9 + 1;
      lVar12 = lVar12 + 0xc;
    } while (uVar9 < *(uint *)(lVar6 + 0xc));
  }
  lVar6 = FUN_100170f7f(*(undefined8 *)(param_1 + 0x151b8));
  *(undefined1 *)(puVar1 + 0x12) = *(undefined1 *)(lVar6 + 8);
  *(undefined1 *)((long)puVar1 + 0x49) = *(undefined1 *)(lVar6 + 9);
  *(undefined1 *)((long)puVar1 + 0x4a) = *(undefined1 *)(lVar6 + 10);
  *(undefined1 *)((long)puVar1 + 0x4b) = *(undefined1 *)(lVar6 + 0x14);
  FUN_10051cc94(puVar1 + 0x14,*(undefined4 *)(lVar6 + 0xc));
  if (*(int *)(lVar6 + 0xc) != 0) {
    puVar7 = (undefined8 *)(lVar6 + 100);
    lVar12 = 0;
    uVar9 = 0;
    do {
      lVar2 = *(long *)(puVar1 + 0x14);
      *(undefined4 *)(lVar2 + 8 + lVar12) = *(undefined4 *)(puVar7 + 1);
      *(undefined8 *)(lVar2 + lVar12) = *puVar7;
      puVar7 = (undefined8 *)((long)puVar7 + (ulong)*(uint *)(lVar6 + 0x10));
      uVar9 = uVar9 + 1;
      lVar12 = lVar12 + 0xc;
    } while (uVar9 < *(uint *)(lVar6 + 0xc));
  }
  lVar6 = FUN_100170f7f(*(undefined8 *)(param_1 + 0x151c0));
  *(undefined1 *)(puVar1 + 0x1a) = *(undefined1 *)(lVar6 + 8);
  *(undefined1 *)((long)puVar1 + 0x69) = *(undefined1 *)(lVar6 + 9);
  *(undefined1 *)((long)puVar1 + 0x6a) = *(undefined1 *)(lVar6 + 10);
  *(undefined1 *)((long)puVar1 + 0x6b) = *(undefined1 *)(lVar6 + 0x14);
  FUN_10022bde4(puVar1 + 0x12a,*(undefined4 *)(lVar6 + 0xc));
  local_490 = param_1;
  local_488 = puVar1;
  if (*(int *)(lVar6 + 0xc) != 0) {
    pvVar11 = (void *)(lVar6 + 100);
    lVar12 = 0;
    uVar9 = 0;
    do {
      _memcpy((void *)(*(long *)(puVar1 + 0x12a) + lVar12),pvVar11,0x204);
      pvVar11 = (void *)((long)pvVar11 + (ulong)*(uint *)(lVar6 + 0x10));
      uVar9 = uVar9 + 1;
      lVar12 = lVar12 + 0x204;
    } while (uVar9 < *(uint *)(lVar6 + 0xc));
  }
  lVar6 = FUN_100170f7f(*(undefined8 *)(local_490 + 0x151c8));
  puVar1 = local_488;
  cVar3 = *(char *)(lVar6 + 9);
  bVar13 = true;
  if (cVar3 == '\0') {
    bVar13 = *(char *)(lVar6 + 10) != '\0';
  }
  *(bool *)((long)local_488 + 0x71) = bVar13;
  if (*(char *)(lVar6 + 8) != '\0') {
    if (*(char *)(lVar6 + 10) == '\0') {
      if (cVar3 == '\0') goto LAB_100519c83;
      *(undefined1 *)(local_488 + 0x1c) = 1;
      sVar4 = _PtrToHand(lVar6 + 0x60,&local_478,*(undefined4 *)(lVar6 + 0xc));
      if (sVar4 == 0) {
        local_480 = FUN_10018e502(0,0x502,CONCAT44(uStack_474,local_478),puVar1 + 0x22,0);
        if (local_480 == 0) {
          uVar8 = FUN_1001703de(DAT_1008c4d90,puVar1 + 0x22,&local_480);
          FUN_1001a78d6(local_458,uVar8);
          FUN_1001a7b1c(puVar1 + 0x1e,local_458);
          FUN_1001a85d4(local_458);
        }
        FUN_10018cc57(CONCAT44(uStack_474,local_478));
        iVar5 = local_480;
      }
      else {
        iVar5 = (int)sVar4;
      }
    }
    else {
      *(undefined1 *)(local_488 + 0x1c) = 1;
      FUN_1001a833e(local_458,lVar6 + 0x60,*(undefined4 *)(lVar6 + 0xc),0);
      FUN_1001a7b1c(puVar1 + 0x1e,local_458);
      FUN_1001a85d4(local_458);
      iVar5 = FUN_100170286(*(undefined8 *)(puVar1 + 0x1e),puVar1 + 0x22,0,0,0);
    }
    if (iVar5 == 0) goto LAB_100519c88;
  }
LAB_100519c83:
  *(undefined1 *)(puVar1 + 0x1c) = 0;
LAB_100519c88:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

