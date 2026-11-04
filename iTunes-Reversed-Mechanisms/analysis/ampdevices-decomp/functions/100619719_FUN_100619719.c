// name: FUN_100619719
// address: 100619719

int FUN_100619719(long param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 ***pppuVar3;
  long *plVar4;
  char cVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *****pppppuVar17;
  long lVar18;
  ulong uVar19;
  undefined8 ****ppppuVar20;
  long *plVar21;
  undefined8 *****pppppuVar22;
  size_t sVar23;
  void *pvVar24;
  long *plVar25;
  undefined8 ****ppppuVar26;
  ulong uVar27;
  byte bVar28;
  int iVar29;
  undefined8 *puVar30;
  char *pcVar31;
  char *pcVar32;
  byte bVar33;
  bool bVar34;
  undefined1 auVar35 [16];
  undefined8 local_38e0;
  undefined8 *local_38d8;
  undefined8 local_38d0;
  undefined8 uStack_38c8;
  undefined8 *local_38c0;
  undefined8 local_38b8;
  undefined8 uStack_38b0;
  undefined8 local_38a8;
  undefined8 *local_38a0;
  undefined8 local_3898;
  undefined8 uStack_3890;
  undefined8 local_3888;
  undefined8 *local_3880;
  undefined8 local_3878;
  undefined8 uStack_3870;
  undefined1 *local_3868;
  undefined8 ***local_3860;
  long *local_3858;
  long local_3850 [2];
  undefined8 ****local_3840;
  undefined8 ****local_3838;
  undefined8 uStack_3830;
  undefined8 local_3828;
  undefined4 uStack_3820;
  undefined4 uStack_381c;
  undefined1 local_3818;
  undefined8 **local_3810 [2];
  undefined1 local_3800 [16];
  undefined1 local_37f0 [16];
  undefined1 local_37e0 [16];
  undefined1 local_37d0 [16];
  undefined1 local_37c0 [24];
  undefined8 ***local_37a8;
  long local_37a0;
  long *local_3798;
  long local_3790;
  long lStack_3788;
  long local_3780;
  long local_3778;
  long local_3770;
  long local_3768;
  int *local_3760;
  undefined8 ***local_3758;
  int *local_3750;
  undefined8 ***local_3748;
  long local_3740;
  undefined8 ***local_3738;
  undefined8 ***local_3730;
  long local_3728;
  ulong local_3720;
  undefined8 ***local_3718;
  undefined8 ***local_3710;
  undefined8 local_3708;
  undefined4 uStack_3700;
  undefined2 uStack_36fc;
  undefined2 uStack_36fa;
  undefined1 uStack_36f8;
  undefined1 uStack_36f7;
  undefined4 uStack_36f6;
  undefined2 uStack_36f2;
  undefined8 uStack_36f0;
  undefined8 local_36e8;
  undefined8 uStack_36e0;
  undefined8 local_36d8;
  undefined8 uStack_36d0;
  undefined8 local_36c8;
  undefined8 uStack_36c0;
  undefined8 local_36b8;
  undefined8 uStack_36b0;
  undefined8 local_36a8;
  undefined8 uStack_36a0;
  undefined8 local_3698;
  undefined8 local_3688;
  undefined4 uStack_3680;
  undefined2 uStack_367c;
  undefined2 uStack_367a;
  undefined1 uStack_3678;
  undefined1 uStack_3677;
  undefined4 uStack_3676;
  undefined2 uStack_3672;
  undefined8 ***local_3670;
  undefined2 local_3668;
  undefined8 local_3666;
  undefined1 local_3650 [16];
  undefined1 local_3640 [16];
  undefined1 local_3630 [16];
  undefined1 local_3620 [96];
  short local_35c0 [512];
  short local_31c0 [6336];
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x100619731;
  lVar12 = FUN_100108310();
  lVar12 = -lVar12;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar14 = *(long *)(param_1 + 0x10);
  local_3758 = (undefined8 ****)0x0;
  local_3760 = (int *)0x0;
  local_3790 = 0;
  lStack_3788 = 0;
  local_3750 = (int *)0x0;
  lVar18 = *(long *)(lVar14 + 0x30);
  local_3798 = &local_3790;
  local_3728 = param_1;
  if (lVar18 == 0) {
    *(undefined8 *)((long)&local_38 + lVar12) = 0x100619831;
    uVar13 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar12) = 0x100619841;
    cVar5 = _os_log_type_enabled(uVar13,0x10);
    if (cVar5 != '\0') {
      local_3688._0_4_ = 0x8220202;
      local_3688._4_4_ = 0x7a0a90;
      uStack_3680 = 1;
      uStack_367c = 0x822;
      uStack_367a = 0x8c4b;
      uStack_3678 = 0x7b;
      uStack_3677 = 0;
      uStack_3676 = 1;
      *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a3d6;
      __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_3688,0x16);
    }
    iVar8 = -0x32;
    *(undefined8 *)((long)&local_38 + lVar12) = 0x100619858;
    FUN_1001782e9(0,0);
  }
  else {
    bVar28 = *(byte *)(param_1 + 0x41);
    lVar2 = *(long *)(param_1 + 0x18);
    local_3868 = param_2;
    local_3768 = lVar18;
    local_3740 = lVar14;
    if (lVar2 == 0) {
      *(undefined8 *)((long)&local_38 + lVar12) = 0x1006197ab;
      uVar13 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar12) = 0x1006197bb;
      cVar5 = _os_log_type_enabled(uVar13,0x10);
      if (cVar5 != '\0') {
        local_3688._0_4_ = 0x8220202;
        local_3688._4_4_ = 0x7a0a90;
        uStack_3680 = 1;
        uStack_367c = 0x822;
        uStack_367a = 0x472b;
        uStack_3678 = 0x7f;
        uStack_3677 = 0;
        uStack_3676 = 1;
        *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a427;
        __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_3688,0x16);
      }
      *(undefined8 *)((long)&local_38 + lVar12) = 0x1006197cc;
      FUN_1001782e9(0,0);
    }
    *(undefined8 *)((long)&local_38 + lVar12) = 0x1006197db;
    FUN_1002b1d9f(&local_3688,lVar2);
    *(undefined8 *)((long)&local_38 + lVar12) = 0x1006197ee;
    FUN_1002a41f4(&local_3798,local_3790);
    local_3790 = CONCAT26(uStack_367a,CONCAT24(uStack_367c,uStack_3680));
    lStack_3788 = CONCAT26(uStack_3672,CONCAT42(uStack_3676,CONCAT11(uStack_3677,uStack_3678)));
    lVar14 = local_3790;
    local_3798 = &local_3790;
    if (lStack_3788 != 0) {
      *(long **)(local_3790 + 0x10) = &local_3790;
      uStack_3680 = 0;
      uStack_367c = 0;
      uStack_367a = 0;
      uStack_3678 = 0;
      uStack_3677 = 0;
      uStack_3676 = 0;
      uStack_3672 = 0;
      lVar14 = 0;
      local_3798 = local_3688;
      local_3688 = (long *)&uStack_3680;
    }
    *(undefined8 *)((long)&local_38 + lVar12) = 0x100619870;
    FUN_1002a41f4(&local_3688,lVar14);
    *(undefined8 *)((long)&local_38 + lVar12) = 0x10061987e;
    iVar8 = FUN_100594adc(&local_3758,0);
    local_3708 = (void *)CONCAT44(local_3708._4_4_,(undefined4)local_3708);
    if (iVar8 != -0x80) {
      if (iVar8 == 0) {
        *(undefined8 *)((long)&local_38 + lVar12) = 0x10061989b;
        lVar14 = FUN_1002f9fc5(local_3768);
        bVar28 = bVar28 & 1;
        while( true ) {
          if (lVar14 == 0) break;
          *(undefined8 *)((long)&local_38 + lVar12) = 0x1006198c0;
          cVar5 = FUN_100605e59(lVar14,lVar2,&local_3798,bVar28);
          if (cVar5 != '\0') {
            *(undefined8 *)((long)&local_38 + lVar12) = 0x1006198d5;
            iVar8 = FUN_10059571f(local_3758,lVar14,0);
            if (iVar8 != 0) {
              local_3708 = (void *)CONCAT44(local_3708._4_4_,(undefined4)local_3708);
              if (iVar8 == -0x80) goto LAB_10061a321;
              *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a309;
              uVar13 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a319;
              cVar5 = _os_log_type_enabled(uVar13,0x10);
              local_3708 = (void *)CONCAT44(local_3708._4_4_,(undefined4)local_3708);
              if (cVar5 == '\0') goto LAB_10061a321;
              uStack_367a = (undefined2)iVar8;
              uStack_3678 = (undefined1)((uint)iVar8 >> 0x10);
              uStack_3677 = (undefined1)((uint)iVar8 >> 0x18);
              goto LAB_10061993c;
            }
          }
          *(undefined8 *)((long)&local_38 + lVar12) = 0x1006198e8;
          lVar14 = FUN_1002fa118(lVar14);
        }
        iVar8 = 0;
        local_3708 = (void *)CONCAT44(local_3708._4_4_,(undefined4)local_3708);
        if (((((undefined8 ****)local_3758 != (undefined8 ****)0x0) &&
             (local_3708 = (void *)CONCAT44(local_3708._4_4_,(undefined4)local_3708),
             *(int *)local_3758 == 0x4f4c5354)) &&
            (local_3708 = (void *)CONCAT44(local_3708._4_4_,(undefined4)local_3708),
            *(int *)((long)local_3758 + 4) != 0)) &&
           (uVar9 = (int)((ulong)((long)local_3758[2] - (long)local_3758[1]) >> 3) * -0x49249249,
           local_3710 = (undefined8 ***)(ulong)uVar9,
           local_3708 = (void *)CONCAT44(local_3708._4_4_,(undefined4)local_3708), uVar9 != 0)) {
          local_3880 = &local_3878;
          local_3888 = 0;
          local_3878 = 0;
          uStack_3870 = 0;
          local_38d8 = &local_38d0;
          local_38e0 = 0;
          local_38d0 = 0;
          uStack_38c8 = 0;
          local_38c0 = &local_38b8;
          local_38b8 = 0;
          uStack_38b0 = 0;
          local_3858 = local_3850;
          local_3850[0] = 0;
          local_3850[1] = 0;
          *(undefined8 *)((long)&local_38 + lVar12) = 0x1006199f6;
          FUN_100602d40(local_3728,0x66707572,0);
          if (*(char *)(local_3740 + 0x14d88) == '\0') {
            local_38a0 = &local_3898;
            local_38a8 = 0;
            local_3898 = 0;
            uStack_3890 = 0;
            local_3840 = &local_3838;
            local_3838 = (undefined8 *****)0x0;
            uStack_3830 = 0;
            local_3770 = 0;
            if ((((undefined8 ****)local_3758 != (undefined8 ****)0x0) &&
                (*(int *)local_3758 == 0x4f4c5354)) && (*(int *)((long)local_3758 + 4) != 0)) {
              iVar8 = (int)((ulong)((long)local_3758[2] - (long)local_3758[1]) >> 3) * -0x49249249;
              ppppuVar26 = (undefined8 ****)0x0;
              local_3720 = CONCAT44(local_3720._4_4_,iVar8);
              if (iVar8 != 0) {
                local_3730 = local_3758;
                do {
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x100619a95;
                  local_3738 = ppppuVar26;
                  lVar14 = FUN_100596915(local_3730,ppppuVar26,0);
                  if (lVar14 == 0) {
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x100619ae3;
                    uVar13 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x100619af3;
                    cVar5 = _os_log_type_enabled(uVar13);
                    if (cVar5 != '\0') {
                      local_3688._0_4_ = 0x8220202;
                      local_3688._4_4_ = 0x7a0a90;
                      uStack_3680 = 1;
                      uStack_367c = 0x822;
                      uStack_367a = 0x8e77;
                      uStack_3678 = 0x7b;
                      uStack_3677 = 0;
                      uStack_3676 = 1;
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x100619bcc;
                      __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",
                                          &local_3688,0x16);
                    }
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x100619b00;
                    FUN_1001782e9(0);
                  }
                  else {
                    lVar18 = *(long *)(lVar14 + 8);
                    if (((lVar18 != 0) && (*(long *)(lVar18 + 0x10) != 0)) &&
                       (*(long *)(*(long *)(lVar14 + 0x10) + 0x38) != 0)) {
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x100619ac0;
                      cVar5 = FUN_1002bd28d(lVar18);
                      if (cVar5 == '\0') {
                        if ((*(long *)(lVar14 + 8) == 0) ||
                           (*(long *)(*(long *)(lVar14 + 8) + 0x10) == 0)) {
                          uVar13 = 0;
                        }
                        else {
                          uVar13 = *(undefined8 *)(*(long *)(lVar14 + 0x10) + 0x38);
                        }
                        *(undefined8 *)(&stack0xffffffffffffffd0 + lVar12) = 0;
                        *(undefined8 *)(&stack0xffffffffffffffd8 + lVar12) = 0;
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x100619b46;
                        lVar15 = FUN_1002b231f(&local_3798,uVar13,0,0,100,2);
                        if (lVar15 == 0) {
                          if ((*(long *)(lVar14 + 8) == 0) ||
                             (*(long *)(*(long *)(lVar14 + 8) + 0x10) == 0)) {
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x100619bd6;
                            uVar13 = FUN_1001cc310();
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x100619be6;
                            cVar5 = _os_log_type_enabled(uVar13,0x10);
                            if (cVar5 != '\0') {
                              local_3688._0_4_ = 0x8220202;
                              local_3688._4_4_ = 0x7a0a90;
                              uStack_3680 = 1;
                              uStack_367c = 0x822;
                              uStack_367a = 0x8d38;
                              uStack_3678 = 0x7b;
                              uStack_3677 = 0;
                              uStack_3676 = 1;
                              *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a021;
                              __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)"
                                                  ,&local_3688,0x16);
                            }
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x100619bf7;
                            FUN_1001782e9(0,0);
                            ppppuVar26 = (undefined8 ****)0x0;
                          }
                          else {
                            ppppuVar26 = *(undefined8 *****)(*(long *)(lVar14 + 0x10) + 0x28);
                            if (ppppuVar26 == (undefined8 ****)0x0) {
                              ppppuVar26 = *(undefined8 *****)(*(long *)(lVar14 + 0x10) + 8);
                            }
                          }
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x100619c0f;
                          local_37a8 = ppppuVar26;
                          uVar16 = FUN_100416860(&local_38a8);
                          if ((uVar16 & 1) == 0) {
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x100619c26;
                            uVar16 = FUN_100416860(&local_38a8);
                            if ((uVar16 & 2) == 0) {
                              if ((undefined8 *****)local_3838 == (undefined8 *****)0x0) {
LAB_100619c6d:
                                local_3718 = ppppuVar26;
                                if (*(int *)(lVar18 + 0xc2) < 0) {
                                  *(undefined8 *)((long)&local_38 + lVar12) = 0x100619e37;
                                  FUN_1002ecb9c(&local_3688);
                                  uVar13 = *(undefined8 *)(local_3728 + 0x10);
                                  *(undefined8 *)((long)&local_38 + lVar12) = 0x100619e51;
                                  iVar8 = FUN_1003cba40(uVar13,lVar18,&local_3688);
                                  if (iVar8 != -0x80) {
                                    if (iVar8 == 0) {
                                      if (DAT_1008c75c0 != -1) {
                                        *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a2e1;
                                        _dispatch_once(&DAT_1008c75c0,
                                                       &PTR___NSConcreteGlobalBlock_100857068);
                                      }
                                      ppppuVar26 = DAT_1008c75b8;
                                      *(undefined8 *)((long)&local_38 + lVar12) = 0x100619e86;
                                      cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
                                      if (cVar5 != '\0') {
                                        *(undefined8 *)((long)&local_38 + lVar12) = 0x100619e96;
                                        uVar13 = FUN_1001b83ae((long)&local_3666 + 6);
                                        local_3708._0_4_ = 0x8220202;
                                        local_3708._4_4_ = (undefined4)uVar13;
                                        uStack_3700 = (undefined4)((ulong)uVar13 >> 0x20);
                                        uStack_36fc = 0x800;
                                        uStack_36fa = SUB82(local_3688,0);
                                        uStack_36f8 = (undefined1)((ulong)local_3688 >> 0x10);
                                        uStack_36f7 = (undefined1)((ulong)local_3688 >> 0x18);
                                        uStack_36f6 = local_3688._4_4_;
                                        *(undefined8 *)((long)&local_38 + lVar12) = 0x100619ee6;
                                        __os_log_impl(0x100000000,ppppuVar26,1,
                                                                                                            
                                                  "sync> not authorized for account \"%{public}s\" (%llu)"
                                                  ,&local_3708,0x16);
                                      }
                                      *(undefined8 *)((long)&local_38 + lVar12) = 0x100619f00;
                                      lVar18 = FUN_10061c8ea(&local_3840,local_3718,&local_37a8);
                                      *(undefined1 *)(lVar18 + 0x38) = uStack_3678;
                                      *(long **)(lVar18 + 0x28) = local_3688;
                                      *(undefined4 *)(lVar18 + 0x30) = uStack_3680;
                                      *(uint *)(lVar18 + 0x34) = CONCAT22(uStack_367a,uStack_367c);
                                      *(undefined8 *)((long)&local_38 + lVar12) = 0x100619f29;
                                      FUN_1001b8172(lVar18 + 0x40,&local_3670);
                                      *(undefined8 *)((long)&local_38 + lVar12) = 0x100619f39;
                                      FUN_1001b8172(lVar18 + 0x50,(long)&local_3666 + 6);
                                      *(undefined8 *)((long)&local_38 + lVar12) = 0x100619f49;
                                      FUN_1001b8172(lVar18 + 0x60,local_3650);
                                      *(undefined8 *)((long)&local_38 + lVar12) = 0x100619f59;
                                      FUN_1001b8172(lVar18 + 0x70,local_3640);
                                      *(undefined8 *)((long)&local_38 + lVar12) = 0x100619f6c;
                                      FUN_1001b8172(lVar18 + 0x80,local_3630);
                                      *(undefined8 *)((long)&local_38 + lVar12) = 0x100619f82;
                                      FUN_1001b8172(lVar18 + 0x90,local_3620);
                                      *(undefined8 *)((long)&local_38 + lVar12) = 0x100619f8e;
                                      FUN_1001b7a50(local_3620);
                                      *(undefined8 *)((long)&local_38 + lVar12) = 0x100619f9a;
                                      FUN_1001b7a50(local_3630);
                                      *(undefined8 *)((long)&local_38 + lVar12) = 0x100619fa6;
                                      FUN_1001b7a50(local_3640);
                                      *(undefined8 *)((long)&local_38 + lVar12) = 0x100619fb2;
                                      FUN_1001b7a50(local_3650);
                                      *(undefined8 *)((long)&local_38 + lVar12) = 0x100619fbe;
                                      FUN_1001b7a50((long)&local_3666 + 6);
                                      ppppuVar26 = &local_3670;
                                      goto LAB_10061a245;
                                    }
                                    *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a02b;
                                    uVar13 = FUN_1001cc310();
                                    *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a03b;
                                    cVar5 = _os_log_type_enabled(uVar13);
                                    if (cVar5 != '\0') {
                                      local_3708._0_4_ = 0x8220202;
                                      local_3708._4_4_ = 0x7a0a90;
                                      uStack_3700 = 1;
                                      uStack_36fc = 0x400;
                                      uStack_36fa = (undefined2)iVar8;
                                      uStack_36f8 = (undefined1)((uint)iVar8 >> 0x10);
                                      uStack_36f7 = (undefined1)((uint)iVar8 >> 0x18);
                                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a2c9;
                                      __os_log_error_impl(0x100000000,uVar13,0x10,
                                                          "%{public}s: err == (%d)",&local_3708,0x12
                                                         );
                                    }
                                  }
                                  *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a04f;
                                  FUN_1001b7a50(local_3620);
                                  *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a05b;
                                  FUN_1001b7a50(local_3630);
                                  *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a067;
                                  FUN_1001b7a50(local_3640);
                                  *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a073;
                                  FUN_1001b7a50(local_3650);
                                  *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a07f;
                                  FUN_1001b7a50((long)&local_3666 + 6);
                                  *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a08b;
                                  FUN_1001b7a50(&local_3670);
                                  goto LAB_100619b00;
                                }
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x100619c8e;
                                FUN_1002ecb9c(&local_3828);
                                local_3688._0_4_ = 0;
                                local_3688._4_4_ = 0;
                                uStack_3680 = 0;
                                uStack_367c = 0;
                                uStack_367a = 0;
                                local_36a8 = 0;
                                uStack_36a0 = 0;
                                local_36b8 = 0;
                                uStack_36b0 = 0;
                                local_36c8 = 0;
                                uStack_36c0 = 0;
                                local_36d8 = 0;
                                uStack_36d0 = 0;
                                local_36e8 = 0;
                                uStack_36e0 = 0;
                                uStack_36f8 = 0;
                                uStack_36f7 = 0;
                                uStack_36f6 = 0;
                                uStack_36f2 = 0;
                                uStack_36f0 = 0;
                                local_3708._0_4_ = 0;
                                local_3708._4_4_ = 0;
                                uStack_3700 = 0;
                                uStack_36fc = 0;
                                uStack_36fa = 0;
                                local_3698 = 0;
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x100619ce0;
                                FUN_1002ecb9c(&local_3708);
                                local_3818 = uStack_36f8;
                                uStack_381c = CONCAT22(uStack_36fa,uStack_36fc);
                                local_3828 = CONCAT44(local_3708._4_4_,(undefined4)local_3708);
                                uStack_3820 = uStack_3700;
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x100619d0d;
                                FUN_1001b80b2(local_3810,&uStack_36f0);
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x100619d20;
                                FUN_1001b80b2(local_3800,&uStack_36e0);
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x100619d33;
                                FUN_1001b80b2(local_37f0,&uStack_36d0);
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x100619d46;
                                FUN_1001b80b2(local_37e0,&uStack_36c0);
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x100619d59;
                                FUN_1001b80b2(local_37d0,&uStack_36b0);
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x100619d6c;
                                FUN_1001b80b2(local_37c0,&uStack_36a0);
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x100619d78;
                                FUN_1001b7a50(&uStack_36a0);
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x100619d84;
                                FUN_1001b7a50(&uStack_36b0);
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x100619d90;
                                FUN_1001b7a50(&uStack_36c0);
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x100619d9c;
                                FUN_1001b7a50(&uStack_36d0);
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x100619da8;
                                FUN_1001b7a50(&uStack_36e0);
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x100619db4;
                                FUN_1001b7a50(&uStack_36f0);
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x100619dc1;
                                iVar8 = FUN_1002b0559(lVar14,2);
                                if (iVar8 == 0) {
                                  *(undefined8 *)((long)&local_38 + lVar12) = 0x100619de5;
                                  iVar8 = FUN_1003c3248(lVar14,1,0,&local_3688,0,0);
                                  if (iVar8 == 0) {
                                    lVar18 = *(long *)(*(long *)(lVar14 + 0x10) + 0x28);
                                    if ((lVar18 == 0) || (local_31c0[0] == 0)) {
                                      lVar18 = *(long *)(*(long *)(lVar14 + 0x10) + 8);
                                      if ((lVar18 == 0) || (local_35c0[0] == 0)) goto LAB_10061a202;
                                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a0c5;
                                      local_3828 = lVar18;
                                      FUN_1001b8dfc(&local_3708,local_35c0);
                                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a0d8;
                                      FUN_1001b80b2(local_3800,&local_3708);
                                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a0e4;
                                      FUN_1001b7a50(&local_3708);
                                    }
                                    else {
                                      *(undefined8 *)((long)&local_38 + lVar12) = 0x100619e26;
                                      local_3828 = lVar18;
                                      FUN_1001bb41a(local_3800,local_31c0);
                                    }
                                    if (DAT_1008c75c0 != -1) {
                                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a2f9;
                                      _dispatch_once(&DAT_1008c75c0,
                                                     &PTR___NSConcreteGlobalBlock_100857068);
                                    }
                                    ppppuVar26 = DAT_1008c75b8;
                                    *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a106;
                                    cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
                                    if (cVar5 != '\0') {
                                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a116;
                                      uVar13 = FUN_1001b83ae(local_3800);
                                      local_3688._0_4_ = 0x8220202;
                                      local_3688._4_4_ = (undefined4)uVar13;
                                      uStack_3680 = (undefined4)((ulong)uVar13 >> 0x20);
                                      uStack_367c = 0x800;
                                      uStack_367a = (undefined2)local_3828;
                                      uStack_3678 = (undefined1)((ulong)local_3828 >> 0x10);
                                      uStack_3677 = (undefined1)((ulong)local_3828 >> 0x18);
                                      uStack_3676 = (undefined4)((ulong)local_3828 >> 0x20);
                                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a166;
                                      __os_log_impl(0x100000000,ppppuVar26,1,
                                                                                                        
                                                  "sync> not authorized for account \"%{public}s\" (%llu)"
                                                  ,&local_3688,0x16);
                                    }
                                    *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a180;
                                    lVar18 = FUN_10061c8ea(&local_3840,local_3718,&local_37a8);
                                    *(undefined1 *)(lVar18 + 0x38) = local_3818;
                                    *(undefined4 *)(lVar18 + 0x28) = (undefined4)local_3828;
                                    *(undefined4 *)(lVar18 + 0x2c) = local_3828._4_4_;
                                    *(undefined4 *)(lVar18 + 0x30) = uStack_3820;
                                    *(undefined4 *)(lVar18 + 0x34) = uStack_381c;
                                    *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a1a9;
                                    FUN_1001b8172(lVar18 + 0x40,local_3810);
                                    *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a1b9;
                                    FUN_1001b8172(lVar18 + 0x50,local_3800);
                                    *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a1c9;
                                    FUN_1001b8172(lVar18 + 0x60,local_37f0);
                                    *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a1d9;
                                    FUN_1001b8172(lVar18 + 0x70,local_37e0);
                                    *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a1ec;
                                    FUN_1001b8172(lVar18 + 0x80,local_37d0);
                                    *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a202;
                                    FUN_1001b8172(lVar18 + 0x90,local_37c0);
                                  }
                                }
LAB_10061a202:
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a20e;
                                FUN_1001b7a50(local_37c0);
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a21a;
                                FUN_1001b7a50(local_37d0);
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a226;
                                FUN_1001b7a50(local_37e0);
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a232;
                                FUN_1001b7a50(local_37f0);
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a23e;
                                FUN_1001b7a50(local_3800);
                                ppppuVar26 = (undefined8 ****)local_3810;
LAB_10061a245:
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a24a;
                                FUN_1001b7a50(ppppuVar26);
                              }
                              else {
                                pppppuVar17 = &local_3838;
                                pppppuVar22 = (undefined8 *****)local_3838;
                                do {
                                  if (pppppuVar22[4] >= ppppuVar26) {
                                    pppppuVar17 = pppppuVar22;
                                  }
                                  pppppuVar22 = (undefined8 *****)
                                                pppppuVar22[pppppuVar22[4] < ppppuVar26];
                                } while (pppppuVar22 != (undefined8 *****)0x0);
                                if ((pppppuVar17 == &local_3838) || (ppppuVar26 < pppppuVar17[4]))
                                goto LAB_100619c6d;
                              }
                              if (local_3770 == 0) {
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a264;
                                FUN_100594adc(&local_3770,0);
                              }
                              *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a275;
                              FUN_10059571f(local_3770,lVar14,0);
                            }
                          }
                        }
                      }
                    }
                  }
LAB_100619b00:
                  uVar9 = (int)local_3738 + 1;
                  ppppuVar26 = (undefined8 ****)(ulong)uVar9;
                } while (uVar9 != (uint)local_3720);
              }
            }
            *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a476;
            FUN_100595344(local_3770);
            *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a482;
            FUN_10061ca86(local_3838);
            *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a48e;
            FUN_100416828(&local_38a8);
          }
          *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a49c;
          iVar8 = FUN_100594adc(&local_3760);
          local_3730 = (undefined8 ****)0x2;
          if (iVar8 != -0x80) {
            if (iVar8 == 0) {
              local_3720 = local_3728 + 0x410;
              ppppuVar26 = (undefined8 ****)0x0;
              do {
                *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a4e9;
                local_3738 = ppppuVar26;
                lVar14 = FUN_100596915(local_3758,ppppuVar26,0);
                if (lVar14 == 0) {
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a6c8;
                  uVar13 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a6d8;
                  cVar5 = _os_log_type_enabled(uVar13,0x10);
                  if (cVar5 != '\0') {
                    pcVar31 = "sourceTrackInstance != nullptr";
LAB_10061a81b:
                    uStack_367c = 0x822;
                    uStack_3680 = 1;
                    local_3688._4_4_ = 0x7a0a90;
                    local_3688._0_4_ = 0x8220202;
                    uStack_367a = SUB82(pcVar31,0);
                    uStack_3678 = (undefined1)((ulong)pcVar31 >> 0x10);
                    uStack_3677 = 0;
                    uStack_3676 = (undefined4)((ulong)pcVar31 >> 0x20);
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a84a;
                    __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",
                                        &local_3688,0x16);
                  }
LAB_10061a726:
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a72f;
                  FUN_1001782e9(0,0);
                }
                else {
                  lVar18 = *(long *)(lVar14 + 8);
                  if (lVar18 == 0) {
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a70e;
                    uVar13 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a71e;
                    cVar5 = _os_log_type_enabled(uVar13,0x10);
                    if (cVar5 != '\0') {
                      pcVar31 = "sourceTrackInfo != nullptr";
                      goto LAB_10061a81b;
                    }
                    goto LAB_10061a726;
                  }
                  if ((*(int *)(lVar18 + 0xc2) < 0) && ((*(byte *)(lVar18 + 0xc6) & 1) == 0)) {
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a521;
                    uVar9 = FUN_1004744bf(lVar18,0);
                    if ((uVar9 & 0x200004) == 0 || (uVar9 >> 0x10 & 1) != 0) goto LAB_10061a538;
                  }
                  else {
LAB_10061a538:
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a54d;
                    cVar5 = FUN_100605e59(lVar14,lVar2,&local_3798,bVar28);
                    if (cVar5 != '\0') {
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a56f;
                      lVar15 = FUN_1006061f2(lVar14,lVar2,&local_3798,1,0);
                      if ((lVar15 == 0) ||
                         ((*(int *)(lVar18 + 0xc2) < 0 && ((*(byte *)(lVar18 + 0xc6) & 1) == 0)))) {
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a599;
                        local_3718 = (undefined8 ***)FUN_1002b5390(lVar14);
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a5b3;
                        uVar16 = FUN_100416860(&local_3888,local_3718);
                        if ((uVar16 & 1) == 0) {
                          if (lVar15 == 0) {
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a5d7;
                            uVar16 = FUN_100416860(&local_3888,local_3718);
                            if ((uVar16 & 2) == 0) {
                              if (DAT_1008c75c0 != -1) {
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x10061acaa;
                                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068
                                              );
                              }
                              local_3748 = DAT_1008c75b8;
                              *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a605;
                              cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
                              if (cVar5 != '\0') {
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a61b;
                                FUN_100476ac1(&local_3708,lVar18);
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a623;
                                uVar13 = FUN_1001b83ae(&local_3708);
                                local_3688._0_4_ = 0x8220202;
                                local_3688._4_4_ = (undefined4)uVar13;
                                uStack_3680 = (undefined4)((ulong)uVar13 >> 0x20);
                                uStack_367c = 0x800;
                                uStack_367a = SUB82(local_3718,0);
                                uStack_3678 = (undefined1)((ulong)local_3718 >> 0x10);
                                uStack_3677 = (undefined1)((ulong)local_3718 >> 0x18);
                                uStack_3676 = (undefined4)((ulong)local_3718 >> 0x20);
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a677;
                                __os_log_impl(0x100000000,local_3748,1,
                                              "sync> not authorized for track \"%{public}s\" (account %llu)"
                                              ,&local_3688,0x16);
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a67f;
                                FUN_1001b7a50(&local_3708);
                              }
                              if ((*(int *)(lVar18 + 0xc2) < 0) &&
                                 ((*(byte *)(lVar18 + 0xc6) & 1) == 0)) {
                                if (((*(byte *)(local_3728 + 0x40) & 2) != 0) &&
                                   (*(char *)(local_3740 + 0x14d88) == '\0')) {
LAB_10061a8b7:
                                  lVar18 = *(long *)(local_3728 + 0x28);
                                  *(undefined1 *)(lVar18 + 0x1a) = 1;
                                  *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a8da;
                                  FUN_10057c238(lVar14,0x1a,lVar18 + 0x130);
                                }
                              }
                              else if ((*(byte *)(local_3728 + 0x40) & 1) != 0) goto LAB_10061a8b7;
                            }
                          }
                        }
                        else if ((*(int *)(lVar18 + 0xc2) < 0) &&
                                ((*(byte *)(lVar18 + 0xc6) & 1) == 0)) {
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a750;
                          uVar16 = FUN_1004744bf(lVar18,0);
                          if ((uVar16 & 0xc00000) == 0 || (uVar16 & 0x18000) != 0) {
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a770;
                            cVar5 = FUN_1002bdcf0(lVar14);
                            if (cVar5 == '\0') {
                              if ((*(uint *)(local_3728 + 0x40) & 2) != 0) {
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x10061ac36;
                                bVar33 = FUN_1006060f8(lVar14);
                                goto LAB_10061a8ec;
                              }
                            }
                            else if ((*(uint *)(local_3728 + 0x40) >> 8 & 1) != 0) {
                              *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a797;
                              cVar5 = FUN_1004ec140(local_3740,lVar14);
                              bVar33 = cVar5 == '\0';
                              goto LAB_10061a8ec;
                            }
                          }
                          else {
                            bVar33 = *(byte *)(local_3728 + 0x40) >> 7;
LAB_10061a8ec:
                            if ((((lVar15 != 0 & bVar33) == 1) &&
                                (uVar16 = *(ulong *)(*(long *)(lVar14 + 0x10) + 0xa8), uVar16 != 0))
                               && (uVar16 < *(ulong *)(*(long *)(lVar15 + 0x10) + 0xa8))) {
                              if (DAT_1008c75c0 != -1) {
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x10061acf2;
                                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068
                                              );
                              }
                              local_3718 = DAT_1008c75b8;
                              *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a948;
                              cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
                              if (cVar5 != '\0') {
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a958;
                                local_3748 = (undefined8 ***)FUN_100606010(lVar18);
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a96e;
                                FUN_100476ac1(&local_3708,lVar18);
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a97a;
                                uVar13 = FUN_1001b83ae(&local_3708);
                                local_3670 = *(undefined8 ****)(*(long *)(lVar15 + 0x10) + 0xa8);
                                local_3666 = *(undefined8 *)(*(long *)(lVar14 + 0x10) + 0xa8);
                                local_3688._0_4_ = 0x8220402;
                                local_3688._4_4_ = SUB84(local_3748,0);
                                uStack_3680 = (undefined4)((ulong)local_3748 >> 0x20);
                                uStack_367c = 0x822;
                                uStack_367a = (undefined2)uVar13;
                                uStack_3678 = (undefined1)((ulong)uVar13 >> 0x10);
                                uStack_3677 = (undefined1)((ulong)uVar13 >> 0x18);
                                uStack_3676 = (undefined4)((ulong)uVar13 >> 0x20);
                                uStack_3672 = 0x800;
                                local_3668 = 0x800;
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x10061aa04;
                                __os_log_impl(0x100000000,local_3718,1,
                                              "sync> not copying %{public}s track \"%{public}s\" from device since library version is newer (%llu vs. %llu)"
                                              ,&local_3688,0x2a);
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x10061aa10;
                                FUN_1001b7a50(&local_3708);
                              }
                            }
                            else if (bVar33 != 0) goto LAB_10061aa1d;
                          }
                        }
                        else {
                          if ((lVar15 != 0) ||
                             (((*(byte *)(local_3728 + 0x40) & 1) == 0 ||
                              ((undefined8 ****)local_3718 == (undefined8 ****)0x0))))
                          goto LAB_10061a7aa;
                          if ((**(byte **)(lVar14 + 0x10) & 2) != 0) {
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a880;
                            uVar13 = FUN_1001cc310();
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a890;
                            cVar5 = _os_log_type_enabled(uVar13,0x10);
                            if (cVar5 != '\0') {
                              local_3688._0_4_ = 0x8220202;
                              local_3688._4_4_ = 0x7a0a90;
                              uStack_3680 = 1;
                              uStack_367c = 0x822;
                              uStack_367a = 0x4c7d;
                              uStack_3678 = 0x7f;
                              uStack_3677 = 0;
                              uStack_3676 = 1;
                              *(undefined8 *)((long)&local_38 + lVar12) = 0x10061ac92;
                              __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)"
                                                  ,&local_3688,0x16);
                            }
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a8a1;
                            FUN_1001782e9(0,0);
                          }
LAB_10061aa1d:
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x10061aa2e;
                          iVar8 = FUN_10059571f(local_3760,lVar14,0);
                          if (iVar8 != 0) {
                            if (iVar8 == -0x80) goto LAB_10061bf15;
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x10061be05;
                            uVar13 = FUN_1001cc310();
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x10061be15;
                            cVar5 = _os_log_type_enabled(uVar13,0x10);
                            if (cVar5 == '\0') goto LAB_10061bf15;
                            uStack_367a = (undefined2)iVar8;
                            uStack_3678 = (undefined1)((uint)iVar8 >> 0x10);
                            uStack_3677 = (undefined1)((uint)iVar8 >> 0x18);
                            goto LAB_10061ad46;
                          }
                          lVar14 = *(long *)(lVar14 + 0x10);
                          lVar15 = *(long *)(lVar14 + 8);
                          if (lVar15 != 0) {
                            ppppuVar26 = *(undefined8 *****)(lVar14 + 0x10);
                            ppppuVar20 = *(undefined8 *****)(lVar14 + 0x18);
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x10061aa68;
                            local_3828 = lVar15;
                            cVar5 = FUN_100416a50(&local_38e0,lVar15,ppppuVar26);
                            if (cVar5 != '\0') {
                              *(undefined8 *)((long)&local_38 + lVar12) = 0x10061aa82;
                              cVar5 = FUN_100416a50(&local_38e0,local_3828,ppppuVar20);
                              if (cVar5 != '\0') goto LAB_10061a7aa;
                            }
                            if (ppppuVar26 != (undefined8 ****)0x0) {
                              if (DAT_1008c75c0 != -1) {
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x10061acc2;
                                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068
                                              );
                              }
                              local_3718 = DAT_1008c75b8;
                              *(undefined8 *)((long)&local_38 + lVar12) = 0x10061aab9;
                              cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
                              if (cVar5 != '\0') {
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x10061aad0;
                                FUN_100476ac1(&local_3708,lVar18);
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x10061aadc;
                                uVar13 = FUN_1001b83ae(&local_3708);
                                local_3688._0_4_ = 0x8220302;
                                local_3688._4_4_ = (undefined4)uVar13;
                                uStack_3680 = (undefined4)((ulong)uVar13 >> 0x20);
                                uStack_367c = 0x800;
                                uStack_367a = (undefined2)local_3828;
                                uStack_3678 = (undefined1)((ulong)local_3828 >> 0x10);
                                uStack_3677 = (undefined1)((ulong)local_3828 >> 0x18);
                                uStack_3676 = (undefined4)((ulong)local_3828 >> 0x20);
                                uStack_3672 = 0x800;
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x10061ab40;
                                local_3670 = ppppuVar26;
                                __os_log_impl(0x100000000,local_3718,1,
                                              "sync> missing key for track \"%{public}s\" (account %llu, key %llu)"
                                              ,&local_3688,0x20);
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x10061ab4c;
                                FUN_1001b7a50(&local_3708);
                              }
                            }
                            if (ppppuVar20 != (undefined8 ****)0x0) {
                              if (DAT_1008c75c0 != -1) {
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x10061acda;
                                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068
                                              );
                              }
                              local_3718 = DAT_1008c75b8;
                              *(undefined8 *)((long)&local_38 + lVar12) = 0x10061ab7b;
                              cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
                              if (cVar5 != '\0') {
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x10061ab95;
                                FUN_100476ac1(&local_3708,lVar18);
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x10061ab9d;
                                uVar13 = FUN_1001b83ae(&local_3708);
                                local_3688._0_4_ = 0x8220302;
                                local_3688._4_4_ = (undefined4)uVar13;
                                uStack_3680 = (undefined4)((ulong)uVar13 >> 0x20);
                                uStack_367c = 0x800;
                                uStack_367a = (undefined2)local_3828;
                                uStack_3678 = (undefined1)((ulong)local_3828 >> 0x10);
                                uStack_3677 = (undefined1)((ulong)local_3828 >> 0x18);
                                uStack_3676 = (undefined4)((ulong)local_3828 >> 0x20);
                                uStack_3672 = 0x800;
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x10061ac01;
                                local_3670 = ppppuVar20;
                                __os_log_impl(0x100000000,local_3718,1,
                                              "sync> missing key for track \"%{public}s\" (account %llu, key %llu)"
                                              ,&local_3688,0x20);
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x10061ac09;
                                FUN_1001b7a50(&local_3708);
                              }
                            }
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x10061ac1f;
                            FUN_1002b7e7c(&local_3858,&local_3828);
                          }
                        }
                      }
                    }
                  }
