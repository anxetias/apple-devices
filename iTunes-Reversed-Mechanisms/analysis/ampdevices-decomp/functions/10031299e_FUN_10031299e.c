// name: FUN_10031299e
// address: 10031299e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10031299e(long param_1,uint *param_2,ulong *param_3,uint *param_4,uint param_5,uint *param_6
                 ,undefined1 (*param_7) [16],uint *param_8)

{
  uint uVar1;
  void *pvVar2;
  long *plVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  bool bVar18;
  undefined1 local_5f8 [16];
  uint local_5e8;
  undefined4 uStack_5e4;
  long *local_5e0;
  ulong local_5d8;
  ulong uStack_5d0;
  ulong local_5c8;
  ulong uStack_5c0;
  uint local_5b4;
  uint local_5b0;
  uint local_5ac;
  uint *local_5a8;
  uint *local_5a0;
  ulong *local_598;
  char local_58d;
  uint local_58c;
  long local_588;
  uint local_57c;
  long local_578;
  uint *local_570;
  undefined4 local_568;
  undefined4 uStack_564;
  undefined4 local_560;
  undefined2 uStack_55c;
  undefined2 uStack_55a;
  undefined6 uStack_558;
  undefined1 local_510 [16];
  undefined1 local_500 [16];
  undefined1 local_4f0 [16];
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined2 uStack_bc;
  undefined2 uStack_ba;
  undefined2 uStack_b8;
  undefined4 uStack_b6;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_5b4 = 0;
  local_5f8 = (undefined1  [16])0x0;
  if (param_6 != (uint *)0x0) {
    *param_6 = 0;
  }
  if (param_7 != (undefined1 (*) [16])0x0) {
    *param_7 = (undefined1  [16])0x0;
  }
  if (param_8 != (uint *)0x0) {
    *param_8 = 0;
  }
  local_578 = *(long *)(param_1 + 8);
  bVar18 = local_578 == 0;
  local_598 = param_3;
  local_588 = param_1;
  local_57c = param_5;
  local_570 = param_4;
  FUN_1001c62d9(local_e8,0x20);
  FUN_1001c62d9(local_108,0x20);
  if ((bVar18) || (*(long *)(local_578 + 0x10) == 0)) {
    uVar9 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar9,0x10);
    if (cVar4 != '\0') {
      local_568 = 0x8220202;
      uStack_564 = 0x7a0a90;
      local_560 = 1;
      uStack_55c = 0x822;
      uStack_55a = 0x6950;
      uStack_558 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_568,0x16);
    }
    FUN_1001782e9(0,0);
    iVar6 = -0x32;
    goto LAB_1003138c4;
  }
  if (param_2 == (uint *)0x0 || local_598 == (ulong *)0x0) {
    puVar8 = (uint *)FUN_1003ae1f8();
    if (puVar8 != (uint *)0x0) {
      if (param_2 == (uint *)0x0) {
        param_2 = puVar8;
      }
      if (local_598 == (ulong *)0x0) {
        local_598 = (ulong *)(puVar8 + 0x598);
      }
      goto LAB_100312aec;
    }
    uVar9 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar9,0x10);
    if (cVar4 != '\0') {
      local_568 = 0x8220202;
      uStack_564 = 0x7a0a90;
      local_560 = 1;
      uStack_55c = 0x822;
      uStack_55a = 0xf071;
      uStack_558 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_568,0x16);
    }
    FUN_1001782e9(0,0);
LAB_100312f6e:
    iVar6 = -0x6c;
    goto LAB_1003138c4;
  }
  puVar8 = (uint *)0x0;
