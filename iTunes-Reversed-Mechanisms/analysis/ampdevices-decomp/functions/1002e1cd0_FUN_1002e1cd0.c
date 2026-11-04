// name: FUN_1002e1cd0
// address: 1002e1cd0

ulong FUN_1002e1cd0(long param_1,int param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  char cVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  bool bVar15;
  undefined1 auVar16 [16];
  undefined8 local_1110;
  code *local_1108;
  undefined8 local_1100;
  undefined8 *local_10f8;
  int local_10f0;
  ushort local_10ea;
  undefined **local_10e8;
  long local_10e0;
  undefined ***local_10c8;
  undefined1 local_10b8 [1056];
  undefined1 local_c98 [1056];
  undefined1 local_878 [1056];
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x1002e1ce8;
  auVar16 = FUN_100108310();
  lVar13 = auVar16._8_8_;
  lVar5 = -auVar16._0_8_;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar11 = 0;
  if (param_2 < 0x706c636c) {
    switch(param_2) {
    case 0x706c6166:
      uVar11 = 0xffffffce;
      if ((*(byte *)(param_1 + 0x330) & 8) == 0) {
        if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) goto LAB_1002e2350;
        goto LAB_1002e1e4f;
      }
      break;
    case 0x706c6167:
    case 0x706c6168:
    case 0x706c616a:
    case 0x706c616b:
switchD_1002e1d28_caseD_706c6167:
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
LAB_1002e1e4f:
        uVar11 = FUN_10048cc55(param_1);
        return uVar11;
      }
      goto LAB_1002e2350;
    case 0x706c6169:
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
        uVar11 = FUN_1002e23b8(*(undefined8 *)**(undefined8 **)(lVar13 + 0x10),
                               *(undefined4 *)(lVar13 + 0x18),*(undefined8 *)(lVar13 + 0x20));
        return uVar11;
      }
      goto LAB_1002e2350;
    case 0x706c616c:
      lVar12 = *(long *)(lVar13 + 0x18);
      lVar2 = *(long *)(lVar12 + 8);
      if ((((lVar2 == 0) || (lVar3 = *(long *)(lVar2 + 0x10), lVar3 == 0)) ||
          ((*(byte *)(lVar3 + 0x1bb3) & 8) == 0)) || (*(long *)(param_1 + 8) != lVar3)) {
        uVar1 = *(undefined4 *)(lVar12 + 0x3c);
        uVar14 = *(undefined8 *)(lVar12 + 0x80);
        uVar10 = *(undefined8 *)**(undefined8 **)(lVar13 + 0x10);
        *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e1eaa;
        uVar8 = FUN_1002e23b8(uVar10,uVar1,uVar14);
        uVar11 = (ulong)uVar8;
        if (uVar8 != 0) break;
      }
      else if (*(int *)(lVar12 + 0x3c) != 0x46494c45) {
        *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e21de;
        uVar14 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e21ee;
        cVar6 = _os_log_type_enabled(uVar14,0x10);
        if (cVar6 != '\0') {
          local_458 = 0x8220202;
          local_454 = "Assertion failure";
          local_44c = 0x822;
          local_44a = "trackInstance->trackKind == kITFileKind";
          *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e234b;
          __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
        }
        *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e21ff;
        FUN_1001782e9(0,0);
      }
      uVar11 = 0;
      if ((*(byte *)(param_1 + 0x240) & 4) == 0) {
        *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e1ed0;
        cVar6 = FUN_1004743e5(lVar2);
        uVar11 = 0xffffffce;
        if (cVar6 == '\0') {
          uVar11 = 0;
        }
      }
      break;
    case 0x706c616d:
      if ((*(byte *)(param_1 + 0x240) & 0x24) == 0) {
        uVar14 = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e1ef9;
        lVar12 = FUN_10048604a(uVar14);
        if (lVar12 == 0) {
          *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e2109;
          uVar14 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e2119;
          cVar6 = _os_log_type_enabled(uVar14,0x10);
          if (cVar6 != '\0') {
            local_458 = 0x8220202;
            local_454 = "Assertion failure";
            local_44c = 0x822;
            local_44a = "libraryPlaylist != nullptr";
            *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e2258;
            __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
          }
          uVar11 = 0;
          *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e212d;
          FUN_1001782e9(0,0);
          break;
        }
        local_10e8 = &PTR_FUN_100852e98;
        *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e1f26;
        local_10e0 = lVar12;
        local_10c8 = &local_10e8;
        FUN_100485677(param_1,&local_10e8);
        if (local_10c8 == &local_10e8) {
          lVar12 = 0x20;
        }
        else {
          lVar12 = 0x28;
          if (local_10c8 == (undefined ***)0x0) goto LAB_1002e2162;
        }
        pcVar4 = *(code **)((long)*local_10c8 + lVar12);
        *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e2162;
        (*pcVar4)();
      }