LAB_10061a7aa:
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a7cc;
                  iVar8 = FUN_1001ceb24(local_3720,0x66707572,local_3738,local_3710);
                  if (iVar8 != 0) {
                    if (iVar8 == -0x80) goto LAB_10061bf15;
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x10061bb3c;
                    uVar13 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x10061bb4c;
                    cVar5 = _os_log_type_enabled(uVar13,0x10);
                    if (cVar5 == '\0') goto LAB_10061bf15;
                    uStack_367a = (undefined2)iVar8;
                    uStack_3678 = (undefined1)((uint)iVar8 >> 0x10);
                    uStack_3677 = (undefined1)((uint)iVar8 >> 0x18);
                    goto LAB_10061ad46;
                  }
                }
                ppppuVar26 = (undefined8 ****)((long)local_3738 + 1);
              } while ((undefined8 ****)local_3710 != ppppuVar26);
              iVar8 = 0;
              local_3708 = (void *)CONCAT44(local_3708._4_4_,(undefined4)local_3708);
              if ((((local_3760 != (int *)0x0) &&
                   (local_3708 = (void *)CONCAT44(local_3708._4_4_,(undefined4)local_3708),
                   *local_3760 == 0x4f4c5354)) &&
                  (local_3708 = (void *)CONCAT44(local_3708._4_4_,(undefined4)local_3708),
                  local_3760[1] != 0)) &&
                 (uVar16 = (*(long *)(local_3760 + 4) - *(long *)(local_3760 + 2) >> 3) *
                           0x6db6db6db6db6db7, iVar8 = 0,
                 local_3708 = (void *)CONCAT44(local_3708._4_4_,(undefined4)local_3708),
                 (int)uVar16 != 0)) {
                local_3708._0_4_ = 0;
                local_3708._4_4_ = 0;
                uStack_3700 = 0;
                uStack_36fc = 0;
                uStack_36fa = 0;
                uStack_36f8 = 0;
                uStack_36f7 = 0;
                uStack_36f6 = 0;
                uStack_36f2 = 0;
                local_3730 = (undefined8 ***)(uVar16 & 0xffffffff);
                *(undefined8 *)((long)&local_38 + lVar12) = 0x10061add3;
                local_3720 = uVar16;
                FUN_10061c164();
                pvVar24 = (void *)CONCAT44(local_3708._4_4_,(undefined4)local_3708);
                iVar8 = 0;
                uVar16 = local_3720;
                do {
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x10061adee;
                  local_3708 = pvVar24;
                  local_3738 = (undefined8 ***)FUN_100596915(local_3760,iVar8,0);
                  puVar30 = (undefined8 *)CONCAT26(uStack_36fa,CONCAT24(uStack_36fc,uStack_3700));
                  puVar1 = (undefined8 *)
                           CONCAT26(uStack_36f2,
                                    CONCAT42(uStack_36f6,CONCAT11(uStack_36f7,uStack_36f8)));
                  if (puVar30 < puVar1) {
                    *puVar30 = local_3738;
                    puVar30 = puVar30 + 1;
                    pvVar24 = local_3708;
                  }
                  else {
                    lVar14 = (long)puVar30 - (long)local_3708 >> 3;
                    uVar16 = lVar14 + 1;
                    if (0x1fffffffffffffff < uVar16) {
                    /* WARNING: Subroutine does not return */
                      *(undefined **)((long)&local_38 + lVar12) = &UNK_10061bffb;
                      FUN_100263112(&local_3708);
                    }
                    uVar19 = (long)puVar1 - (long)local_3708;
                    uVar27 = (long)uVar19 >> 2;
                    if (uVar27 <= uVar16) {
                      uVar27 = uVar16;
                    }
                    if (0x7ffffffffffffff7 < uVar19) {
                      uVar27 = 0x1fffffffffffffff;
                    }
                    if (uVar27 == 0) {
                      auVar35 = ZEXT816(0);
                    }
                    else {
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10061ae73;
                      auVar35 = FUN_100249b6c(&uStack_36f8);
                    }
                    lVar18 = auVar35._0_8_;
                    puVar1 = (undefined8 *)(lVar18 + lVar14 * 8);
                    local_3710 = (undefined8 ***)(lVar18 + auVar35._8_8_ * 8);
                    *puVar1 = local_3738;
                    puVar30 = (undefined8 *)(lVar18 + lVar14 * 8 + 8);
                    sVar23 = CONCAT26(uStack_36fa,CONCAT24(uStack_36fc,uStack_3700)) -
                             (long)local_3708;
                    pvVar24 = (void *)((long)puVar1 - sVar23);
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x10061aeb6;
                    _memcpy(pvVar24,local_3708,sVar23);
                    uStack_3700 = SUB84(puVar30,0);
                    uStack_36fc = (undefined2)((ulong)puVar30 >> 0x20);
                    uStack_36fa = (undefined2)((ulong)puVar30 >> 0x30);
                    uStack_36f8 = SUB81(local_3710,0);
                    uStack_36f7 = (undefined1)((ulong)local_3710 >> 8);
                    uStack_36f6 = (undefined4)((ulong)local_3710 >> 0x10);
                    uStack_36f2 = (undefined2)((ulong)local_3710 >> 0x30);
                    uVar16 = local_3720;
                    if (local_3708 != (void *)0x0) {
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10061aee3;
                      operator_delete(local_3708);
                      local_3708 = pvVar24;
                      uVar16 = local_3720;
                      pvVar24 = local_3708;
                    }
                  }
                  uStack_3700 = SUB84(puVar30,0);
                  uStack_36fc = (undefined2)((ulong)puVar30 >> 0x20);
                  uStack_36fa = (undefined2)((ulong)puVar30 >> 0x30);
                  iVar8 = iVar8 + 1;
                } while ((int)uVar16 != iVar8);
                *(undefined8 *)((long)&local_38 + lVar12) = 0x10061af09;
                local_3708 = pvVar24;
                FUN_1003071cd(local_3768);
                pvVar24 = local_3708;
                *(undefined8 *)((long)&local_38 + lVar12) = 0x10061af1a;
                FUN_1002ddacc(0x27);
                *(undefined8 *)((long)&local_38 + lVar12) = 0x10061af33;
                FUN_1001d26f2(pvVar24,local_3720,FUN_1002c185b);
                *(undefined8 *)((long)&local_38 + lVar12) = 0x10061af3f;
                FUN_100307383(local_3768);
                *(undefined8 *)((long)&local_38 + lVar12) = 0x10061af47;
                local_37a0 = FUN_10048604a(lVar2);
                if (local_37a0 == 0) {
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x10061af5d;
                  uVar13 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x10061af6d;
                  cVar5 = _os_log_type_enabled(uVar13,0x10);
                  if (cVar5 != '\0') {
                    local_3688._0_4_ = 0x8220202;
                    local_3688._4_4_ = 0x7a0a90;
                    uStack_3680 = 1;
                    uStack_367c = 0x822;
                    uStack_367a = 0x4cb3;
                    uStack_3678 = 0x7f;
                    uStack_3677 = 0;
                    uStack_3676 = 1;
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x10061bf9b;
                    __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",
                                        &local_3688,0x16);
                  }
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x10061af7e;
                  FUN_1001782e9(0,0);
                }
                ppppuVar26 = (undefined8 ****)0x0;
                local_3778 = 0;
                local_3780 = 0;
                do {
                  uVar16 = *(ulong *)((long)local_3708 + (long)ppppuVar26 * 8);
                  local_3738 = ppppuVar26;
                  if (((uVar16 == 0) ||
                      (ppppuVar26 = *(undefined8 *****)(uVar16 + 8),
                      ppppuVar26 == (undefined8 ****)0x0)) || (ppppuVar26[2] == (undefined8 ***)0x0)
                     ) {
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b188;
                    uVar13 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b198;
                    cVar5 = _os_log_type_enabled(uVar13,0x10);
                    if (cVar5 != '\0') {
                      local_3688._0_4_ = 0x8220202;
                      local_3688._4_4_ = 0x7a0a90;
                      uStack_3680 = 1;
                      uStack_367c = 0x822;
                      uStack_367a = 0xe585;
                      uStack_3678 = 0x7b;
                      uStack_3677 = 0;
                      uStack_3676 = 1;
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b711;
                      __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",
                                          &local_3688,0x16);
                    }
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b1a9;
                    FUN_1001782e9(0,0);
                    goto LAB_10061b1a9;
                  }
                  local_3720 = uVar16;
                  if (*(int *)((long)ppppuVar26 + 0xc2) < 0) {
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b4fb;
                    ppppuVar20 = (undefined8 ****)FUN_1006061f2(uVar16,lVar2,&local_3798,0,0);
                    if ((ppppuVar20 == (undefined8 ****)0x0) ||
                       (local_3710 = ppppuVar20[1],
                       (undefined8 ****)local_3710 == (undefined8 ****)0x0)) goto LAB_10061afe5;
                    local_3718 = ppppuVar20;
                    if (DAT_1008c75c0 != -1) {
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10061bb28;
                      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                    }
                    local_3748 = DAT_1008c75b8;
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b545;
                    cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
                    if (cVar5 != '\0') {
                      pcVar31 = "device";
                      if (-1 < *(int *)((long)ppppuVar26 + 0xc2)) {
                        pcVar31 = "synced";
                      }
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b573;
                      lVar14 = FUN_1002b5390(local_3720);
                      pcVar32 = "purchased";
                      if (lVar14 == 0) {
                        pcVar32 = "downloaded";
                      }
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b593;
                      local_3860 = (undefined8 ***)FUN_100606010(ppppuVar26);
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b5a9;
                      FUN_100476ac1(&local_3828,ppppuVar26);
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b5b8;
                      local_3666 = FUN_1001b83ae(&local_3828);
                      local_3688._0_4_ = 0x8220402;
                      local_3688._4_4_ = SUB84(pcVar31,0);
                      uStack_3680 = (undefined4)((ulong)pcVar31 >> 0x20);
                      uStack_367c = 0x822;
                      uStack_367a = SUB82(pcVar32,0);
                      uStack_3678 = (undefined1)((ulong)pcVar32 >> 0x10);
                      uStack_3677 = 0;
                      uStack_3676 = (undefined4)((ulong)pcVar32 >> 0x20);
                      uStack_3672 = 0x822;
                      local_3670 = local_3860;
                      local_3668 = 0x822;
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b62d;
                      __os_log_impl(0x100000000,local_3748,1,
                                    "sync> not copying %{public}s %{public}s %{public}s track \"%{public}s\" since it is already in library"
                                    ,&local_3688,0x2a);
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b635;
                      FUN_1001b7a50(&local_3828);
                    }
                    pppuVar3 = local_3718;
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b649;
                    iVar8 = FUN_1002b0559(local_3718,0x42);
                    if (iVar8 != -0x80) {
                      if (iVar8 != 0) {
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b71b;
                        uVar13 = FUN_1001cc310();
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b72b;
                        cVar5 = _os_log_type_enabled(uVar13,0x10);
                        if (cVar5 != '\0') {
                          uStack_367a = (undefined2)iVar8;
                          uStack_3678 = (undefined1)((uint)iVar8 >> 0x10);
                          uStack_3677 = (undefined1)((uint)iVar8 >> 0x18);
LAB_10061bae3:
                          uStack_367c = 0x400;
                          uStack_3680 = 1;
                          local_3688._4_4_ = 0x7a0a90;
                          local_3688._0_4_ = 0x8220202;
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x10061baf8;
                          __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",
                                              &local_3688,0x12);
                        }
                        goto LAB_10061b1a9;
                      }
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b674;
                      iVar8 = FUN_1003ca68a(local_3740,local_3720,pppuVar3,0);
                      if (iVar8 == -0x80) goto LAB_10061b1a9;
                      if (iVar8 != 0) {
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b7d2;
                        uVar13 = FUN_1001cc310();
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b7e2;
                        cVar5 = _os_log_type_enabled(uVar13,0x10);
                        if (cVar5 != '\0') {
                          uStack_367a = (undefined2)iVar8;
                          uStack_3678 = (undefined1)((uint)iVar8 >> 0x10);
                          uStack_3677 = (undefined1)((uint)iVar8 >> 0x18);
                          goto LAB_10061bae3;
                        }
                        goto LAB_10061b1a9;
                      }
                      goto LAB_10061b907;
                    }
                  }
                  else {
LAB_10061afe5:
                    if (DAT_1008c75c0 != -1) {
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10061bb10;
                      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                    }
                    local_3710 = DAT_1008c75b8;
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b00b;
                    cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
                    if (cVar5 != '\0') {
                      pcVar31 = "device";
                      if (-1 < *(int *)((long)ppppuVar26 + 0xc2)) {
                        pcVar31 = "synced";
                      }
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b039;
                      lVar14 = FUN_1002b5390(local_3720);
                      pcVar32 = "purchased";
                      if (lVar14 == 0) {
                        pcVar32 = "downloaded";
                      }
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b059;
                      local_3718 = (undefined8 ***)FUN_100606010(ppppuVar26);
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b076;
                      local_3748 = ppppuVar26;
                      FUN_100476ac1(&local_3828,ppppuVar26);
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b085;
                      local_3666 = FUN_1001b83ae(&local_3828);
                      local_3688._0_4_ = 0x8220402;
                      local_3688._4_4_ = SUB84(pcVar31,0);
                      uStack_3680 = (undefined4)((ulong)pcVar31 >> 0x20);
                      uStack_367c = 0x822;
                      uStack_367a = SUB82(pcVar32,0);
                      uStack_3678 = (undefined1)((ulong)pcVar32 >> 0x10);
                      uStack_3677 = 0;
                      uStack_3676 = (undefined4)((ulong)pcVar32 >> 0x20);
                      uStack_3672 = 0x822;
                      local_3670 = local_3718;
                      local_3668 = 0x822;
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b0fa;
                      __os_log_impl(0x100000000,local_3710,1,
                                    "sync> copying %{public}s %{public}s %{public}s track \"%{public}s\""
                                    ,&local_3688,0x2a);
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b102;
                      FUN_1001b7a50(&local_3828);
                      ppppuVar26 = (undefined8 ****)local_3748;
                    }
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b111;
                    cVar5 = FUN_1002bd1d6(ppppuVar26);
                    if (cVar5 == '\0') {
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b11d;
                      FUN_1002bd20d(ppppuVar26);
                    }
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b129;
                    lVar14 = FUN_1002b44c2(local_3720);
                    if (lVar14 == 0) {
LAB_10061b1c5:
                      uVar13 = 6;
                    }
                    else {
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b13e;
                      lVar14 = FUN_1002b5390(local_3720);
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b14d;
                      lVar18 = FUN_1002b44c2(local_3720);
                      if (lVar14 == lVar18) {
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b15e;
                        uVar13 = FUN_1002b44c2(local_3720);
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b16b;
                        lVar14 = FUN_1002b2a1d(lVar2,uVar13,0);
                        while (lVar14 != 0) {
                          if (*(int *)(lVar14 + 0x3c) == 0x46494c45) goto LAB_10061b1cc;
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b181;
                          lVar14 = FUN_1002b2c6d(lVar14);
                        }
                        goto LAB_10061b1c5;
                      }
LAB_10061b1cc:
                      uVar13 = 0x206;
                    }
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b1dc;
                    local_3710 = (undefined8 ***)FUN_100300b0f(ppppuVar26,lVar2,uVar13);
                    if ((undefined8 ****)local_3710 == (undefined8 ****)0x0) {
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b698;
                      uVar13 = FUN_1001cc310();
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b6a8;
                      cVar5 = _os_log_type_enabled(uVar13,0x10);
                      if (cVar5 != '\0') {
                        local_3688._0_4_ = 0x8220202;
                        local_3688._4_4_ = 0x7a0a90;
                        uStack_3680 = 1;
                        uStack_367c = 0x822;
                        uStack_367a = 0x4cee;
                        uStack_3678 = 0x7f;
                        uStack_3677 = 0;
                        uStack_3676 = 1;
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b7c8;
                        __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",
                                            &local_3688,0x16);
                      }
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b6b9;
                      FUN_1001782e9(0,0);
                    }
                    else {
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b1fb;
                      FUN_100472be7(local_3710,ppppuVar26);
                      if (*(char *)(local_3740 + 0x6abf) != '\0') {
                        *(int *)((long)local_3710 + 0x144) =
                             *(int *)((long)local_3710 + 0x144) + *(int *)((long)ppppuVar26 + 0x144)
                        ;
                        uVar9 = *(uint *)((long)local_3710 + 0x14c);
                        if (*(uint *)((long)local_3710 + 0x14c) <
                            *(uint *)((long)ppppuVar26 + 0x14c)) {
                          uVar9 = *(uint *)((long)ppppuVar26 + 0x14c);
                        }
                        *(uint *)((long)local_3710 + 0x14c) = uVar9;
                        *(int *)(local_3710 + 0x2a) =
                             *(int *)(local_3710 + 0x2a) + *(int *)(ppppuVar26 + 0x2a);
                        uVar9 = *(uint *)(local_3710 + 0x2b);
                        if (*(uint *)(local_3710 + 0x2b) < *(uint *)(ppppuVar26 + 0x2b)) {
                          uVar9 = *(uint *)(ppppuVar26 + 0x2b);
                        }
                        *(uint *)(local_3710 + 0x2b) = uVar9;
                        *(int *)((long)local_3710 + 0x19c) =
                             *(int *)((long)local_3710 + 0x19c) + *(int *)((long)ppppuVar26 + 0x19c)
                        ;
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b275;
                        uVar9 = FUN_10047f424(ppppuVar26);
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b283;
                        uVar10 = FUN_10047f424(local_3710);
                        ppppuVar20 = (undefined8 ****)local_3710;
                        if (uVar10 < uVar9) {
                          ppppuVar20 = ppppuVar26;
                        }
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b295;
                        uVar11 = FUN_10047f424(ppppuVar20);
                        local_3718 = (undefined8 ***)CONCAT44(local_3718._4_4_,uVar11);
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b2a7;
                        cVar5 = FUN_10047f358(local_3710);
                        if (cVar5 != '\0') {
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b2c7;
                          FUN_10047f6a5(local_3710,(ulong)local_3718 & 0xffffffff,0,1);
                        }
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b2d4;
                        FUN_1001c62d9(&local_3688,0x20);
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b2e3;
                        FUN_100538abf(&local_3688,&DAT_10075f1b0);
                        if (-1 < *(char *)((long)ppppuVar26 + 0x12e)) {
                          cVar5 = *(char *)((long)ppppuVar26 + 300);
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b305;
                          cVar6 = FUN_100320aca(local_3710,(int)cVar5,0);
                          if ((cVar6 != '\0') || (*(char *)((long)local_3710 + 0x12e) != cVar5)) {
                            *(char *)((long)local_3710 + 0x12e) = cVar5;
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b332;
                            FUN_1005389ba(&local_3688,0x19);
                          }
                        }
                        if ((*(int *)((long)local_3710 + 0x144) != 0) ||
                           ((int)local_3718 != 0 || *(int *)((long)local_3710 + 0x14c) != 0)) {
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b375;
                          FUN_10047fa76(local_3710,1,1,1);
                        }
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b386;
                        FUN_1004755ef(local_3710,0,&local_3688);
                        *(int *)(ppppuVar26 + 0x29) = 0;
                        *(int *)((long)ppppuVar26 + 0x154) = 0;
                      }
                      if (*(int *)((long)ppppuVar26 + 0xc2) < 0) {
                        pppuVar3 = *ppppuVar26;
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b3ab;
                        lVar14 = FUN_100300729(lVar2,pppuVar3);
                        if (lVar14 == 0) {
                          pppuVar3 = *ppppuVar26;
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b3c4;
                          FUN_100472588(local_3710,pppuVar3,1);
                        }
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b3ce;
                        uVar9 = FUN_1004744bf(ppppuVar26,0);
                        if ((uVar9 & 0x200004) == 0 || (uVar9 >> 0x10 & 1) != 0) {
                          *local_3868 = 1;
                        }
                      }
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b402;
                      lVar14 = FUN_100489a1f(local_37a0,local_3710,0,0);
                      if (lVar14 == 0) {
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b40c;
                        uVar13 = FUN_1001cc310();
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b41c;
                        cVar5 = _os_log_type_enabled(uVar13,0x10);
                        if (cVar5 != '\0') {
                          local_3688._0_4_ = 0x8220202;
                          local_3688._4_4_ = 0x7a0a90;
                          uStack_3680 = 1;
                          uStack_367c = 0x822;
                          uStack_367a = 0x4d07;
                          uStack_3678 = 0x7f;
                          uStack_3677 = 0;
                          uStack_3676 = 1;
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b999;
                          __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",
                                              &local_3688,0x16);
                        }
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b42d;
                        FUN_1001782e9(0,0);
                      }
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b439;
                      lVar14 = FUN_1002b5390(local_3720);
                      if (lVar14 != 0) {
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b44c;
                        uVar9 = FUN_1004744bf(ppppuVar26,0);
                        if ((uVar9 & 0x200004) == 0 || (uVar9 >> 0x10 & 1) != 0) {
                          lVar14 = local_3778;
                          if (local_3778 == 0) {
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b47f;
                            uVar7 = FUN_100474865(local_3710);
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b48c;
                            lVar14 = FUN_100491c6b(uVar7,1);
                            if ((lVar14 == 0) || (*(long *)(lVar14 + 8) != lVar2)) {
                              *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b4a3;
                              uVar13 = FUN_1001cc310();
                              *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b4b3;
                              cVar5 = _os_log_type_enabled(uVar13,0x10);
                              if (cVar5 != '\0') {
                                local_3688._0_4_ = 0x8220202;
                                local_3688._4_4_ = 0x7a0a90;
                                uStack_3680 = 1;
                                uStack_367c = 0x822;
                                uStack_367a = 0x4d23;
                                uStack_3678 = 0x7f;
                                uStack_3677 = 0;
                                uStack_3676 = 1;
                                *(undefined8 *)((long)&local_38 + lVar12) = 0x10061baa1;
                                __os_log_error_impl(0x100000000,uVar13,0x10,
                                                    "%{public}s: (%{public}s)",&local_3688,0x16);
                              }
                              *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b4c4;
                              FUN_1001782e9(0,0);
                              if (lVar14 == 0) {
                                local_3778 = 0;
                                goto LAB_10061b83b;
                              }
                            }
                          }
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b810;
                          local_3778 = lVar14;
                          lVar14 = FUN_100489a1f(lVar14,local_3710,0,0);
                          if (lVar14 == 0) {
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b81a;
                            uVar13 = FUN_1001cc310();
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b82a;
                            cVar5 = _os_log_type_enabled(uVar13,0x10);
                            if (cVar5 != '\0') {
                              local_3688._0_4_ = 0x8220202;
                              local_3688._4_4_ = 0x7a0a90;
                              uStack_3680 = 1;
                              uStack_367c = 0x822;
                              uStack_367a = 0x4d07;
                              uStack_3678 = 0x7f;
                              uStack_3677 = 0;
                              uStack_3676 = 1;
                              *(undefined8 *)((long)&local_38 + lVar12) = 0x10061ba49;
                              __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)"
                                                  ,&local_3688,0x16);
                            }
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b83b;
                            FUN_1001782e9(0,0);
                          }
                        }
                      }