LAB_100312aec:
  local_5b0 = local_57c >> 5 & 2 | local_57c >> 2 & 0x40 | local_57c & 0xa0;
  local_5a8 = puVar8;
  local_5a0 = param_2;
  if ((((*param_2 == 0) && (local_598[1] == 0)) && (*local_598 == 0)) &&
     ((local_570 == (uint *)0x0 || (*local_570 == 0)))) {
    uVar16 = 0;
    uVar14 = 0;
    uVar13 = 0;
    local_58c = 0;
  }
  else {
    iVar6 = FUN_1002b0559(local_588);
    bVar18 = (local_57c & 9) == 0;
    local_58d = bVar18 || iVar6 != 0;
    if ((!bVar18 && iVar6 == 0) && (*local_5a0 != 0)) {
      puVar8 = local_5a8;
      if ((local_5a8 != (uint *)0x0) || (puVar8 = (uint *)FUN_1003ae1f8(), puVar8 != (uint *)0x0)) {
        local_5a8 = puVar8;
        FUN_1001c631b(local_5a0,puVar8,0x1660);
        FUN_1001c62d9(&local_568,0x38);
        local_568 = (undefined4)local_588;
        uStack_564 = (undefined4)((ulong)local_588 >> 0x20);
        local_560 = SUB84(local_5a8,0);
        uStack_55c = (undefined2)((ulong)local_5a8 >> 0x20);
        uStack_55a = (undefined2)((ulong)local_5a8 >> 0x30);
        iVar6 = FUN_1002fc1ae(*(undefined8 *)(local_578 + 0x10),0x74647574);
        if (iVar6 != -0x80) {
          if (iVar6 == 0) {
            local_5a0 = local_5a8;
            goto LAB_100312c1e;
          }
          uVar9 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar9,0x10);
          if (cVar4 != '\0') {
            local_c8 = 0x8220202;
            uStack_c4 = 0x7a0a90;
            uStack_c0 = 1;
            uStack_bc = 0x400;
            uStack_ba = (undefined2)iVar6;
            uStack_b8 = (undefined2)((uint)iVar6 >> 0x10);
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_c8,0x12);
          }
        }
        FUN_1003ae783(local_5a8 + 0x132a);
        FUN_1001c64c1(local_5a8);
        goto LAB_1003138c4;
      }
      uVar9 = FUN_1001cc310(local_5a0);
      cVar4 = _os_log_type_enabled(uVar9,0x10);
      if (cVar4 != '\0') {
        local_c8 = 0x8220202;
        uStack_c4 = 0x7a0a90;
        uStack_c0 = 1;
        uStack_bc = 0x822;
        uStack_ba = 0xf071;
        uStack_b8 = 0x7b;
        uStack_b6 = 1;
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_c8,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_100312f6e;
    }
