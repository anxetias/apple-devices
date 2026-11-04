// name: FUN_1004625bd
// address: 1004625bd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1004625bd(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined2 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined2 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  char cVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  char *pcVar23;
  long lVar24;
  ulong *puVar25;
  long *plVar26;
  ulong *puVar27;
  long *plVar28;
  undefined8 *puVar29;
  undefined8 uVar30;
  ulong *puVar31;
  ulong uVar32;
  ulong *puVar33;
  ulong *puVar34;
  ulong uVar35;
  size_t sVar36;
  void *pvVar37;
  void *pvVar38;
  ulong uVar39;
  undefined4 *puVar40;
  uint *puVar41;
  long lVar42;
  void *pvVar43;
  void *pvVar44;
  float fVar45;
  undefined1 auVar46 [16];
  undefined8 local_2648;
  undefined8 local_2640;
  void *local_2638;
  void *local_2630;
  undefined1 local_2628 [16];
  long *local_2618;
  long *local_2610;
  undefined1 local_2608 [16];
  long local_25f8;
  ulong *local_25f0;
  long *local_25e8;
  uint *local_25e0;
  undefined1 *local_25d8 [132];
  ulong auStack_21b8 [132];
  undefined4 local_1d98;
  undefined2 uStack_1d94;
  undefined2 uStack_1d92;
  undefined4 local_1d90;
  undefined2 uStack_1d8c;
  undefined2 uStack_1d8a;
  undefined1 uStack_1d88;
  undefined1 uStack_1d87;
  undefined4 uStack_1d86;
  uint auStack_1978 [2];
  undefined4 local_1970;
  undefined1 local_1968 [1040];
  char local_1558;
  undefined4 local_1550;
  undefined2 local_154c;
  undefined4 local_1548;
  undefined1 local_1540 [1040];
  uint local_1130 [2];
  undefined4 local_1128;
  undefined1 local_1120 [1048];
  uint local_d08;
  undefined4 uStack_d04;
  undefined4 uStack_d00;
  undefined2 uStack_cfc;
  undefined2 uStack_cfa;
  undefined2 uStack_cf8;
  undefined2 uStack_cf6;
  undefined4 uStack_cf4;
  undefined8 uStack_cf0;
  undefined4 local_ce8;
  char local_8cf;
  undefined1 local_8ce [15];
  char cStack_8bf;
  byte local_8be;
  undefined4 local_8b8;
  undefined2 local_8b4;
  undefined4 local_8b0;
  undefined1 local_8a8 [1057];
  char local_487;
  undefined1 local_486 [15];
  char cStack_477;
  char local_476;
  undefined4 local_470;
  undefined2 local_46c;
  undefined4 local_468;
  undefined1 local_460 [1040];
  char local_50;
  undefined1 local_4f [15];
  char cStack_40;
  undefined7 uStack_3f;
  long local_38;
  
  cStack_40 = -0x2b;
  uStack_3f = 0x1004625;
  lVar21 = FUN_100108310();
  lVar21 = -lVar21;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *(undefined8 *)((long)&local_38 + lVar21) = 0x1004625ef;
  lVar22 = FUN_10045aeee();
  if (lVar22 == 0) {
    *(undefined8 *)((long)&local_38 + lVar21) = 0x100463363;
    uVar30 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar21) = 0x100463373;
    cVar19 = _os_log_type_enabled(uVar30,0x10);
    if (cVar19 != '\0') {
      local_1d98 = 0x8220202;
      uStack_1d94 = 0xa90;
      uStack_1d92 = 0x7a;
      local_1d90 = 1;
      uStack_1d8c = 0x822;
      uStack_1d8a = 0xd9b;
      uStack_1d88 = 0x7d;
      uStack_1d87 = 0;
      uStack_1d86 = 1;
      *(undefined8 *)((long)&local_38 + lVar21) = 0x100464002;
      __os_log_error_impl(0x100000000,uVar30,0x10,"%{public}s: (%{public}s)",&local_1d98,0x16);
    }
    *(undefined8 *)((long)&local_38 + lVar21) = 0x100463384;
    FUN_1001782e9(0,0);
  }
  else {
    *(undefined8 *)((long)&local_38 + lVar21) = 0x1004625fd;
    lVar22 = FUN_10045af60();
    if (lVar22 == 0) {
      *(undefined8 *)((long)&local_38 + lVar21) = 0x100463eaa;
      uVar30 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar21) = 0x100463eba;
      cVar19 = _os_log_type_enabled(uVar30,0x10);
      if (cVar19 != '\0') {
        local_1d98 = 0x8220202;
        uStack_1d94 = 0xa90;
        uStack_1d92 = 0x7a;
        local_1d90 = 1;
        uStack_1d8c = 0x822;
        uStack_1d8a = 0xde3;
        uStack_1d88 = 0x7d;
        uStack_1d87 = 0;
        uStack_1d86 = 1;
        *(undefined8 *)((long)&local_38 + lVar21) = 0x100464053;
        __os_log_error_impl(0x100000000,uVar30,0x10,"%{public}s: (%{public}s)",&local_1d98,0x16);
      }
      *(undefined8 *)((long)&local_38 + lVar21) = 0x100463ecb;
      FUN_1001782e9(0,0);
    }
    else {
      *(undefined8 *)((long)&local_38 + lVar21) = 0x10046260b;
      lVar22 = FUN_10045afd2();
      if (lVar22 != 0) {
        plVar28 = *(long **)(param_1 + 0x60);
        local_25f8 = param_1;
        if (plVar28 != (long *)0x0) {
          local_2610 = (long *)(param_1 + 0x88);
          do {
            uStack_cf8 = 0;
            uStack_cf6 = 0;
            uStack_cf4 = 0;
            uStack_cf0 = 0;
            local_d08 = 0;
            uStack_d04 = 0;
            uStack_d00 = 0;
            uStack_cfc = 0;
            uStack_cfa = 0;
            local_ce8 = 0x3f800000;
            puVar33 = (ulong *)plVar28[4];
            local_25f0 = (ulong *)plVar28[5];
            local_2618 = plVar28;
            if (puVar33 != local_25f0) {
              do {
                *(undefined8 *)((long)&local_38 + lVar21) = 0x100462682;
                FUN_10017d520(local_2608,puVar33);
                *(undefined8 *)((long)&local_38 + lVar21) = 0x100462698;
                FUN_1001b7b04(&local_1d98,"IMG_");
                *(undefined8 *)((long)&local_38 + lVar21) = 0x1004626ac;
                cVar19 = FUN_1001ba114(local_2608,&local_1d98,0x1b1);
                *(undefined8 *)((long)&local_38 + lVar21) = 0x1004626b6;
                FUN_1001b7a50(&local_1d98);
                if (cVar19 != '\0') {
                  *(undefined8 *)((long)&local_38 + lVar21) = 0x1004626d4;
                  FUN_1001b7a5c(&local_1d98,local_2608);
                  *(undefined8 *)((long)&local_38 + lVar21) = 0x1004626eb;
                  FUN_1001ba6e0(local_25d8,&local_1d98,4,0xffffffffffffffff);
                  *(undefined8 *)((long)&local_38 + lVar21) = 0x1004626f6;
                  FUN_1001b80b2(&local_1d98,local_25d8);
                  *(undefined8 *)((long)&local_38 + lVar21) = 0x1004626fe;
                  FUN_1001b7a50(local_25d8);
                  *(undefined8 *)((long)&local_38 + lVar21) = 0x100462706;
                  cVar19 = FUN_1001b8428(&local_1d98);
                  if (cVar19 == '\0') {
                    *(undefined8 *)((long)&local_38 + lVar21) = 0x100462724;
                    FUN_1001ba6e0(local_25d8,&local_1d98,0,1);
                    *(undefined8 *)((long)&local_38 + lVar21) = 0x10046272c;
                    pcVar23 = (char *)FUN_1001b83ae(local_25d8);
                    if ((long)*pcVar23 < 0) {
                      *(undefined8 *)((long)&local_38 + lVar21) = 0x100462763;
                      FUN_1001b7a50(local_25d8);
LAB_100462763:
                      *(undefined8 *)((long)&local_38 + lVar21) = 0x100462784;
                      FUN_1001ba6e0(local_25d8,&local_1d98,1,0xffffffffffffffff);
                      *(undefined8 *)((long)&local_38 + lVar21) = 0x10046278f;
                      FUN_1001b80b2(&local_1d98,local_25d8);
                      *(undefined8 *)((long)&local_38 + lVar21) = 0x100462797;
                      FUN_1001b7a50(local_25d8);
                    }
                    else {
                      uVar1 = *(uint *)(PTR___DefaultRuneLocale_10082cae8 +
                                       (long)*pcVar23 * 4 + 0x3c);
                      *(undefined8 *)((long)&local_38 + lVar21) = 0x10046274c;
                      FUN_1001b7a50(local_25d8);
                      if ((uVar1 >> 10 & 1) == 0) goto LAB_100462763;
                    }
                    *(undefined8 *)((long)&local_38 + lVar21) = 0x1004627aa;
                    FUN_1001b7b04(local_2628,".");
                    local_2648 = 0;
                    *(undefined8 *)((long)&local_38 + lVar21) = 0x1004627c4;
                    local_2640 = FUN_1001b8378(&local_1d98);
                    *(undefined8 *)((long)&local_38 + lVar21) = 0x1004627f1;
                    cVar19 = FUN_1001ba440(&local_1d98,local_2628,&local_2648,local_25d8,0x1b1);
                    *(undefined8 *)((long)&local_38 + lVar21) = 0x1004627fb;
                    FUN_1001b7a50(local_2628);
                    if (cVar19 != '\0') {
                      *(undefined8 *)((long)&local_38 + lVar21) = 0x10046281a;
                      FUN_1001ba6e0(local_2628,&local_1d98,0,local_25d8[0]);
                      *(undefined8 *)((long)&local_38 + lVar21) = 0x100462825;
                      FUN_1001b80b2(&local_1d98,local_2628);
                      *(undefined8 *)((long)&local_38 + lVar21) = 0x10046282d;
                      FUN_1001b7a50(local_2628);
                      *(undefined8 *)((long)&local_38 + lVar21) = 0x100462835;
                      FUN_1001ace88(local_2628);
                      *(undefined8 *)((long)&local_38 + lVar21) = 0x100462844;
                      cVar19 = FUN_1001bae7e(&local_1d98,local_2628);
                      *(undefined8 *)((long)&local_38 + lVar21) = 0x10046284e;
                      FUN_1001ace7e(local_2628);
                      if (cVar19 == '\0') {
                        *(undefined8 *)((long)&local_38 + lVar21) = 0x100462865;
                        FUN_1001b8172(local_2608,&local_1d98);
                      }
                    }
                  }
                  *(undefined8 *)((long)&local_38 + lVar21) = 0x100462871;
                  FUN_1001b7a50(&local_1d98);
                }
                *(undefined8 *)((long)&local_38 + lVar21) = 0x100462884;
                lVar22 = FUN_1004117e4(&local_d08,local_2608);
                if (lVar22 == 0) {
                  *(undefined8 *)((long)&local_38 + lVar21) = 0x1004628d0;
                  _memcpy(&local_1d98,puVar33,0x420);
                  *(undefined8 *)((long)&local_38 + lVar21) = 0x1004628da;
                  pvVar38 = operator_new(0x420);
                  *(undefined8 *)((long)&local_38 + lVar21) = 0x1004628ed;
                  _memcpy(pvVar38,&local_1d98,0x420);
                  local_25d8[0] = local_2608;
                  *(undefined8 *)((long)&local_38 + lVar21) = 0x10046290e;
                  lVar22 = FUN_1004649f0(&local_d08,local_25d8[0],local_25d8);
                  pvVar44 = *(void **)(lVar22 + 0x20);
                  if (pvVar44 != (void *)0x0) {
                    *(void **)(lVar22 + 0x28) = pvVar44;
                    *(undefined8 *)((long)&local_38 + lVar21) = 0x10046292a;
                    operator_delete(pvVar44);
                    *(undefined8 *)(lVar22 + 0x20) = 0;
                    *(undefined8 *)(lVar22 + 0x28) = 0;
                    *(undefined8 *)(lVar22 + 0x30) = 0;
                  }
                  *(void **)(lVar22 + 0x20) = pvVar38;
                  *(long *)(lVar22 + 0x28) = (long)pvVar38 + 0x420;
                  *(long *)(lVar22 + 0x30) = (long)pvVar38 + 0x420;
                }
                else {
                  pvVar44 = *(void **)(lVar22 + 0x28);
                  if (pvVar44 < *(void **)(lVar22 + 0x30)) {
                    *(undefined8 *)((long)&local_38 + lVar21) = 0x1004628ad;
                    _memcpy(pvVar44,puVar33,0x420);
                    lVar42 = (long)pvVar44 + 0x420;
                  }
                  else {
                    lVar42 = (long)pvVar44 - *(long *)(lVar22 + 0x20) >> 5;
                    uVar32 = lVar42 * 0xf83e0f83e0f83e1 + 1;
                    if (0x3e0f83e0f83e0f < uVar32) {
                    /* WARNING: Subroutine does not return */
                      *(undefined **)((long)&local_38 + lVar21) = &UNK_100464102;
                      FUN_10022a8ca();
                    }
                    lVar24 = (long)*(void **)(lVar22 + 0x30) - *(long *)(lVar22 + 0x20) >> 5;
                    uVar35 = lVar24 * 0x1f07c1f07c1f07c2;
                    if (uVar32 < uVar35) {
                      uVar32 = uVar35;
                    }
                    if (0x1f07c1f07c1f06 < (ulong)(lVar24 * 0xf83e0f83e0f83e1)) {
                      uVar32 = 0x3e0f83e0f83e0f;
                    }
                    if (uVar32 == 0) {
                      auVar46 = ZEXT816(0);
                    }
                    else {
                      *(undefined8 *)((long)&local_38 + lVar21) = 0x1004629c1;
                      auVar46 = FUN_10022a8da(lVar22 + 0x30);
                    }
                    pvVar38 = (void *)(lVar42 * 0x20 + auVar46._0_8_);
                    *(undefined8 *)((long)&local_38 + lVar21) = 0x1004629eb;
                    _memcpy(pvVar38,puVar33,0x420);
                    lVar42 = (long)pvVar38 + 0x420;
                    pvVar44 = *(void **)(lVar22 + 0x20);
                    sVar36 = *(long *)(lVar22 + 0x28) - (long)pvVar44;
                    pvVar38 = (void *)((long)pvVar38 - sVar36);
                    *(undefined8 *)((long)&local_38 + lVar21) = 0x100462a0a;
                    _memcpy(pvVar38,pvVar44,sVar36);
                    pvVar44 = *(void **)(lVar22 + 0x20);
                    *(void **)(lVar22 + 0x20) = pvVar38;
                    *(long *)(lVar22 + 0x28) = lVar42;
                    *(long *)(lVar22 + 0x30) = auVar46._8_8_ * 0x420 + auVar46._0_8_;
                    param_1 = local_25f8;
                    if (pvVar44 != (void *)0x0) {
                      *(undefined8 *)((long)&local_38 + lVar21) = 0x100462a24;
                      operator_delete(pvVar44);
                      param_1 = local_25f8;
                    }
                  }
                  *(long *)(lVar22 + 0x28) = lVar42;
                }
                *(undefined8 *)((long)&local_38 + lVar21) = 0x100462a3e;
                FUN_1001b7a50(local_2608);
                puVar33 = puVar33 + 0x84;
              } while (puVar33 != local_25f0);
            }
            plVar28 = local_2618 + 2;
            *(undefined8 *)((long)&local_38 + lVar21) = 0x100462a65;
            puVar25 = (ulong *)FUN_1001bd420(plVar28);
            puVar33 = *(ulong **)(param_1 + 0x80);
            if (puVar33 != (ulong *)0x0) {
              uVar32 = (long)puVar33 - ((ulong)puVar33 >> 1 & 0x5555555555555555);
              uVar32 = (uVar32 >> 2 & 0x3333333333333333) + (uVar32 & 0x3333333333333333);
              uVar32 = ((uVar32 >> 4) + uVar32 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
              if (uVar32 >> 0x38 < 2) {
                local_25f0 = (ulong *)((long)puVar33 - 1U & (ulong)puVar25);
              }
              else {
                local_25f0 = puVar25;
                if (puVar33 <= puVar25) {
                  local_25f0 = (ulong *)((ulong)puVar25 % (ulong)puVar33);
                }
              }
              puVar29 = *(undefined8 **)(*(long *)(param_1 + 0x78) + (long)local_25f0 * 8);
              if ((puVar29 != (undefined8 *)0x0) &&
                 (plVar26 = (long *)*puVar29, plVar26 != (long *)0x0)) {
                do {
                  puVar34 = (ulong *)plVar26[1];
                  local_25e8 = plVar26;
                  if (puVar34 == puVar25) {
                    *(undefined8 *)((long)&local_38 + lVar21) = 0x100462b32;
                    iVar20 = FUN_1001b9c66(plVar26 + 2,plVar28);
                    param_1 = local_25f8;
                    if (iVar20 == 0) goto LAB_100462ec5;
                  }
                  else {
                    if ((byte)(uVar32 >> 0x38) < 2) {
                      puVar34 = (ulong *)((ulong)puVar34 & (long)puVar33 - 1U);
                    }
                    else if (puVar33 <= puVar34) {
                      puVar34 = (ulong *)((ulong)puVar34 % (ulong)puVar33);
                    }
                    param_1 = local_25f8;
                    if (puVar34 != local_25f0) break;
                  }
                  plVar26 = (long *)*local_25e8;
                  param_1 = local_25f8;
                } while (plVar26 != (long *)0x0);
              }
            }
            *(undefined8 *)((long)&local_38 + lVar21) = 0x100462b7c;
            plVar26 = operator_new(0x48);
            *plVar26 = 0;
            plVar26[1] = (long)puVar25;
            *(undefined8 *)((long)&local_38 + lVar21) = 0x100462b99;
            FUN_1001b7a5c(plVar26 + 2,plVar28);
            plVar26[6] = 0;
            plVar26[7] = 0;
            plVar26[4] = 0;
            plVar26[5] = 0;
            *(undefined4 *)(plVar26 + 8) = 0x3f800000;
            fVar45 = (float)(*(long *)(param_1 + 0x90) + 1);
            local_25e8 = plVar26;
            if ((puVar33 == (ulong *)0x0) ||
               (puVar34 = local_25f0, (float)puVar33 * *(float *)(param_1 + 0x98) < fVar45)) {
              uVar32 = 1;
              if ((ulong *)0x2 < puVar33) {
                uVar32 = (ulong)(((ulong)puVar33 & (long)puVar33 - 1U) != 0);
              }
              auVar46 = ZEXT416((uint)(fVar45 / *(float *)(param_1 + 0x98)));
              auVar46 = roundss(auVar46,auVar46,10);
              uVar35 = (ulong)auVar46._0_4_;
              puVar34 = (ulong *)((long)puVar33 * 2 | uVar32);
              puVar33 = (ulong *)((long)(auVar46._0_4_ - _DAT_10070844c) & (long)uVar35 >> 0x3f |
                                 uVar35);
              if (puVar33 < puVar34) {
                puVar33 = puVar34;
              }
              puVar34 = (ulong *)0x2;
              if ((puVar33 != (ulong *)0x1) &&
                 (puVar34 = puVar33, ((ulong)puVar33 & (long)puVar33 - 1U) != 0)) {
                *(undefined8 *)((long)&local_38 + lVar21) = 0x100462c98;
                puVar34 = (ulong *)std::__next_prime((ulong)puVar33);
              }
              puVar33 = *(ulong **)(param_1 + 0x80);
              if (puVar33 < puVar34) {
LAB_100462cae:
                puVar33 = puVar34;
                if ((ulong)puVar33 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                  *(undefined **)((long)&local_38 + lVar21) = &UNK_100464123;
                  FUN_1001082d0();
                }
                *(undefined8 *)((long)&local_38 + lVar21) = 0x100462cc8;
                pvVar38 = operator_new((long)puVar33 * 8);
                pvVar44 = *(void **)(param_1 + 0x78);
                *(void **)(param_1 + 0x78) = pvVar38;
                if (pvVar44 != (void *)0x0) {
                  *(undefined8 *)((long)&local_38 + lVar21) = 0x100462cda;
                  operator_delete(pvVar44);
                }
                *(ulong **)(param_1 + 0x80) = puVar33;
                puVar34 = (ulong *)0x0;
                do {
                  *(undefined8 *)(*(long *)(param_1 + 0x78) + (long)puVar34 * 8) = 0;
                  puVar34 = (ulong *)((long)puVar34 + 1);
                } while (puVar33 != puVar34);
                plVar28 = (long *)*local_2610;
                if (plVar28 != (long *)0x0) {
                  puVar34 = (ulong *)plVar28[1];
                  uVar32 = (long)puVar33 - ((ulong)puVar33 >> 1 & 0x5555555555555555);
                  uVar32 = (uVar32 >> 2 & 0x3333333333333333) + (uVar32 & 0x3333333333333333);
                  uVar32 = ((uVar32 >> 4) + uVar32 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
                  if (uVar32 >> 0x38 < 2) {
                    puVar34 = (ulong *)((ulong)puVar34 & (long)puVar33 - 1U);
                  }
                  else if (puVar33 <= puVar34) {
                    puVar34 = (ulong *)((ulong)puVar34 % (ulong)puVar33);
                  }
                  *(long **)(*(long *)(param_1 + 0x78) + (long)puVar34 * 8) = local_2610;
                  plVar26 = (long *)*plVar28;
                  if (plVar26 != (long *)0x0) {
                    do {
                      puVar27 = (ulong *)plVar26[1];
                      if ((byte)(uVar32 >> 0x38) < 2) {
                        puVar27 = (ulong *)((ulong)puVar27 & (long)puVar33 - 1U);
                      }
                      else if (puVar33 <= puVar27) {
                        puVar27 = (ulong *)((ulong)puVar27 % (ulong)puVar33);
                      }
                      if (puVar27 != puVar34) {
                        if (*(long *)(*(long *)(param_1 + 0x78) + (long)puVar27 * 8) == 0) {
                          *(long **)(*(long *)(param_1 + 0x78) + (long)puVar27 * 8) = plVar28;
                          puVar34 = puVar27;
                        }
                        else {
                          *plVar28 = *plVar26;
                          *plVar26 = **(long **)(*(long *)(param_1 + 0x78) + (long)puVar27 * 8);
                          **(undefined8 **)(*(long *)(param_1 + 0x78) + (long)puVar27 * 8) = plVar26
                          ;
                          plVar26 = plVar28;
                        }
                      }
                      plVar28 = plVar26;
                      plVar26 = (long *)*plVar28;
                    } while (plVar26 != (long *)0x0);
                  }
                }
              }
              else if (puVar34 < puVar33) {
                auVar46 = ZEXT416((uint)((float)*(ulong *)(param_1 + 0x90) /
                                        *(float *)(param_1 + 0x98)));
                auVar46 = roundss(auVar46,auVar46,10);
                uVar32 = (ulong)auVar46._0_4_;
                puVar27 = (ulong *)((long)(auVar46._0_4_ - _DAT_10070844c) & (long)uVar32 >> 0x3f |
                                   uVar32);
                if ((puVar33 < (ulong *)0x3) ||
                   (uVar32 = (long)puVar33 - ((ulong)puVar33 >> 1 & 0x5555555555555555),
                   uVar32 = (uVar32 >> 2 & 0x3333333333333333) + (uVar32 & 0x3333333333333333),
                   1 < (byte)(((uVar32 >> 4) + uVar32 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                             0x38))) {
                  *(undefined8 *)((long)&local_38 + lVar21) = 0x100463312;
                  puVar31 = (ulong *)std::__next_prime((ulong)puVar27);
                }
                else {
                  lVar22 = 0x3f;
                  if ((long)puVar27 - 1U != 0) {
                    for (; (long)puVar27 - 1U >> lVar22 == 0; lVar22 = lVar22 + -1) {
                    }
                  }
                  puVar31 = (ulong *)(1L << (-((byte)lVar22 ^ 0x3f) & 0x3f));
                  if (puVar27 < (ulong *)0x2) {
                    puVar31 = puVar27;
                  }
                }
                if (puVar31 < puVar34) {
                  puVar31 = puVar34;
                }
                if (puVar31 < puVar33) {
                  puVar34 = puVar31;
                  if (puVar31 != (ulong *)0x0) goto LAB_100462cae;
                  pvVar44 = *(void **)(param_1 + 0x78);
                  *(undefined8 *)(param_1 + 0x78) = 0;
                  if (pvVar44 != (void *)0x0) {
                    *(undefined8 *)((long)&local_38 + lVar21) = 0x100463340;
                    operator_delete(pvVar44);
                  }
                  *(undefined8 *)(param_1 + 0x80) = 0;
                  puVar33 = (ulong *)0x0;
                }
                else {
                  puVar33 = *(ulong **)(param_1 + 0x80);
                }
              }
              if (((ulong)puVar33 & (long)puVar33 - 1U) == 0) {
                puVar34 = (ulong *)((ulong)puVar25 & (long)puVar33 - 1U);
              }
              else {
                puVar34 = puVar25;
                if (puVar33 <= puVar25) {
                  puVar34 = (ulong *)((ulong)puVar25 % (ulong)puVar33);
                }
              }
            }
            lVar22 = *(long *)(param_1 + 0x78);
            plVar28 = *(long **)(lVar22 + (long)puVar34 * 8);
            if (plVar28 == (long *)0x0) {
              *local_25e8 = *local_2610;
              *local_2610 = (long)local_25e8;
              *(long **)(lVar22 + (long)puVar34 * 8) = local_2610;
              if (*local_25e8 != 0) {
                puVar25 = *(ulong **)(*local_25e8 + 8);
                if (((ulong)puVar33 & (long)puVar33 - 1U) == 0) {
                  puVar25 = (ulong *)((ulong)puVar25 & (long)puVar33 - 1U);
                }
                else if (puVar33 <= puVar25) {
                  puVar25 = (ulong *)((ulong)puVar25 % (ulong)puVar33);
                }
                plVar28 = (long *)((long)puVar25 * 8 + *(long *)(param_1 + 0x78));
                goto LAB_100462ebb;
              }
            }
            else {
              *local_25e8 = *plVar28;
LAB_100462ebb:
              *plVar28 = (long)local_25e8;
            }
            *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + 1;
LAB_100462ec5:
            puVar41 = (uint *)(local_25e8 + 4);
            if (puVar41 != &local_d08) {
              *(undefined4 *)(local_25e8 + 8) = local_ce8;
              puVar33 = (ulong *)CONCAT44(uStack_cf4,CONCAT22(uStack_cf6,uStack_cf8));
              lVar22 = local_25e8[5];
              local_25e0 = puVar41;
              if (lVar22 != 0) {
                lVar42 = 0;
                do {
                  *(undefined8 *)(*(long *)puVar41 + lVar42 * 8) = 0;
                  lVar42 = lVar42 + 1;
                } while (lVar22 != lVar42);
                puVar25 = (ulong *)local_25e8[6];
                local_25e8[6] = 0;
                local_25e8[7] = 0;
                puVar34 = puVar25;
                if (puVar33 != (ulong *)0x0 && puVar25 != (ulong *)0x0) {
                  do {
                    *(undefined8 *)((long)&local_38 + lVar21) = 0x100462f4d;
                    FUN_1001b8172(puVar34 + 2,puVar33 + 2);
                    lVar22 = local_25f8;
                    local_25f0 = puVar33;
                    if (puVar34 != puVar33) {
                      pvVar44 = (void *)puVar33[4];
                      pvVar38 = (void *)puVar33[5];
                      uVar35 = (long)pvVar38 - (long)pvVar44;
                      pvVar37 = (void *)puVar34[4];
                      uVar32 = puVar34[6];
                      if (uVar32 - (long)pvVar37 < uVar35) {
                        puVar33 = puVar34 + 4;
                        local_2638 = pvVar44;
                        local_2630 = pvVar38;
                        if (pvVar37 != (void *)0x0) {
                          puVar34[5] = (ulong)pvVar37;
                          *(undefined8 *)((long)&local_38 + lVar21) = 0x100462fac;
                          operator_delete(pvVar37);
                          *puVar33 = 0;
                          puVar34[5] = 0;
                          puVar34[6] = 0;
                          uVar32 = 0;
                        }
                        uVar39 = ((long)uVar35 >> 5) * 0xf83e0f83e0f83e1;
                        if (0x3e0f83e0f83e0f < uVar39) {
                    /* WARNING: Subroutine does not return */
                          *(undefined **)((long)&local_38 + lVar21) = &UNK_100464119;
                          FUN_10022a8ca(puVar33);
                        }
                        uVar5 = ((long)uVar32 >> 5) * 0x1f07c1f07c1f07c2;
                        if (uVar39 < uVar5) {
                          uVar39 = uVar5;
                        }
                        if (0x1f07c1f07c1f06 < (ulong)(((long)uVar32 >> 5) * 0xf83e0f83e0f83e1)) {
                          uVar39 = 0x3e0f83e0f83e0f;
                        }
                        *(undefined8 *)((long)&local_38 + lVar21) = 0x100463011;
                        FUN_10045f8a2(puVar33,uVar39);
                        puVar41 = local_25e0;
                        pvVar44 = (void *)puVar34[5];
                        if (local_2630 != local_2638) {
                          *(undefined8 *)((long)&local_38 + lVar21) = 0x100463037;
                          _memmove(pvVar44,local_2638,uVar35);
                        }
                        puVar34[5] = (long)pvVar44 + uVar35;
                      }
                      else {
                        pvVar43 = (void *)puVar34[5];
                        uVar32 = (long)pvVar43 - (long)pvVar37;
                        if (uVar32 < uVar35) {
                          if (pvVar43 != pvVar37) {
                            *(undefined8 *)((long)&local_38 + lVar21) = 0x100463065;
                            _memmove(pvVar37,pvVar44,uVar32);
                            pvVar43 = (void *)puVar34[5];
                          }
                          sVar36 = (long)pvVar38 - (long)((long)pvVar44 + uVar32);
                          if (sVar36 != 0) {
                            *(undefined8 *)((long)&local_38 + lVar21) = 0x100463082;
                            _memmove(pvVar43,(void *)((long)pvVar44 + uVar32),sVar36);
                          }
                          puVar34[5] = (long)pvVar43 + sVar36;
                          puVar41 = local_25e0;
                          param_1 = local_25f8;
                        }
                        else {
                          if (pvVar38 != pvVar44) {
                            *(undefined8 *)((long)&local_38 + lVar21) = 0x1004630ac;
                            _memmove(pvVar37,pvVar44,uVar35);
                          }
                          puVar34[5] = (long)pvVar37 + uVar35;
                          puVar41 = local_25e0;
                          param_1 = lVar22;
                        }
                      }
                    }
                    puVar25 = (ulong *)*puVar34;
                    *(undefined8 *)((long)&local_38 + lVar21) = 0x1004630c8;
                    FUN_1004650a4(puVar41,puVar34);
                    puVar33 = (ulong *)*local_25f0;
                  } while ((puVar25 != (ulong *)0x0) && (puVar34 = puVar25, puVar33 != (ulong *)0x0)
                          );
                }
                *(undefined8 *)((long)&local_38 + lVar21) = 0x1004630f0;
                FUN_100465038(puVar25);
              }
              if (puVar33 != (ulong *)0x0) {
                local_25e8 = local_25e8 + 6;
                do {
                  plVar28 = local_25e8;
                  *(undefined8 *)((long)&local_38 + lVar21) = 0x100463118;
                  puVar29 = operator_new(0x38);
                  local_1d98 = SUB84(puVar29,0);
                  uStack_1d94 = (undefined2)((ulong)puVar29 >> 0x20);
                  uStack_1d92 = (undefined2)((ulong)puVar29 >> 0x30);
                  local_1d90 = SUB84(plVar28,0);
                  uStack_1d8c = (undefined2)((ulong)plVar28 >> 0x20);
                  uStack_1d8a = (undefined2)((ulong)plVar28 >> 0x30);
                  uStack_1d88 = 0;
                  *puVar29 = 0;
                  puVar29[1] = 0;
                  *(undefined8 *)((long)&local_38 + lVar21) = 0x100463147;
                  FUN_1001b7a5c(puVar29 + 2,puVar33 + 2);
                  puVar29[4] = 0;
                  puVar29[5] = 0;
                  puVar29[6] = 0;
                  pvVar44 = (void *)puVar33[4];
                  sVar36 = puVar33[5] - (long)pvVar44;
                  local_25f0 = puVar33;
                  if (sVar36 != 0) {
                    *(undefined8 *)((long)&local_38 + lVar21) = 0x100463193;
                    FUN_10045f8a2(puVar29 + 4,((long)sVar36 >> 5) * 0xf83e0f83e0f83e1);
                    pvVar38 = (void *)puVar29[5];
                    *(undefined8 *)((long)&local_38 + lVar21) = 0x1004631a5;
                    _memmove(pvVar38,pvVar44,sVar36);
                    puVar29[5] = (long)pvVar38 + sVar36;
                    param_1 = local_25f8;
                  }
                  uStack_1d88 = 1;
                  *(undefined8 *)((long)&local_38 + lVar21) = 0x1004631c2;
                  uVar30 = FUN_1001bd420(puVar29 + 2);
                  puVar33 = local_25f0;
                  puVar29[1] = uVar30;
                  *(undefined8 *)((long)&local_38 + lVar21) = 0x1004631dc;
                  FUN_1004650a4(local_25e0,puVar29);
                  puVar33 = (ulong *)*puVar33;
                } while (puVar33 != (ulong *)0x0);
              }
            }
            *(undefined8 *)((long)&local_38 + lVar21) = 0x1004631fc;
            FUN_100465038(CONCAT44(uStack_cf4,CONCAT22(uStack_cf6,uStack_cf8)));
            pvVar44 = (void *)CONCAT44(uStack_d04,local_d08);
            local_d08 = 0;
            uStack_d04 = 0;
            if (pvVar44 != (void *)0x0) {
              *(undefined8 *)((long)&local_38 + lVar21) = 0x100463218;
              operator_delete(pvVar44);
            }
            plVar28 = (long *)*local_2618;
          } while (plVar28 != (long *)0x0);
        }
        local_25e8 = *(long **)(param_1 + 0x88);
        if (local_25e8 != (long *)0x0) {
          local_25f0 = auStack_21b8;
          local_25e0 = auStack_1978;
          do {
            puVar29 = (undefined8 *)local_25e8[6];
            while( true ) {
              if (puVar29 == (undefined8 *)0x0) break;
              local_d08 = local_d08 & 0xffffff00;
              uStack_d00 = 0;
              uStack_cfc = 0;
              uStack_cf8 = 0;
              uStack_cf6 = 0;
              local_8b8 = 0;
              local_8b4 = 0;
              local_8b0 = 0;
              local_470 = 0;
              local_46c = 0;
              local_468 = 0;
              *(undefined8 *)((long)&local_38 + lVar21) = 0x10046342e;
              ___bzero(&uStack_cf0,0x433);
              *(undefined8 *)((long)&local_38 + lVar21) = 0x10046343b;
              ___bzero(local_8a8,0x433);
              *(undefined8 *)((long)&local_38 + lVar21) = 0x10046344c;
              ___bzero(local_460,0x421);
              uVar30 = puVar29[4];
              uVar3 = puVar29[5];
              *(undefined8 *)((long)&local_38 + lVar21) = 0x100463460;
              FUN_100458908(uVar30,uVar3,&local_d08);
              local_1d98 = 0;
              uStack_1d94 = 0;
              local_1d90 = 0;
              local_1970 = 0;
              *(undefined8 *)((long)&local_38 + lVar21) = 0x100463491;
              ___bzero(&uStack_1d88,0x416);
              local_1550 = 0;
              local_154c = 0;
              local_1548 = 0;
              local_1128 = 0;
              *(undefined8 *)((long)&local_38 + lVar21) = 0x1004634bf;
              ___bzero(local_1968,0x411);
              *(undefined8 *)((long)&local_38 + lVar21) = 0x1004634d0;
              ___bzero(local_1540,0x416);
              *(undefined8 *)((long)&local_38 + lVar21) = 0x1004634e1;
              ___bzero(local_1120,0x410);
              if ((char)local_d08 == '\x01') {
                if ((local_8be & 1) == 0) {
                  if (local_476 != '\0') {
                    *(undefined8 *)((long)&local_38 + lVar21) = 0x100463610;
                    FUN_10045b152(&local_d08,&local_1d98);
                  }
                }
                else if (local_476 == '\0') {
                  *(undefined8 *)((long)&local_38 + lVar21) = 0x100463624;
                  cVar19 = FUN_10045b044(&local_d08,&local_1d98);
LAB_100463624:
                  if (cVar19 == '\0') {
                    *(undefined8 *)((long)&local_38 + lVar21) = 0x10046363b;
                    FUN_10045b1d8(&local_d08,&local_1d98);
                  }
                }
                else if (((local_8cf == '\x01') && (local_487 == '\x01')) && (local_50 == '\x01')) {
                  if ((cStack_8bf == cStack_477) &&
                     (auVar46[0xf] = cStack_8bf, auVar46._0_15_ = local_8ce,
                     auVar8[0xf] = cStack_477, auVar8._0_15_ = local_486, auVar8 == auVar46)) {
                    if ((cStack_8bf == cStack_40) &&
                       (auVar7[0xf] = cStack_8bf, auVar7._0_15_ = local_8ce,
                       auVar12[0xf] = cStack_40, auVar12._0_15_ = local_4f, auVar12 == auVar7)) {
                      *(undefined8 *)((long)&local_38 + lVar21) = 0x1004639a9;
                      _memcpy(&local_1d98,&local_470,0x420);
                      puVar40 = &local_8b8;
                      *(undefined8 *)((long)&local_38 + lVar21) = 0x1004639c4;
                      _memcpy(local_25e0,puVar40,0x420);
                      local_1558 = '\x01';
                      *(undefined8 *)((long)&local_38 + lVar21) = 0x1004639e3;
                      _memcpy(&local_1550,&uStack_d00,0x420);
                      puVar41 = local_1130;
                    }
                    else {
                      puVar40 = &uStack_d00;
LAB_1004636bc:
                      *(undefined8 *)((long)&local_38 + lVar21) = 0x1004636c1;
                      _memcpy(&local_1d98,puVar40,0x420);
                      puVar40 = &local_8b8;
                      puVar41 = local_25e0;
                    }
                  }
                  else {
                    if ((cStack_477 == cStack_40) &&
                       (auVar9[0xf] = cStack_477, auVar9._0_15_ = local_486,
                       auVar10[0xf] = cStack_40, auVar10._0_15_ = local_4f, auVar10 == auVar9)) {
                      puVar40 = &local_470;
                      goto LAB_1004636bc;
                    }
                    if ((cStack_8bf != cStack_40) ||
                       (auVar6[0xf] = cStack_8bf, auVar6._0_15_ = local_8ce,
                       auVar11[0xf] = cStack_40, auVar11._0_15_ = local_4f, auVar11 != auVar6))
                    goto LAB_1004636d9;
                    *(undefined8 *)((long)&local_38 + lVar21) = 0x1004635b8;
                    _memcpy(&local_1d98,&local_470,0x420);
                    puVar40 = &uStack_d00;
                    puVar41 = local_25e0;
                  }
                  *(undefined8 *)((long)&local_38 + lVar21) = 0x1004636d9;
                  _memcpy(puVar41,puVar40,0x420);
                }
                else {
                  *(undefined8 *)((long)&local_38 + lVar21) = 0x10046364f;
                  cVar19 = FUN_10045b044(&local_d08,&local_1d98);
                  if (cVar19 == '\0') {
                    *(undefined8 *)((long)&local_38 + lVar21) = 0x100463666;
                    cVar19 = FUN_10045b0ca(&local_d08,&local_1d98);
                    if (cVar19 == '\0') {
                      *(undefined8 *)((long)&local_38 + lVar21) = 0x100463679;
                      cVar19 = FUN_10045b152(&local_d08,&local_1d98);
                      goto LAB_100463624;
                    }
                  }
                }
              }
              else if (((local_8be & 1) != 0) && (local_476 == '\x01')) {
                *(undefined8 *)((long)&local_38 + lVar21) = 0x1004635f4;
                FUN_10045b0ca(&local_d08,&local_1d98);
              }
LAB_1004636d9:
              *(undefined8 *)((long)&local_38 + lVar21) = 0x1004636e1;
              cVar19 = FUN_10017cbd0(&local_1d98);
              param_1 = local_25f8;
              if (cVar19 != '\0') {
                pvVar44 = *(void **)(local_25f8 + 0xa8);
                if (pvVar44 < *(void **)(local_25f8 + 0xb0)) {
                  *(undefined8 *)((long)&local_38 + lVar21) = 0x100463713;
                  _memcpy(pvVar44,&local_1d98,0x840);
                  pvVar44 = (void *)((long)pvVar44 + 0x840);
                }
                else {
                  lVar22 = (long)pvVar44 - *(long *)(local_25f8 + 0xa0) >> 6;
                  uVar32 = lVar22 * 0xf83e0f83e0f83e1 + 1;
                  if (0x1f07c1f07c1f07 < uVar32) {
                    *(undefined8 *)((long)&local_38 + lVar21) = 0x1004640f8;
                    FUN_10045f8e8();
                    goto LAB_100464203;
                  }
                  lVar42 = (long)*(void **)(local_25f8 + 0xb0) - *(long *)(local_25f8 + 0xa0) >> 6;
                  uVar35 = lVar42 * 0x1f07c1f07c1f07c2;
                  if (uVar32 < uVar35) {
                    uVar32 = uVar35;
                  }
                  if (0xf83e0f83e0f82 < (ulong)(lVar42 * 0xf83e0f83e0f83e1)) {
                    uVar32 = 0x1f07c1f07c1f07;
                  }
                  if (uVar32 == 0) {
                    auVar46 = ZEXT816(0);
                  }
                  else {
                    *(undefined8 *)((long)&local_38 + lVar21) = 0x100463783;
                    auVar46 = FUN_10045f8f8();
                  }
                  pvVar37 = (void *)(lVar22 * 0x40 + auVar46._0_8_);
                  *(undefined8 *)((long)&local_38 + lVar21) = 0x1004637b1;
                  _memcpy(pvVar37,&local_1d98,0x840);
                  param_1 = local_25f8;
                  pvVar44 = (void *)((long)pvVar37 + 0x840);
                  pvVar38 = *(void **)(local_25f8 + 0xa0);
                  sVar36 = *(long *)(local_25f8 + 0xa8) - (long)pvVar38;
                  pvVar37 = (void *)((long)pvVar37 - sVar36);
                  *(undefined8 *)((long)&local_38 + lVar21) = 0x1004637dd;
                  _memcpy(pvVar37,pvVar38,sVar36);
                  pvVar38 = *(void **)(param_1 + 0xa0);
                  *(void **)(param_1 + 0xa0) = pvVar37;
                  *(void **)(param_1 + 0xa8) = pvVar44;
                  *(long *)(param_1 + 0xb0) = auVar46._8_8_ * 0x840 + auVar46._0_8_;
                  if (pvVar38 != (void *)0x0) {
                    *(undefined8 *)((long)&local_38 + lVar21) = 0x100463803;
                    operator_delete(pvVar38);
                  }
                }
                *(void **)(param_1 + 0xa8) = pvVar44;
                if (local_1558 == '\x01') {
                  *(undefined8 *)((long)&local_38 + lVar21) = 0x100463840;
                  _memcpy(local_25d8,&local_1550,0x420);
                  *(undefined8 *)((long)&local_38 + lVar21) = 0x100463858;
                  _memcpy(local_25f0,local_1130,0x420);
                  if (pvVar44 < *(void **)(param_1 + 0xb0)) {
                    *(undefined8 *)((long)&local_38 + lVar21) = 0x100463874;
                    _memcpy(pvVar44,local_25d8,0x840);
                    lVar22 = (long)pvVar44 + 0x840;
                  }
                  else {
                    lVar22 = (long)pvVar44 - *(long *)(param_1 + 0xa0) >> 6;
                    uVar32 = lVar22 * 0xf83e0f83e0f83e1 + 1;
                    if (0x1f07c1f07c1f07 < uVar32) {
                      *(undefined8 *)((long)&local_38 + lVar21) = 0x10046410c;
                      FUN_10045f8e8();
LAB_100464203:
                    /* WARNING: Does not return */
                      pcVar4 = (code *)invalidInstructionException();
                      (*pcVar4)();
                    }
                    lVar42 = (long)*(void **)(param_1 + 0xb0) - *(long *)(param_1 + 0xa0) >> 6;
                    uVar35 = lVar42 * 0x1f07c1f07c1f07c2;
                    if (uVar35 <= uVar32) {
                      uVar35 = uVar32;
                    }
                    if (0xf83e0f83e0f82 < (ulong)(lVar42 * 0xf83e0f83e0f83e1)) {
                      uVar35 = 0x1f07c1f07c1f07;
                    }
                    if (uVar35 == 0) {
                      auVar46 = ZEXT816(0);
                    }
                    else {
                      *(undefined8 *)((long)&local_38 + lVar21) = 0x1004638ef;
                      auVar46 = FUN_10045f8f8();
                    }
                    pvVar38 = (void *)(lVar22 * 0x40 + auVar46._0_8_);
                    *(undefined8 *)((long)&local_38 + lVar21) = 0x10046391d;
                    _memcpy(pvVar38,local_25d8,0x840);
                    param_1 = local_25f8;
                    lVar22 = (long)pvVar38 + 0x840;
                    pvVar44 = *(void **)(local_25f8 + 0xa0);
                    sVar36 = *(long *)(local_25f8 + 0xa8) - (long)pvVar44;
                    pvVar38 = (void *)((long)pvVar38 - sVar36);
                    *(undefined8 *)((long)&local_38 + lVar21) = 0x10046394b;
                    _memcpy(pvVar38,pvVar44,sVar36);
                    pvVar44 = *(void **)(param_1 + 0xa0);
                    *(void **)(param_1 + 0xa0) = pvVar38;
                    *(long *)(param_1 + 0xa8) = lVar22;
                    *(long *)(param_1 + 0xb0) = auVar46._8_8_ * 0x840 + auVar46._0_8_;
                    if (pvVar44 != (void *)0x0) {
                      *(undefined8 *)((long)&local_38 + lVar21) = 0x100463978;
                      operator_delete(pvVar44);
                    }
                  }
                  *(long *)(param_1 + 0xa8) = lVar22;
                }
              }
              puVar29 = (undefined8 *)*puVar29;
            }
            local_25e8 = (long *)*local_25e8;
          } while (local_25e8 != (long *)0x0);
        }
        plVar28 = *(long **)(param_1 + 0xa0);
        local_25e8 = *(long **)(param_1 + 0xa8);
        if (plVar28 != local_25e8) {
          puVar33 = (ulong *)0xffffffffffffffff;
          uVar32 = 1;
          do {
            uVar30 = *(undefined8 *)(local_25f8 + 0x10);
            *(undefined8 *)((long)&local_38 + lVar21) = 0x100463a6d;
            local_25f0 = puVar33;
            lVar22 = FUN_10058ebb8(uVar30,plVar28,0,0,0);
            if (lVar22 != 0) {
              *(undefined1 *)(lVar22 + 0x83) = 1;
              *(undefined8 *)((long)&local_38 + lVar21) = 0x100463a94;
              lVar42 = FUN_1004993ef(lVar22,8,0,1);
              if (lVar42 != 0) {
                uVar30 = *(undefined8 *)(local_25f8 + 0x10);
                *(undefined8 *)((long)&local_38 + lVar21) = 0x100463abb;
                lVar42 = FUN_10058ebb8(uVar30,plVar28 + 0x84,0,0,0);
                if (lVar42 == 0) {
                  *(undefined8 *)((long)&local_38 + lVar21) = 0x100463ac8;
                  local_25e0 = (uint *)FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar21) = 0x100463adc;
                  cVar19 = _os_log_type_enabled(local_25e0,0x10);
                  if (cVar19 != '\0') {
                    local_1d98 = 0x8220202;
                    uStack_1d94 = 0x168c;
                    uStack_1d92 = 0x7a;
                    local_1d90 = 1;
                    uStack_1d8c = 0x822;
                    uStack_1d8a = 0x8f2;
                    uStack_1d88 = 0x7d;
                    uStack_1d87 = 0;
                    uStack_1d86 = 1;
                    *(undefined8 *)((long)&local_38 + lVar21) = 0x100463dea;
                    __os_log_error_impl(0x100000000,local_25e0,0x10,"%{public}s: (%{public}s)",
                                        &local_1d98,0x16);
                  }
                  *(undefined8 *)((long)&local_38 + lVar21) = 0x100463aed;
                  cVar19 = FUN_1001782e9(0,0);
                  if (cVar19 == '\0') goto LAB_100463d2e;
                }
                *(undefined8 *)((long)&local_38 + lVar21) = 0x100463b09;
                lVar22 = FUN_1004993ef(lVar22,8,0,1);
                if (lVar22 == 0) {
                  *(undefined8 *)((long)&local_38 + lVar21) = 0x100463ba6;
                  uVar30 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar21) = 0x100463bb6;
                  cVar19 = _os_log_type_enabled(uVar30,0x10);
                  if (cVar19 != '\0') {
                    pcVar23 = "sourceAAEImageInstance != nullptr";
LAB_100463e17:
                    uStack_1d8c = 0x822;
                    local_1d90 = 1;
                    uStack_1d92 = 0x7a;
                    uStack_1d94 = 0xa90;
                    local_1d98 = 0x8220202;
                    uStack_1d8a = SUB82(pcVar23,0);
                    uStack_1d88 = (undefined1)((ulong)pcVar23 >> 0x10);
                    uStack_1d87 = 0;
                    uStack_1d86 = (undefined4)((ulong)pcVar23 >> 0x20);
                    *(undefined8 *)((long)&local_38 + lVar21) = 0x100463e46;
                    __os_log_error_impl(0x100000000,uVar30,0x10,"%{public}s: (%{public}s)",
                                        &local_1d98,0x16);
                  }
LAB_100463c04:
                  *(undefined8 *)((long)&local_38 + lVar21) = 0x100463c0d;
                  FUN_1001782e9(0,0);
                  local_25e0 = (uint *)CONCAT44(local_25e0._4_4_,0xffffffce);
                }
                else {
                  uVar2 = *(undefined4 *)(lVar22 + 0x10);
                  *(undefined8 *)((long)&local_38 + lVar21) = 0x100463b22;
                  lVar42 = FUN_100499159(lVar42,uVar2,0);
                  if (lVar42 == 0) {
                    *(undefined8 *)((long)&local_38 + lVar21) = 0x100463bec;
                    uVar30 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar21) = 0x100463bfc;
                    cVar19 = _os_log_type_enabled(uVar30,0x10);
                    if (cVar19 != '\0') {
                      pcVar23 = "destAAEImageInstance != nullptr";
                      goto LAB_100463e17;
                    }
                    goto LAB_100463c04;
                  }
                  *(undefined8 *)(lVar42 + 0x3c) = *(undefined8 *)(lVar22 + 0x3c);
                  *(undefined8 *)((long)&local_38 + lVar21) = 0x100463b47;
                  iVar20 = FUN_10049980b(lVar22,&local_1d98,0);
                  local_25e0 = (uint *)CONCAT44(local_25e0._4_4_,iVar20);
                  if (iVar20 == -0x80) {
LAB_100463c8e:
                    *(undefined8 *)((long)&local_38 + lVar21) = 0x100463c96;
                    FUN_100497f5f(lVar42);
                    goto LAB_100463d2e;
                  }
                  if (iVar20 == 0) {
                    *(undefined8 *)((long)&local_38 + lVar21) = 0x100463b77;
                    iVar20 = FUN_10049a09d(lVar42,&local_1d98,0,0);
                    local_25e0 = (uint *)CONCAT44(local_25e0._4_4_,iVar20);
                    if (iVar20 == -0x80) goto LAB_100463c8e;
                    if (iVar20 == 0) {
                      *(undefined8 *)((long)&local_38 + lVar21) = 0x100463b9c;
                      FUN_100497f5f(lVar22);
                      goto LAB_100463d2e;
                    }
                    *(undefined8 *)((long)&local_38 + lVar21) = 0x100463d01;
                    uVar30 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar21) = 0x100463d11;
                    cVar19 = _os_log_type_enabled(uVar30,0x10);
                    if (cVar19 != '\0') {
                      uStack_cfa = SUB82(local_25e0,0);
                      uStack_cf8 = (undefined2)((ulong)local_25e0 >> 0x10);
                      goto LAB_100463e8e;
                    }
                  }
                  else {
                    *(undefined8 *)((long)&local_38 + lVar21) = 0x100463ca0;
                    uVar30 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar21) = 0x100463cb0;
                    cVar19 = _os_log_type_enabled(uVar30,0x10);
                    if (cVar19 != '\0') {
                      uStack_cfa = SUB82(local_25e0,0);
                      uStack_cf8 = (undefined2)((ulong)local_25e0 >> 0x10);
LAB_100463e8e:
                      uStack_cfc = 0x400;
                      uStack_d00 = 1;
                      uStack_d04 = 0x7a0a90;
                      local_d08 = 0x8220202;
                      *(undefined8 *)((long)&local_38 + lVar21) = 0x100463ea0;
                      __os_log_error_impl(0x100000000,uVar30,0x10,"%{public}s: err == (%d)",
                                          &local_d08,0x12);
                    }
                  }
                  *(undefined8 *)((long)&local_38 + lVar21) = 0x100463d21;
                  FUN_100497f5f(lVar42);
                  if ((int)local_25e0 == 0) goto LAB_100463d2e;
                }
                *(undefined8 *)((long)&local_38 + lVar21) = 0x100463c1c;
                uVar30 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar21) = 0x100463c2c;
                cVar19 = _os_log_type_enabled(uVar30,0x10);
                if (cVar19 != '\0') {
                  local_1d98 = 0x8220202;
                  uStack_1d94 = 0xa90;
                  uStack_1d92 = 0x7a;
                  local_1d90 = 1;
                  uStack_1d8c = 0x400;
                  uStack_1d8a = SUB82(local_25e0,0);
                  uStack_1d88 = (undefined1)((ulong)local_25e0 >> 0x10);
                  uStack_1d87 = (undefined1)((ulong)local_25e0 >> 0x18);
                  *(undefined8 *)((long)&local_38 + lVar21) = 0x100463c89;
                  __os_log_error_impl(0x100000000,uVar30,0x10,"%{public}s: err == (%d)",&local_1d98,
                                      0x12);
                }
              }
            }
LAB_100463d2e:
            if ((uVar32 / 100) * 100 + (long)local_25f0 == 0) {
              uVar30 = *(undefined8 *)(local_25f8 + 0x20);
              *(undefined8 *)((long)&local_38 + lVar21) = 0x100463d5e;
              iVar20 = FUN_1001ceb24(uVar30,0x696d7074,0,0);
              if (iVar20 != 0) {
                if (iVar20 == -0x80) goto LAB_100463f8d;
                *(undefined8 *)((long)&local_38 + lVar21) = 0x100463f0d;
                uVar30 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar21) = 0x100463f1d;
                cVar19 = _os_log_type_enabled(uVar30,0x10);
                uVar18 = uStack_1d87;
                uVar17 = uStack_1d88;
                uVar16 = uStack_1d8a;
                uStack_1d88 = (undefined1)((uint)iVar20 >> 0x10);
                uVar14 = uStack_1d88;
                uStack_1d87 = (undefined1)((uint)iVar20 >> 0x18);
                uVar15 = uStack_1d87;
                uStack_1d8a = (undefined2)iVar20;
                uVar13 = uStack_1d8a;
                if (cVar19 != '\0') {
                  local_1d98 = 0x8220202;
                  uStack_1d94 = 0xa90;
                  uStack_1d92 = 0x7a;
                  local_1d90 = 1;
                  uStack_1d8c = 0x400;
                  *(undefined8 *)((long)&local_38 + lVar21) = 0x1004640ee;
                  __os_log_error_impl(0x100000000,uVar30,0x10,"%{public}s: err == (%d)",&local_1d98,
                                      0x12);
                  uVar16 = uStack_1d8a;
                  uVar17 = uStack_1d88;
                  uVar18 = uStack_1d87;
                }
                uStack_1d87 = uVar18;
                uStack_1d88 = uVar17;
                uStack_1d8a = uVar16;
                if (iVar20 != 0) {
                  *(undefined8 *)((long)&local_38 + lVar21) = 0x100463f2f;
                  uVar30 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar21) = 0x100463f3f;
                  cVar19 = _os_log_type_enabled(uVar30,0x10);
                  if (cVar19 != '\0') {
                    local_1d98 = 0x8220202;
                    uStack_1d94 = 0xa90;
                    uStack_1d92 = 0x7a;
                    local_1d90 = 1;
                    uStack_1d8c = 0x400;
                    *(undefined8 *)((long)&local_38 + lVar21) = 0x100463f88;
                    uStack_1d8a = uVar13;
                    uStack_1d88 = uVar14;
                    uStack_1d87 = uVar15;
                    __os_log_error_impl(0x100000000,uVar30,0x10,"%{public}s: err == (%d)",
                                        &local_1d98,0x12);
                  }
                  goto LAB_100463f8d;
                }
                break;
              }
            }
            plVar28 = plVar28 + 0x108;
            puVar33 = (ulong *)((long)local_25f0 - 1);
            uVar32 = uVar32 + 1;
          } while (plVar28 != local_25e8);
        }
        iVar20 = 0;
        goto LAB_100463f8d;
      }
      *(undefined8 *)((long)&local_38 + lVar21) = 0x100463ed2;
      uVar30 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar21) = 0x100463ee2;
      cVar19 = _os_log_type_enabled(uVar30,0x10);
      if (cVar19 != '\0') {
        local_1d98 = 0x8220202;
        uStack_1d94 = 0xa90;
        uStack_1d92 = 0x7a;
        local_1d90 = 1;
        uStack_1d8c = 0x822;
        uStack_1d8a = 0xe2e;
        uStack_1d88 = 0x7d;
        uStack_1d87 = 0;
        uStack_1d86 = 1;
        *(undefined8 *)((long)&local_38 + lVar21) = 0x1004640a4;
        __os_log_error_impl(0x100000000,uVar30,0x10,"%{public}s: (%{public}s)",&local_1d98,0x16);
      }
      *(undefined8 *)((long)&local_38 + lVar21) = 0x100463ef3;
      FUN_1001782e9(0,0);
    }
  }
  iVar20 = -0x2b;
LAB_100463f8d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar20;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)&local_38 + lVar21) = &UNK_10046412d;
  ___stack_chk_fail();
}

