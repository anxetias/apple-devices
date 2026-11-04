// name: FUN_10032d276
// address: 10032d276

int FUN_10032d276(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  double dVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  byte bVar7;
  ushort uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  long lVar12;
  char *pcVar13;
  size_t sVar14;
  uint uVar15;
  ulong uVar16;
  undefined1 auVar17 [16];
  undefined1 local_4d64 [5728];
  undefined1 local_3704 [68];
  undefined1 local_36c0 [16];
  long local_36b0;
  undefined8 local_36a8;
  undefined8 uStack_36a0;
  long local_2580;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x10032d28e;
  auVar17 = FUN_100108310();
  uVar16 = auVar17._8_8_;
  lVar5 = -auVar17._0_8_;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_36a8 = 0;
  uStack_36a0 = 0;
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
    *(undefined8 *)((long)&local_38 + lVar5) = 0x10032d365;
    uVar11 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar5) = 0x10032d375;
    cVar6 = _os_log_type_enabled(uVar11,0x10);
    if (cVar6 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      local_4c = 0x822;
      local_4a = "TrackInstanceIsValid(trackInstance)";
      *(undefined8 *)((long)&local_38 + lVar5) = 0x10032d4ad;
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    *(undefined8 *)((long)&local_38 + lVar5) = 0x10032d386;
    FUN_1001782e9(0,0);
    iVar9 = 0x2080;
    goto LAB_10032d38c;
  }
  *(undefined8 *)((long)&local_38 + lVar5) = 0x10032d2e5;
  FUN_1003af743(local_4d64);
  *(undefined8 *)((long)&local_38 + lVar5) = 0x10032d2f1;
  FUN_1003af7fe(&local_36a8);
  *(undefined8 *)((long)&local_38 + lVar5) = 0x10032d2fd;
  FUN_1003af8bd(local_3704);
  local_36b0 = *(long *)(param_1 + 8);
  *(undefined8 *)((long)&local_38 + lVar5) = 0x10032d32a;
  iVar9 = FUN_10032b890(param_2,0,local_4d64,&local_36a8,local_3704,uVar16 & 0xffffffff);
  if (iVar9 == 0) {
    *(undefined8 *)(&stack0xffffffffffffffd0 + lVar5) = 0;
    *(undefined8 *)(&stack0xffffffffffffffd8 + lVar5) = 0;
    *(undefined8 *)((long)&local_38 + lVar5) = 0x10032d3e5;
    iVar9 = FUN_100312763(param_1,local_4d64,&local_36a8,local_3704,param_4 | 4,0);
    if (iVar9 != -0x80) {
      if (iVar9 == 0) {
        *(undefined8 *)((long)&local_38 + lVar5) = 0x10032d408;
        FUN_100474ebf(local_36b0,0);
        if ((uVar16 & 2) != 0) {
          *(undefined8 *)((long)&local_38 + lVar5) = 0x10032d423;
          cVar6 = FUN_100167dd2(param_2,PTR_cf_is_purchased_redownload_100852a20,0);
          if (cVar6 != '\0') {
            *(undefined8 *)((long)&local_38 + lVar5) = 0x10032d433;
            FUN_1002af0ff(param_1);
            **(byte **)(param_1 + 0x10) = **(byte **)(param_1 + 0x10) | 8;
            if (local_2580 == 0) {
              bVar7 = 0;
            }
            else {
              *(undefined8 *)((long)&local_38 + lVar5) = 0x10032d457;
              cVar6 = FUN_100171439(param_2,&cf_dateAdded);
              bVar7 = (cVar6 != '\0') << 4;
            }
            **(byte **)(param_1 + 0x10) = **(byte **)(param_1 + 0x10) & 0xef | bVar7;
          }
        }
        if ((uVar16 & 4) != 0) {
          *(undefined8 *)((long)&local_38 + lVar5) = 0x10032d56f;
          cVar6 = FUN_100167fed(param_2,PTR_cf_BKInsertionDate_10083e4a8,&local_58);
          if (cVar6 != '\0') {
            dVar1 = *(double *)PTR__kCFAbsoluteTimeIntervalSince1904_10082e008;
            *(undefined8 *)((long)&local_38 + lVar5) = 0x10032d58d;
            uVar10 = FUN_100177d41((long)((double)CONCAT44(uStack_54,local_58) + dVar1));
            *(undefined4 *)(param_1 + 0x60) = uVar10;
          }
          *(undefined8 *)((long)&local_38 + lVar5) = 0x10032d5a0;
          FUN_10023117f(local_36b0,param_2);
        }
        iVar9 = 0;
        if ((*(byte *)(local_36b0 + 0xc3) & 8) != 0) {
          lVar3 = *(long *)(local_36b0 + 0x10);
          *(undefined8 *)((long)&local_38 + lVar5) = 0x10032d5c7;
          FUN_1001b7a44(local_36c0);
          lVar4 = local_36b0;
          *(undefined8 *)((long)&local_38 + lVar5) = 0x10032d5d6;
          FUN_100471a46(local_36b0);
          *(undefined8 *)((long)&local_38 + lVar5) = 0x10032d5e5;
          uVar8 = FUN_100167cc9(param_2,PTR_cf_previewLength_100852a40);
          *(ushort *)(lVar4 + 0x128) = uVar8;
          if (uVar8 != 0) {
            uVar15 = (uint)uVar8 * 1000;
            uVar2 = *(uint *)(param_1 + 100);
            if (uVar15 < uVar2) {
              *(uint *)(param_1 + 100) = uVar15;
            }
            else if (uVar2 != 0 && uVar2 < uVar15) {
              *(short *)(lVar4 + 0x128) = (short)(uVar2 / 1000);
            }
          }
          *(undefined8 *)((long)&local_38 + lVar5) = 0x10032d639;
          lVar12 = FUN_100166c1b(param_2,PTR_cf_buyParams_100852768);
          iVar9 = 0;
          if (lVar12 != 0) {
            *(undefined8 *)((long)&local_38 + lVar5) = 0x10032d649;
            pcVar13 = (char *)FUN_1001dfadb(lVar12);
            if (pcVar13 != (char *)0x0) {
              *(undefined8 *)((long)&local_38 + lVar5) = 0x10032d660;
              sVar14 = _strlen(pcVar13);
              lVar4 = *(long *)(lVar4 + 0x70);
              *(undefined8 *)((long)&local_38 + lVar5) = 0x10032d675;
              iVar9 = FUN_1001dda73(lVar3 + 0x1fd0,pcVar13,sVar14 & 0xffffffff,lVar4 + 0x30);
              *(undefined8 *)((long)&local_38 + lVar5) = 0x10032d680;
              FUN_1001c64c1(pcVar13);
              if ((iVar9 != -0x80) && (iVar9 != 0)) {
                *(undefined8 *)((long)&local_38 + lVar5) = 0x10032d690;
                uVar11 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar5) = 0x10032d6a0;
                cVar6 = _os_log_type_enabled(uVar11,0x10);
                if (cVar6 != '\0') {
                  local_58 = 0x8220202;
                  uStack_54 = 0x7a0a90;
                  uStack_50 = 1;
                  local_4c = 0x400;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar9);
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x10032d6f7;
                  __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_58,
                                      0x12);
                }
              }
            }
          }
          *(undefined8 *)((long)&local_38 + lVar5) = 0x10032d6b0;
          FUN_1001b7a50(local_36c0);
        }
      }
      else {
        *(undefined8 *)((long)&local_38 + lVar5) = 0x10032d4b7;
        uVar11 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar5) = 0x10032d4c7;
        cVar6 = _os_log_type_enabled(uVar11,0x10);
        if (cVar6 != '\0') {
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar9);
          goto LAB_10032d52f;
        }
      }
    }
  }
  else {
    *(undefined8 *)((long)&local_38 + lVar5) = 0x10032d33a;
    uVar11 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar5) = 0x10032d34a;
    cVar6 = _os_log_type_enabled(uVar11,0x10);
    if (cVar6 != '\0') {
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar9);
LAB_10032d52f:
      local_4c = 0x400;
      uStack_50 = 1;
      uStack_54 = 0x7a0a90;
      local_58 = 0x8220202;
      *(undefined8 *)((long)&local_38 + lVar5) = 0x10032d542;
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
  }
  *(undefined8 *)((long)&local_38 + lVar5) = 0x10032d35e;
  FUN_1003ae783(local_3704);
LAB_10032d38c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar9;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)&local_38 + lVar5) = &UNK_10032d6fe;
  ___stack_chk_fail();
}

