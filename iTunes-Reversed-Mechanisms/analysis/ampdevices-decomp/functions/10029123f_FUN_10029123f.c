// name: FUN_10029123f
// address: 10029123f

int FUN_10029123f(long param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined7 uVar9;
  undefined8 uVar8;
  bool bVar10;
  uint uVar11;
  uint *puVar12;
  undefined1 *puVar13;
  ulong uVar14;
  undefined1 local_648 [8];
  undefined8 local_640;
  long *plStack_638;
  undefined1 local_5b8 [16];
  undefined8 local_5a8;
  long local_5a0;
  undefined4 local_598;
  undefined4 local_594;
  uint local_578;
  uint uStack_574;
  uint uStack_570;
  uint uStack_56c;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  uint local_548;
  ulong local_540;
  undefined4 local_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  long local_520;
  long local_518;
  ulong local_510;
  uint local_508;
  uint local_504;
  undefined8 local_500;
  undefined4 local_4f4;
  undefined4 local_4f0;
  undefined4 local_4ec;
  undefined1 local_4e8 [520];
  undefined4 local_2e0;
  undefined2 local_2dc;
  undefined1 local_2da;
  byte local_2d9;
  byte local_2d8;
  byte local_2d7;
  undefined1 local_2d4 [64];
  char local_294;
  uint local_290 [13];
  char local_25c;
  undefined1 local_25b;
  undefined1 local_25a [255];
  char local_15b;
  undefined1 local_15a;
  undefined1 local_159 [255];
  char local_5a;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_640 = 0;
  plStack_638 = (long *)0x0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  local_520 = 0;
  local_518 = 0;
  FUN_1001c62d9(local_2d4,0x27c);
  local_508 = 0;
  local_504 = 0;
  if (*(char *)(param_1 + 0xd21) == '\x01') {
    if (*(long *)(param_1 + 0xca8) != 0) {
      FUN_1001c62d9(local_5b8,0x40);
      local_5a8 = *(undefined8 *)(param_2 + 0x1c);
      local_5a0 = *(long *)(param_2 + 0x28);
      local_598 = *(undefined4 *)(param_2 + 0x18);
      local_594 = *(undefined4 *)(param_2 + 0x30);
      puVar12 = *(uint **)(param_2 + 0x38);
      if (puVar12 == (uint *)0x0) {
        local_500 = (ulong)local_500._4_4_ << 0x20;
      }
      else {
        local_578 = *puVar12;
        uStack_574 = puVar12[1];
        uStack_570 = puVar12[2];
        uStack_56c = puVar12[3];
        local_568 = *(undefined8 *)(puVar12 + 4);
        uStack_560 = *(undefined8 *)(puVar12 + 6);
        local_558 = *(undefined8 *)(puVar12 + 8);
        uStack_550 = *(undefined8 *)(puVar12 + 10);
        local_548 = puVar12[0xc];
        uVar11 = uStack_574 ^ 0x4e4f524d | local_578 ^ 0x6954756e;
        param_4 = (ulong)uVar11;
        local_500 = CONCAT44(local_500._4_4_,
                             CONCAT31((int3)((local_578 ^ 0x6954756e) >> 8),uVar11 == 0));
      }
      local_510 = local_5a0;
      lVar6 = (**(code **)(**(long **)(param_1 + 0xca8) + 0xf0))(*(long **)(param_1 + 0xca8),0);
      local_4ec = 0;
      if ((int)lVar6 == 0) {
        local_538 = *(undefined4 *)(param_1 + 0xca8);
        uStack_534 = *(undefined4 *)(param_1 + 0xcac);
        uStack_530 = *(undefined4 *)(param_1 + 0xcb0);
        uStack_52c = *(undefined4 *)(param_1 + 0xcb4);
        if (*(long *)(param_1 + 0xcb0) != 0) {
          LOCK();
          plVar1 = (long *)(*(long *)(param_1 + 0xcb0) + 8);
          *plVar1 = *plVar1 + 1;
          UNLOCK();
        }
        param_4 = 0;
        lVar7 = FUN_10042db01(&local_538,local_648,0,0);
        plVar1 = (long *)CONCAT44(uStack_52c,uStack_530);
        lVar6 = lVar7;
        if (plVar1 != (long *)0x0) {
          LOCK();
          plVar2 = plVar1 + 1;
          lVar6 = *plVar2;
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (lVar6 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
            lVar6 = std::__shared_weak_count::__release_weak();
          }
        }
        if ((int)lVar7 == 0) {
          param_4 = 0;
          uVar8 = FUN_100428630(local_648,FUN_1002961ef,local_2d4,0,0,0,0,0,0);
          uVar9 = (undefined7)((ulong)uVar8 >> 8);
          local_4ec = (undefined4)CONCAT71(uVar9,1);
          if (((local_294 == '\0') && (local_25c == '\0')) && (local_15b == '\0')) {
            local_4ec = (undefined4)CONCAT71(uVar9,local_5a != '\0');
          }
          lVar6 = FUN_100426d30(local_648);
        }
        else {
          local_4ec = 0;
        }
      }
      iVar4 = 0;
      bVar10 = local_294 != '\0' || local_510 != 0;
      local_4f0 = (undefined4)
                  CONCAT71((int7)((ulong)lVar6 >> 8),local_25c != '\0' | (byte)local_500);
      local_4f4 = (undefined4)CONCAT71((int7)(param_4 >> 8),bVar10);
      if ((byte)((byte)local_4ec | bVar10) == 1) {
        if (local_15b == '\0') {
          iVar4 = 10;
        }
        else {
          iVar4 = FUN_100296402(local_4e8,"TEN",local_25a,local_25b);
          iVar4 = iVar4 + 10;
        }
        if (local_5a != '\0') {
          iVar5 = FUN_100296402(local_4e8,"TSS",local_159,local_15a);
          iVar4 = iVar5 + iVar4;
        }
        if ((char)local_4f4 == '\0') {
LAB_100291644:
          local_4f4 = 0;
        }
        else {
          puVar13 = local_2d4;
          if (local_510 != 0) {
            puVar13 = local_5b8;
          }
          uVar8 = FUN_1003a95c2(puVar13,&local_520,&local_508);
          iVar5 = (int)uVar8;
          if (iVar5 == -0x80) goto LAB_100291644;
          local_4f4 = (undefined4)CONCAT71((int7)((ulong)uVar8 >> 8),1);
          if (iVar5 == 0) {
LAB_100291614:
            uVar14 = (ulong)local_508;
            iVar5 = FUN_10029645b(local_4e8,"iTunSMPB",local_520,uVar14);
            iVar4 = iVar5 + iVar4;
            local_4ec = (undefined4)CONCAT71((int7)(uVar14 >> 8),1);
          }
          else {
            uVar8 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar8,0x10);
            if (cVar3 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
            local_4f4 = 0;
            if (iVar5 == 0) goto LAB_100291614;
          }
        }
        if ((char)local_4f0 == '\0') {
LAB_1002916f8:
          local_4f0 = 0;
        }
        else {
          puVar12 = &local_578;
          if ((byte)local_500 == '\0') {
            puVar12 = local_290;
          }
          uVar8 = FUN_1003a97ad(puVar12,&local_518,&local_504);
          iVar5 = (int)uVar8;
          if (iVar5 == -0x80) goto LAB_1002916f8;
          local_4f0 = (undefined4)CONCAT71((int7)((ulong)uVar8 >> 8),1);
          if (iVar5 == 0) {
LAB_1002916c8:
            uVar14 = (ulong)local_504;
            iVar5 = FUN_10029645b(local_4e8,"iTunNORM",local_518,uVar14);
            iVar4 = iVar5 + iVar4;
            local_4ec = (undefined4)CONCAT71((int7)(uVar14 >> 8),1);
          }
          else {
            uVar8 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar8,0x10);
            if (cVar3 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
            local_4f0 = 0;
            if (iVar5 == 0) goto LAB_1002916c8;
          }
        }
        uVar11 = iVar4 - 10;
        if (uVar11 < 0x10000000) {
          local_2e0 = 0x2334449;
          local_2dc = 0;
          local_2da = (undefined1)(uVar11 >> 0x15);
          local_2d9 = (byte)(uVar11 >> 0xe) & 0x7f;
          local_2d8 = (byte)(uVar11 >> 7) & 0x7f;
          local_2d7 = (byte)uVar11 & 0x7f;
        }
      }
      else {
        local_4ec = 0;
      }
      lVar7 = *(long *)(param_1 + 0xd38);
      uVar14 = *(long *)(param_1 + 0xd40) - lVar7;
      local_510 = (ulong)(uint)((int)uVar14 + iVar4);
      lVar6 = FUN_1001c63e1();
      local_500 = lVar6;
      if (lVar6 == 0) {
        uVar8 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar8,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "cleanFile != nullptr";
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        iVar4 = -0x6c;
        FUN_1001782e9(0,0);
      }
      else {
        if ((char)local_4ec != '\0') {
          FUN_1001c631b(&local_2e0,lVar6,10);
          lVar6 = local_500 + 10;
          if (local_15b != '\0') {
            uVar11 = FUN_100296402(lVar6,"TEN",local_25a,local_25b);
            lVar6 = lVar6 + (ulong)uVar11;
          }
          if (local_5a != '\0') {
            uVar11 = FUN_100296402(lVar6,"TSS",local_159,local_15a);
            lVar6 = lVar6 + (ulong)uVar11;
          }
          if ((char)local_4f4 != '\0') {
            uVar11 = FUN_10029645b(lVar6,"iTunSMPB",local_520,local_508);
            lVar6 = lVar6 + (ulong)uVar11;
          }
          if ((char)local_4f0 != '\0') {
            uVar11 = FUN_10029645b(lVar6,"iTunNORM",local_518,local_504);
            lVar6 = lVar6 + (ulong)uVar11;
          }
        }
        iVar4 = (**(code **)(**(long **)(param_1 + 0xca8) + 0xf0))
                          (*(long **)(param_1 + 0xca8),lVar7);
        if (iVar4 == -0x80) {
LAB_100291949:
          FUN_1001c64c1(local_500);
        }
        else {
          if (iVar4 == 0) {
            uVar14 = uVar14 & 0xffffffff;
            local_540 = uVar14;
            iVar4 = (**(code **)(**(long **)(param_1 + 0xca8) + 0xa8))
                              (*(long **)(param_1 + 0xca8),&local_540,lVar6);
            if ((iVar4 != 0) || (local_540 != uVar14)) {
              uVar8 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar8,0x10);
              if (cVar3 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "(status == noErr) && (readSize == audioDataLength)";
                __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              iVar4 = -0x6c;
              FUN_1001782e9(0,0);
              goto LAB_100291949;
            }
            *(long *)(param_2 + 0x40) = local_500;
            *(ulong *)(param_2 + 0x48) = local_510;
            *(long *)(param_2 + 0x50) = lVar6 - local_500;
          }
          else {
            uVar8 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar8,0x10);
            if (cVar3 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
              __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
            if (iVar4 != 0) goto LAB_100291949;
          }
          iVar4 = 0;
        }
      }
      if (local_520 != 0) {
        FUN_1001c64c1();
      }
      if (local_518 != 0) {
        FUN_1001c64c1();
      }
      goto LAB_100291977;
    }
    uVar8 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar8,0x10);
    if (cVar3 != '\0') {
      local_4a = "connectionData->dataHandler != nullptr";
      goto LAB_1002919f3;
    }
  }
  else {
    uVar8 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar8,0x10);
    if (cVar3 != '\0') {
      local_4a = "connectionData->playerOpen == true";
LAB_1002919f3:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  iVar4 = -0x32;
  FUN_1001782e9(0,0);
LAB_100291977:
  if (plStack_638 != (long *)0x0) {
    LOCK();
    plVar1 = plStack_638 + 1;
    lVar6 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plStack_638 + 0x10))(plStack_638);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

