// name: FUN_100640620
// address: 100640620

ulong FUN_100640620(long param_1,int param_2,undefined8 *param_3,ulong param_4)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  char cVar13;
  ushort uVar14;
  ushort uVar15;
  long lVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  undefined4 *puVar25;
  undefined8 *puVar26;
  ulong uVar27;
  bool bVar28;
  long local_2d8;
  undefined8 local_2d0;
  long local_2c8;
  undefined4 *puStack_2c0;
  long *local_2b8;
  undefined6 uStack_2b0;
  undefined2 uStack_2aa;
  undefined4 uStack_2a8;
  undefined2 uStack_2a4;
  undefined4 local_2a0;
  undefined1 local_29c;
  undefined2 uStack_29b;
  undefined8 local_298;
  undefined8 local_290;
  undefined1 uStack_288;
  undefined7 uStack_287;
  undefined1 uStack_280;
  undefined8 uStack_27f;
  undefined8 local_270;
  long local_268;
  undefined8 *local_260;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 local_250;
  undefined2 uStack_24c;
  undefined2 uStack_24a;
  undefined2 uStack_248;
  undefined4 uStack_246;
  undefined2 uStack_242;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar11 = 0;
  uVar27 = 0;
  switch(param_2) {
  case 200:
    uVar11 = uVar27;
    if ((*(char *)(param_1 + 0x8a0) == '\x01') &&
       (lVar10 = *(long *)(param_1 + 0x5b0), *(short *)(lVar10 + 0x10) != 0x23)) {
      uVar7 = FUN_10056df1e(param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1,lVar10 + 0x178,
                            lVar10 + 0x1c8);
      uVar11 = (ulong)uVar7;
      if (uVar7 != 0xffffff80) {
        if (uVar7 == 0) {
          lVar10 = *(long *)(param_1 + 0x5b0);
          uVar11 = uVar27;
          if ((*(byte *)(lVar10 + 0x240) & 4) != 0) {
            FUN_1001de41f(lVar10 + 0x178,*(undefined4 *)(lVar10 + 0x1c8),&local_258);
            uVar9 = FUN_1001656af(DAT_1008c4d90,&local_258,
                                  *(undefined8 *)PTR__kCFAllocatorNull_10082e028);
            FUN_1001aaedc(&local_2c8,uVar9);
            uVar11 = 0;
            lVar10 = FUN_100173bb7(PTR_cf___________100868840,local_2c8,0);
            if (lVar10 == 0) {
              FUN_1001c34b7(0x7f0001,&local_258);
              uVar7 = FUN_1001ddeca(*(long *)(param_1 + 0x5b0) + 0x178,&local_258,
                                    *(long *)(param_1 + 0x5b0) + 0x1c8);
              uVar11 = (ulong)uVar7;
            }
            FUN_1001ab006(&local_2c8);
          }
        }
        else {
          uVar9 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar9,0x10);
          if (cVar5 != '\0') {
            local_258 = 0x8220202;
            uStack_254 = 0x7a0a90;
            local_250 = 1;
            uStack_24c = 0x400;
            uStack_24a = (undefined2)uVar7;
            uStack_248 = (undefined2)(uVar7 >> 0x10);
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_258,0x12);
          }
        }
      }
    }
    break;
  case 0xc9:
    uVar11 = uVar27;
    if (*(char *)(param_1 + 0x8a0) == '\x01') {
      uVar27 = 0;
      uVar11 = 0;
      iVar6 = FUN_1001d1aa6(param_3,param_4 & 0xffffffff,FUN_100289b76,0,param_1 + 0x5c0);
      if ((iVar6 != -0x80) && (iVar6 != 0)) {
        uVar9 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar9,0x10);
        if (cVar5 != '\0') {
          puVar25 = &local_258;
          local_258 = 0x8220202;
          uStack_254 = 0x7a0a90;
          local_250 = 1;
          uStack_24c = 0x400;
          uStack_24a = (undefined2)iVar6;
          uStack_248 = (undefined2)((uint)iVar6 >> 0x10);
LAB_100640b7e:
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",puVar25,0x12);
          uVar11 = uVar27;
        }
      }
    }
    break;
  case 0xca:
    uVar11 = uVar27;
    if (*(char *)(param_1 + 0x8a0) == '\x01') {
      uVar11 = 0x70;
      if ((param_4 & 0xffffffff) < 0x70) {
        uVar11 = param_4 & 0xffffffff;
      }
      FUN_1001c631b(param_3,param_1 + 0x5c8,uVar11);
      *(undefined1 *)(param_1 + 0x89e) = 1;
      uVar11 = uVar27;
    }
    break;
  case 0xcb:
    uVar11 = uVar27;
    if ((*(char *)(param_1 + 0x8a0) == '\x01') && (7 < (uint)param_4)) {
      uVar21 = (uint)param_4 >> 3;
      local_260 = (undefined8 *)(param_1 + 0x638);
      uVar7 = FUN_100594adc(local_260,uVar21);
      uVar11 = (ulong)uVar7;
      if (uVar7 != 0xffffff80) {
        if (uVar7 != 0) {
          uVar9 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar9,0x10);
          if (cVar5 != '\0') {
            local_258 = 0x8220202;
            uStack_254 = 0x7a0a90;
            local_250 = 1;
            uStack_24c = 0x400;
            uStack_24a = (undefined2)uVar7;
            uStack_248 = (undefined2)(uVar7 >> 0x10);
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_258,0x12);
          }
          if (uVar7 != 0) break;
        }
        uVar27 = 0;
        do {
          lVar10 = FUN_100306c68(param_1 + 0x778,param_3[uVar27]);
          if (lVar10 != 0) {
            FUN_10059563f(*local_260,lVar10,0);
          }
          uVar27 = uVar27 + 1;
        } while (uVar21 + (uVar21 == 0) != uVar27);
      }
    }
    break;
  case 0xcc:
    uVar11 = uVar27;
    if (*(char *)(param_1 + 0x8a0) == '\x01') {
      uVar7 = FUN_10056df1e(param_3,param_4,*(byte *)(param_1 + 0x9b8) ^ 1,
                            *(long *)(param_1 + 0x5b0) + 0x178,*(long *)(param_1 + 0x5b0) + 0x1cc);
      uVar27 = (ulong)uVar7;
      uVar11 = uVar27;
      if ((uVar7 != 0xffffff80) && (uVar7 != 0)) {
        uVar9 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar9,0x10);
        if (cVar5 != '\0') {
          puVar25 = &local_258;
          local_258 = 0x8220202;
          uStack_254 = 0x7a0a90;
          local_250 = 1;
          uStack_24c = 0x400;
          uStack_24a = (undefined2)uVar7;
          uStack_248 = (undefined2)(uVar7 >> 0x10);
          goto LAB_100640b7e;
        }
      }
    }
    break;
  case 0xcd:
    uVar11 = uVar27;
    if (*(char *)(param_1 + 0x8a0) == '\x01') {
      uVar9 = FUN_100492e62(*(undefined8 *)(param_1 + 0x5b0),1);
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
        uVar11 = FUN_10056e11f(param_3,param_4,uVar9);
        return uVar11;
      }
      goto LAB_100641a19;
    }
    break;
  case 0xce:
    if (param_4 != 0x44) {
      uVar9 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar9,0x10);
      if (cVar5 != '\0') {
        local_258 = 0x8220202;
        uStack_254 = 0x7a0a90;
        local_250 = 1;
        uStack_24c = 0x822;
        uStack_24a = 0x7614;
        uStack_248 = 0x7f;
        uStack_246 = 1;
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_258,0x16);
      }
      FUN_1001782e9(0,0);
    }
    *(undefined8 *)(param_1 + 0x5b8) = 0;
    *(undefined8 *)(param_1 + 0x730) = 0;
    FUN_1001b811c(param_1 + 0x738);
    FUN_1001b811c(param_1 + 0x748);
    *(undefined1 *)(param_1 + 0x758) = 0;
    if ((*(long *)((long)param_3 + 0x14) != 0) &&
       (lVar10 = FUN_100306c68(param_1 + 0x778), lVar10 != 0)) {
      if ((*(char *)(param_1 + 0x8a1) == '\x01') &&
         ((*(byte *)(*(long *)(param_1 + 0x5b0) + 0x240) & 4) != 0)) {
        cVar5 = FUN_100485bb5(lVar10,*(long *)(param_1 + 0x5b0),0);
        uVar11 = 0;
        if (cVar5 != '\0') break;
      }
      if ((*(short *)(*(long *)(param_1 + 0x5b0) + 0x10) != 0x3f) ||
         ((*(long *)(lVar10 + 0xa0) - 1U < 0xfffffffffffffffc &&
          ((*(byte *)(lVar10 + 0xc6) & 0x80) != 0)))) {
        uVar9 = *(undefined8 *)((long)param_3 + 0xc);
        local_260 = *(undefined8 **)((long)param_3 + 0x2c);
        if ((*(char *)(param_1 + 0x89f) == '\x01') &&
           (lVar16 = FUN_10048a330(*(undefined8 *)(param_1 + 8),uVar9), lVar16 != 0)) {
          uVar9 = FUN_1002fa216(*(undefined8 *)(param_1 + 8));
          local_260 = (undefined8 *)0x0;
        }
        local_2c8 = *(long *)(*(long *)(param_1 + 0x5b0) + 0x78);
        puStack_2c0 = *(undefined4 **)(local_2c8 + 0x10);
        lVar16 = FUN_100489a1f(*(long *)(param_1 + 0x5b0),lVar10,&local_2c8,uVar9);
        if (lVar16 == 0) {
          uVar9 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar9,0x10);
          if (cVar5 != '\0') {
            local_258 = 0x8220202;
            uStack_254 = 0x7a0a90;
            local_250 = 1;
            uStack_24c = 0x822;
            uStack_24a = 0xfbaa;
            uStack_248 = 0x7b;
            uStack_246 = 1;
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_258,0x16);
          }
          FUN_1001782e9(0,0);
LAB_1006410c2:
          uVar11 = 0xffffff94;
          break;
        }
        if (((*(char *)((long)param_3 + 0x24) != '\0') && ((*(byte *)(lVar10 + 0xc5) & 4) != 0)) &&
           (*(long *)((long)param_3 + 0x34) != 0)) {
          FUN_100471a46(lVar10);
          *(undefined8 *)(*(long *)(lVar10 + 0x70) + 0x38) = *(undefined8 *)((long)param_3 + 0x34);
        }
        if (*(long *)((long)param_3 + 0x1c) != 0) {
          lVar10 = FUN_10048a26a(param_1 + 0x7c8);
          if (lVar10 == 0) {
            local_270 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(local_270,0x10);
            if (cVar5 != '\0') {
              local_258 = 0x8220202;
              uStack_254 = 0x7a168c;
              local_250 = 1;
              uStack_24c = 0x822;
              uStack_24a = 0x726f;
              uStack_248 = 0x7f;
              uStack_246 = 1;
              __os_log_error_impl(0x100000000,local_270,0x10,"%{public}s: (%{public}s)",&local_258,
                                  0x16);
            }
            cVar5 = FUN_1001782e9(0,0);
            if (cVar5 == '\0') goto LAB_100640ddc;
          }
          local_258 = (undefined4)uVar9;
          uStack_254 = (undefined4)((ulong)uVar9 >> 0x20);
          uVar9 = *(undefined8 *)(lVar10 + 0x28);
          local_250 = (undefined4)uVar9;
          uStack_24c = (undefined2)((ulong)uVar9 >> 0x20);
          uStack_24a = (undefined2)((ulong)uVar9 >> 0x30);
          FUN_1002bbb84(*(long *)(param_1 + 0x5b0) + 0x4a0,&local_258);
        }