LAB_100312c1e:
    local_5ac = local_57c >> 3 & 2;
    uVar13 = local_57c >> 9 & 4 | local_5ac;
    FUN_10030f5ec(local_598,local_588,uVar13,local_108,local_5f8);
    FUN_100538b99(local_e8,local_108);
    local_5c8 = local_5f8._0_8_;
    uStack_5c0 = local_5f8._8_8_;
    FUN_10030e507(local_5a0,local_588,uVar13,local_108,&local_5b4);
    FUN_100538b99(local_e8,local_108);
    local_58c = local_5b4;
    local_50 = (undefined1  [16])0x0;
    local_60 = (undefined1  [16])0x0;
    local_70 = (undefined1  [16])0x0;
    lVar17 = 0x21e8;
    lVar15 = 0x2de8;
    do {
      uVar14 = lVar15 - 0x2de8;
      FUN_1002fa385(local_578,uVar14 & 0xffffffff,&local_c8);
      cVar4 = FUN_10053916d(local_e8,uStack_c4);
      if ((cVar4 != '\0') && (cVar4 = FUN_10053906a(local_e8,uStack_c0), cVar4 != '\0')) {
        local_4f0 = (undefined1  [16])0x0;
        local_500 = (undefined1  [16])0x0;
        local_510 = (undefined1  [16])0x0;
        FUN_1002fa385(local_578,uVar14 & 0xffffffff,&local_568);
        cVar4 = FUN_1002fa9ac(&local_568,0);
        if (cVar4 != '\0') {
          FUN_1005389ba(local_e8,uStack_c0);
          local_5d8 = local_60._0_8_ | local_70._0_8_;
          uStack_5d0 = local_60._8_8_ | local_70._8_8_;
          *local_598 = *local_598 | local_5d8;
          local_598[1] = local_598[1] | uStack_5d0;
          FUN_1002fb8c8(local_578,uVar14 & 0xffffffff,(byte *)((long)local_598 + lVar17));
          local_5c8 = local_5c8 | local_5d8;
          uStack_5c0 = uStack_5c0 | uStack_5d0;
          *(byte *)((long)local_598 + lVar15) = *(byte *)(local_578 + -0x2d2e + lVar15);
        }
      }
      lVar17 = lVar17 + 0x200;
      lVar15 = lVar15 + 1;
    } while (lVar17 != 0x2de8);
    if (local_570 == (uint *)0x0) {
      uVar13 = 0;
    }
    else {
      if (local_588 == 0) {
        uVar9 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar9,0x10);
        if (cVar4 != '\0') {
          local_568 = 0x8220202;
          uStack_564 = 0x7a0a90;
          local_560 = 1;
          uStack_55c = 0x822;
          uStack_55a = 0xf037;
          uStack_558 = 0x1007b;
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_568,0x16);
        }
        uVar13 = 0;
        FUN_1001782e9(0,0);
      }
      else {
        FUN_1001c62d9(&local_568,0x20);
        lVar15 = *(long *)(local_588 + 8);
        if ((lVar15 == 0) || (uVar14 = *(ulong *)(lVar15 + 0x10), uVar14 == 0)) {
LAB_100312f79:
          uVar9 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar9,0x10);
          if (cVar4 != '\0') {
            local_c8 = 0x8220202;
            uStack_c4 = 0x7a0a90;
            uStack_c0 = 1;
            uStack_bc = 0x822;
            uStack_ba = 0xe894;
            uStack_b8 = 0x7a;
            uStack_b6 = 1;
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_c8,0x16);
          }
          uVar13 = 0;
          FUN_1001782e9(0,0);
        }
        else {
          if (*(int *)(uVar14 + 0x80) != 0x74646174) {
            uVar9 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar9,0x10);
            if (cVar4 != '\0') {
              local_c8 = 0x8220202;
              uStack_c4 = 0x7ab58c;
              uStack_c0 = 1;
              uStack_bc = 0x822;
              uStack_ba = 0xec03;
              uStack_b8 = 0x7a;
              uStack_b6 = 1;
              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_c8,0x16);
            }
            cVar4 = FUN_1001782e9(0,1);
            if (cVar4 == '\0') goto LAB_100312f79;
          }
          if (*local_570 == 0) {
            uVar13 = 0;
          }
          else {
            uVar13 = 0;
            local_5d8 = uVar14;
            if (((*local_570 & 1) != 0) &&
               ((uVar9 = *(undefined8 *)(local_570 + 3), local_5ac == 0 ||
                (cVar4 = FUN_1001e4783(uVar9), cVar4 == '\0')))) {
              local_c8 = 0;
              uStack_c4 = 0;
              FUN_10047c4cc(lVar15);
              cVar4 = FUN_1001e4783(uVar9);
              cVar5 = FUN_1001e4783(CONCAT44(uStack_c4,local_c8));
              if (cVar4 == '\0' && cVar5 == '\0') {
                cVar4 = FUN_1001e46a4(CONCAT44(uStack_c4,local_c8),uVar9,0);
                bVar18 = cVar4 != '\0';
                FUN_1001c64c1(CONCAT44(uStack_c4,local_c8));
              }
              else {
                FUN_1001c64c1(CONCAT44(uStack_c4,local_c8));
                bVar18 = cVar4 != '\0' && cVar5 != '\0';
              }
              uVar13 = 0;
              if (!bVar18) {
                FUN_100471a46(lVar15);
                FUN_10047c6e3(lVar15,*(undefined8 *)(local_570 + 3));
                FUN_1005389ba(&local_568,0x56);
                uVar13 = 1;
              }
            }
            if (((*local_570 & 0x40) != 0) &&
               ((uVar9 = *(undefined8 *)(local_570 + 5), local_5ac == 0 ||
                (cVar4 = FUN_1001e4783(uVar9), cVar4 == '\0')))) {
              local_c8 = 0;
              uStack_c4 = 0;
              FUN_10047c9a2(lVar15);
              cVar4 = FUN_1001e4783(uVar9);
              cVar5 = FUN_1001e4783(CONCAT44(uStack_c4,local_c8));
              if (cVar4 == '\0' && cVar5 == '\0') {
                cVar4 = FUN_1001e46a4(CONCAT44(uStack_c4,local_c8),uVar9,0);
                FUN_1001c64c1(CONCAT44(uStack_c4,local_c8));
                if (cVar4 == '\0') {
LAB_1003132af:
                  FUN_100471a46(lVar15);
                  FUN_10047cbb9(lVar15,*(undefined8 *)(local_570 + 5));
                  FUN_1005389ba(&local_568,0x7f);
                  uVar13 = uVar13 | 0x40;
                }
              }
              else {
                FUN_1001c64c1(CONCAT44(uStack_c4,local_c8));
                if (cVar4 == '\0' || cVar5 == '\0') goto LAB_1003132af;
              }
            }
            if (((*local_570 & 4) != 0) &&
               (uVar7 = FUN_1001dfc0d(*(undefined8 *)(local_570 + 7)), local_5ac == 0 || uVar7 != 0)
               ) {
              pvVar2 = *(void **)(local_570 + 7);
              local_c8 = 0;
              uStack_c4 = 0;
              FUN_1003071cd(*(undefined8 *)(lVar15 + 0x10));
              iVar6 = FUN_10047d582(lVar15,&local_c8,&local_5e8);
              if ((iVar6 == 0) && (local_5e8 == uVar7)) {
                iVar6 = _memcmp(pvVar2,(void *)CONCAT44(uStack_c4,local_c8),(ulong)uVar7);
                FUN_100307383(*(undefined8 *)(lVar15 + 0x10));
                if (iVar6 == 0) goto LAB_1003133d4;
              }
              else {
                FUN_100307383(*(undefined8 *)(lVar15 + 0x10));
              }
              FUN_100471fde(lVar15);
              FUN_1001ddddc(local_5d8 + 0x2200,*(undefined8 *)(local_570 + 7),uVar7,
                            *(long *)(lVar15 + 0x78) + 0x24);
              FUN_1005389ba(&local_568,0x54);
              uVar13 = uVar13 | 4;
            }
LAB_1003133d4:
            uVar7 = *local_570;
            if ((((uVar7 & 2) != 0) && (lVar15 = *(long *)(local_570 + 1), lVar15 != 0)) &&
               ((*(byte *)(local_588 + 0x48) & 0x20) == 0)) {
              FUN_1002af0ff();
              FUN_1002af370(local_588,lVar15);
              FUN_1005389ba(&local_568,0x58);
              uVar13 = uVar13 | 2;
              uVar7 = *local_570;
            }
            if ((uVar7 & 0x20) != 0) {
              FUN_1002af0ff(local_588);
              FUN_10017060f(*(undefined8 *)(*(long *)(local_588 + 0x10) + 0x98));
              uVar9 = FUN_100171413(0,0,*(undefined8 *)(local_570 + 0xd));
              *(undefined8 *)(*(long *)(local_588 + 0x10) + 0x98) = uVar9;
              uVar13 = uVar13 | 0x20;
            }
          }
          FUN_100538877(local_108,&local_568);
        }
      }
      FUN_100538b99(local_e8,local_108);
    }
    lVar15 = local_588;
    uVar16 = uStack_5c0;
    uVar14 = local_5c8;
    if (local_58d == '\0') {
      uVar7 = local_58c;
      uVar12 = uVar13;
      if ((local_57c & 8) != 0) {
        uVar7 = *local_5a0;
        local_5c8 = *local_598;
        uStack_5c0 = local_598[1];
        if (local_570 == (uint *)0x0) {
          uVar12 = 0;
        }
        else {
          uVar12 = *local_570;
        }
      }
      uVar11 = local_5c8 & _DAT_1007439b0;
      uVar10 = uStack_5c0 & _UNK_1007439b8;
      if ((((uVar7 & 0xf8f005df) != 0) || (uVar11 != 0)) ||
         ((uVar10 != 0 || ((local_57c & 8) != 0 || (uVar12 & 0xffffff5d) != 0)))) {
        uVar1 = *local_5a0;
        local_5c8 = *local_598;
        uStack_5c0 = local_598[1];
        *local_5a0 = uVar7 & 0xf8f005df;
        *local_598 = uVar11;
        local_598[1] = uVar10;
        if (local_570 == (uint *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *local_570;
          *local_570 = uVar12 & 0xffffff5d;
        }
        if (*(int *)(local_588 + 0x3c) == 0x46494c45) {
          local_5d8 = CONCAT44(local_5d8._4_4_,uVar7);
          local_c8 = 0;
          uStack_c4 = 0;
          uStack_c0 = 0;
          uStack_bc = 0;
          uStack_ba = 0;
          FUN_1002b3b9a(local_588,&local_568);
          FUN_100241e02(&local_5e8,lVar15,0x82,0,0,0);
          plVar3 = (long *)CONCAT44(uStack_5e4,local_5e8);
          local_c8 = local_5e8;
          uStack_c4 = uStack_5e4;
          uStack_c0 = SUB84(local_5e0,0);
          uStack_bc = (undefined2)((ulong)local_5e0 >> 0x20);
          uStack_ba = (undefined2)((ulong)local_5e0 >> 0x30);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x90))(plVar3,(local_57c & 2) + 1,local_5a0,local_598,local_570);
            FUN_1002b0559(local_588,local_5b0);
            local_5e0 = (long *)CONCAT26(uStack_ba,CONCAT24(uStack_bc,uStack_c0));
          }
          if (local_5e0 != (long *)0x0) {
            LOCK();
            plVar3 = local_5e0 + 1;
            lVar15 = *plVar3;
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (lVar15 == 0) {
              (**(code **)(*local_5e0 + 0x10))(local_5e0);
              std::__shared_weak_count::__release_weak();
            }
          }
          uVar7 = (uint)local_5d8;
        }
        *local_5a0 = uVar1;
        *local_598 = local_5c8;
        local_598[1] = uStack_5c0;
        if (local_570 != (uint *)0x0) {
          *local_570 = uVar7;
        }
      }
    }
  }
  if ((local_57c & 4) == 0) {
    uVar10 = uVar16;
    uVar11 = uVar14;
    uVar7 = local_58c;
    if ((local_57c & 8) != 0) {
      uVar7 = *local_5a0;
      uVar11 = *local_598;
      uVar10 = local_598[1];
    }
    if (((uVar7 != 0) || (uVar11 != 0)) || (uVar10 != 0)) {
      local_568 = (undefined4)uVar11;
      uStack_564 = (undefined4)(uVar11 >> 0x20);
      local_560 = (undefined4)uVar10;
      uStack_55c = (undefined2)(uVar10 >> 0x20);
      uStack_55a = (undefined2)(uVar10 >> 0x30);
      FUN_10031f08e(local_588,uVar7,&local_568,0,0,local_5b0);
    }
  }
  if (uVar14 != 0 || uVar16 != 0) {
    FUN_1005389ba(local_e8,0x4c);
  }
  FUN_1002fb127(local_578,0,local_e8);
  if ((*local_5a0 & 0x20) == 0) {
    uVar9 = local_5f8._0_8_;
    cVar4 = FUN_100539333(local_e8,&DAT_100756aac);
    if ((cVar4 != '\0') || ((uVar9 & 0x20000200000000c) != 0)) goto LAB_100313791;
    if (*(int *)(local_578 + 0xf4) == 0) {
      uVar11 = FUN_1004744bf(local_578,0);
      if (*(long *)(local_578 + 0x58) == 0) {
        if ((uVar11 & 0xc10010) != 0) goto LAB_100313791;
      }
      else if ((uVar11 & 0xc10010) != 0 || *(int *)(*(long *)(local_578 + 0x58) + 0x40) != 0) {
LAB_100313791:
        FUN_10047af96(local_578,0);
        FUN_10047aca3(local_578,local_5a0 + 0x282);
        *(byte *)local_5a0 = (byte)*local_5a0 | 0x20;
        FUN_1005389ba(local_e8,9);
      }
    }
  }
  if (((local_57c >> 10 & 1) != 0) && (*(int *)(local_578 + 0xd4) == 0)) {
    FUN_1004744bf(local_578,1);
  }
  cVar4 = FUN_100539270(local_e8);
  if (cVar4 != '\0') {
    FUN_1002fe16c(local_578,local_e8,0);
    FUN_1004755ef(local_578,0,local_e8);
  }
  if ((((uVar14 != 0) || (local_58c != 0)) || (uVar16 != 0)) || (uVar13 != 0)) {
    if ((((local_58c & 0xf9f3ffff) == 0) && (uVar16 == 0)) &&
       (((uVar14 & 0xfffffcffffffffff) == 0 && (uVar13 == 0)))) {
      FUN_100316d5b(local_578);
    }
    else {
      FUN_1002fef76(local_578);
    }
  }
  if (param_6 != (uint *)0x0) {
    *param_6 = local_58c;
  }
  if (param_7 != (undefined1 (*) [16])0x0) {
    *(ulong *)*param_7 = uVar14;
    *(ulong *)(*param_7 + 8) = uVar16;
  }
  if (param_8 != (uint *)0x0) {
    *param_8 = uVar13;
  }
  iVar6 = 0;
  if (local_5a8 != (uint *)0x0) {
    FUN_1003ae783(local_5a8 + 0x132a);
    FUN_1001c64c1(local_5a8);
  }
LAB_1003138c4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