LAB_10061b83b:
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b854;
                      cVar5 = FUN_1002bdac0(local_3720,1,bVar28,0);
                      if (cVar5 != '\0') {
                        lVar14 = local_3780;
                        if (local_3780 == 0) {
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b877;
                          FUN_1004f0e83(local_3740,&local_3688);
                          uVar13 = *(undefined8 *)(local_3740 + 0x40);
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b88e;
                          uVar7 = FUN_100474865(local_3710);
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b89e;
                          lVar14 = FUN_1003c5a70(uVar13,uVar7,&local_3688,0);
                          if (lVar14 == 0) {
                            local_3780 = 0;
                            goto LAB_10061b907;
                          }
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b8b5;
                          FUN_10061c1ee(local_3728,lVar14);
                        }
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b8cf;
                        local_3780 = lVar14;
                        lVar14 = FUN_100489a1f(lVar14,local_3710,0,0);
                        if (lVar14 == 0) {
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b8d9;
                          uVar13 = FUN_1001cc310();
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b8e9;
                          cVar5 = _os_log_type_enabled(uVar13,0x10);
                          if (cVar5 != '\0') {
                            local_3688._0_4_ = 0x8220202;
                            local_3688._4_4_ = 0x7a0a90;
                            uStack_3680 = 1;
                            uStack_367c = 0x822;
                            uStack_367a = 0x4d07;
                            uStack_3678 = 0x7f;
                            uStack_3677 = 0;
                            uStack_3676 = 1;
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b9f1;
                            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",
                                                &local_3688,0x16);
                          }
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b8fa;
                          FUN_1001782e9(0,0);
                        }
                      }