LAB_100640ddc:
        *(undefined8 **)(lVar16 + 0x30) = local_260;
        *(undefined4 *)(lVar16 + 0x44) = *(undefined4 *)(param_3 + 5);
        if ((*(byte *)(param_1 + 0x18) & 0x20) != 0) {
          *(undefined4 *)(lVar16 + 0x40) = *(undefined4 *)(param_3 + 1);
        }
        FUN_1003a6c70(param_1 + 0x7c8,*(undefined8 *)(lVar16 + 0x28),lVar16);
        if (*(long *)(lVar16 + 0x28) != *(long *)((long)param_3 + 0xc)) {
          FUN_1003a6c70(param_1 + 0x7c8,*(long *)((long)param_3 + 0xc),lVar16);
        }
        *(long *)(param_1 + 0x5b8) = lVar16;
      }
    }
LAB_100640e35:
    uVar11 = 0;
    break;
  default:
    if (param_2 == 0x616d706c) {
      if (param_4 == 0) {
        lVar10 = *(long *)(param_1 + 0x5b0);
        if (lVar10 == 0) {
          uVar9 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar9,0x10);
          if (cVar5 != '\0') {
            local_258 = 0x8220202;
            uStack_254 = 0x7a0a90;
            local_250 = 1;
            uStack_24c = 0x822;
            uStack_24a = 0x7276;
            uStack_248 = 0x7f;
            uStack_246 = 1;
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_258,0x16);
          }
          FUN_1001782e9(0,1);
          uVar11 = 0xffffffe4;
        }
        else {
          if (*(char *)(param_1 + 0x8a0) == '\x01') {
            if (*(char *)(param_1 + 0x89e) == '\x01') {
              FUN_10056e2b4(param_1 + 0x5c8,&local_258,0);
              uVar9 = *(undefined8 *)(param_1 + 0x5c0);
              local_250 = (undefined4)uVar9;
              uStack_24c = (undefined2)((ulong)uVar9 >> 0x20);
              uStack_24a = (undefined2)((ulong)uVar9 >> 0x30);
              uVar9 = *(undefined8 *)(param_1 + 0x638);
              uStack_248 = (undefined2)uVar9;
              uStack_246 = (undefined4)((ulong)uVar9 >> 0x10);
              uStack_242 = (undefined2)((ulong)uVar9 >> 0x30);
              FUN_100581b2a(*(undefined8 *)(param_1 + 0x5b0),&local_258,0);
              uVar9 = *(undefined8 *)(param_1 + 0x5b0);
              bVar28 = true;
              if ((*(byte *)(*(long *)(param_1 + 8) + 0x1bb4) & 8) == 0) {
                cVar5 = FUN_100585dd7(uVar9);
                bVar28 = cVar5 != '\0';
              }
              FUN_1005821b3(uVar9,bVar28);
              lVar10 = *(long *)(param_1 + 0x5b0);
              if ((*(byte *)(lVar10 + 0x298) & 2) != 0) {
                FUN_100352633();
                lVar10 = *(long *)(param_1 + 0x5b0);
              }
            }
            FUN_100488970(lVar10);
          }
          if (*(long *)(param_1 + 0x5c0) != 0) {
            FUN_1001cf5c9();
            *(undefined8 *)(param_1 + 0x5c0) = 0;
          }
          uVar11 = uVar27;
          if (*(long *)(param_1 + 0x638) != 0) {
            FUN_100595344();
            *(undefined8 *)(param_1 + 0x638) = 0;
          }
        }
      }
      else {
        local_260 = param_3;
        if (param_4 != 0x170) {
          uVar9 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar9,0x10);
          if (cVar5 != '\0') {
            local_258 = 0x8220202;
            uStack_254 = 0x7a0a90;
            local_250 = 1;
            uStack_24c = 0x822;
            uStack_24a = 0x75ee;
            uStack_248 = 0x7f;
            uStack_246 = 1;
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_258,0x16);
          }
          FUN_1001782e9(0,0);
        }
        local_268 = 0;
        *(undefined2 *)(param_1 + 0x89e) = 0;
        *(undefined1 *)(param_1 + 0x8a0) = 0;
        *(undefined8 *)(param_1 + 0x638) = 0;
        *(undefined8 *)(param_1 + 0x730) = 0;
        *(undefined8 *)(param_1 + 0x5b0) = 0;
        *(undefined8 *)(param_1 + 0x5b8) = 0;
        *(undefined8 *)(param_1 + 0x5c0) = 0;
        FUN_1001b811c(param_1 + 0x738);
        FUN_1001b811c(param_1 + 0x748);
        *(undefined1 *)(param_1 + 0x758) = 0;
        *(undefined8 *)(param_1 + 0x5c8) = 0;
        *(undefined8 *)(param_1 + 0x5d0) = 0;
        *(undefined8 *)(param_1 + 0x5d8) = 0;
        *(undefined8 *)(param_1 + 0x5e0) = 0;
        *(undefined8 *)(param_1 + 0x5e8) = 0;
        *(undefined8 *)(param_1 + 0x5f0) = 0;
        *(undefined8 *)(param_1 + 0x5f8) = 0;
        *(undefined8 *)(param_1 + 0x600) = 0;
        *(undefined8 *)(param_1 + 0x608) = 0;
        *(undefined8 *)(param_1 + 0x610) = 0;
        *(undefined8 *)(param_1 + 0x618) = 0;
        *(undefined8 *)(param_1 + 0x620) = 0;
        *(undefined8 *)(param_1 + 0x628) = 0;
        *(undefined8 *)(param_1 + 0x630) = 0;
        if (*(long *)(param_1 + 0x7e0) != 0) {
          puVar26 = *(undefined8 **)(param_1 + 0x7d8);
          while (puVar26 != (undefined8 *)0x0) {
            puVar2 = (undefined8 *)*puVar26;
            operator_delete(puVar26);
            puVar26 = puVar2;
          }
          *(undefined8 *)(param_1 + 0x7d8) = 0;
          lVar10 = *(long *)(param_1 + 2000);
          if (lVar10 != 0) {
            lVar16 = 0;
            do {
              *(undefined8 *)(*(long *)(param_1 + 0x7c8) + lVar16 * 8) = 0;
              lVar16 = lVar16 + 1;
            } while (lVar10 != lVar16);
          }
          *(undefined8 *)(param_1 + 0x7e0) = 0;
        }
        puVar26 = local_260;
        _memcpy((void *)(param_1 + 0x440),local_260,0x170);
        bVar1 = *(byte *)((long)puVar26 + 0x4f);
        if (*(byte *)(puVar26 + 10) != 0) {
          bVar1 = *(byte *)(puVar26 + 10);
        }
        uVar11 = 0x1b59;
        if ((bVar1 & 0xfe) != 0x42) {
          lVar10 = *(long *)((long)puVar26 + 0x1e);
          if ((*(char *)(param_1 + 0x8a1) == '\x01') && (*(char *)((long)puVar26 + 0x2c) != '\0')) {
            lVar10 = FUN_10048604a(*(undefined8 *)(param_1 + 8));
            if (lVar10 != 0) {
              *(undefined1 *)(param_1 + 0x8a0) = 0;
              *(long *)(param_1 + 0x5b0) = lVar10;
              goto LAB_100640e35;
            }
            uVar9 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar9,0x10);
            if (cVar5 != '\0') {
              local_258 = 0x8220202;
              uStack_254 = 0x7a0a90;
              local_250 = 1;
              uStack_24c = 0x822;
              uStack_24a = 0x8d24;
              uStack_248 = 0x7b;
              uStack_246 = 1;
              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_258,0x16)
              ;
            }
            FUN_1001782e9(0,0);
            goto LAB_1006410c2;
          }
          if ((lVar10 == 0 || (*(byte *)(param_1 + 0x18) & 0x10) == 0) ||
             (lVar16 = FUN_10048b5ec(*(undefined8 *)(param_1 + 8),lVar10), puVar26 = local_260,
             lVar16 == 0)) {
            local_2b8 = (long *)0x0;
            uStack_2b0 = 0;
            local_2c8 = 0;
            puStack_2c0 = (undefined4 *)0x0;
            uStack_2aa = 0;
            uStack_2a8 = 0;
            uStack_2a4 = 0;
            plVar12 = (long *)0x0;
            local_2a0 = 0;
            local_29c = 0;
            uStack_29b = 0;
            local_298 = 0x3ff0000000000000;
            local_290 = 0;
            uStack_288 = 0;
            uStack_287 = 0;
            uStack_280 = 0;
            uStack_27f = 0;
            local_258 = 0x200001;
            if (*(long *)((long)puVar26 + 0x32) != 0) {
              local_2d8 = FUN_10048b810(param_1 + 0x7a0);
              if (local_2d8 == 0) {
                uVar9 = FUN_1001cc310();
                cVar5 = _os_log_type_enabled(uVar9,0x10);
                if (cVar5 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  local_4a = "position.parent != nullptr";
                  __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                FUN_1001782e9(0,0);
                plVar12 = (long *)0x0;
                puVar26 = local_260;
              }
              else {
                plVar12 = &local_2d8;
                local_2d0 = 0xffffffffffffffff;
                puVar26 = local_260;
              }
            }
            puStack_2c0 = &local_258;
            local_29c = *(undefined1 *)((long)puVar26 + 0x2c);
            lVar16 = *(long *)((long)puVar26 + 0x1e);
            uStack_2b0 = (undefined6)lVar16;
            uStack_2aa = (undefined2)((ulong)lVar16 >> 0x30);
            local_2a0 = *(undefined4 *)((long)puVar26 + 0x16);
            local_2b8 = plVar12;
            if (((lVar16 != 0 & *(byte *)(param_1 + 0x18) >> 3) == 1) &&
               (lVar16 = FUN_10048b5ec(*(undefined8 *)(param_1 + 8)), puVar26 = local_260,
               lVar16 != 0)) {
              uVar9 = FUN_1002fa216(*(undefined8 *)(param_1 + 8));
              uStack_2b0 = (undefined6)uVar9;
              uStack_2aa = (undefined2)((ulong)uVar9 >> 0x30);
              *(undefined1 *)(param_1 + 0x89f) = 1;
              puVar26 = local_260;
            }
            if ((*(byte *)(param_1 + 0x18) & 0x20) != 0) {
              uStack_2a8 = *(undefined4 *)((long)puVar26 + 0x1a);
            }
            uVar7 = FUN_1002e2674(*(undefined8 *)(param_1 + 8),*(undefined1 *)((long)puVar26 + 0x26)
                                  ,&local_2c8,&local_268);
            uVar27 = (ulong)uVar7;
            uVar11 = uVar27;
            if (uVar7 != 0xffffff80) {
              if (uVar7 == 0) {
                *(undefined1 *)(param_1 + 0x8a0) = 1;
                *(undefined4 *)(local_268 + 0x270) = *(undefined4 *)((long)local_260 + 0x8a);
                uVar7 = *(int *)((long)local_260 + 0x3a) - 0x2d;
                uVar8 = 0;
                if (uVar7 < 8) {
                  uVar8 = *(undefined4 *)(&DAT_10075fe68 + (ulong)uVar7 * 4);
                }
                *(undefined4 *)(local_268 + 0x430) = uVar8;
                uVar8 = FUN_1003832fc(*(undefined4 *)(local_260 + 0x18));
                *(undefined4 *)(local_268 + 0x434) = uVar8;
                *(undefined1 *)(local_268 + 0x440) = *(undefined1 *)((long)local_260 + 0xbc);
                *(uint *)(local_268 + 0x330) =
                     *(uint *)(local_268 + 0x330) & 0xfffffffe |
                     *(byte *)((long)local_260 + 0x2f) & 1;
                uVar8 = FUN_1003832fc(*(undefined2 *)((long)local_260 + 0x14));
                *(undefined4 *)(local_268 + 0x278) = uVar8;
                uVar7 = *(uint *)(local_268 + 0x240) & 0xff7fffff |
                        (*(byte *)((long)local_260 + 0x4e) & 1) << 0x17;
                *(uint *)(local_268 + 0x240) = uVar7;
                *(undefined1 *)(local_268 + 0x1d3) = *(undefined1 *)((long)local_260 + 0xd5);
                uVar14 = ((ushort)*(undefined4 *)(local_268 + 0x1d0) & 0xfffb) +
                         (*(byte *)((long)local_260 + 0xd4) & 1) * 4;
                *(ushort *)(local_268 + 0x1d0) = uVar14;
                uVar15 = (*(byte *)(local_260 + 0x1b) & 1) << 6;
                *(ushort *)(local_268 + 0x1d0) = uVar14 & 0xffbf | uVar15;
                uVar17 = (*(byte *)((long)local_260 + 0xd9) & 1) << 0xe;
                *(ushort *)(local_268 + 0x1d0) = uVar14 & 0xbfbf | uVar15 | uVar17;
                uVar14 = (uVar14 & 0xbfbd | uVar15 | uVar17) +
                         (*(byte *)((long)local_260 + 0xbd) & 1) * 2;
                *(ushort *)(local_268 + 0x1d0) = uVar14;
                uVar17 = *(byte *)((long)local_260 + 0xd6) & 1;
                *(ushort *)(local_268 + 0x1d0) = uVar14 & 0xfffe | uVar17;
                uVar18 = (*(byte *)((long)local_260 + 0xde) & 1) << 9;
                *(ushort *)(local_268 + 0x1d0) = uVar14 & 0xfdfe | uVar17 | uVar18;
                uVar19 = (*(byte *)((long)local_260 + 0xbe) & 1) << 10;
                *(ushort *)(local_268 + 0x1d0) = uVar14 & 0xf9fe | uVar17 | uVar18 | uVar19;
                uVar20 = (*(byte *)((long)local_260 + 0x12d) & 1) << 0xd;
                uVar15 = uVar14 & 0xd9fe | uVar17 | uVar18 | uVar19 | uVar20;
                *(ushort *)(local_268 + 0x1d0) = uVar15;
                *(undefined8 *)(local_268 + 0x1e8) = *(undefined8 *)((long)local_260 + 0x154);
                if (*(long *)((long)local_260 + 0xc4) == 0) {
                  *(ushort *)(local_268 + 0x1d0) = uVar15 | 0x800;
                }
                else {
                  *(ushort *)(local_268 + 0x1d0) =
                       uVar14 & 0xd1fe | uVar17 | uVar18 | uVar19 | uVar20 |
                       (*(byte *)((long)local_260 + 0xbf) & 1) << 0xb;
                  FUN_100488b31(local_268,*(undefined8 *)((long)local_260 + 0xc4),
                                *(undefined8 *)((long)local_260 + 0xcc));
                  uVar7 = *(uint *)(local_268 + 0x240);
                }
                *(undefined1 *)(local_268 + 0x438) = *(undefined1 *)((long)local_260 + 0xdf);
                *(undefined4 *)(local_268 + 0x43c) = *(undefined4 *)((long)local_260 + 0x144);
                *(undefined8 *)(local_268 + 0x220) = local_260[0x1c];
                uVar9 = local_260[0x1e];
                *(undefined8 *)(local_268 + 0x208) = local_260[0x1d];
                *(undefined8 *)(local_268 + 0x210) = uVar9;
                *(undefined8 *)(local_268 + 0x218) = local_260[0x1f];
                *(undefined4 *)(local_268 + 0x1fc) = *(undefined4 *)(local_260 + 0x26);
                *(undefined4 *)(local_268 + 0x230) = *(undefined4 *)(local_260 + 0x27);
                *(undefined4 *)(local_268 + 0x1f8) = *(undefined4 *)(local_260 + 0x20);
                *(undefined4 *)(local_268 + 0x228) = *(undefined4 *)((long)local_260 + 0x134);
                *(undefined4 *)(local_268 + 0x22c) = *(undefined4 *)(local_260 + 0x29);
                *(undefined8 *)(local_268 + 0x1e8) = *(undefined8 *)((long)local_260 + 0x154);
                uVar21 = (*(byte *)((long)local_260 + 0x51) & 1) << 0x19;
                *(uint *)(local_268 + 0x240) = uVar7 & 0xfdffffff | uVar21;
                uVar22 = (*(byte *)((long)local_260 + 0x104) & 1) << 0x10;
                *(uint *)(local_268 + 0x240) = uVar7 & 0xfdfeffff | uVar21 | uVar22;
                uVar23 = (*(byte *)((long)local_260 + 0x105) & 1) << 0x13;
                *(uint *)(local_268 + 0x240) = uVar7 & 0xfdf6ffff | uVar21 | uVar22 | uVar23;
                uVar24 = (*(byte *)((long)local_260 + 0x106) & 1) << 0x14;
                *(uint *)(local_268 + 0x240) =
                     uVar7 & 0xfde6ffff | uVar21 | uVar22 | uVar23 | uVar24;
                *(undefined8 *)(local_268 + 0x260) = local_260[0x23];
                *(ushort *)(local_268 + 0x10) = (ushort)bVar1;
                *(uint *)(local_268 + 0x240) =
                     uVar7 & 0xfde6feff | uVar21 | uVar22 | uVar23 | uVar24 |
                     (*(byte *)(local_260 + 6) & 1) << 8;
                *(uint *)(local_268 + 0x330) =
                     *(uint *)(local_268 + 0x330) & 0xfffff7ff |
                     (*(byte *)((long)local_260 + 0xba) & 1) << 0xb;
                uVar8 = *(undefined4 *)((long)local_260 + 0x42);
                uVar3 = *(undefined4 *)((long)local_260 + 0x46);
                uVar4 = *(undefined4 *)((long)local_260 + 0x4a);
                *(undefined4 *)(local_268 + 0x288) = *(undefined4 *)((long)local_260 + 0x3e);
                *(undefined4 *)(local_268 + 0x28c) = uVar8;
                *(undefined4 *)(local_268 + 0x290) = uVar3;
                *(undefined4 *)(local_268 + 0x294) = uVar4;
                *(undefined8 *)(local_268 + 0x390) = *(undefined8 *)((long)local_260 + 0xae);
                *(undefined4 *)(local_268 + 0x398) = *(undefined4 *)((long)local_260 + 0xb6);
                *(byte *)(local_268 + 0x298) =
                     *(byte *)(local_268 + 0x298) & 0xfd |
                     *(char *)((long)local_260 + 0x31) * '\x02' & 2U;
                FUN_1001f1970(&local_258,*(undefined8 *)((long)local_260 + 0x107),
                              *(undefined8 *)((long)local_260 + 0x10f));
                FUN_1001aaadc(local_268 + 0x4d8,&local_258);
                FUN_1001ab006(&local_258);
                *(undefined8 *)(local_268 + 0x4e0) = local_260[0x24];
                *(undefined4 *)(local_268 + 0x4e8) = *(undefined4 *)(local_260 + 0x25);
                cVar5 = *(char *)((long)local_260 + 300);
                cVar13 = '\0';
                if (cVar5 != '\x02') {
                  cVar13 = cVar5;
                }
                if ((*(byte *)(param_1 + 0x18) & 0x40) != 0) {
                  cVar13 = cVar5;
                }
                *(char *)(local_268 + 0x4ec) = cVar13;
                uVar14 = *(ushort *)(local_268 + 0x10);
                if (uVar14 < 0x19) {
                  if (uVar14 == 10) {
LAB_100641719:
                    uVar7 = FUN_1002b9206(local_268);
                    uVar27 = (ulong)uVar7;
                    uVar11 = uVar27;
                    if (uVar7 != 0xffffff80) {
                      if (uVar7 == 0) goto LAB_10064179f;
                      uVar9 = FUN_1001cc310();
                      cVar5 = _os_log_type_enabled(uVar9,0x10);
                      if (cVar5 != '\0') {
                        puVar25 = &local_258;
                        local_258 = 0x8220202;
                        uStack_254 = 0x7a0a90;
                        local_250 = 1;
                        uStack_24c = 0x400;
                        uStack_24a = (undefined2)uVar7;
                        uStack_248 = (undefined2)(uVar7 >> 0x10);
                        goto LAB_100640b7e;
                      }
                    }
                    break;
                  }
                  if (uVar14 == 0xf) {
                    *(byte *)(local_268 + 0x332) = *(byte *)(local_268 + 0x332) | 1;
                  }
                  else if (uVar14 == 0x14) {
LAB_100641709:
                    *(undefined8 *)(local_268 + 0x4f0) = *(undefined8 *)((long)local_260 + 0x52);
                  }
                }
                else if (uVar14 == 0x19) {
                  *(undefined2 *)(local_268 + 0x10) = 0;
                }
                else {
                  if (uVar14 == 0x1f) goto LAB_100641719;
                  if (uVar14 == 0x27) goto LAB_100641709;
                }
LAB_10064179f:
                FUN_1002f8572(param_1 + 0x7a0,*(undefined8 *)(local_268 + 0x60));
                if ((lVar10 != 0) && (*(long *)(local_268 + 0x60) != lVar10)) {
                  FUN_1002f8572(param_1 + 0x7a0,lVar10);
                }
                *(long *)(param_1 + 0x5b0) = local_268;
                goto LAB_100640e35;
              }
              uVar9 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar9,0x10);
              if (cVar5 != '\0') {
                puVar25 = &local_58;
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x400;
                local_4a = (char *)CONCAT44(local_4a._4_4_,uVar7);
                goto LAB_100640b7e;
              }
            }
          }
        }
      }
    }
    else if ((param_2 == 0x616d506c) && (param_4 == 0)) {
      *(undefined1 *)(param_1 + 0x89d) = 1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar11;
  }
LAB_100641a19:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

