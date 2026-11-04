// name: FUN_10051492e
// address: 10051492e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10051492e(long param_1)

{
  long *plVar1;
  undefined4 *puVar2;
  ulong *puVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  code *pcVar7;
  undefined *puVar8;
  double dVar9;
  bool bVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  char cVar15;
  undefined1 uVar16;
  byte bVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  uint uVar21;
  long lVar22;
  undefined8 uVar23;
  char *pcVar24;
  long lVar25;
  undefined8 *puVar26;
  long *plVar27;
  undefined8 uVar28;
  void *pvVar29;
  long lVar30;
  char *pcVar31;
  uint uVar32;
  ulong uVar33;
  bool bVar34;
  bool bVar35;
  char local_15a8 [32];
  long local_1588;
  undefined8 local_1558;
  undefined8 uStack_1550;
  double local_1548;
  double local_1540;
  undefined4 local_1538;
  undefined4 uStack_1534;
  undefined4 uStack_1530;
  undefined4 uStack_152c;
  undefined4 local_1528;
  undefined4 uStack_1524;
  undefined4 uStack_1520;
  undefined4 uStack_151c;
  undefined4 local_1518;
  undefined4 uStack_1514;
  undefined4 uStack_1510;
  undefined4 uStack_150c;
  undefined4 local_1508;
  undefined4 uStack_1504;
  undefined4 uStack_1500;
  undefined4 uStack_14fc;
  undefined1 local_14f0 [8];
  undefined8 local_14e8;
  undefined1 local_14dc [2];
  undefined1 local_14da [2];
  undefined1 local_14d8 [16];
  long local_14c8;
  double local_14c0 [2];
  undefined1 local_14b0 [16];
  long local_14a0;
  uint local_1494;
  undefined1 local_1490 [16];
  long local_1480;
  long local_1478;
  long *local_1470;
  long *local_1468;
  char local_145a;
  char local_1459;
  undefined **local_1458;
  long local_1450;
  char *local_1448;
  undefined ***local_1438;
  undefined1 local_1420 [1056];
  short local_1000;
  short local_ffe;
  undefined4 local_fb8;
  undefined4 uStack_fb4;
  undefined4 uStack_fb0;
  undefined4 uStack_fac;
  undefined1 local_f88 [1056];
  short local_b68 [256];
  undefined1 local_968 [8];
  char local_960 [2];
  char local_95e;
  undefined1 local_949 [17];
  undefined1 local_938;
  char local_934;
  char local_90e;
  undefined1 local_8ef;
  char local_8d0;
  char local_8cc;
  undefined1 local_8cb;
  char local_8c0;
  undefined1 local_86f;
  char local_84c;
  char local_84a;
  undefined8 local_498;
  undefined4 uStack_490;
  undefined2 uStack_48c;
  undefined2 uStack_48a;
  undefined2 uStack_488;
  undefined2 uStack_486;
  undefined2 uStack_484;
  undefined6 uStack_482;
  long *local_478;
  undefined4 local_468;
  undefined2 local_464;
  undefined2 uStack_462;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined8 local_458;
  undefined2 uStack_450;
  undefined2 uStack_44e;
  undefined2 uStack_44c;
  undefined2 uStack_44a;
  undefined2 uStack_448;
  undefined4 uStack_446;
  undefined2 local_442;
  undefined6 uStack_440;
  undefined2 local_43a;
  undefined6 uStack_438;
  undefined4 local_430;
  undefined1 local_42c;
  undefined2 uStack_42b;
  undefined8 local_428;
  undefined8 local_420;
  undefined1 uStack_418;
  undefined7 uStack_417;
  undefined1 uStack_410;
  undefined8 uStack_40f;
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x100514946;
  lVar22 = FUN_100108310();
  lVar22 = -lVar22;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_1470 = (long *)0x0;
  local_1459 = '\0';
  local_145a = '\0';
  *(undefined8 *)((long)&local_38 + lVar22) = 0x100514979;
  local_1548 = (double)FUN_1001ebd46();
  *(undefined8 *)((long)&local_38 + lVar22) = 0x100514988;
  FUN_1001cc3a4(0);
  *(undefined8 *)((long)&local_38 + lVar22) = 0x10051499b;
  FUN_1001b7b04(&local_458,"SetupDevice");
  *(undefined8 *)((long)&local_38 + lVar22) = 0x1005149ae;
  FUN_1001cc232(local_14f0,&local_458);
  *(undefined8 *)((long)&local_38 + lVar22) = 0x1005149ba;
  FUN_1001b7a50(&local_458);
  if (*(char *)(param_1 + 0x6ad2) == '\0') {
    if (*(long *)(param_1 + 0x30) != 0) {
      local_14a0 = param_1 + 0x6b40;
      *(undefined8 *)((long)&local_38 + lVar22) = 0x100514a5a;
      iVar18 = FUN_100183add(local_14a0,local_1420,param_1 + 0x6f64);
      if (iVar18 == -0x80) goto LAB_100514bec;
      if (iVar18 != 0) {
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100514bcb;
        uVar23 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100514bdb;
        cVar15 = _os_log_type_enabled(uVar23,0x10);
        if (cVar15 != '\0') {
          uStack_44a = (undefined2)iVar18;
          uStack_448 = (undefined2)((uint)iVar18 >> 0x10);
          goto LAB_1005153e6;
        }
        goto LAB_100514be3;
      }
      *(undefined4 *)(param_1 + 0x153a0) = local_fb8;
      *(undefined4 *)(param_1 + 0x153a4) = uStack_fb4;
      *(undefined4 *)(param_1 + 0x153a8) = uStack_fb0;
      *(undefined4 *)(param_1 + 0x153ac) = uStack_fac;
      if (local_1000 == 0x4953) {
        uVar20 = 2;
        if (local_ffe != 0x4244) goto LAB_100514aa5;
      }
      else if ((local_1000 != 0) || (uVar20 = 1, local_ffe != 0x482b)) {
LAB_100514aa5:
        uVar20 = 0;
      }
      *(undefined4 *)(param_1 + 0x6ae0) = uVar20;
      *(undefined8 *)(param_1 + 0x152d8) = 0;
      *(undefined1 *)(param_1 + 0x6abf) = 0;
      *(undefined2 *)(param_1 + 0x6ac1) = 0;
      *(undefined2 *)(param_1 + 0x151dc) = 0x100;
      *(undefined1 *)(param_1 + 0x151de) = 0;
      *(undefined8 *)(param_1 + 0x151d0) = 0x100010001000000;
      *(undefined4 *)(param_1 + 0x151d8) = 0x1000100;
      if (*(char *)(param_1 + 0x33c) != '\0') {
        *(undefined2 *)(param_1 + 0x151df) = 2;
        *(undefined1 *)(param_1 + 0x151e1) = 0xff;
        if (*(char *)(param_1 + 0x344) == '\0') {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100514b30;
          iVar18 = FUN_1001888ba(local_14a0,"DCIM",&local_458,0);
          if (iVar18 == 0) {
            *(undefined1 *)(param_1 + 0x344) = 1;
          }
        }
      }
      if (*(long *)(param_1 + 0x7168) != 0) {
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100514b4c;
        uVar23 = _AMDeviceCopyDeviceIdentifier();
        *(undefined8 *)(param_1 + 0x152c8) = uVar23;
      }
      if (*(int *)(param_1 + 0x420) != 0) {
        uVar23 = *(undefined8 *)(param_1 + 0x66d8);
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100514b6c;
        cVar15 = FUN_100266cae(uVar23);
        if (cVar15 == '\0') {
          uVar23 = *(undefined8 *)(param_1 + 0x66d8);
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100514c80;
          iVar18 = FUN_100267ca8(uVar23,param_1 + 0x153f1,param_1 + 0x153f2);
          if (iVar18 == 0) {
            *(undefined1 *)(param_1 + 0x153f0) = 1;
          }
          else {
            *(undefined1 *)(param_1 + 0x153f0) = 0;
            *(undefined4 *)(param_1 + 0x420) = 0;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x153f0) = 0;
        }
        if (*(ushort *)(param_1 + 100) < 0x800) {
          if (*(uint *)(param_1 + 0x420) != 0) {
            dVar9 = (double)*(uint *)(param_1 + 0x420);
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100514ce5;
            iVar18 = FUN_1001ee941(SUB84(dVar9,0),dVar9,0,0,FUN_1005192d2,param_1,param_1 + 0x153e8)
            ;
            if ((iVar18 != -0x80) && (iVar18 != 0)) {
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100514cf7;
              uVar23 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100514d07;
              cVar15 = _os_log_type_enabled(uVar23,0x10);
              if (cVar15 != '\0') {
                local_458._0_2_ = 0x202;
                local_458._2_2_ = 0x822;
                local_458._4_4_ = 0x7a0a90;
                uStack_450 = 1;
                uStack_44e = 0;
                uStack_44c = 0x400;
                uStack_44a = (undefined2)iVar18;
                uStack_448 = (undefined2)((uint)iVar18 >> 0x10);
                *(undefined8 *)((long)&local_38 + lVar22) = 0x1005160bf;
                __os_log_error_impl(0x100000000,uVar23,0x10,"%{public}s: err == (%d)",&local_458,
                                    0x12);
              }
            }
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x420) = 0;
        }
      }
      iVar19 = 0;
      if ((*(char *)(param_1 + 0x6ad2) != '\0') || (*(long *)(param_1 + 0x30) == 0))
      goto LAB_10051530a;
      uVar23 = *(undefined8 *)(param_1 + 0x66d8);
      *(undefined8 *)((long)&local_38 + lVar22) = 0x100514d36;
      cVar15 = FUN_1002669ba(uVar23);
      *(char *)(param_1 + 0x6ac4) = cVar15;
      bVar34 = true;
      if (cVar15 == '\0') {
        bVar34 = *(char *)(param_1 + 0x14cda) != '\0';
      }
      *(bool *)(param_1 + 0x6ac6) = bVar34;
      *(long *)(param_1 + 0x40) = *(long *)(param_1 + 1000);
      if ((*(long *)(param_1 + 1000) == 0) &&
         (*(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x38), *(long *)(param_1 + 0x38) == 0)) {
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100514d74;
        uVar23 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100514d84;
        cVar15 = _os_log_type_enabled(uVar23,0x10);
        if (cVar15 != '\0') {
          local_458._0_2_ = 0x202;
          local_458._2_2_ = 0x822;
          local_458._4_4_ = 0x7a0a90;
          uStack_450 = 1;
          uStack_44e = 0;
          uStack_44c = 0x822;
          uStack_44a = 0x7f85;
          uStack_448 = 0x7d;
          uStack_446 = 1;
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100516503;
          __os_log_error_impl(0x100000000,uVar23,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
        }
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100514d95;
        FUN_1001782e9(0,0);
      }
      if (*(uint *)(param_1 + 0x404) == 0) {
        uVar33 = *(ulong *)(param_1 + 0x40);
        *(ulong *)(param_1 + 0x71a0) =
             uVar33 >> 0x38 | (uVar33 & 0xff000000000000) >> 0x28 |
             (uVar33 & 0xff0000000000) >> 0x18 | (uVar33 & 0xff00000000) >> 8 |
             (uVar33 & 0xff000000) << 8 | (uVar33 & 0xff0000) << 0x18 | (uVar33 & 0xff00) << 0x28 |
             uVar33 << 0x38;
        uVar20 = 8;
      }
      else {
        if (0x14 < *(uint *)(param_1 + 0x404)) {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100515388;
          uVar23 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100515398;
          cVar15 = _os_log_type_enabled(uVar23,0x10);
          if (cVar15 != '\0') {
            local_458._0_2_ = 0x202;
            local_458._2_2_ = 0x822;
            local_458._4_4_ = 0x7a0a90;
            uStack_450 = 1;
            uStack_44e = 0;
            uStack_44c = 0x822;
            uStack_44a = 0x7f9c;
            uStack_448 = 0x7d;
            uStack_446 = 1;
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100515ec4;
            __os_log_error_impl(0x100000000,uVar23,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
          }
          iVar18 = -0x32;
          *(undefined8 *)((long)&local_38 + lVar22) = 0x1005153af;
          FUN_1001782e9(0,0);
          goto LAB_100514bec;
        }
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100514dbc;
        FUN_1001c631b(param_1 + 0x3f0,param_1 + 0x71a0);
        uVar20 = *(undefined4 *)(param_1 + 0x404);
      }
      *(undefined4 *)(param_1 + 0x71b4) = uVar20;
      *(undefined8 *)((long)&local_38 + lVar22) = 0x100514de6;
      lVar25 = FUN_1004e0c3f(0,0);
      if (lVar25 != 0) {
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100514dfe;
        FUN_1001c6b4a(lVar25 + 8,param_1 + 0x66f0);
      }
      *(undefined8 *)((long)&local_38 + lVar22) = 0x100514e03;
      uVar23 = FUN_1001c156e();
      local_14c8 = param_1 + 0x66f0;
      *(undefined8 *)((long)&local_38 + lVar22) = 0x100514e19;
      FUN_1001c6b4a(uVar23);
      lVar25 = *(long *)(param_1 + 0x30) + 8;
      if (*(long *)(param_1 + 0x30) == 0) {
        lVar25 = 0;
      }
      *(undefined8 *)((long)&local_38 + lVar22) = 0x100514e34;
      FUN_1001c6b4a(lVar25,local_14c8);
      *(undefined8 *)((long)&local_38 + lVar22) = 0x100514e39;
      uVar23 = FUN_1001cc6d6();
      *(undefined8 *)((long)&local_38 + lVar22) = 0x100514e48;
      FUN_1001c6b4a(uVar23,local_14c8);
      puVar2 = (undefined4 *)(param_1 + 0x6730);
      *(undefined8 *)((long)&local_38 + lVar22) = 0x100514e60;
      puVar26 = operator_new(0x10,(nothrow_t *)PTR_nothrow_10082c970);
      if (puVar26 != (undefined8 *)0x0) {
        *puVar26 = &PTR_FUN_10085ef80;
        puVar26[1] = param_1;
      }
      *(undefined8 *)((long)&local_38 + lVar22) = 0x100514e7e;
      FUN_10051948e(puVar2,puVar26);
      *(undefined8 *)((long)&local_38 + lVar22) = 0x100514e8a;
      FUN_1001b5f9c(&local_458);
      uVar23 = CONCAT44(local_458._4_4_,CONCAT22(local_458._2_2_,(undefined2)local_458));
      local_1538 = *puVar2;
      uStack_1534 = *(undefined4 *)(param_1 + 0x6734);
      uStack_1530 = *(undefined4 *)(param_1 + 0x6738);
      uStack_152c = *(undefined4 *)(param_1 + 0x673c);
      if (*(long *)(param_1 + 0x6738) != 0) {
        LOCK();
        plVar27 = (long *)(*(long *)(param_1 + 0x6738) + 8);
        *plVar27 = *plVar27 + 1;
        UNLOCK();
      }
      *(undefined8 *)((long)&local_38 + lVar22) = 0x100514ebf;
      FUN_1001b7b04(&local_498,"StoreServicesNotifications.CurrentUserChanged");
      *(undefined8 *)((long)&local_38 + lVar22) = 0x100514ed5;
      FUN_1001b62e2(uVar23,&local_1538,&local_498);
      *(undefined8 *)((long)&local_38 + lVar22) = 0x100514ee1;
      FUN_1001b7a50(&local_498);
      plVar27 = (long *)CONCAT44(uStack_152c,uStack_1530);
      if (plVar27 != (long *)0x0) {
        LOCK();
        plVar1 = plVar27 + 1;
        lVar25 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar25 == 0) {
          pcVar7 = *(code **)(*plVar27 + 0x10);
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100514f09;
          (*pcVar7)(plVar27);
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100514f11;
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar27 = (long *)CONCAT26(uStack_44a,CONCAT24(uStack_44c,CONCAT22(uStack_44e,uStack_450)));
      if (plVar27 != (long *)0x0) {
        LOCK();
        plVar1 = plVar27 + 1;
        lVar25 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar25 == 0) {
          pcVar7 = *(code **)(*plVar27 + 0x10);
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100514f39;
          (*pcVar7)(plVar27);
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100514f41;
          std::__shared_weak_count::__release_weak();
        }
      }
      *(undefined8 *)((long)&local_38 + lVar22) = 0x100514f4d;
      FUN_1001b5f9c(&local_458);
      uVar23 = CONCAT44(local_458._4_4_,CONCAT22(local_458._2_2_,(undefined2)local_458));
      local_1528 = *puVar2;
      uStack_1524 = *(undefined4 *)(param_1 + 0x6734);
      uStack_1520 = *(undefined4 *)(param_1 + 0x6738);
      uStack_151c = *(undefined4 *)(param_1 + 0x673c);
      if (*(long *)(param_1 + 0x6738) != 0) {
        LOCK();
        plVar27 = (long *)(*(long *)(param_1 + 0x6738) + 8);
        *plVar27 = *plVar27 + 1;
        UNLOCK();
      }
      *(undefined8 *)((long)&local_38 + lVar22) = 0x100514f82;
      FUN_1001b7b04(&local_498,"StoreServicesNotifications.MachineAuthorized");
      *(undefined8 *)((long)&local_38 + lVar22) = 0x100514f98;
      FUN_1001b62e2(uVar23,&local_1528,&local_498);
      *(undefined8 *)((long)&local_38 + lVar22) = 0x100514fa4;
      FUN_1001b7a50(&local_498);
      plVar27 = (long *)CONCAT44(uStack_151c,uStack_1520);
      if (plVar27 != (long *)0x0) {
        LOCK();
        plVar1 = plVar27 + 1;
        lVar25 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar25 == 0) {
          pcVar7 = *(code **)(*plVar27 + 0x10);
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100514fcc;
          (*pcVar7)(plVar27);
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100514fd4;
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar27 = (long *)CONCAT26(uStack_44a,CONCAT24(uStack_44c,CONCAT22(uStack_44e,uStack_450)));
      if (plVar27 != (long *)0x0) {
        LOCK();
        plVar1 = plVar27 + 1;
        lVar25 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar25 == 0) {
          pcVar7 = *(code **)(*plVar27 + 0x10);
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100514ffc;
          (*pcVar7)(plVar27);
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100515004;
          std::__shared_weak_count::__release_weak();
        }
      }
      *(undefined8 *)((long)&local_38 + lVar22) = 0x100515010;
      FUN_1001b5f9c(&local_458);
      uVar23 = CONCAT44(local_458._4_4_,CONCAT22(local_458._2_2_,(undefined2)local_458));
      local_1518 = *puVar2;
      uStack_1514 = *(undefined4 *)(param_1 + 0x6734);
      uStack_1510 = *(undefined4 *)(param_1 + 0x6738);
      uStack_150c = *(undefined4 *)(param_1 + 0x673c);
      if (*(long *)(param_1 + 0x6738) != 0) {
        LOCK();
        plVar27 = (long *)(*(long *)(param_1 + 0x6738) + 8);
        *plVar27 = *plVar27 + 1;
        UNLOCK();
      }
      *(undefined8 *)((long)&local_38 + lVar22) = 0x100515045;
      FUN_1001b7b04(&local_498,"StoreServicesNotifications.MachineDeauthorized");
      *(undefined8 *)((long)&local_38 + lVar22) = 0x10051505b;
      FUN_1001b62e2(uVar23,&local_1518,&local_498);
      *(undefined8 *)((long)&local_38 + lVar22) = 0x100515067;
      FUN_1001b7a50(&local_498);
      plVar27 = (long *)CONCAT44(uStack_150c,uStack_1510);
      if (plVar27 != (long *)0x0) {
        LOCK();
        plVar1 = plVar27 + 1;
        lVar25 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar25 == 0) {
          pcVar7 = *(code **)(*plVar27 + 0x10);
          *(undefined8 *)((long)&local_38 + lVar22) = 0x10051508f;
          (*pcVar7)(plVar27);
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100515097;
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar27 = (long *)CONCAT26(uStack_44a,CONCAT24(uStack_44c,CONCAT22(uStack_44e,uStack_450)));
      if (plVar27 != (long *)0x0) {
        LOCK();
        plVar1 = plVar27 + 1;
        lVar25 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar25 == 0) {
          pcVar7 = *(code **)(*plVar27 + 0x10);
          *(undefined8 *)((long)&local_38 + lVar22) = 0x1005150bf;
          (*pcVar7)(plVar27);
          *(undefined8 *)((long)&local_38 + lVar22) = 0x1005150c7;
          std::__shared_weak_count::__release_weak();
        }
      }
      *(undefined8 *)((long)&local_38 + lVar22) = 0x1005150cc;
      plVar27 = (long *)FUN_10039a28c();
      pcVar7 = *(code **)(*plVar27 + 0x58);
      *(undefined8 *)((long)&local_38 + lVar22) = 0x1005150d5;
      uVar23 = (*pcVar7)(plVar27);
      *(undefined8 *)((long)&local_38 + lVar22) = 0x1005150e4;
      FUN_1001c6b4a(uVar23,local_14c8);
      *(undefined8 *)((long)&local_38 + lVar22) = 0x1005150f0;
      FUN_1001b5f9c(&local_458);
      local_1508 = *puVar2;
      uStack_1504 = *(undefined4 *)(param_1 + 0x6734);
      uStack_1500 = *(undefined4 *)(param_1 + 0x6738);
      uStack_14fc = *(undefined4 *)(param_1 + 0x673c);
      if (*(long *)(param_1 + 0x6738) != 0) {
        LOCK();
        plVar27 = (long *)(*(long *)(param_1 + 0x6738) + 8);
        *plVar27 = *plVar27 + 1;
        UNLOCK();
      }
      *(undefined8 *)((long)&local_38 + lVar22) = 0x100515125;
      FUN_1001b62e2(CONCAT44(local_458._4_4_,CONCAT22(local_458._2_2_,(undefined2)local_458)),
                    &local_1508,&DAT_1008c7620);
      plVar27 = (long *)CONCAT44(uStack_14fc,uStack_1500);
      if (plVar27 != (long *)0x0) {
        LOCK();
        plVar1 = plVar27 + 1;
        lVar25 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar25 == 0) {
          pcVar7 = *(code **)(*plVar27 + 0x10);
          *(undefined8 *)((long)&local_38 + lVar22) = 0x10051514c;
          (*pcVar7)(plVar27);
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100515154;
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar27 = (long *)CONCAT26(uStack_44a,CONCAT24(uStack_44c,CONCAT22(uStack_44e,uStack_450)));
      if (plVar27 != (long *)0x0) {
        LOCK();
        plVar1 = plVar27 + 1;
        lVar25 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar25 == 0) {
          pcVar7 = *(code **)(*plVar27 + 0x10);
          *(undefined8 *)((long)&local_38 + lVar22) = 0x10051517b;
          (*pcVar7)(plVar27);
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100515183;
          std::__shared_weak_count::__release_weak();
        }
      }
      uVar20 = *(undefined4 *)(param_1 + 0x66b0);
      *(undefined8 *)((long)&local_38 + lVar22) = 0x1005151aa;
      FUN_100245b2b(uVar20,local_14a0,local_968,local_14dc,local_14da);
      uVar23 = *(undefined8 *)(param_1 + 0x66d8);
      *(undefined8 *)((long)&local_38 + lVar22) = 0x1005151c2;
      FUN_100265bfb(uVar23,0x636f6e66,local_960);
      uVar23 = *(undefined8 *)(param_1 + 0x66d8);
      *(undefined8 *)((long)&local_38 + lVar22) = 0x1005151da;
      FUN_100265bfb(uVar23,0x6469736b,local_949);
      if (*(char *)(param_1 + 0x346) == '\0') {
        local_8ef = 0;
        local_8d0 = '\0';
        local_8c0 = '\0';
        local_8cb = 0;
      }
      local_938 = *(char *)(param_1 + 0x353) != '\0';
      if (*(char *)(param_1 + 0x39c) == '\0') {
        local_84a = '\0';
      }
      if (*(char *)(param_1 + 0x38b) == '\0') {
        local_86f = 0;
      }
      if (*(char *)(param_1 + 0x35c) != '\0') {
        local_95e = '\0';
        local_8cc = '\0';
      }
      if (*(char *)(param_1 + 0x36c) == '\0') {
        local_95e = '\x01';
      }
      uVar23 = *(undefined8 *)(param_1 + 0x66d8);
      *(undefined8 *)((long)&local_38 + lVar22) = 0x10051525e;
      cVar15 = FUN_100266a70(uVar23);
      if (cVar15 != '\0') {
        uVar23 = *(undefined8 *)(param_1 + 0x66d8);
        *(undefined8 *)((long)&local_38 + lVar22) = 0x10051526e;
        cVar15 = FUN_100266904(uVar23);
        if (cVar15 == '\0') {
          local_949[0] = 1;
        }
      }
      if ((*(int *)(param_1 + 0x66b0) == 0x6950686e) &&
         (lVar25 = *(long *)(param_1 + 0x7168), lVar25 != 0)) {
        *(undefined8 *)((long)&local_38 + lVar22) = 0x1005152a9;
        iVar18 = FUN_1005be428(lVar25,&local_498,0,0);
        if ((iVar18 != -0x80) && (iVar18 != 0)) {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x1005152bb;
          uVar23 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar22) = 0x1005152cb;
          cVar15 = _os_log_type_enabled(uVar23,0x10);
          if (cVar15 != '\0') {
            local_458._0_2_ = 0x202;
            local_458._2_2_ = 0x822;
            local_458._4_4_ = 0x7a0a90;
            uStack_450 = 1;
            uStack_44e = 0;
            uStack_44c = 0x400;
            uStack_44a = (undefined2)iVar18;
            uStack_448 = (undefined2)((uint)iVar18 >> 0x10);
            *(undefined8 *)((long)&local_38 + lVar22) = 0x10051664c;
            __os_log_error_impl(0x100000000,uVar23,0x10,"%{public}s: err == (%d)",&local_458,0x12);
          }
        }
        if (((CONCAT22(local_498._2_2_,CONCAT11(local_498._1_1_,(char)local_498)) < 10) &&
            ((0x30cU >> (CONCAT11(local_498._1_1_,(char)local_498) & 0x1f) & 1) != 0)) &&
           (*(ushort *)(param_1 + 100) < 0x200)) {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x1005152fa;
          FUN_1005128b9(param_1,0);
        }
        if ((*(char *)(param_1 + 0x6ad2) == '\0') && (*(long *)(param_1 + 0x30) != 0))
        goto LAB_100515409;
LAB_100515307:
        iVar19 = 0;
        goto LAB_10051530a;
      }
LAB_100515409:
      if (DAT_1008c75c0 != -1) {
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100517898;
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar23 = DAT_1008c75b8;
      *(undefined8 *)((long)&local_38 + lVar22) = 0x10051542b;
      cVar15 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar15 != '\0') {
        pcVar24 = "";
        if (local_960[0] == '\0') {
          pcVar24 = "not ";
        }
        local_458._0_2_ = 0x102;
        local_458._2_2_ = 0x822;
        local_458._4_4_ = (int)pcVar24;
        uStack_450 = (undefined2)((ulong)pcVar24 >> 0x20);
        uStack_44e = 0;
        *(undefined8 *)((long)&local_38 + lVar22) = 0x10051547b;
        __os_log_impl(0x100000000,uVar23,1,"setup> prefs are %{public}sconfigured",&local_458,0xc);
      }
      if (local_960[0] == '\0') {
        if (*(char *)(param_1 + 0x14cd8) != '\0') {
LAB_1005155c4:
          iVar18 = 0;
LAB_1005155c7:
          *(undefined8 *)((long)&local_38 + lVar22) = 0x1005155d1;
          FUN_100430bbe(param_1,0);
          *(undefined8 *)((long)&local_38 + lVar22) = 0x1005155db;
          FUN_1004313cd(param_1,0);
          goto LAB_100516220;
        }
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100515680;
        _memcpy((void *)(param_1 + 0x14cd0),local_968,0x4d0);
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100515688;
        FUN_10051950f(param_1);
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100515690;
        FUN_100519810(param_1);
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100515698;
        FUN_100519dd0(param_1);
        lVar25 = param_1 + 0x75e0;
        *(undefined8 *)((long)&local_38 + lVar22) = 0x1005156b7;
        iVar18 = FUN_1001888ba(lVar25,"SkipSetup",&local_458,0);
        if (iVar18 == 0) {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100515d8f;
          FUN_1001893a7(lVar25,"SkipSetup");
          if (DAT_1008c75c0 != -1) {
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100517c30;
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar23 = DAT_1008c75b8;
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100515db1;
          cVar15 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar15 != '\0') {
            local_458._0_2_ = 0;
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100515de3;
            __os_log_impl(0x100000000,uVar23,1,"setup> deleted SkipSetup file",&local_458,2);
          }
          *(undefined1 *)(param_1 + 0x14cd8) = 1;
        }
        else if (*(char *)(param_1 + 0x3b1) != '\0') {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x1005156e4;
          iVar18 = FUN_1001888ba(lVar25,"ShowLicense",&local_458,0);
          *(bool *)(param_1 + 0x6af6) = iVar18 == 0;
          if (iVar18 == 0) {
            if (DAT_1008c75c0 != -1) {
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100518b27;
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar23 = DAT_1008c75b8;
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100515711;
            cVar15 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar15 != '\0') {
              local_458._0_2_ = 0;
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100515743;
              __os_log_impl(0x100000000,uVar23,1,"setup> found ShowLicense file",&local_458,2);
            }
          }
          *(undefined8 *)((long)&local_38 + lVar22) = 0x10051575b;
          iVar18 = FUN_1001888ba(lVar25,"ShowWarranty",&local_458,0);
          *(bool *)(param_1 + 0x6af7) = iVar18 == 0;
          if (iVar18 == 0) {
            if (DAT_1008c75c0 != -1) {
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100518b3f;
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar23 = DAT_1008c75b8;
            *(undefined8 *)((long)&local_38 + lVar22) = 0x10051578c;
            cVar15 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar15 != '\0') {
              local_458._0_2_ = 0;
              *(undefined8 *)((long)&local_38 + lVar22) = 0x1005157c2;
              __os_log_impl(0x100000000,uVar23,1,"setup> found ShowWarranty file",&local_458,2);
            }
          }
        }
        if (*(char *)(param_1 + 0x35a) == '\0') goto LAB_1005155c4;
        local_498._0_1_ = '\0';
        local_498._1_1_ = 0;
        local_498._2_2_ = 0;
        local_498._4_4_ = 0;
        uStack_490 = 0;
        uStack_48c = 0;
        uStack_48a = 0;
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100515e13;
        iVar18 = FUN_1001e96d3(&local_498,0,0);
        if (iVar18 == -0x80) goto LAB_100514bec;
        if (iVar18 == 0) {
          local_1458 = &PTR_FUN_100868140;
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100515e55;
          local_1450 = param_1;
          local_1448 = (char *)&local_498;
          local_1438 = &local_1458;
          FUN_100503b03(param_1 + 0x106,&local_1458);
          if (local_1438 == &local_1458) {
            lVar25 = 0x20;
LAB_100516525:
            pcVar7 = *(code **)((long)*local_1438 + lVar25);
            *(undefined8 *)((long)&local_38 + lVar22) = 0x10051652b;
            (*pcVar7)();
          }
          else {
            lVar25 = 0x28;
            if (local_1438 != (undefined ***)0x0) goto LAB_100516525;
          }
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100516537;
          iVar18 = FUN_1001e9afc(&local_498);
          if ((iVar18 != -0x80) && (iVar18 != 0)) {
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100516551;
            uVar23 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100516561;
            cVar15 = _os_log_type_enabled(uVar23,0x10);
            if (cVar15 != '\0') {
              local_458._0_2_ = 0x202;
              local_458._2_2_ = 0x822;
              local_458._4_4_ = 0x7a0a90;
              uStack_450 = 1;
              uStack_44e = 0;
              uStack_44c = 0x400;
              uStack_44a = (undefined2)iVar18;
              uStack_448 = (undefined2)((uint)iVar18 >> 0x10);
              *(undefined8 *)((long)&local_38 + lVar22) = 0x1005165ae;
              __os_log_error_impl(0x100000000,uVar23,0x10,"%{public}s: err == (%d)",&local_458,0x12)
              ;
            }
          }
          goto LAB_1005155c7;
        }
        *(undefined8 *)((long)&local_38 + lVar22) = 0x1005160c9;
        uVar23 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar22) = 0x1005160d9;
        cVar15 = _os_log_type_enabled(uVar23,0x10);
        if (cVar15 == '\0') goto LAB_100514bec;
        puVar26 = &local_458;
        local_458._0_2_ = 0x202;
        local_458._2_2_ = 0x822;
        local_458._4_4_ = 0x7a0a90;
        uStack_450 = 1;
        uStack_44e = 0;
        uStack_44c = 0x400;
        uStack_44a = (undefined2)iVar18;
        uStack_448 = (undefined2)((uint)iVar18 >> 0x10);
LAB_100516113:
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100516126;
        __os_log_error_impl(0x100000000,uVar23,0x10,"%{public}s: err == (%d)",puVar26,0x12);
        goto LAB_100514bec;
      }
      *(undefined8 *)((long)&local_38 + lVar22) = 0x1005154a0;
      _memcpy((void *)(param_1 + 0x14cd0),local_968,0x4d0);
      if (DAT_1008c75c0 != -1) {
        *(undefined8 *)((long)&local_38 + lVar22) = 0x10051799a;
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar23 = DAT_1008c75b8;
      *(undefined8 *)((long)&local_38 + lVar22) = 0x1005154c2;
      cVar15 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar15 != '\0') {
        pcVar24 = "automatic";
        if (local_95e == '\0') {
          pcVar24 = "manual";
        }
        local_458._0_2_ = 0x102;
        local_458._2_2_ = 0x822;
        local_458._4_4_ = (int)pcVar24;
        uStack_450 = (undefined2)((ulong)pcVar24 >> 0x20);
        uStack_44e = 0;
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100515512;
        __os_log_impl(0x100000000,uVar23,1,"setup> prefs are configured for %{public}s mode",
                      &local_458,0xc);
        if (DAT_1008c75c0 != -1) {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x1005179b2;
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
      }
      uVar23 = DAT_1008c75b8;
      *(undefined8 *)((long)&local_38 + lVar22) = 0x100515534;
      cVar15 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar15 == '\0') {
        if (*(char *)(param_1 + 0x34e) != '\0') goto LAB_1005155ed;
        lVar25 = -1;
      }
      else {
        pcVar24 = "";
        if (local_8cc == '\0') {
          pcVar24 = "not ";
        }
        local_458._0_2_ = 0x102;
        local_458._2_2_ = 0x822;
        local_458._4_4_ = (int)pcVar24;
        uStack_450 = (undefined2)((ulong)pcVar24 >> 0x20);
        uStack_44e = 0;
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100515588;
        __os_log_impl(0x100000000,uVar23,1,"setup> prefs are configured to %{public}ssync music",
                      &local_458,0xc);
        lVar25 = DAT_1008c75c0;
        if (*(char *)(param_1 + 0x34e) != '\0') {
          if (DAT_1008c75c0 != -1) {
            *(undefined8 *)((long)&local_38 + lVar22) = 0x1005155b5;
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
LAB_1005155ed:
          uVar23 = DAT_1008c75b8;
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100515601;
          cVar15 = _os_log_type_enabled(DAT_1008c75b8,1);
          lVar25 = -1;
          if (cVar15 != '\0') {
            pcVar24 = "";
            if (local_8d0 == '\0') {
              pcVar24 = "not ";
            }
            local_458._0_2_ = 0x102;
            local_458._2_2_ = 0x822;
            local_458._4_4_ = (int)pcVar24;
            uStack_450 = (undefined2)((ulong)pcVar24 >> 0x20);
            uStack_44e = 0;
            *(undefined8 *)((long)&local_38 + lVar22) = 0x10051565c;
            __os_log_impl(0x100000000,uVar23,1,
                          "setup> prefs are configured to %{public}ssync movies",&local_458,0xc);
            lVar25 = DAT_1008c75c0;
          }
        }
      }
      if (*(char *)(param_1 + 0x34f) == '\0') {
LAB_10051584c:
        if (lVar25 != -1) {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x1005179ca;
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
      }
      else {
        if (lVar25 != -1) {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100517b82;
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar23 = DAT_1008c75b8;
        *(undefined8 *)((long)&local_38 + lVar22) = 0x1005157f5;
        cVar15 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar15 != '\0') {
          pcVar24 = "";
          if (local_8c0 == '\0') {
            pcVar24 = "not ";
          }
          local_458._0_2_ = 0x102;
          local_458._2_2_ = 0x822;
          local_458._4_4_ = (int)pcVar24;
          uStack_450 = (undefined2)((ulong)pcVar24 >> 0x20);
          uStack_44e = 0;
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100515845;
          __os_log_impl(0x100000000,uVar23,1,
                        "setup> prefs are configured to %{public}ssync TV shows",&local_458,0xc);
          lVar25 = DAT_1008c75c0;
          goto LAB_10051584c;
        }
      }
      uVar23 = DAT_1008c75b8;
      *(undefined8 *)((long)&local_38 + lVar22) = 0x10051586a;
      cVar15 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar15 != '\0') {
        pcVar24 = "";
        if (local_90e == '\0') {
          pcVar24 = "not ";
        }
        local_458._0_2_ = 0x102;
        local_458._2_2_ = 0x822;
        local_458._4_4_ = (int)pcVar24;
        uStack_450 = (undefined2)((ulong)pcVar24 >> 0x20);
        uStack_44e = 0;
        *(undefined8 *)((long)&local_38 + lVar22) = 0x1005158ba;
        __os_log_impl(0x100000000,uVar23,1,"setup> prefs are configured to %{public}ssync podcasts",
                      &local_458,0xc);
      }
      if (*(char *)(param_1 + 0x365) != '\0') {
        if (DAT_1008c75c0 != -1) {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100517b9a;
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar23 = DAT_1008c75b8;
        *(undefined8 *)((long)&local_38 + lVar22) = 0x1005158e5;
        cVar15 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar15 != '\0') {
          pcVar24 = "";
          if (local_84c == '\0') {
            pcVar24 = "not ";
          }
          local_458._0_2_ = 0x102;
          local_458._2_2_ = 0x822;
          local_458._4_4_ = (int)pcVar24;
          uStack_450 = (undefined2)((ulong)pcVar24 >> 0x20);
          uStack_44e = 0;
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100515935;
          __os_log_impl(0x100000000,uVar23,1,
                        "setup> prefs are configured to %{public}ssync audiobooks",&local_458,0xc);
        }
      }
      if (*(char *)(param_1 + 0x39c) != '\0') {
        if (DAT_1008c75c0 != -1) {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100517bb2;
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar23 = DAT_1008c75b8;
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100515960;
        cVar15 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar15 != '\0') {
          pcVar24 = "";
          if (local_84a == '\0') {
            pcVar24 = "not ";
          }
          local_458._0_2_ = 0x102;
          local_458._2_2_ = 0x822;
          local_458._4_4_ = (int)pcVar24;
          uStack_450 = (undefined2)((ulong)pcVar24 >> 0x20);
          uStack_44e = 0;
          *(undefined8 *)((long)&local_38 + lVar22) = 0x1005159b0;
          __os_log_impl(0x100000000,uVar23,1,"setup> prefs are configured to %{public}ssync books",
                        &local_458,0xc);
        }
      }
      if (*(char *)(param_1 + 0x33c) != '\0') {
        if (DAT_1008c75c0 != -1) {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100517bca;
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar23 = DAT_1008c75b8;
        *(undefined8 *)((long)&local_38 + lVar22) = 0x1005159db;
        cVar15 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar15 != '\0') {
          pcVar24 = "";
          if (local_934 == '\0') {
            pcVar24 = "not ";
          }
          local_458._0_2_ = 0x102;
          local_458._2_2_ = 0x822;
          local_458._4_4_ = (int)pcVar24;
          uStack_450 = (undefined2)((ulong)pcVar24 >> 0x20);
          uStack_44e = 0;
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100515a2b;
          __os_log_impl(0x100000000,uVar23,1,"setup> prefs are configured to %{public}ssync photos",
                        &local_458,0xc);
        }
      }
      *(undefined8 *)((long)&local_38 + lVar22) = 0x100515a33;
      cVar15 = FUN_100431b15(param_1);
      *(char *)(param_1 + 0x6abf) = cVar15;
      if (cVar15 != '\0') {
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100515a45;
        FUN_1004f0290(param_1);
      }
      *(undefined8 *)((long)&local_38 + lVar22) = 0x100515a4d;
      uVar16 = FUN_100431f1c(param_1);
      *(undefined1 *)(param_1 + 0x6ac2) = uVar16;
      *(undefined8 *)((long)&local_38 + lVar22) = 0x100515a5b;
      FUN_10051950f(param_1);
      *(undefined8 *)((long)&local_38 + lVar22) = 0x100515a63;
      FUN_100519810(param_1);
      *(undefined8 *)((long)&local_38 + lVar22) = 0x100515a6b;
      FUN_100519dd0(param_1);
      if (*(char *)(param_1 + 0x3a2) == '\0') {
        if (*(char *)(param_1 + 0x33c) != '\0') {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100515ada;
          FUN_1004f2ffa(param_1,0,0);
        }
      }
      else if (0x6ff < *(ushort *)(param_1 + 100)) {
        uVar23 = *(undefined8 *)(param_1 + 0x66d8);
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100515a88;
        uVar28 = _CFBooleanGetTypeID();
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100515a9a;
        lVar25 = FUN_10059ca0a(uVar23,&cf_iTunesSetupComplete,uVar28);
        if (lVar25 != *(long *)PTR__kCFBooleanTrue_10082e038) {
          uVar23 = *(undefined8 *)(param_1 + 0x7168);
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100515ac3;
          FUN_1005bbb13(uVar23,&cf_com_apple_mobile_iTunes,&cf_iTunesSetupComplete);
        }
      }
      *(undefined8 *)((long)&local_38 + lVar22) = 0x100515ae2;
      FUN_1004de937(param_1);
      uVar16 = *(undefined1 *)(param_1 + 0x14d05);
      uVar23 = *(undefined8 *)(param_1 + 0x151a0);
      *(undefined8 *)((long)&local_38 + lVar22) = 0x100515afa;
      cVar15 = FUN_100431d10(param_1,uVar16,uVar23,0);
      *(char *)(param_1 + 0x6ac1) = cVar15;
      if ((cVar15 != '\0' && *(char *)(param_1 + 0x14d04) != '\0') &&
         ((*(byte *)(param_1 + 0x14d05) | 4) == 5)) {
        if (DAT_1008c75c0 != -1) {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100517be2;
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar23 = DAT_1008c75b8;
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100515b48;
        cVar15 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar15 != '\0') {
          pcVar24 = "Aperture";
          if (*(char *)(param_1 + 0x14d05) == '\x01') {
            pcVar24 = "iPhoto";
          }
          local_458._0_2_ = 0x102;
          local_458._2_2_ = 0x822;
          local_458._4_4_ = (int)pcVar24;
          uStack_450 = (undefined2)((ulong)pcVar24 >> 0x20);
          uStack_44e = 0;
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100515b98;
          __os_log_impl(0x100000000,uVar23,1,
                        "setup> disabing photo syncing due to obsolete %{public}s photo sync source"
                        ,&local_458,0xc);
        }
        *(undefined2 *)(param_1 + 0x14d04) = 0x600;
      }
      *(undefined8 *)((long)&local_38 + lVar22) = 0x100515ba9;
      uVar16 = FUN_100432116(param_1);
      *(undefined1 *)(param_1 + 0x6ac3) = uVar16;
      local_14c0[0] = 0.0;
      if ((*(int *)(param_1 + 0x284) == 7) && (*(char *)(param_1 + 0x144) != '\0')) {
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100515be7;
        local_1468 = (long *)FUN_1001cd685(&cf_iPodReplacementCheck,1,0);
        if (local_1468 == (long *)0x0) {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100515c17;
          local_1468 = (long *)FUN_100171409(DAT_1008c4d90,0,
                                             PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                                             PTR__kCFTypeDictionaryValueCallBacks_10082e140);
          if (local_1468 != (long *)0x0) goto LAB_100515c2c;
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100516130;
          uVar23 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100516140;
          cVar15 = _os_log_type_enabled(uVar23,0x10);
          if (cVar15 != '\0') {
            local_498._0_1_ = '\x02';
            local_498._1_1_ = 2;
            local_498._2_2_ = 0x822;
            local_498._4_4_ = 0x7a0a90;
            uStack_490 = 1;
            uStack_48c = 0x822;
            uStack_48a = 0x8324;
            uStack_488 = 0x7d;
            uStack_486 = 1;
            uStack_484 = 0;
            *(undefined8 *)((long)&local_38 + lVar22) = 0x1005172a9;
            __os_log_error_impl(0x100000000,uVar23,0x10,"%{public}s: (%{public}s)",&local_498,0x16);
          }
          local_1468 = (long *)0x0;
          *(undefined8 *)((long)&local_38 + lVar22) = 0x10051615c;
          FUN_1001782e9(0,0);
          local_1478 = 0;
LAB_10051619a:
          local_1480 = 0;
        }
        else {
LAB_100515c2c:
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100515c3f;
          local_1480 = FUN_1001cd685(&cf_iPodReplacementCheckJul_2016,1,0);
          if (local_1480 == 0) {
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100515c6f;
            local_1480 = FUN_100171409(DAT_1008c4d90,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                                       PTR__kCFTypeDictionaryValueCallBacks_10082e140);
            if (local_1480 == 0) {
              *(undefined8 *)((long)&local_38 + lVar22) = 0x10051616e;
              uVar23 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar22) = 0x10051617e;
              cVar15 = _os_log_type_enabled(uVar23,0x10);
              if (cVar15 != '\0') {
                local_498._0_1_ = '\x02';
                local_498._1_1_ = 2;
                local_498._2_2_ = 0x822;
                local_498._4_4_ = 0x7a0a90;
                uStack_490 = 1;
                uStack_48c = 0x822;
                uStack_48a = 0x8364;
                uStack_488 = 0x7d;
                uStack_486 = 1;
                uStack_484 = 0;
                *(undefined8 *)((long)&local_38 + lVar22) = 0x1005172fa;
                __os_log_error_impl(0x100000000,uVar23,0x10,"%{public}s: (%{public}s)",&local_498,
                                    0x16);
              }
              local_1478 = 0;
              *(undefined8 *)((long)&local_38 + lVar22) = 0x10051619a;
              FUN_1001782e9(0,0);
              goto LAB_10051619a;
            }
          }
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100515c93;
          local_1478 = FUN_1001e5ee7(param_1 + 0x144);
          if (local_1478 == 0) {
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100515d4f;
            uVar23 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100515d5f;
            cVar15 = _os_log_type_enabled(uVar23,0x10);
            if (cVar15 != '\0') {
              local_498._0_1_ = '\x02';
              local_498._1_1_ = 2;
              local_498._2_2_ = 0x822;
              local_498._4_4_ = 0x7a0a90;
              uStack_490 = 1;
              uStack_48c = 0x822;
              uStack_48a = 0x609d;
              uStack_488 = 0x7d;
              uStack_486 = 1;
              uStack_484 = 0;
              *(undefined8 *)((long)&local_38 + lVar22) = 0x10051669d;
              __os_log_error_impl(0x100000000,uVar23,0x10,"%{public}s: (%{public}s)",&local_498,0x16
                                 );
            }
            local_1478 = 0;
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100515d7b;
            FUN_1001782e9(0,0);
          }
          else {
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100515cb6;
            local_14e8 = FUN_100167d66(local_1468);
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100515cd7;
            cVar15 = FUN_100166a6a(local_1480,local_1478,local_14c0);
            if (cVar15 == '\0') {
LAB_100515d06:
              uVar33 = 1;
              do {
                puVar8 = (&PTR_s_YM5392Y3SZC_10085f990)[uVar33];
                if (puVar8 == (undefined *)0x0) {
                  *(undefined8 *)((long)&local_38 + lVar22) = 0x100515eda;
                  FUN_1001c1ce9(&local_458,0x40);
                  *(undefined8 *)((long)&local_38 + lVar22) = 0x100515efd;
                  cVar15 = FUN_1001df8db(&local_458,8,"Japanese",8,1);
                  if (cVar15 == '\0') {
                    *(undefined8 *)((long)&local_38 + lVar22) = 0x100515f24;
                    cVar15 = FUN_1001df8db(&local_458,2,"jp",2,1);
                    if (cVar15 == '\0') {
                      *(undefined8 *)((long)&local_38 + lVar22) = 0x100515f4b;
                      cVar15 = FUN_1001df8db(&local_458,2,"ja",2,1);
                      if (cVar15 == '\0') {
                        *(undefined8 *)((long)&local_38 + lVar22) = 0x100515f54;
                        lVar25 = FUN_10020e322();
                        if (lVar25 != 0x23066) break;
                      }
                    }
                  }
                  *(undefined8 *)((long)&local_38 + lVar22) = 0x100515f65;
                  FUN_1001711e2();
                  *(undefined8 *)((long)&local_38 + lVar22) = 0x100515f78;
                  FUN_10016909e(local_1480,local_1478);
                  *(undefined8 *)((long)&local_38 + lVar22) = 0x100515f8d;
                  FUN_1001cdefe(&cf_iPodReplacementCheckJul_2016,local_1480,0);
                  *(undefined8 *)((long)&local_38 + lVar22) = 0x100515f9d;
                  FUN_10051d103(FUN_10051d1e7,param_1 + 0x28);
                  goto LAB_100515f9d;
                }
                *(undefined8 *)((long)&local_38 + lVar22) = 0x100515d30;
                cVar15 = FUN_1001df957(param_1 + 0x144,puVar8,1);
                uVar33 = (ulong)((int)uVar33 + 2);
              } while (cVar15 == '\0');
            }
            else {
              local_1540 = local_14c0[0];
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100515cf0;
              dVar9 = (double)FUN_1001711e2();
              if (local_1540 + _DAT_1007534e8 <= dVar9) goto LAB_100515d06;
            }
            if ((int)local_14e8 == 0) {
LAB_100515f9d:
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100515fbb;
              FUN_100168746(local_1468,local_1478,(int)local_14e8 + 1,0);
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100515fd0;
              FUN_1001cdefe(&cf_iPodReplacementCheck,local_1468,0);
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100515fe3;
              FUN_1001aaef6(local_14b0,local_1478);
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100515fef;
              FUN_10012bbaa(&local_468);
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100516002;
              FUN_1001a8c1c(local_1490,local_14b0);
              local_478 = (long *)0x0;
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100516017;
              plVar27 = operator_new(0x10);
              *plVar27 = (long)&PTR_FUN_1008680c0;
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100516038;
              FUN_1001a8c1c(plVar27 + 1,local_1490);
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100516057;
              local_478 = plVar27;
              FUN_10012bbf4(&local_468,&local_498,1);
              if (local_478 == &local_498) {
                lVar25 = 0x20;
LAB_1005161ac:
                pcVar7 = *(code **)(*local_478 + lVar25);
                *(undefined8 *)((long)&local_38 + lVar22) = 0x1005161b2;
                (*pcVar7)();
              }
              else {
                lVar25 = 0x28;
                if (local_478 != (long *)0x0) goto LAB_1005161ac;
              }
              *(undefined8 *)((long)&local_38 + lVar22) = 0x1005161be;
              FUN_1001ab006(local_1490);
              plVar27 = (long *)CONCAT44(uStack_45c,uStack_460);
              if (plVar27 != (long *)0x0) {
                LOCK();
                plVar1 = plVar27 + 1;
                lVar25 = *plVar1;
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (lVar25 == 0) {
                  pcVar7 = *(code **)(*plVar27 + 0x10);
                  *(undefined8 *)((long)&local_38 + lVar22) = 0x1005161e5;
                  (*pcVar7)(plVar27);
                  *(undefined8 *)((long)&local_38 + lVar22) = 0x1005161ed;
                  std::__shared_weak_count::__release_weak();
                }
              }
              *(undefined8 *)((long)&local_38 + lVar22) = 0x1005161f9;
              FUN_1001ab006(local_14b0);
            }
          }
        }
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100516205;
        FUN_10017060f(local_1468);
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100516211;
        FUN_10017060f(local_1480);
        *(undefined8 *)((long)&local_38 + lVar22) = 0x10051621d;
        FUN_10017060f(local_1478);
      }
      iVar18 = 0;
LAB_100516220:
      if ((*(char *)(param_1 + 0x6ad2) != '\0') || (*(long *)(param_1 + 0x30) == 0))
      goto LAB_100514be3;
      if (*(char *)(param_1 + 0x35a) != '\0') {
        *(undefined8 *)((long)&local_38 + lVar22) = 0x10051625c;
        iVar19 = FUN_1001888ba(param_1 + 0x75e0,"SyncAfterRestore",0,0);
        if (iVar19 == 0) {
          if (DAT_1008c75c0 != -1) {
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100517c48;
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar23 = DAT_1008c75b8;
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100516282;
          cVar15 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar15 != '\0') {
            local_458._0_2_ = 0;
            *(undefined8 *)((long)&local_38 + lVar22) = 0x1005162b4;
            __os_log_impl(0x100000000,uVar23,1,"setup> found SyncAfterRestore file",&local_458,2);
          }
          *(undefined1 *)(param_1 + 0x6aef) = 1;
        }
        *(undefined8 *)((long)&local_38 + lVar22) = 0x1005162c8;
        FUN_1004e8318(param_1,1);
      }
      if ((*(char *)(param_1 + 0x359) != '\0') && (*(char *)(param_1 + 0x15218) != '\0')) {
        *(undefined8 *)((long)&local_38 + lVar22) = 0x1005162e6;
        iVar18 = FUN_1001e845f(param_1 + 0x15230);
        if (iVar18 != -0x80) {
          if (iVar18 == 0) {
            *(undefined1 *)(param_1 + 0x15228) = 1;
            if (*(char *)(param_1 + 0x6ac3) != '\0') {
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100516313;
              FUN_1004f09bc(param_1);
              *(undefined8 *)((long)&local_38 + lVar22) = 0x10051631b;
              FUN_1004f0b5c(param_1);
            }
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100516323;
            iVar18 = FUN_10051a84f(param_1);
            if (iVar18 == -0x80) goto LAB_100514bec;
            if (iVar18 == 0) goto LAB_100516338;
            *(undefined8 *)((long)&local_38 + lVar22) = 0x1005165b8;
            uVar23 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar22) = 0x1005165c8;
            cVar15 = _os_log_type_enabled(uVar23,0x10);
            if (cVar15 != '\0') {
              uStack_44a = (undefined2)iVar18;
              uStack_448 = (undefined2)((uint)iVar18 >> 0x10);
              goto LAB_1005153e6;
            }
          }
          else {
            *(undefined8 *)((long)&local_38 + lVar22) = 0x10051642e;
            uVar23 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar22) = 0x10051643e;
            cVar15 = _os_log_type_enabled(uVar23,0x10);
            if (cVar15 != '\0') {
              uStack_44a = (undefined2)iVar18;
              uStack_448 = (undefined2)((uint)iVar18 >> 0x10);
LAB_1005153e6:
              uStack_44e = 0;
              uStack_450 = 1;
              local_458._4_4_ = 0x7a0a90;
              local_458._2_2_ = 0x822;
              local_458._0_2_ = 0x202;
              uStack_44c = 0x400;
              *(undefined8 *)((long)&local_38 + lVar22) = 0x1005153f9;
              __os_log_error_impl(0x100000000,uVar23,0x10,"%{public}s: err == (%d)",&local_458,0x12)
              ;
            }
          }
          goto LAB_100514be3;
        }
        goto LAB_100514bec;
      }
LAB_100516338:
      if (*(char *)(param_1 + 0x3a2) == '\0') {
        if (*(char *)(param_1 + 0x14cd8) == '\0') {
          *(undefined1 *)(param_1 + 0x6af5) = 1;
        }
      }
      else {
        uVar23 = *(undefined8 *)(param_1 + 0x7168);
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100516351;
        uVar28 = _CFStringGetTypeID();
        *(undefined8 *)((long)&local_38 + lVar22) = 0x10051636d;
        lVar25 = FUN_1005ba383(uVar23,&cf_com_apple_purplebuddy,&cf_SetupState,uVar28,0);
        if (DAT_1008c75c0 != -1) {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100517bff;
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar23 = DAT_1008c75b8;
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100516392;
        cVar15 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar15 != '\0') {
          uVar28 = *(undefined8 *)(param_1 + 0x152c8);
          local_458._0_2_ = 0x202;
          local_458._2_2_ = 0x842;
          local_458._4_4_ = (int)uVar28;
          uStack_450 = (undefined2)((ulong)uVar28 >> 0x20);
          uStack_44e = (undefined2)((ulong)uVar28 >> 0x30);
          uStack_44c = 0x842;
          uStack_44a = (undefined2)lVar25;
          uStack_448 = (undefined2)((ulong)lVar25 >> 0x10);
          uStack_446 = (undefined4)((ulong)lVar25 >> 0x20);
          *(undefined8 *)((long)&local_38 + lVar22) = 0x1005163db;
          __os_log_impl(0x100000000,uVar23,1,
                        "setup> PurpleBuddy setup state for device %{public}@ is %{public}@",
                        &local_458,0x16);
        }
        if (lVar25 == 0) {
LAB_1005163f7:
          if (*(char *)(param_1 + 0x14cd8) == '\0') {
            *(undefined1 *)(param_1 + 0x6af5) = 1;
          }
        }
        else {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x1005163ef;
          cVar15 = FUN_100170633(lVar25,&cf_SetupUsingiTunes);
          if (cVar15 != '\0') goto LAB_1005163f7;
          *(undefined8 *)((long)&local_38 + lVar22) = 0x10051648c;
          cVar15 = FUN_100170633(lVar25,&cf_SetupUsingAssistant);
          if (cVar15 == '\0') {
            *(undefined8 *)((long)&local_38 + lVar22) = 0x1005164a3;
            cVar15 = FUN_100170633(lVar25,&cf_RestoringFromBackup);
            if (cVar15 == '\0') {
              *(undefined8 *)((long)&local_38 + lVar22) = 0x1005166b1;
              cVar15 = FUN_100170633(lVar25,&cf_BackgroundRestoringFromiCloudBackup);
              if (cVar15 == '\0') {
                *(undefined8 *)((long)&local_38 + lVar22) = 0x10051730e;
                cVar15 = FUN_100170633(lVar25,&cf_RestoredFromiCloudBackup);
                if (cVar15 != '\0') {
                  uVar23 = *(undefined8 *)(param_1 + 0x7168);
                  *(undefined8 *)((long)&local_38 + lVar22) = 0x100517337;
                  iVar19 = FUN_1005bbcf4(uVar23,&cf_com_apple_purplebuddy,
                                         &cf_RestoredMobileSyncSettings,&local_498);
                  if ((iVar19 == -0x17fffff8) || ((iVar19 == 0 && ((char)local_498 == '\0')))) {
                    *(undefined8 *)((long)&local_38 + lVar22) = 0x10051735b;
                    FUN_1001ff770(param_1);
                    uVar23 = *(undefined8 *)(param_1 + 0x7168);
                    uVar28 = *(undefined8 *)PTR__kCFBooleanTrue_10082e038;
                    *(undefined8 *)((long)&local_38 + lVar22) = 0x10051737f;
                    iVar19 = FUN_1005bbb13(uVar23,&cf_com_apple_purplebuddy,
                                           &cf_RestoredMobileSyncSettings,uVar28);
                    if (iVar19 != 0) {
                      *(undefined8 *)((long)&local_38 + lVar22) = 0x10051738c;
                      uVar23 = FUN_1001cc310();
                      *(undefined8 *)((long)&local_38 + lVar22) = 0x10051739c;
                      cVar15 = _os_log_type_enabled(uVar23,0x10);
                      if (cVar15 != '\0') {
                        local_458._0_2_ = 0x202;
                        local_458._2_2_ = 0x822;
                        local_458._4_4_ = 0x7a0a90;
                        uStack_450 = 1;
                        uStack_44e = 0;
                        uStack_44c = 0x822;
                        uStack_44a = 0x8055;
                        uStack_448 = 0x7d;
                        uStack_446 = 1;
                        *(undefined8 *)((long)&local_38 + lVar22) = 0x100518a75;
                        __os_log_error_impl(0x100000000,uVar23,0x10,"%{public}s: (%{public}s)",
                                            &local_458,0x16);
                      }
                      *(undefined8 *)((long)&local_38 + lVar22) = 0x1005173ad;
                      FUN_1001782e9(0,0);
                    }
                  }
                }
              }
              else {
                *(undefined1 *)(param_1 + 0x6aed) = 1;
              }
            }
            else {
              *(undefined1 *)(param_1 + 0x6aec) = 1;
            }
          }
        }
        *(undefined8 *)((long)&local_38 + lVar22) = 0x1005166c8;
        FUN_10017060f(lVar25);
      }
      if (*(char *)(param_1 + 0x36a) != '\0') {
        *(undefined8 *)((long)&local_38 + lVar22) = 0x1005166e0;
        uVar23 = FUN_1005f8037(param_1,param_1 + 0x15968);
        *(undefined8 *)(param_1 + 0x15960) = uVar23;
      }
      if (*(char *)(param_1 + 0x37d) != '\0') {
        *(undefined8 *)((long)&local_38 + lVar22) = 0x1005166fa;
        FUN_1004ef6b9(param_1,0);
        if ((*(char *)(param_1 + 0x6ad2) != '\0') || (*(long *)(param_1 + 0x30) == 0))
        goto LAB_100514be3;
      }
      if ((*(char *)(param_1 + 0x3a1) != '\0') && (*(long *)(param_1 + 0x7168) != 0)) {
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100516734;
        uVar16 = FUN_1005c4a3d();
        *(undefined1 *)(param_1 + 0x151e2) = uVar16;
        if (DAT_1008c75c0 != -1) {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100518a8d;
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar23 = DAT_1008c75b8;
        *(undefined8 *)((long)&local_38 + lVar22) = 0x10051675c;
        cVar15 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar15 != '\0') {
          pcVar24 = "";
          if (*(char *)(param_1 + 0x151e2) == '\0') {
            pcVar24 = "not ";
          }
          local_458._0_2_ = 0x102;
          local_458._2_2_ = 0x822;
          local_458._4_4_ = (int)pcVar24;
          uStack_450 = (undefined2)((ulong)pcVar24 >> 0x20);
          uStack_44e = 0;
          *(undefined8 *)((long)&local_38 + lVar22) = 0x1005167ac;
          __os_log_impl(0x100000000,uVar23,1,"setup> WiFi syncing is %{public}senabled",&local_458,
                        0xc);
        }
        uVar23 = *(undefined8 *)(param_1 + 0x7168);
        if (*(char *)(param_1 + 0x151e2) == '\0') {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100516867;
          iVar19 = FUN_1005c6125(uVar23);
          uVar13 = uStack_44c;
          uVar11 = uStack_44e;
          uStack_44e = (undefined2)iVar19;
          uVar12 = uStack_44e;
          uStack_44c = (undefined2)((uint)iVar19 >> 0x10);
          uVar14 = uStack_44c;
          uStack_44e = uVar11;
          uStack_44c = uVar13;
          if (iVar19 != -0x80) {
            if (iVar19 == 0) goto LAB_1005168f9;
            *(undefined8 *)((long)&local_38 + lVar22) = 0x10051687d;
            uVar23 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar22) = 0x10051688d;
            cVar15 = _os_log_type_enabled(uVar23,0x10);
            if (cVar15 != '\0') {
              local_458._0_2_ = 0x202;
              local_458._2_2_ = 0x822;
              local_458._4_4_ = 0x7a0a90;
              uStack_450 = 1;
              uStack_44e = 0;
              uStack_44c = 0x400;
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100517b6a;
              uStack_44a = uVar12;
              uStack_448 = uVar14;
              __os_log_error_impl(0x100000000,uVar23,0x10,"%{public}s: err == (%d)",&local_458,0x12)
              ;
            }
          }
          if (DAT_1008c75c0 != -1) {
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100518c84;
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar23 = DAT_1008c75b8;
          *(undefined8 *)((long)&local_38 + lVar22) = 0x1005168b7;
          cVar15 = _os_log_type_enabled(DAT_1008c75b8,0x10);
          if (cVar15 != '\0') {
            pcVar24 = "MobileDeviceRemoveWiFiWakeupToken failed (%d / 0x%08X)";
            local_458._4_4_ = iVar19;
            uStack_44e = uVar12;
            uStack_44c = uVar14;
            goto LAB_1005168e6;
          }
        }
        else {
          uVar28 = *(undefined8 *)(param_1 + 0x66d8);
          *(undefined8 *)((long)&local_38 + lVar22) = 0x1005167cc;
          uVar28 = FUN_10055af90(uVar28);
          *(undefined8 *)((long)&local_38 + lVar22) = 0x1005167d7;
          iVar19 = FUN_1005c5b18(uVar23,uVar28);
          uVar13 = uStack_44c;
          uVar11 = uStack_44e;
          uStack_44e = (undefined2)iVar19;
          uVar12 = uStack_44e;
          uStack_44c = (undefined2)((uint)iVar19 >> 0x10);
          uVar14 = uStack_44c;
          uStack_44e = uVar11;
          uStack_44c = uVar13;
          if (iVar19 != -0x80) {
            if (iVar19 == 0) goto LAB_1005168f9;
            *(undefined8 *)((long)&local_38 + lVar22) = 0x1005167ed;
            uVar23 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar22) = 0x1005167fd;
            cVar15 = _os_log_type_enabled(uVar23,0x10);
            if (cVar15 != '\0') {
              local_458._0_2_ = 0x202;
              local_458._2_2_ = 0x822;
              local_458._4_4_ = 0x7a0a90;
              uStack_450 = 1;
              uStack_44e = 0;
              uStack_44c = 0x400;
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100517982;
              uStack_44a = uVar12;
              uStack_448 = uVar14;
              __os_log_error_impl(0x100000000,uVar23,0x10,"%{public}s: err == (%d)",&local_458,0x12)
              ;
            }
          }
          if (DAT_1008c75c0 != -1) {
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100518bc0;
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar23 = DAT_1008c75b8;
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100516827;
          cVar15 = _os_log_type_enabled(DAT_1008c75b8,0x10);
          if (cVar15 != '\0') {
            pcVar24 = "MobileDeviceSaveWiFiWakeupToken failed (%d / 0x%08X)";
            local_458._4_4_ = iVar19;
            uStack_44e = uVar12;
            uStack_44c = uVar14;
LAB_1005168e6:
            uStack_450 = 0x400;
            local_458._2_2_ = 0x400;
            local_458._0_2_ = 0x200;
            *(undefined8 *)((long)&local_38 + lVar22) = 0x1005168f9;
            __os_log_impl(0x100000000,uVar23,0x10,pcVar24,&local_458,0xe);
          }
        }
      }
LAB_1005168f9:
      if (*(char *)(param_1 + 0x3a2) != '\0') {
        *(undefined8 *)((long)&local_38 + lVar22) = 0x10051690a;
        iVar19 = FUN_100331f6e(param_1);
        if ((iVar19 != -0x80) && (iVar19 != 0)) {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x10051691c;
          uVar23 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar22) = 0x10051692c;
          cVar15 = _os_log_type_enabled(uVar23,0x10);
          if (cVar15 != '\0') {
            local_458._0_2_ = 0x202;
            local_458._2_2_ = 0x822;
            local_458._4_4_ = 0x7a0a90;
            uStack_450 = 1;
            uStack_44e = 0;
            uStack_44c = 0x400;
            uStack_44a = (undefined2)iVar19;
            uStack_448 = (undefined2)((uint)iVar19 >> 0x10);
            *(undefined8 *)((long)&local_38 + lVar22) = 0x10051782f;
            __os_log_error_impl(0x100000000,uVar23,0x10,"%{public}s: err == (%d)",&local_458,0x12);
          }
        }
      }
      if (*(char *)(param_1 + 0x35a) != '\0') {
        if (DAT_1008c75c0 != -1) {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100517c60;
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar23 = DAT_1008c75b8;
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100516963;
        cVar15 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar15 != '\0') {
          pcVar24 = "will";
          if (*(char *)(param_1 + 0x667f) == '\0') {
            pcVar24 = "will not";
          }
          pcVar31 = "are";
          if (*(char *)(param_1 + 0x6680) == '\0') {
            pcVar31 = "are not";
          }
          local_458._0_2_ = 0x302;
          local_458._2_2_ = 0x822;
          local_458._4_4_ = (int)pcVar24;
          uStack_450 = (undefined2)((ulong)pcVar24 >> 0x20);
          uStack_44e = 0;
          uStack_44c = 0x822;
          uStack_44a = SUB82(pcVar31,0);
          uStack_448 = (undefined2)((ulong)pcVar31 >> 0x10);
          uStack_446 = (undefined4)((ulong)pcVar31 >> 0x20);
          local_442 = 0x842;
          uStack_440 = (undefined6)*(undefined8 *)(param_1 + 0x152c8);
          local_43a = (undefined2)((ulong)*(undefined8 *)(param_1 + 0x152c8) >> 0x30);
          *(undefined8 *)((long)&local_38 + lVar22) = 0x1005169ed;
          __os_log_impl(0x100000000,uVar23,1,
                        "setup> backups %{public}s be encrypted, encrypted backups %{public}s required for device %{public}@"
                        ,&local_458,0x20);
        }
        *(undefined8 *)((long)&local_38 + lVar22) = 0x1005169f5;
        FUN_1004e1698(param_1);
      }
      if ((*(char *)(param_1 + 0x3a3) != '\0') && (*(long *)(param_1 + 0x7168) != 0)) {
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100516a17;
        uVar16 = FUN_1005c4431();
        *(undefined1 *)(param_1 + 0x151e5) = uVar16;
        if (DAT_1008c75c0 != -1) {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100518aa5;
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar23 = DAT_1008c75b8;
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100516a3f;
        cVar15 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar15 != '\0') {
          pcVar24 = "";
          if (*(char *)(param_1 + 0x151e5) == '\0') {
            pcVar24 = "not ";
          }
          local_458._0_2_ = 0x102;
          local_458._2_2_ = 0x822;
          local_458._4_4_ = (int)pcVar24;
          uStack_450 = (undefined2)((ulong)pcVar24 >> 0x20);
          uStack_44e = 0;
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100516a8f;
          __os_log_impl(0x100000000,uVar23,1,"setup> cloud backup is %{public}senabled",&local_458,
                        0xc);
        }
        uVar23 = *(undefined8 *)(param_1 + 0x7168);
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100516a9b;
        uVar23 = FUN_1005c4527(uVar23);
        *(undefined8 *)(param_1 + 0x151f0) = uVar23;
      }
      *(undefined8 *)((long)&local_38 + lVar22) = 0x100516aab;
      FUN_10050b0cb(param_1);
      if (*(char *)(param_1 + 0x389) != '\0') {
        if ((*(long *)(param_1 + 0x16658) != 0) || (*(long *)(param_1 + 0x16650) != 0)) {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100516ad1;
          uVar23 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100516ae1;
          cVar15 = _os_log_type_enabled(uVar23,0x10);
          if (cVar15 != '\0') {
            local_458._0_2_ = 0x202;
            local_458._2_2_ = 0x822;
            local_458._4_4_ = 0x7a0a90;
            uStack_450 = 1;
            uStack_44e = 0;
            uStack_44c = 0x822;
            uStack_44a = 0x8084;
            uStack_448 = 0x7d;
            uStack_446 = 1;
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100517258;
            __os_log_error_impl(0x100000000,uVar23,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
          }
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100516af2;
          FUN_1001782e9(0,0);
        }
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100516afe;
        FUN_100626980(&local_458);
        plVar27 = (long *)(param_1 + 0x16658);
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100516b17;
        FUN_100217418(plVar27,&local_458);
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100516b1f;
        FUN_100205d70(&local_458);
        lVar25 = *plVar27;
        if (lVar25 == 0) {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100516b30;
          uVar23 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100516b40;
          cVar15 = _os_log_type_enabled(uVar23,0x10);
          if (cVar15 != '\0') {
            local_458._0_2_ = 0x202;
            local_458._2_2_ = 0x822;
            local_458._4_4_ = 0x7a0a90;
            uStack_450 = 1;
            uStack_44e = 0;
            uStack_44c = 0x822;
            uStack_44a = 0x6199;
            uStack_448 = 0x7d;
            uStack_446 = 1;
            *(undefined8 *)((long)&local_38 + lVar22) = 0x1005177e5;
            __os_log_error_impl(0x100000000,uVar23,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
          }
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100516b51;
          FUN_1001782e9(0,0);
          if (DAT_1008c75c0 != -1) {
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100518ba8;
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar23 = DAT_1008c75b8;
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100516b73;
          cVar15 = _os_log_type_enabled(DAT_1008c75b8,0x10);
          if (cVar15 != '\0') {
            local_458._0_2_ = 0;
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100516ba5;
            __os_log_impl(0x100000000,uVar23,0x10,
                          "genius sync>  couldn\'t allocate SQL database object",&local_458,2);
          }
          lVar25 = *plVar27;
          if (lVar25 != 0) goto LAB_100516bb1;
          uVar20 = 0xffffff94;
        }
        else {
LAB_100516bb1:
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100516bc2;
          uVar20 = FUN_100628c8c(lVar25,&DAT_10085f890,1);
        }
        local_1468 = plVar27;
        if (DAT_1008c75c0 != -1) {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100517c7b;
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar23 = DAT_1008c75b8;
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100516bee;
        cVar15 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar15 != '\0') {
          lVar25 = *local_1468;
          local_458._0_2_ = 0x200;
          local_458._2_2_ = 0x800;
          local_458._4_4_ = (int)lVar25;
          uStack_450 = (undefined2)((ulong)lVar25 >> 0x20);
          uStack_44e = (undefined2)((ulong)lVar25 >> 0x30);
          uStack_44c = 0x400;
          uStack_44a = (undefined2)uVar20;
          uStack_448 = (undefined2)((uint)uVar20 >> 0x10);
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100516c3a;
          __os_log_impl(0x100000000,uVar23,1,"genius sync>  sql  db %p (%d)",&local_458,0x12);
        }
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100516c46;
        iVar19 = FUN_100181e82(local_14a0);
        if (iVar19 == 2) {
          uVar32 = *(uint *)(param_1 + 0x6b58);
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100516c6f;
          _snprintf((char *)&local_458,0x20,"VFS%u",(ulong)uVar32);
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100516c80;
          pvVar29 = operator_new(0x5d0,(nothrow_t *)PTR_nothrow_10082c970);
          if (pvVar29 == (void *)0x0) {
            *(undefined8 *)(param_1 + 0x16650) = 0;
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100516cbe;
            uVar23 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100516cce;
            cVar15 = _os_log_type_enabled(uVar23);
            if (cVar15 != '\0') {
              local_498._0_1_ = '\x02';
              local_498._1_1_ = 2;
              local_498._2_2_ = 0x822;
              local_498._4_4_ = 0x7a0a90;
              uStack_490 = 1;
              uStack_48c = 0x822;
              uStack_48a = 0x80c8;
              uStack_488 = 0x7d;
              uStack_486 = 1;
              uStack_484 = 0;
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100517880;
              __os_log_error_impl(0x100000000,uVar23,0x10,"%{public}s: (%{public}s)",&local_498,0x16
                                 );
            }
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100516cdf;
            FUN_1001782e9(0);
            pvVar29 = *(void **)(param_1 + 0x16650);
            if (pvVar29 != (void *)0x0) goto LAB_100516cf2;
            iVar19 = -0x6c;
          }
          else {
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100516c9e;
            FUN_10035cbc4(pvVar29,&local_458,local_14a0);
            *(void **)(param_1 + 0x16650) = pvVar29;
LAB_100516cf2:
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100516d00;
            iVar19 = _sqlite3_vfs_register((sqlite3_vfs *)((long)pvVar29 + 8),0);
          }
          local_1468 = (long *)(param_1 + 0x16650);
          if (DAT_1008c75c0 != -1) {
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100518ac0;
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar23 = DAT_1008c75b8;
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100516d2c;
          cVar15 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar15 != '\0') {
            local_498._0_1_ = '\0';
            local_498._1_1_ = 2;
            local_498._2_2_ = 0x800;
            local_498._4_4_ = (undefined4)*local_1468;
            uStack_490 = (undefined4)((ulong)*local_1468 >> 0x20);
            uStack_48c = 0x400;
            uStack_48a = (undefined2)iVar19;
            uStack_488 = (undefined2)((uint)iVar19 >> 0x10);
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100516d78;
            __os_log_impl(0x100000000,uVar23,1,"genius sync>  sql vfs %p (%d)",&local_498,0x12);
          }
        }
      }
      if (((*(char *)(param_1 + 0x35f) != '\0') && (*(char *)(param_1 + 0x14cd8) != '\0')) &&
         (*(char *)(param_1 + 0x6af2) == '\0')) {
        lVar25 = *(long *)(param_1 + 0x16658);
        if (lVar25 == 0) {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100516db0;
          uVar23 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100516dc0;
          cVar15 = _os_log_type_enabled(uVar23,0x10);
          if (cVar15 != '\0') {
            local_458._0_2_ = 0x202;
            local_458._2_2_ = 0x822;
            local_458._4_4_ = 0x7a0a90;
            uStack_450 = 1;
            uStack_44e = 0;
            uStack_44c = 0x822;
            uStack_44a = 0x6199;
            uStack_448 = 0x7d;
            uStack_446 = 1;
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100517b20;
            __os_log_error_impl(0x100000000,uVar23,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
          }
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100516dd1;
          FUN_1001782e9(0,0);
          lVar25 = *(long *)(param_1 + 0x16658);
          if (lVar25 == 0) goto LAB_100516ea4;
        }
        uVar23 = *(undefined8 *)(param_1 + 0x16650);
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100516e06;
        iVar19 = FUN_1006293da(lVar25,&PTR_s_library_10085a4b0,1,param_1 + 0x16218,0x10a,uVar23);
        if (iVar19 == 0) {
          uVar23 = *(undefined8 *)(param_1 + 0x16658);
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100516e2b;
          bVar17 = FUN_1006292c2(uVar23,&local_458,0,0,0,0);
          if ((bVar17 & CONCAT22(local_458._2_2_,(undefined2)local_458) < 0x1a) == 1) {
            if (DAT_1008c75c0 != -1) {
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100518dc0;
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar23 = DAT_1008c75b8;
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100516e5d;
            cVar15 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar15 != '\0') {
              local_498._0_1_ = '\0';
              local_498._1_1_ = 0;
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100516e8f;
              __os_log_impl(0x100000000,uVar23,1,"setup> sql schema version updated",&local_498,2);
            }
            *(undefined1 *)(param_1 + 0x6afc) = 1;
          }
          uVar23 = *(undefined8 *)(param_1 + 0x16658);
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100516ea4;
          FUN_100626be2(uVar23,0);
        }
      }
LAB_100516ea4:
      if ((*(char *)(param_1 + 0x6ad2) != '\0') || (*(long *)(param_1 + 0x30) == 0)) {
LAB_100514be3:
        if (iVar18 == 0) goto LAB_100515307;
        goto LAB_100514bec;
      }
      *(undefined8 *)((long)&local_38 + lVar22) = 0x100516ecb;
      FUN_1004f0e83(param_1,local_b68);
      *(undefined8 *)((long)&local_38 + lVar22) = 0x100516eea;
      iVar18 = FUN_1001888ba(param_1 + 0x75e0,"iTunesCDB",local_f88,0);
      if (iVar18 == 0) {
LAB_100516f31:
        uVar23 = *(undefined8 *)(param_1 + 0x66d8);
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100516f3d;
        cVar15 = FUN_100266b26(uVar23);
        uVar32 = 0;
        if ((cVar15 == '\0') &&
           (uVar21 = *(int *)(param_1 + 0x40c) - 3, uVar32 = 0, (ushort)uVar21 < 3)) {
          uVar32 = *(uint *)(&DAT_100755354 + (ulong)(uVar21 & 0xffff) * 4);
        }
        if ((*(char *)(param_1 + 0x360) != '\0') || (*(char *)(param_1 + 0x14cda) == '\0')) {
          puVar3 = (ulong *)(*(long *)(param_1 + 0x30) + 0x1bb0);
          *puVar3 = *puVar3 & 0xfffffbffffffffff;
        }
        if ((*(char *)(param_1 + 0x361) != '\0') || (*(char *)(param_1 + 0x14cda) == '\0')) {
          puVar3 = (ulong *)(*(long *)(param_1 + 0x30) + 0x1bb0);
          *puVar3 = *puVar3 & 0xffff7fffffffffff;
        }
        cVar15 = *(char *)(param_1 + 0x372);
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100516fc9;
        local_1468 = (long *)FUN_1001ebd46();
        uVar21 = uVar32 | 4;
        if (cVar15 == '\0') {
          uVar21 = uVar32;
        }
        uVar23 = *(undefined8 *)(param_1 + 0x30);
        *(long *)(&stack0xffffffffffffffd8 + lVar22) = param_1 + 0x6ab8;
        *(long *)(&stack0xffffffffffffffd0 + lVar22) = param_1 + 0x69c4;
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100517016;
        iVar18 = FUN_1003ee7b4(uVar23,local_f88,local_b68,uVar21,FUN_10051a92b,param_1);
        if (DAT_1008c75c0 != -1) {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100518bd8;
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar23 = DAT_1008c75b8;
        *(undefined8 *)((long)&local_38 + lVar22) = 0x10051703b;
        cVar15 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar15 != '\0') {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100517044;
          dVar9 = (double)FUN_1001ebd46();
          dVar9 = (dVar9 - (double)local_1468) * _DAT_100708b48;
          local_458._0_2_ = 0x100;
          local_458._2_2_ = 0x800;
          local_458._4_4_ = SUB84(dVar9,0);
          uStack_450 = (undefined2)((ulong)dVar9 >> 0x20);
          uStack_44e = (undefined2)((ulong)dVar9 >> 0x30);
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100517089;
          __os_log_impl(0x100000000,uVar23,1,"perf> ReadIPodDBFromFile() took %.2f ms",&local_458,
                        0xc);
        }
        if ((*(char *)(param_1 + 0x6ad2) != '\0') || (*(long *)(param_1 + 0x30) == 0))
        goto LAB_100514be3;
        if (iVar18 != 0) {
LAB_1005170ac:
          uVar20 = *(undefined4 *)(param_1 + 0x71b4);
          *(undefined8 *)((long)&local_38 + lVar22) = 0x1005170d0;
          FUN_1001e0a72(param_1 + 0x71a0,uVar20,&local_458,0x100,0);
          if (DAT_1008c75c0 != -1) {
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100518d90;
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar23 = DAT_1008c75b8;
          *(undefined8 *)((long)&local_38 + lVar22) = 0x1005170f2;
          cVar15 = _os_log_type_enabled(DAT_1008c75b8,0x10);
          if (cVar15 != '\0') {
            local_498._0_1_ = '\x02';
            local_498._1_1_ = 3;
            local_498._2_2_ = 0x800;
            local_498._4_4_ = (undefined4)*(undefined8 *)(param_1 + 0x38);
            uStack_490 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20);
            uStack_48c = 0x400;
            uStack_48a = (undefined2)iVar18;
            uStack_488 = (undefined2)((uint)iVar18 >> 0x10);
            uStack_486 = 0x822;
            uStack_484 = SUB82(&local_458,0);
            uStack_482 = (undefined6)((ulong)&local_458 >> 0x10);
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100517143;
            __os_log_impl(0x100000000,uVar23,0x10,
                          "setup> failed to read database for device id %016llX (%d), device GUID is %{public}s"
                          ,&local_498,0x1c);
          }
          uVar23 = *(undefined8 *)(param_1 + 0x66d8);
          *(undefined8 *)((long)&local_38 + lVar22) = 0x10051714f;
          cVar15 = FUN_100266cae(uVar23);
          if (cVar15 == '\0') {
            uVar20 = *(undefined4 *)(param_1 + 0x66b0);
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100517167;
            uVar23 = FUN_100416f20(uVar20,0x10cc0247);
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100517176;
            FUN_1001b7eb0(&local_498,uVar23);
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100517189;
            FUN_1001b8dfc(&local_468,local_b68);
            uVar20 = *(undefined4 *)(param_1 + 0x28);
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100517198;
            FUN_1004fda52(local_1490,uVar20);
            *(undefined8 *)((long)&local_38 + lVar22) = 0x1005171b2;
            FUN_100450a08(&local_498,&local_468,local_1490);
            *(undefined8 *)((long)&local_38 + lVar22) = 0x1005171be;
            FUN_1001b7a50(local_1490);
            *(undefined8 *)((long)&local_38 + lVar22) = 0x1005171ca;
            FUN_1001b7a50(&local_468);
            *(undefined8 *)((long)&local_38 + lVar22) = 0x1005171d6;
            FUN_1001b7a50(&local_498);
            iVar19 = *(int *)(param_1 + 0x66b0);
            if (iVar19 < 0x69506f64) {
              if ((iVar19 == 0x69506164) || (iVar19 == 0x6950686e)) {
LAB_10051792c:
                uVar23 = *(undefined8 *)(param_1 + 0x66d8);
                *(undefined8 *)((long)&local_38 + lVar22) = 0x100517938;
                FUN_100266f9e(uVar23);
              }
            }
            else if ((iVar19 == 0x69506f74) || (iVar19 == 0x69506f64)) goto LAB_10051792c;
          }
          goto LAB_100514bec;
        }
        *(undefined8 *)((long)&local_38 + lVar22) = 0x1005173b7;
        local_1470 = (long *)FUN_10048604a();
        local_1468 = local_1470;
        if (local_1470 == (long *)0x0) {
          if ((*(int *)(*(long *)(param_1 + 0x30) + 0x98) != 0) ||
             (*(int *)(*(long *)(param_1 + 0x30) + 0x9c) != 0)) {
            if (DAT_1008c75c0 != -1) {
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100518e88;
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar23 = DAT_1008c75b8;
            *(undefined8 *)((long)&local_38 + lVar22) = 0x1005178d9;
            cVar15 = _os_log_type_enabled(DAT_1008c75b8,0x10);
            iVar18 = -0x32;
            if (cVar15 != '\0') {
              local_458._0_2_ = 0;
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100517915;
              __os_log_impl(0x100000000,uVar23,0x10,"setup> missing primary playlist",&local_458,2);
            }
            goto LAB_1005170ac;
          }
        }
        else if (*(long *)(param_1 + 0x7168) != 0) {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x1005173ee;
          FUN_100512841(local_1470,param_1 + 0x6f64);
        }
        if (*(char *)(param_1 + 0x37c) != '\0') {
          if ((0x70f < *(ushort *)(param_1 + 100)) && ((*(byte *)(param_1 + 0x14dfc) & 1) == 0)) {
            *(byte *)(param_1 + 0x14dfc) = *(byte *)(param_1 + 0x14dfc) | 1;
            *(undefined8 *)((long)&local_38 + lVar22) = 0x10051741d;
            iVar18 = FUN_1003c636f(param_1);
            if ((iVar18 != -0x80) && (iVar18 != 0)) {
              *(undefined8 *)((long)&local_38 + lVar22) = 0x10051742f;
              uVar23 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar22) = 0x10051743f;
              cVar15 = _os_log_type_enabled(uVar23,0x10);
              if (cVar15 != '\0') {
                local_458._0_2_ = 0x202;
                local_458._2_2_ = 0x822;
                local_458._4_4_ = 0x7a0a90;
                uStack_450 = 1;
                uStack_44e = 0;
                uStack_44c = 0x400;
                uStack_44a = (undefined2)iVar18;
                uStack_448 = (undefined2)((uint)iVar18 >> 0x10);
                *(undefined8 *)((long)&local_38 + lVar22) = 0x100518cce;
                __os_log_error_impl(0x100000000,uVar23,0x10,"%{public}s: err == (%d)",&local_458,
                                    0x12);
              }
            }
          }
          if (local_1468 != (long *)0x0) {
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100517459;
            iVar18 = FUN_1003c7fb5(param_1);
            if ((iVar18 != -0x80) && (iVar18 != 0)) {
              *(undefined8 *)((long)&local_38 + lVar22) = 0x10051746b;
              uVar23 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar22) = 0x10051747b;
              cVar15 = _os_log_type_enabled(uVar23,0x10);
              if (cVar15 != '\0') {
                local_458._0_2_ = 0x202;
                local_458._2_2_ = 0x822;
                local_458._4_4_ = 0x7a0a90;
                uStack_450 = 1;
                uStack_44e = 0;
                uStack_44c = 0x400;
                uStack_44a = (undefined2)iVar18;
                uStack_448 = (undefined2)((uint)iVar18 >> 0x10);
                *(undefined8 *)((long)&local_38 + lVar22) = 0x100518c22;
                __os_log_error_impl(0x100000000,uVar23,0x10,"%{public}s: err == (%d)",&local_458,
                                    0x12);
              }
            }
          }
        }
        if (*(char *)(param_1 + 0x6ac4) == '\0') {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x1005179de;
          FUN_1004ded5a(param_1,&local_1459);
          if (local_1459 == '\0') goto LAB_100517490;
          if (DAT_1008c75c0 != -1) {
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100518f21;
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar23 = DAT_1008c75b8;
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100517a0d;
          cVar15 = _os_log_type_enabled(DAT_1008c75b8,1);
          bVar34 = true;
          if (cVar15 != '\0') {
            local_458._0_2_ = 0;
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100517a46;
            __os_log_impl(0x100000000,uVar23,1,"setup> updated play counts",&local_458,2);
          }
        }
        else {
LAB_100517490:
          bVar34 = false;
        }
        if ((*(char *)(param_1 + 0x35f) != '\0') &&
           (*(int *)(param_1 + 0x450) != *(int *)(param_1 + 0x6aac))) {
          if (DAT_1008c75c0 != -1) {
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100518f09;
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar23 = DAT_1008c75b8;
          *(undefined8 *)((long)&local_38 + lVar22) = 0x1005174cc;
          cVar15 = _os_log_type_enabled(DAT_1008c75b8,1);
          bVar34 = true;
          if (cVar15 != '\0') {
            local_458._0_2_ = 0;
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100517501;
            __os_log_impl(0x100000000,uVar23,1,"setup> updated sql commands version",&local_458,2);
          }
        }
        if ((*(char *)(param_1 + 0x14cda) == '\0') && (*(char *)(param_1 + 0x6abf) != '\0')) {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100517a67;
          FUN_1005072b1(param_1,&local_1459);
          if (local_1459 != '\0') {
            if (DAT_1008c75c0 != -1) {
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100518f39;
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar23 = DAT_1008c75b8;
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100517a96;
            cVar15 = _os_log_type_enabled(DAT_1008c75b8,1);
            bVar34 = true;
            if (cVar15 != '\0') {
              local_458._0_2_ = 0;
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100517acf;
              __os_log_impl(0x100000000,uVar23,1,"setup> deleted unauthorized FPv3 tracks",
                            &local_458,2);
              bVar34 = true;
            }
          }
        }
        if (*(char *)(param_1 + 0x379) != '\0') {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100517526;
          FUN_1005100e7(param_1,&local_1459);
          if (local_1459 != '\0') {
            if (DAT_1008c75c0 != -1) {
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100518ef1;
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar23 = DAT_1008c75b8;
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100517551;
            cVar15 = _os_log_type_enabled(DAT_1008c75b8,1);
            bVar34 = true;
            if (cVar15 != '\0') {
              local_458._0_2_ = 0;
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100517586;
              __os_log_impl(0x100000000,uVar23,1,"setup> updated rental tracks",&local_458,2);
            }
          }
        }
        iVar19 = 0;
        if ((*(char *)(param_1 + 0x6ad2) != '\0') ||
           (lVar25 = *(long *)(param_1 + 0x30), lVar25 == 0)) goto LAB_10051530a;
        if (*(char *)(param_1 + 0x388) != '\0') {
          *(byte *)(lVar25 + 0x2d1a) =
               *(byte *)(lVar25 + 0x2d1a) & 0xbf | (*(byte *)(param_1 + 0x14df8) & 1) << 6;
          *(undefined8 *)((long)&local_38 + lVar22) = 0x1005175d5;
          cVar15 = FUN_10051ad69(param_1);
          if (cVar15 != '\0') {
            if (DAT_1008c75c0 != -1) {
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100518f81;
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar23 = DAT_1008c75b8;
            *(undefined8 *)((long)&local_38 + lVar22) = 0x1005175fb;
            cVar15 = _os_log_type_enabled(DAT_1008c75b8,1);
            bVar34 = true;
            if (cVar15 != '\0') {
              local_458._0_2_ = 0;
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100517630;
              __os_log_impl(0x100000000,uVar23,1,"setup> needs genius update",&local_458,2);
            }
          }
        }
        if (*(char *)(param_1 + 0x6afc) != '\0') {
          if (DAT_1008c75c0 != -1) {
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100518f51;
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar23 = DAT_1008c75b8;
          *(undefined8 *)((long)&local_38 + lVar22) = 0x10051765b;
          cVar15 = _os_log_type_enabled(DAT_1008c75b8,1);
          bVar34 = true;
          if (cVar15 != '\0') {
            local_458._0_2_ = 0;
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100517690;
            __os_log_impl(0x100000000,uVar23,1,"setup> updated to sqlite db",&local_458,2);
          }
        }
        if (*(char *)(param_1 + 0x353) != '\0') {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x1005176a3;
          FUN_1004f2b0b(param_1,0);
        }
        uVar32 = (*(uint *)(param_1 + 0x69d0) & 0xff) << 8 | (uint)*(byte *)(param_1 + 0x69d4);
        if (0x174 < uVar32) {
LAB_100517cc4:
          if ((*(char *)(param_1 + 0x6ad2) != '\0') || (*(long *)(param_1 + 0x30) == 0))
          goto LAB_10051530a;
          if ((*(char *)(param_1 + 0x3a2) != '\0') && ((*(byte *)(param_1 + 0x166e0) & 0xc) != 0)) {
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100517cf5;
            for (lVar25 = FUN_1002f930c(); lVar25 != 0; lVar25 = FUN_1002f9451(lVar25)) {
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100517d08;
              cVar15 = FUN_1004ebf47(param_1);
              if (cVar15 != '\0') {
                *(undefined8 *)((long)&local_38 + lVar22) = 0x100517d19;
                FUN_10047659f(lVar25);
              }
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100517d21;
            }
          }
          if (local_1468 == (long *)0x0) goto LAB_100517d8a;
          bVar10 = true;
          if (local_1470 == (long *)0x0) {
            uVar23 = *(undefined8 *)(param_1 + 0x30);
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100517d4c;
            local_1470 = (long *)FUN_10048604a(uVar23);
            if (local_1470 == (long *)0x0) {
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100517d61;
              uVar23 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100517d71;
              cVar15 = _os_log_type_enabled(uVar23,0x10);
              if (cVar15 != '\0') {
                local_458._0_2_ = 0x202;
                local_458._2_2_ = 0x822;
                local_458._4_4_ = 0x7a0a90;
                uStack_450 = 1;
                uStack_44e = 0;
                uStack_44c = 0x822;
                uStack_44a = 0x9fc7;
                uStack_448 = 0x7c;
                uStack_446 = 1;
                *(undefined8 *)((long)&local_38 + lVar22) = 0x100518ed9;
                __os_log_error_impl(0x100000000,uVar23,0x10,"%{public}s: (%{public}s)",&local_458,
                                    0x16);
              }
              bVar10 = true;
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100517d85;
              FUN_1001782e9(0,0);
              goto LAB_100517f28;
            }
          }
LAB_100517f34:
          uVar32 = *(uint *)(local_1470 + 0x66);
          *(uint *)(local_1470 + 0x66) = uVar32 | 0x20;
          bVar35 = true;
          if (*(char *)(param_1 + 0x14cf1) == '\0') {
            bVar35 = *(char *)(param_1 + 0x14cda) != '\0';
          }
          *(uint *)(local_1470 + 0x66) = uVar32 & 0xfffffffe | 0x20 | (uint)bVar35;
          goto LAB_100517f66;
        }
        if (DAT_1008c75c0 != -1) {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100518f69;
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar23 = DAT_1008c75b8;
        *(undefined8 *)((long)&local_38 + lVar22) = 0x1005176e9;
        cVar15 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar15 != '\0') {
          local_458._0_2_ = 0;
          *(undefined8 *)((long)&local_38 + lVar22) = 0x10051771b;
          __os_log_impl(0x100000000,uVar23,1,"setup> updated db version",&local_458,2);
        }
        if (0x112 < uVar32) {
          if (uVar32 < 0x118) {
LAB_100517c0d:
            uVar23 = *(undefined8 *)(param_1 + 0x30);
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100517c1b;
            FUN_1002fb220(uVar23,1);
LAB_100517c8d:
            uVar23 = *(undefined8 *)(param_1 + 0x30);
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100517c96;
            FUN_10051b38b(uVar23);
LAB_100517c96:
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100517c9e;
            FUN_10051b4cb(param_1);
LAB_100517c9e:
            if (*(char *)(param_1 + 0x39c) != '\0') {
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100517caf;
              FUN_10051b53e(param_1);
            }
LAB_100517caf:
            uVar23 = *(undefined8 *)(param_1 + 0x30);
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100517cb8;
            FUN_10051b689(uVar23);
          }
          else {
            if (uVar32 < 0x120) goto LAB_100517c8d;
            if (uVar32 < 0x12e) goto LAB_100517c96;
            if (uVar32 < 0x130) goto LAB_100517c9e;
            if (uVar32 < 0x132) goto LAB_100517caf;
            if (uVar32 == 0x158) {
              if (*(char *)(param_1 + 0x39c) != '\0') {
                uVar23 = *(undefined8 *)(param_1 + 0x30);
                *(undefined8 *)((long)&local_38 + lVar22) = 0x100518b0f;
                FUN_10051b793(uVar23);
              }
            }
            else {
              bVar34 = true;
              if (0x171 < uVar32) goto LAB_100517cc4;
            }
          }
          uVar23 = *(undefined8 *)(param_1 + 0x30);
          bVar34 = true;
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100517cc4;
          FUN_1002bb23b(uVar23);
          goto LAB_100517cc4;
        }
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100517730;
        iVar18 = FUN_10051af54(param_1);
        if (iVar18 != -0x80) {
          if (iVar18 == 0) goto LAB_100517c0d;
          *(undefined8 *)((long)&local_38 + lVar22) = 0x10051774a;
          uVar23 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar22) = 0x10051775a;
          cVar15 = _os_log_type_enabled(uVar23,0x10);
          if (cVar15 != '\0') {
            puVar26 = &local_458;
            local_458._0_2_ = 0x202;
            local_458._2_2_ = 0x822;
            local_458._4_4_ = 0x7a0a90;
            uStack_450 = 1;
            uStack_44e = 0;
            uStack_44c = 0x400;
            uStack_44a = (undefined2)iVar18;
            uStack_448 = (undefined2)((uint)iVar18 >> 0x10);
            goto LAB_100516113;
          }
        }
LAB_100514bec:
        *(undefined8 *)(param_1 + 0x30) = 0;
        iVar19 = iVar18;
      }
      else {
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100516f0b;
        iVar18 = FUN_1001888ba(param_1 + 0x75e0,"iTunesDB",local_f88,local_15a8);
        bVar34 = false;
        if (((iVar18 == 0) && (bVar34 = false, local_15a8[0] == '\0')) && (local_1588 != 0))
        goto LAB_100516f31;
LAB_100517d8a:
        uStack_448 = 0;
        uStack_446 = 0;
        local_442 = 0;
        uStack_440 = 0;
        local_458._0_2_ = 0;
        local_458._2_2_ = 0;
        local_458._4_4_ = 0;
        uStack_450 = 0;
        uStack_44e = 0;
        uStack_44c = 0;
        uStack_44a = 0;
        local_43a = 0;
        uStack_438 = 0;
        local_430 = 0;
        local_42c = 0;
        uStack_42b = 0;
        local_428 = 0x3ff0000000000000;
        local_420 = 0;
        uStack_418 = 0;
        uStack_417 = 0;
        uStack_410 = 0;
        uStack_40f = 0;
        if (local_b68[0] == 0) {
          uVar20 = *(undefined4 *)(param_1 + 0x66b0);
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100517df6;
          uVar23 = FUN_100416f20(uVar20,0x10cc007b);
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100517e05;
          FUN_1001e115f(uVar23,local_b68);
          if (DAT_1008c75c0 != -1) {
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100518da8;
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar23 = DAT_1008c75b8;
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100517e27;
          cVar15 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar15 != '\0') {
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100517e3e;
            FUN_1001b8dfc(&local_498,local_b68);
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100517e4a;
            uVar28 = FUN_1001b83ae(&local_498);
            local_468 = 0x8220102;
            local_464 = (undefined2)uVar28;
            uStack_462 = (undefined2)((ulong)uVar28 >> 0x10);
            uStack_460 = (undefined4)((ulong)uVar28 >> 0x20);
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100517e7d;
            __os_log_impl(0x100000000,uVar23,1,"setup> using \"%{public}s\" as default device name",
                          &local_468,0xc);
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100517e89;
            FUN_1001b7a50(&local_498);
          }
        }
        uStack_450 = SUB82(local_b68,0);
        uStack_44e = (undefined2)((ulong)local_b68 >> 0x10);
        uStack_44c = (undefined2)((ulong)local_b68 >> 0x20);
        uStack_44a = (undefined2)((ulong)local_b68 >> 0x30);
        local_42c = 1;
        uVar23 = *(undefined8 *)(param_1 + 0x30);
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100517ea7;
        FUN_100313e0b(uVar23);
        uVar23 = *(undefined8 *)(param_1 + 0x30);
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100517ec0;
        iVar18 = FUN_1002e2674(uVar23,0,&local_458,&local_1470);
        if (iVar18 == -0x80) goto LAB_100514bec;
        if (iVar18 != 0) {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x1005180e5;
          uVar23 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar22) = 0x1005180f5;
          cVar15 = _os_log_type_enabled(uVar23,0x10);
          if (cVar15 != '\0') {
            puVar26 = &local_498;
            local_498._0_1_ = '\x02';
            local_498._1_1_ = 2;
            local_498._2_2_ = 0x822;
            local_498._4_4_ = 0x7a0a90;
            uStack_490 = 1;
            uStack_48c = 0x400;
            uStack_48a = (undefined2)iVar18;
            uStack_488 = (undefined2)((uint)iVar18 >> 0x10);
            goto LAB_100516113;
          }
          goto LAB_100514bec;
        }
        if (*(char *)(param_1 + 0x37c) != '\0') {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100517ee6;
          iVar18 = FUN_1003c7fb5(param_1);
          if ((iVar18 != -0x80) && (iVar18 != 0)) {
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100517ef8;
            uVar23 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100517f08;
            cVar15 = _os_log_type_enabled(uVar23,0x10);
            if (cVar15 != '\0') {
              local_498._0_1_ = '\x02';
              local_498._1_1_ = 2;
              local_498._2_2_ = 0x822;
              local_498._4_4_ = 0x7a0a90;
              uStack_490 = 1;
              uStack_48c = 0x400;
              uStack_48a = (undefined2)iVar18;
              uStack_488 = (undefined2)((uint)iVar18 >> 0x10);
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100518a24;
              __os_log_error_impl(0x100000000,uVar23,0x10,"%{public}s: err == (%d)",&local_498,0x12)
              ;
            }
          }
        }
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100517f1c;
        FUN_100488970(local_1470);
        uVar23 = *(undefined8 *)(param_1 + 0x30);
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100517f25;
        FUN_1002fbbfc(uVar23);
        bVar10 = false;
LAB_100517f28:
        if (local_1470 != (long *)0x0) goto LAB_100517f34;
LAB_100517f66:
        if (*(char *)(param_1 + 0x35c) == '\0') {
          uVar32 = 0x11;
          if (*(char *)(param_1 + 0x33b) == '\0') {
            uVar32 = 0;
          }
          uVar21 = uVar32 + 2;
          if (*(char *)(param_1 + 0x346) == '\0') {
            uVar21 = uVar32;
          }
          uVar32 = uVar21 + 4;
          if (*(char *)(param_1 + 0x34e) == '\0') {
            uVar32 = uVar21;
          }
          uVar21 = uVar32 + 8;
          if (*(char *)(param_1 + 0x34f) == '\0') {
            uVar21 = uVar32;
          }
          uVar32 = uVar21 | 0x40;
          if (*(char *)(param_1 + 0x37a) == '\0') {
            uVar32 = uVar21;
          }
          if ((*(char *)(param_1 + 0x376) != '\0') || (*(char *)(param_1 + 0x377) != '\0')) {
            uVar32 = uVar32 | 0x20;
          }
          uVar21 = uVar32 | 0x400;
          if (*(char *)(param_1 + 0x39c) == '\0') {
            uVar21 = uVar32;
          }
          uVar23 = *(undefined8 *)(param_1 + 0x30);
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100517ff2;
          cVar15 = FUN_1003166a1(uVar23,0xf);
          uVar23 = *(undefined8 *)(param_1 + 0x30);
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100517ffe;
          FUN_100313e0b(uVar23);
          uVar23 = *(undefined8 *)(param_1 + 0x30);
          *(undefined8 *)((long)&local_38 + lVar22) = 0x10051800f;
          FUN_100587203(uVar23,uVar21,1);
          uVar23 = *(undefined8 *)(param_1 + 0x30);
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100518018;
          FUN_1002fbbfc(uVar23);
          if (cVar15 == '\0') {
            uVar23 = *(undefined8 *)(param_1 + 0x30);
            *(undefined8 *)((long)&local_38 + lVar22) = 0x10051802d;
            FUN_100316867(uVar23,0xf,0);
          }
        }
        *(undefined4 *)(param_1 + 0x16670) = 1;
        if (*(char *)(param_1 + 0x15429) == '\0') {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x10051804f;
          FUN_1002d7d5c(param_1,param_1 + 0x15448);
          *(undefined1 *)(param_1 + 0x15429) = 1;
        }
        *(undefined8 *)(param_1 + 0x69d0) = 0x7500000001;
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100518070;
        FUN_1001b0d8d(0);
        iVar19 = 0;
        if ((*(char *)(param_1 + 0x6ad2) != '\0') || (*(long *)(param_1 + 0x30) == 0))
        goto LAB_10051530a;
        if (*(char *)(param_1 + 0x38b) != '\0') {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x1005180a9;
          pvVar29 = operator_new(0x16c0,(nothrow_t *)PTR_nothrow_10082c970);
          if (pvVar29 == (void *)0x0) {
            *(undefined8 *)(param_1 + 0x16640) = 0;
          }
          else {
            *(undefined8 *)((long)&local_38 + lVar22) = 0x1005180bd;
            FUN_1005a27a4(pvVar29);
            *(void **)(param_1 + 0x16640) = pvVar29;
            *(undefined8 *)((long)&local_38 + lVar22) = 0x1005180cf;
            cVar15 = FUN_1005a2d90(pvVar29,param_1);
            if (cVar15 != '\0') goto LAB_10051818d;
          }
          *(undefined8 *)((long)&local_38 + lVar22) = 0x10051814b;
          uVar23 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar22) = 0x10051815b;
          cVar15 = _os_log_type_enabled(uVar23,0x10);
          if (cVar15 != '\0') {
            local_458._0_2_ = 0x202;
            local_458._2_2_ = 0x822;
            local_458._4_4_ = 0x7a0a90;
            uStack_450 = 1;
            uStack_44e = 0;
            uStack_44c = 0x822;
            uStack_44a = 0x702f;
            uStack_448 = 0x7d;
            uStack_446 = 1;
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100518b90;
            __os_log_error_impl(0x100000000,uVar23,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
          }
          *(undefined8 *)((long)&local_38 + lVar22) = 0x10051816c;
          FUN_1001782e9(0,0);
          pvVar29 = *(void **)(param_1 + 0x16640);
          if (pvVar29 != (void *)0x0) {
            *(undefined8 *)((long)&local_38 + lVar22) = 0x10051817d;
            FUN_1005a2a2c(pvVar29);
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100518185;
            operator_delete(pvVar29);
          }
          *(undefined8 *)(param_1 + 0x16640) = 0;
        }
LAB_10051818d:
        if (*(char *)(param_1 + 0x35c) != '\0') {
          if ((*(char *)(DAT_1008c76a0 + 0x1a91) != '\0') && (*(char *)(param_1 + 0x6afa) == '\0'))
          {
            uVar20 = *(undefined4 *)(param_1 + 0x28);
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100518824;
            FUN_1004fda52(&local_458,uVar20);
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100518835;
            FUN_1004507db(0x10cf0034,&local_458);
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100518841;
            FUN_1001b7a50(&local_458);
            iVar18 = -0x80;
            goto LAB_100514bec;
          }
          if (local_1470 != (long *)0x0) {
            *(byte *)((long)local_1470 + 0x332) = *(byte *)((long)local_1470 + 0x332) | 8;
            *(byte *)(local_1470 + 0x48) = *(byte *)(local_1470 + 0x48) & 0xbf;
            *(undefined8 *)((long)&local_38 + lVar22) = 0x1005181e6;
            FUN_100538c95(local_1470 + 0x27,0x7d);
            *(undefined8 *)((long)&local_38 + lVar22) = 0x1005181fc;
            FUN_100538c95(local_1470 + 0x2b,0x7d);
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100518208;
            lVar25 = FUN_100352848(local_1470);
            if (lVar25 != 0) {
              *(undefined8 *)((long)&local_38 + lVar22) = 0x10051821d;
              lVar30 = FUN_100351d04(lVar25,1);
              if (lVar30 != 0) {
                *(undefined1 *)(lVar30 + 6) = 1;
              }
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100518232;
              FUN_100352633(local_1470);
              if (!bVar10) {
                *(undefined8 *)((long)&local_38 + lVar22) = 0x10051824b;
                FUN_100351dee(lVar25,1,0,1);
              }
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100518268;
              FUN_1001c6987(local_1470 + 0x19,0x6370636c,local_1470,0,0);
            }
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100518280;
            FUN_1001c6b4a(local_1470 + 0x19,local_14c8);
          }
        }
        if ((bVar10) && (*(char *)(param_1 + 0x6ac6) == '\0')) {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100518296;
          FUN_1004d0f38(param_1);
        }
        if ((*(char *)(param_1 + 0x14cf3) == '\0') &&
           (*(undefined1 *)(param_1 + 0x14cf3) = 1, *(char *)(param_1 + 0x14cd8) != '\0')) {
          *(undefined1 *)(param_1 + 0x6ad4) = 1;
        }
        if (*(short *)(param_1 + 0x454) != 0) {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x1005182c8;
          iVar18 = FUN_10051b7ca(param_1);
          if ((iVar18 != -0x80) && (iVar18 != 0)) {
            *(undefined8 *)((long)&local_38 + lVar22) = 0x1005182da;
            uVar23 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar22) = 0x1005182ea;
            cVar15 = _os_log_type_enabled(uVar23,0x10);
            if (cVar15 != '\0') {
              local_458._0_2_ = 0x202;
              local_458._2_2_ = 0x822;
              local_458._4_4_ = 0x7a0a90;
              uStack_450 = 1;
              uStack_44e = 0;
              uStack_44c = 0x400;
              uStack_44a = (undefined2)iVar18;
              uStack_448 = (undefined2)((uint)iVar18 >> 0x10);
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100518c6c;
              __os_log_error_impl(0x100000000,uVar23,0x10,"%{public}s: err == (%d)",&local_458,0x12)
              ;
            }
          }
        }
        *(undefined8 *)((long)&local_38 + lVar22) = 0x1005182fa;
        FUN_1002c3d1a(param_1);
        if (*(char *)(param_1 + 0x14cd8) != '\0') {
          iVar18 = *(int *)(param_1 + 0x66b0);
          if (iVar18 < 0x69506f64) {
            if ((iVar18 == 0x69506164) || (iVar18 == 0x6950686e)) {
LAB_100518339:
              uVar23 = *(undefined8 *)(param_1 + 0x66d8);
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100518345;
              cVar15 = FUN_100266b26(uVar23);
              if ((cVar15 == '\0') && (*(char *)(param_1 + 0x14d4e) == '\0')) {
                *(undefined8 *)((long)&local_38 + lVar22) = 0x10051836d;
                iVar18 = FUN_1002d21d3(local_14a0,&local_1494);
                if ((iVar18 == 0) && (local_1494 < 2)) {
                  uVar20 = *(undefined4 *)(param_1 + 0x66b0);
                  *(undefined8 *)((long)&local_38 + lVar22) = 0x100518392;
                  uVar23 = FUN_100416f20(uVar20,0x10cc00b7);
                  *(undefined8 *)((long)&local_38 + lVar22) = 0x1005183a1;
                  FUN_1001b7eb0(&local_498,uVar23);
                  *(undefined8 *)((long)&local_38 + lVar22) = 0x1005183b0;
                  FUN_1004fdbd0(&local_468,param_1);
                  *(undefined8 *)((long)&local_38 + lVar22) = 0x1005183ca;
                  FUN_1001bbec4(&local_458,&local_498,&local_468);
                  *(undefined8 *)((long)&local_38 + lVar22) = 0x1005183db;
                  FUN_1001c334a(local_1490,0x5db30003);
                  *(undefined8 *)((long)&local_38 + lVar22) = 0x1005183ee;
                  FUN_1001b7b04(local_14c0,"");
                  *(undefined8 *)((long)&local_38 + lVar22) = 0x1005183ff;
                  FUN_1001c334a(local_14b0,0x5db30014);
                  uVar20 = *(undefined4 *)(param_1 + 0x28);
                  *(undefined8 *)((long)&local_38 + lVar22) = 0x10051840e;
                  FUN_1004fda52(local_14d8,uVar20);
                  *(undefined8 *)(&stack0xffffffffffffffd0 + lVar22) = 0;
                  *(undefined8 *)((long)&local_38 + lVar22) = 0x100518445;
                  FUN_10044fdb1(&local_458,local_1490,local_14c0,local_14b0,param_1 + 0x14d4e,
                                local_14d8);
                  *(undefined8 *)((long)&local_38 + lVar22) = 0x100518451;
                  FUN_1001b7a50(local_14d8);
                  *(undefined8 *)((long)&local_38 + lVar22) = 0x10051845d;
                  FUN_1001b7a50(local_14b0);
                  *(undefined8 *)((long)&local_38 + lVar22) = 0x100518469;
                  FUN_1001b7a50(local_14c0);
                  *(undefined8 *)((long)&local_38 + lVar22) = 0x100518475;
                  FUN_1001b7a50(local_1490);
                  *(undefined8 *)((long)&local_38 + lVar22) = 0x100518481;
                  FUN_1001b7a50(&local_458);
                  *(undefined8 *)((long)&local_38 + lVar22) = 0x10051848d;
                  FUN_1001b7a50(&local_468);
                  *(undefined8 *)((long)&local_38 + lVar22) = 0x100518499;
                  FUN_1001b7a50(&local_498);
                }
              }
            }
          }
          else if ((iVar18 == 0x69506f74) || (iVar18 == 0x69506f64)) goto LAB_100518339;
        }
        if (*(short *)(param_1 + 0x424) != 0) {
          uVar23 = *(undefined8 *)(param_1 + 0x66d8);
          *(undefined8 *)((long)&local_38 + lVar22) = 0x1005184b3;
          cVar15 = FUN_100266b26(uVar23);
          if (cVar15 == '\0') {
            uVar23 = *(undefined8 *)(param_1 + 0x66d8);
            *(undefined8 *)((long)&local_38 + lVar22) = 0x1005184ce;
            iVar18 = FUN_1002682cd(uVar23,&local_1494);
            if ((((ushort)local_1494 != 0 && iVar18 == 0) &&
                ((ushort)local_1494 < *(ushort *)(param_1 + 0x424))) &&
               (*(char *)(param_1 + 0x14dde) == '\0')) {
              uVar20 = *(undefined4 *)(param_1 + 0x66b0);
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100518515;
              uVar23 = FUN_100416f20(uVar20,0x10cc00b8);
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100518524;
              FUN_1001b7eb0(&local_498,uVar23);
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100518533;
              FUN_1004fdbd0(&local_468,param_1);
              *(undefined8 *)((long)&local_38 + lVar22) = 0x10051854d;
              FUN_1001bbec4(&local_458,&local_498,&local_468);
              *(undefined8 *)((long)&local_38 + lVar22) = 0x10051855e;
              FUN_1001c334a(local_1490,0x5db30003);
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100518571;
              FUN_1001b7b04(local_14c0,"");
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100518582;
              FUN_1001c334a(local_14b0,0x5db30014);
              uVar20 = *(undefined4 *)(param_1 + 0x28);
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100518591;
              FUN_1004fda52(local_14d8,uVar20);
              *(undefined8 *)(&stack0xffffffffffffffd0 + lVar22) = 0;
              *(undefined8 *)((long)&local_38 + lVar22) = 0x1005185c8;
              FUN_10044fdb1(&local_458,local_1490,local_14c0,local_14b0,param_1 + 0x14dde,local_14d8
                           );
              *(undefined8 *)((long)&local_38 + lVar22) = 0x1005185d4;
              FUN_1001b7a50(local_14d8);
              *(undefined8 *)((long)&local_38 + lVar22) = 0x1005185e0;
              FUN_1001b7a50(local_14b0);
              *(undefined8 *)((long)&local_38 + lVar22) = 0x1005185ec;
              FUN_1001b7a50(local_14c0);
              *(undefined8 *)((long)&local_38 + lVar22) = 0x1005185f8;
              FUN_1001b7a50(local_1490);
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100518604;
              FUN_1001b7a50(&local_458);
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100518610;
              FUN_1001b7a50(&local_468);
              *(undefined8 *)((long)&local_38 + lVar22) = 0x10051861c;
              FUN_1001b7a50(&local_498);
            }
          }
        }
        *(undefined8 *)((long)&local_38 + lVar22) = 0x10051862b;
        FUN_1004ef324(param_1,8,0);
        if (bVar34) {
          uVar23 = *(undefined8 *)(param_1 + 0x30);
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100518643;
          FUN_100316867(uVar23,0xf,1);
        }
        uVar16 = *(undefined1 *)(param_1 + 0x14cda);
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100518652;
        FUN_10043044c(param_1,uVar16);
        uVar16 = *(undefined1 *)(param_1 + 0x14d6c);
        uVar4 = *(undefined1 *)(param_1 + 0x14cdb);
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100518668;
        FUN_10042ffc4(param_1,uVar16,uVar4);
        uVar16 = *(undefined1 *)(param_1 + 0x14d68);
        uVar4 = *(undefined1 *)(param_1 + 0x14d69);
        *(undefined8 *)((long)&local_38 + lVar22) = 0x10051867e;
        FUN_1004300a8(param_1,uVar16,uVar4);
        uVar16 = *(undefined1 *)(param_1 + 0x14d78);
        uVar4 = *(undefined1 *)(param_1 + 0x14d79);
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100518694;
        FUN_100430196(param_1,uVar16,uVar4);
        uVar16 = *(undefined1 *)(param_1 + 0x14d2a);
        uVar4 = *(undefined1 *)(param_1 + 0x14d29);
        *(undefined8 *)((long)&local_38 + lVar22) = 0x1005186aa;
        FUN_10043097c(param_1,uVar16,uVar4);
        uVar16 = *(undefined1 *)(param_1 + 0x14dec);
        uVar4 = *(undefined1 *)(param_1 + 0x14ded);
        *(undefined8 *)((long)&local_38 + lVar22) = 0x1005186c0;
        FUN_100430284(param_1,uVar16,uVar4);
        uVar16 = *(undefined1 *)(param_1 + 0x14dee);
        uVar4 = *(undefined1 *)(param_1 + 0x14def);
        *(undefined8 *)((long)&local_38 + lVar22) = 0x1005186d6;
        FUN_100430368(param_1,uVar16,uVar4);
        uVar16 = *(undefined1 *)(param_1 + 0x14d04);
        uVar4 = *(undefined1 *)(param_1 + 0x14d05);
        uVar5 = *(undefined1 *)(param_1 + 0x14d06);
        uVar6 = *(undefined1 *)(param_1 + 0x14dc4);
        *(undefined8 *)((long)&local_38 + lVar22) = 0x1005186fe;
        FUN_100430a60(param_1,uVar16,uVar4,uVar5,uVar6,0);
        if ((*(char *)(param_1 + 0x6ad4) != '\0') &&
           (*(undefined1 *)(param_1 + 0x6ad4) = 0, *(char *)(param_1 + 0x3a2) == '\0')) {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100518726;
          FUN_1004efbf5(param_1,FUN_1004efe05);
        }
        if (*(char *)(param_1 + 0x6afc) != '\0') {
          uVar23 = *(undefined8 *)(param_1 + 0x30);
          *(undefined8 *)((long)&local_38 + lVar22) = 0x10051873e;
          FUN_100316f84(uVar23,0,0,0);
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100518746;
          FUN_1004e7a5c(param_1);
          *(undefined1 *)(param_1 + 0x6afc) = 0;
        }
        if ((*(char *)(DAT_1008c76a0 + 0x1a91) != '\0') && (*(char *)(param_1 + 0x6afa) == '\0')) {
          if (*(char *)(param_1 + 0x3b2) == '\0') {
            uVar20 = *(undefined4 *)(param_1 + 0x28);
            *(undefined8 *)((long)&local_38 + lVar22) = 0x10051885b;
            FUN_1004fda52(&local_458,uVar20);
            *(undefined8 *)((long)&local_38 + lVar22) = 0x10051886c;
            FUN_1004507db(0x10cf0034,&local_458);
          }
          else {
            if (*(char *)(param_1 + 0x6af2) != '\0') goto LAB_100518878;
            local_464 = 0;
            local_468 = 0;
            local_1558 = 0;
            uStack_1550 = 0;
            *(undefined8 *)((long)&local_38 + lVar22) = 0x1005187ba;
            FUN_1002520df(param_1,0,&local_468,0,0);
            *(undefined8 *)((long)&local_38 + lVar22) = 0x1005187c6;
            FUN_100205d70(&local_1558);
            uVar20 = *(undefined4 *)(param_1 + 0x66b0);
            *(undefined8 *)((long)&local_38 + lVar22) = 0x1005187d6;
            uVar23 = FUN_100416f20(uVar20,0x10cc01d2);
            *(undefined8 *)((long)&local_38 + lVar22) = 0x1005187e5;
            FUN_1001b7eb0(&local_458,uVar23);
            uVar20 = *(undefined4 *)(param_1 + 0x28);
            *(undefined8 *)((long)&local_38 + lVar22) = 0x1005187f4;
            FUN_1004fda52(&local_498,uVar20);
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100518807;
            FUN_100450d15(&local_458,&local_498);
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100518813;
            FUN_1001b7a50(&local_498);
          }
          *(undefined8 *)((long)&local_38 + lVar22) = 0x100518878;
          FUN_1001b7a50(&local_458);
        }
LAB_100518878:
        if ((*(char *)(DAT_1008c76a0 + 0x1a91) != '\0') && (*(char *)(param_1 + 0x6afa) == '\0'))
        goto LAB_100515307;
        iVar19 = 0;
        if ((*(char *)(DAT_1008c76a0 + 0x1a92) == '\0') &&
           (*(char *)(DAT_1008c76a0 + 0x1a93) == '\0')) {
          *(undefined8 *)((long)&local_38 + lVar22) = 0x1005188ba;
          cVar15 = FUN_10050b533(param_1);
          if (cVar15 != '\0') {
            uVar20 = *(undefined4 *)(param_1 + 0x28);
            *(undefined8 *)((long)&local_38 + lVar22) = 0x1005188c6;
            cVar15 = FUN_100179192(uVar20);
            if ((cVar15 == '\0') || (*(int *)(param_1 + 0x66b0) != 0x69506f64)) {
              *(undefined8 *)((long)&local_38 + lVar22) = 0x1005188de;
              cVar15 = FUN_10050b592(param_1);
              if (cVar15 == '\0') {
                *(undefined8 *)((long)&local_38 + lVar22) = 0x1005188f1;
                FUN_1004dc8a0(param_1,&local_145a);
              }
            }
          }
          if ((*(char *)(param_1 + 0x6ad2) == '\0') && (*(long *)(param_1 + 0x30) != 0)) {
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100518913;
            FUN_1004e1392(param_1,0);
            if (local_145a == '\0') {
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100518926;
              cVar15 = FUN_1004e83ba(param_1,0);
              if (cVar15 != '\0') {
                *(undefined8 *)((long)&local_38 + lVar22) = 0x100518932;
                uVar23 = FUN_1004e7f5c(param_1);
                *(undefined8 *)((long)&local_38 + lVar22) = 0x10051893d;
                FUN_100603fea(param_1,uVar23);
              }
            }
            uVar23 = *(undefined8 *)(param_1 + 0x66d8);
            *(undefined8 *)((long)&local_38 + lVar22) = 0x100518949;
            cVar15 = FUN_100266b26(uVar23);
            if (cVar15 == '\0') {
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100518955;
              FUN_1002c4451(param_1);
              if (*(int *)(param_1 + 0x284) == 0x2711) {
                *(undefined8 *)((long)&local_38 + lVar22) = 0x10051896d;
                FUN_1004ffad8(param_1 + 0xc6);
              }
            }
            if (*(char *)(param_1 + 0x14cd8) != '\0') {
              uVar20 = *(undefined4 *)(param_1 + 0x28);
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100518980;
              FUN_10051bd27(uVar20,0);
            }
            bVar17 = *(byte *)(DAT_1008c76a0 + 0x1a58);
            if (bVar17 == 2) {
              *(undefined8 *)((long)&local_38 + lVar22) = 0x1005189a0;
              cVar15 = FUN_10051de77(param_1,"software-update-automation-device-id");
              if (cVar15 == '\0') {
                bVar17 = *(byte *)(DAT_1008c76a0 + 0x1a58);
                goto LAB_1005189b1;
              }
LAB_1005189d0:
              *(undefined8 *)((long)&local_38 + lVar22) = 0x1005189da;
              FUN_1001c1811(4);
              goto LAB_100515307;
            }
LAB_1005189b1:
            if (bVar17 == 3) {
              *(undefined8 *)((long)&local_38 + lVar22) = 0x1005189c8;
              cVar15 = FUN_10051de77(param_1,"backup-restore-automation-device-id");
              if (cVar15 != '\0') goto LAB_1005189d0;
              bVar17 = *(byte *)(DAT_1008c76a0 + 0x1a58);
            }
            if ((bVar17 & 0xfe) == 2) {
LAB_100518ce6:
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100518cf4;
              cVar15 = FUN_1001cdcc9("software-update-automation-bundle-path",0);
              if (cVar15 != '\0') {
                *(undefined8 *)((long)&local_38 + lVar22) = 0x100518d0b;
                cVar15 = FUN_10051de77(param_1,"software-update-automation-device-id");
                if (cVar15 != '\0') {
                  uVar20 = *(undefined4 *)(param_1 + 0x28);
                  *(undefined8 *)((long)&local_38 + lVar22) = 0x100518d22;
                  FUN_10051bf1e(FUN_10051bffb,uVar20);
                  goto LAB_100515307;
                }
              }
            }
            else {
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100518d37;
              cVar15 = FUN_1001cd44e("run-software-restore-automation",0,0);
              if (cVar15 != '\0') {
                *(undefined8 *)((long)&local_38 + lVar22) = 0x100518d52;
                iVar18 = FUN_1001cd9a6("software-restore-automation-delay",10,0);
                uVar20 = *(undefined4 *)(param_1 + 0x28);
                iVar19 = 0;
                *(undefined8 *)((long)&local_38 + lVar22) = 0x100518d78;
                FUN_1001ee941(SUB84((double)iVar18,0),0,0,0,FUN_10051be19,uVar20,&local_458);
                goto LAB_10051530a;
              }
              if (*(char *)(DAT_1008c76a0 + 0x1a58) != '\x01') goto LAB_100518ce6;
            }
            if (*(char *)(DAT_1008c76a0 + 0x1a58) != '\x01') {
              *(undefined8 *)((long)&local_38 + lVar22) = 0x100518df7;
              cVar15 = FUN_1001cdcc9("backup-restore-automation-bundle-name",0);
              if (cVar15 != '\0') {
                *(undefined8 *)((long)&local_38 + lVar22) = 0x100518e0a;
                cVar15 = FUN_10051de77(param_1,"backup-restore-automation-device-id");
                if (cVar15 != '\0') {
                  uVar20 = *(undefined4 *)(param_1 + 0x28);
                  iVar19 = 0;
                  *(undefined8 *)((long)&local_38 + lVar22) = 0x100518e38;
                  FUN_1001ee941((int)DAT_100700458,0,0,0,FUN_10051c7a7,uVar20,&local_458);
                  goto LAB_10051530a;
                }
              }
            }
            iVar19 = 0;
            if (*(char *)(DAT_1008c76a0 + 0x1a58) == '\x01') {
              *(undefined1 *)(DAT_1008c76a0 + 0x1a58) = 0;
            }
          }
        }
      }
LAB_10051530a:
      if (DAT_1008c75c0 != -1) {
        *(undefined8 *)((long)&local_38 + lVar22) = 0x10051651b;
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar23 = DAT_1008c75b8;
      *(undefined8 *)((long)&local_38 + lVar22) = 0x10051532c;
      cVar15 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar15 != '\0') {
        *(undefined8 *)((long)&local_38 + lVar22) = 0x100515339;
        dVar9 = (double)FUN_1001ebd46();
        dVar9 = (dVar9 - local_1548) * _DAT_100708b48;
        local_458._0_2_ = 0x100;
        local_458._2_2_ = 0x800;
        local_458._4_4_ = SUB84(dVar9,0);
        uStack_450 = (undefined2)((ulong)dVar9 >> 0x20);
        uStack_44e = (undefined2)((ulong)dVar9 >> 0x30);
        *(undefined8 *)((long)&local_38 + lVar22) = 0x10051537e;
        __os_log_impl(0x100000000,uVar23,1,"perf> SetupDevice() took %.2f ms",&local_458,0xc);
      }
      goto LAB_1005149ef;
    }
    *(undefined8 *)((long)&local_38 + lVar22) = 0x100514b85;
    uVar23 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar22) = 0x100514b95;
    cVar15 = _os_log_type_enabled(uVar23,0x10);
    if (cVar15 != '\0') {
      pcVar24 = "handlerData->trackData != nullptr";
      goto LAB_100514c23;
    }
  }
  else {
    *(undefined8 *)((long)&local_38 + lVar22) = 0x1005149c8;
    uVar23 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar22) = 0x1005149d8;
    cVar15 = _os_log_type_enabled(uVar23,0x10);
    if (cVar15 != '\0') {
      pcVar24 = "handlerData->abortSetupFiber == false";
LAB_100514c23:
      uStack_44c = 0x822;
      uStack_44e = 0;
      uStack_450 = 1;
      local_458._4_4_ = 0x7a0a90;
      local_458._2_2_ = 0x822;
      local_458._0_2_ = 0x202;
      uStack_44a = SUB82(pcVar24,0);
      uStack_448 = (undefined2)((ulong)pcVar24 >> 0x10);
      uStack_446 = (undefined4)((ulong)pcVar24 >> 0x20);
      *(undefined8 *)((long)&local_38 + lVar22) = 0x100514c48;
      __os_log_error_impl(0x100000000,uVar23,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
  }
  iVar19 = -0x32;
  *(undefined8 *)((long)&local_38 + lVar22) = 0x1005149ef;
  FUN_1001782e9(0,0);
LAB_1005149ef:
  *(undefined8 *)((long)&local_38 + lVar22) = 0x1005149fb;
  FUN_1001cc23c(local_14f0);
  *(undefined8 *)((long)&local_38 + lVar22) = 0x100514a02;
  FUN_1001cc4fc(0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((long)&local_38 + lVar22) = 0x100517bec;
    ___stack_chk_fail();
  }
  return iVar19;
}