LAB_1002e2162:
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e2172;
      uVar8 = FUN_10048cc55(param_1,0x706c616d,lVar13);
      uVar11 = (ulong)uVar8;
      break;
    default:
      if (param_2 != 0x706c4944) goto switchD_1002e1d28_caseD_706c6167;
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e1df9;
      uVar10 = FUN_100308474(param_1);
      uVar14 = *(undefined8 *)(param_1 + 0x60);
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e1e15;
      FUN_1001bb78a(&local_458,"LIB:%llx:%llx",uVar10,uVar14);
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e1e24;
      FUN_1001b80b2(lVar13,&local_458);
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e1e30;
      FUN_1001b7a50(&local_458);
      uVar11 = 0;
    }
  }
  else if (param_2 != 0x706c636c) {
    if (param_2 != 0x706c7072) goto switchD_1002e1d28_caseD_706c6167;
    lVar12 = *(long *)(lVar13 + 0x10);
    local_1108 = *(code **)(lVar13 + 0x18);
    local_1100 = *(undefined8 *)(lVar13 + 0x20);
    *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e1d97;
    local_10f8 = (undefined8 *)_NewHandle(0);
    *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e1dad;
    uVar8 = FUN_10023ea92(lVar12,&local_10ea);
    uVar11 = (ulong)uVar8;
    if (uVar8 == 0) {
      uVar14 = *(undefined8 *)(lVar12 + 0x78);
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e1f8e;
      _PasteboardSynchronize(uVar14);
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e1f98;
      lVar13 = FUN_10023e02c(0x72576d31);
      if (lVar13 == 0) {
        *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e2134;
        uVar14 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e2144;
        cVar6 = _os_log_type_enabled(uVar14,0x10);
        if (cVar6 != '\0') {
          local_458 = 0x8220202;
          local_454 = "Assertion failure";
          local_44c = 0x822;
          local_44a = "utiDragPromisedFlavorFindFile != __null";
          *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e22a9;
          __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
        }
        *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e2155;
        FUN_1001782e9(0,0);
      }
      else {
        *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e1fab;
        lVar13 = FUN_10023e02c(0x4a524653);
        if (lVar13 != 0) {
          if (local_10ea == 0) {
            uVar11 = 0;
          }
          else {
            local_10f0 = 0;
            uVar11 = 1;
            do {
              *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e1ff3;
              iVar9 = FUN_10023fedf(lVar12,uVar11,&cf_com_apple_pasteboard_promised_file_url,
                                    local_878);
              if (iVar9 == 0) {
                local_1110 = 0x420;
                *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e2022;
                iVar9 = FUN_10023e7ee(lVar12,uVar11,lVar13,&local_458,&local_1110);
                if (iVar9 == 0) {
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e2039;
                  iVar9 = FUN_10017d5ba(&local_458,local_c98);
                  if (iVar9 == 0) {
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e204c;
                    iVar9 = FUN_10017d5ba(local_878,local_10b8);
                    if (iVar9 == 0) {
                      *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e2063;
                      cVar6 = FUN_10017f77e(local_c98,local_10b8);
                      if (cVar6 == '\0') {
                        *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e207f;
                        sVar7 = _PtrAndHand(&local_458,local_10f8,0x420);
                        local_10f0 = local_10f0 + (uint)(sVar7 == 0);
                      }
                    }
                  }
                  *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e2099;
                  cVar6 = FUN_100189624(&local_458,local_878);
                  if (cVar6 == '\0') {
                    *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e20a5;
                    FUN_100182d4d(local_878);
                  }
                }
              }
              bVar15 = uVar11 < local_10ea;
              uVar11 = uVar11 + 1;
            } while (bVar15);
            uVar11 = 0;
            if ((local_10f0 != 0) && (*(char *)(DAT_1008c76a0 + 0x1a38) != '\0')) {
              uVar14 = *local_10f8;
              *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e20fc;
              uVar8 = FUN_10019483b(local_10f0,uVar14,DAT_1008c76a0 + 0x1618,0,0);
              uVar11 = (ulong)uVar8;
            }
          }
          goto LAB_1002e1db8;
        }
        *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e217c;
        uVar14 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e218c;
        cVar6 = _os_log_type_enabled(uVar14,0x10);
        if (cVar6 != '\0') {
          local_458 = 0x8220202;
          local_454 = "Assertion failure";
          local_44c = 0x822;
          local_44a = "utiPromisedJRFileSpecFlavor != __null";
          *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e22fa;
          __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
        }
        *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e219d;
        FUN_1001782e9(0,0);
      }
      uVar11 = 0xffffffce;
    }
    else {
LAB_1002e1db8:
      *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e1dc4;
      _DisposeHandle(local_10f8);
      if (local_1108 != (code *)0x0) {
        *(undefined8 *)((long)&local_38 + lVar5) = 0x1002e1de4;
        (*local_1108)(DAT_1008c76a0,local_1100);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar11;
  }
LAB_1002e2350:
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)&local_38 + lVar5) = &UNK_1002e2355;
  ___stack_chk_fail();
}