LAB_10061b907:
                      if (local_3750 == (int *)0x0) {
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b921;
                        iVar8 = FUN_100594adc(&local_3750,0);
                        if (iVar8 != 0) {
                          if (iVar8 == -0x80) goto LAB_10061bd58;
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x10061be76;
                          uVar13 = FUN_1001cc310();
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x10061be86;
                          cVar5 = _os_log_type_enabled(uVar13,0x10);
                          local_3730 = (undefined8 ****)0x2;
                          if (cVar5 == '\0') goto LAB_10061beea;
                          uStack_367a = (undefined2)iVar8;
                          uStack_3678 = (undefined1)((uint)iVar8 >> 0x10);
                          uStack_3677 = (undefined1)((uint)iVar8 >> 0x18);
                          goto LAB_10061bfd2;
                        }
                      }
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10061b941;
                      FUN_10059563f(local_3750,local_3710,0);
                    }
                  }
LAB_10061b1a9:
                  ppppuVar26 = (undefined8 ****)((long)local_3738 + 1);
                } while (ppppuVar26 != (undefined8 ****)local_3730);
                *(undefined8 *)((long)&local_38 + lVar12) = 0x10061bb93;
                FUN_1002fbbfc(lVar2);
                lVar14 = local_3768;
                plVar21 = local_3858;
                if (local_3858 != local_3850) {
                  do {
                    lVar18 = plVar21[4];
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x10061bbb6;
                    iVar8 = FUN_10061c37b(lVar18);
                    if (iVar8 != 0) {
                      if (iVar8 == -0x80) goto LAB_10061bd58;
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10061bd9b;
                      uVar13 = FUN_1001cc310();
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10061bdab;
                      cVar5 = _os_log_type_enabled(uVar13,0x10);
                      local_3730 = (undefined8 ****)0x2;
                      if (cVar5 == '\0') goto LAB_10061beea;
                      uStack_367a = (undefined2)iVar8;
                      uStack_3678 = (undefined1)((uint)iVar8 >> 0x10);
                      uStack_3677 = (undefined1)((uint)iVar8 >> 0x18);
                      goto LAB_10061bfd2;
                    }
                    plVar4 = (long *)plVar21[1];
                    plVar25 = plVar21;
                    if ((long *)plVar21[1] == (long *)0x0) {
                      do {
                        plVar21 = (long *)plVar25[2];
                        bVar34 = (long *)*plVar21 != plVar25;
                        plVar25 = plVar21;
                      } while (bVar34);
                    }
                    else {
                      do {
                        plVar21 = plVar4;
                        plVar4 = (long *)*plVar21;
                      } while ((long *)*plVar21 != (long *)0x0);
                    }
                  } while (plVar21 != local_3850);
                }
                if ((*(byte *)(lVar14 + 0x2d1a) & 0x20) == 0) {
                  uVar13 = *(undefined8 *)(local_3728 + 0x18);
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x10061bc0c;
                  iVar8 = FUN_100602bb3(uVar13);
                  local_3730 = (undefined8 ****)0x2;
                  if (iVar8 != -0x80) {
                    if (iVar8 == 0) goto LAB_10061bc2e;
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x10061bed2;
                    uVar13 = FUN_1001cc310();
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x10061bee2;
                    cVar5 = _os_log_type_enabled(uVar13,0x10);
                    if (cVar5 != '\0') {
                      uStack_367a = (undefined2)iVar8;
                      uStack_3678 = (undefined1)((uint)iVar8 >> 0x10);
                      uStack_3677 = (undefined1)((uint)iVar8 >> 0x18);
LAB_10061bfd2:
                      uStack_367c = 0x400;
                      uStack_3680 = 1;
                      local_3688._4_4_ = 0x7a0a90;
                      local_3688._0_4_ = 0x8220202;
                      *(undefined8 *)((long)&local_38 + lVar12) = 0x10061bfe5;
                      __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",
                                          &local_3688,0x12);
                    }
                  }
LAB_10061beea:
                  bVar34 = false;
                }
                else {
LAB_10061bc2e:
                  bVar34 = true;
                  if (local_3750 == (int *)0x0) {
                    local_3730 = (undefined8 ****)0x0;
                    iVar8 = 0;
                  }
                  else {
                    if (((*local_3750 == 0x4f4c5354) && (local_3750[1] != 0)) &&
                       (iVar8 = (int)((ulong)(*(long *)(local_3750 + 4) - *(long *)(local_3750 + 2))
                                     >> 3) * -0x49249249, iVar8 != 0)) {
                      iVar29 = 0;
                      do {
                        *(undefined8 *)((long)&local_38 + lVar12) = 0x10061bc8e;
                        lVar14 = FUN_1005968ea(local_3750,iVar29,0);
                        if (lVar14 == 0) {
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x10061bcd6;
                          uVar13 = FUN_1001cc310();
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x10061bce6;
                          cVar5 = _os_log_type_enabled(uVar13,0x10);
                          if (cVar5 != '\0') {
                            local_3688._0_4_ = 0x8220202;
                            local_3688._4_4_ = 0x7a0a90;
                            uStack_3680 = 1;
                            uStack_367c = 0x822;
                            uStack_367a = 0x4cee;
                            uStack_3678 = 0x7f;
                            uStack_3677 = 0;
                            uStack_3676 = 1;
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x10061bd50;
                            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",
                                                &local_3688,0x16);
                          }
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x10061bcf3;
                          FUN_1001782e9(0,0);
                        }
                        else {
                          *(undefined8 *)((long)&local_38 + lVar12) = 0x10061bca0;
                          uVar16 = FUN_1004744bf(lVar14,0);
                          if ((uVar16 & 0x208004) == 0) {
                            uVar13 = *(undefined8 *)(local_3728 + 0x10);
                            cVar5 = *(char *)(local_3740 + 0x3a2);
                            *(undefined8 *)((long)&local_38 + lVar12) = 0x10061bccf;
                            FUN_1004362d5(uVar13,lVar14,cVar5 == '\0',0);
                          }
                        }
                        iVar29 = iVar29 + 1;
                      } while (iVar8 != iVar29);
                    }
                    local_3730 = (undefined8 ****)0x0;
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x10061bd82;
                    FUN_1004399b4(local_3740,0);
                    *(undefined8 *)((long)&local_38 + lVar12) = 0x10061bd8e;
                    FUN_100609d02(local_3728);
                    iVar8 = 0;
                  }
                }
                if (local_3708 != (void *)0x0) {
                  uStack_3700 = (undefined4)local_3708;
                  uStack_36fc = (undefined2)((ulong)local_3708 >> 0x20);
                  uStack_36fa = (undefined2)((ulong)local_3708 >> 0x30);
                  *(undefined8 *)((long)&local_38 + lVar12) = 0x10061bf05;
                  operator_delete(local_3708);
                }
                if (!bVar34) goto LAB_10061bf15;
              }
              local_3730 = (undefined8 ****)0x0;
            }
            else {
              *(undefined8 *)((long)&local_38 + lVar12) = 0x10061acfc;
              uVar13 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar12) = 0x10061ad0c;
              cVar5 = _os_log_type_enabled(uVar13,0x10);
              if (cVar5 != '\0') {
                uStack_367a = (undefined2)iVar8;
                uStack_3678 = (undefined1)((uint)iVar8 >> 0x10);
                uStack_3677 = (undefined1)((uint)iVar8 >> 0x18);
LAB_10061ad46:
                uStack_3680 = 1;
                local_3688._4_4_ = 0x7a0a90;
                uStack_367c = 0x400;
                local_3688._0_4_ = 0x8220202;
                *(undefined8 *)((long)&local_38 + lVar12) = 0x10061ad59;
                __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_3688,
                                    0x12);
              }
            }
          }
LAB_10061bf15:
          *(undefined8 *)((long)&local_38 + lVar12) = 0x10061bf25;
          FUN_1002a41f4(&local_3858,local_3850[0]);
          *(undefined8 *)((long)&local_38 + lVar12) = 0x10061bf31;
          FUN_100416a0c(&local_38e0);
          *(undefined8 *)((long)&local_38 + lVar12) = 0x10061bf3d;
          FUN_100416828(&local_3888);
          if (((ulong)local_3730 & 1) != 0) goto LAB_10061a351;
        }
      }
      else {
        *(undefined8 *)((long)&local_38 + lVar12) = 0x1006198f2;
        uVar13 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar12) = 0x100619902;
        cVar5 = _os_log_type_enabled(uVar13,0x10);
        if (cVar5 != '\0') {
          uStack_367a = (undefined2)iVar8;
          uStack_3678 = (undefined1)((uint)iVar8 >> 0x10);
          uStack_3677 = (undefined1)((uint)iVar8 >> 0x18);
LAB_10061993c:
          uStack_3680 = 1;
          local_3688._4_4_ = 0x7a0a90;
          uStack_367c = 0x400;
          local_3688._0_4_ = 0x8220202;
          *(undefined8 *)((long)&local_38 + lVar12) = 0x10061994f;
          __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_3688,0x12);
          local_3708 = (void *)CONCAT44(local_3708._4_4_,(undefined4)local_3708);
        }
      }
    }
  }
LAB_10061a321:
  *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a32d;
  FUN_100595344(local_3750);
  *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a339;
  FUN_100595344(local_3760);
  *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a345;
  FUN_100595344(local_3758);
  *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a351;
  FUN_10060324e(local_3728);
LAB_10061a351:
  *(undefined8 *)((long)&local_38 + lVar12) = 0x10061a361;
  FUN_1002a41f4(&local_3798,local_3790);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((long)&local_38 + lVar12) = 0x10061bfef;
    ___stack_chk_fail();
  }
  return iVar8;
LAB_10061bd58:
  local_3730 = (undefined8 ****)0x2;
  goto LAB_10061beea;
}

