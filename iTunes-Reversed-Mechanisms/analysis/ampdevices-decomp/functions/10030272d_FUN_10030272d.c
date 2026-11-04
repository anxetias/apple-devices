// name: FUN_10030272d
// address: 10030272d

undefined8
FUN_10030272d(long param_1,long param_2,undefined4 *param_3,char param_4,char param_5,char param_6,
             char param_7)

{
  float *pfVar1;
  float fVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  double dVar11;
  undefined *puVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  char *pcVar21;
  undefined4 *puVar22;
  undefined1 local_4b8 [16];
  undefined1 local_4a8 [16];
  long local_498;
  long local_490;
  undefined4 local_488;
  uint local_484;
  undefined2 uStack_480;
  ushort uStack_47e;
  short sStack_47c;
  undefined2 local_47a;
  undefined6 uStack_478;
  undefined2 uStack_472;
  undefined8 local_470;
  undefined4 local_468;
  undefined8 local_464;
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined1 local_438 [512];
  undefined1 local_238 [512];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_2 == 0) || (lVar17 = *(long *)(param_2 + 8), lVar17 == 0)) ||
     (*(long *)(lVar17 + 0x10) == 0)) {
    uVar16 = FUN_1001cc310();
    cVar13 = _os_log_type_enabled(uVar16,0x10);
    if (cVar13 != '\0') {
      local_488 = 0x8220202;
      local_484 = 0x7a0a90;
      uStack_480 = 1;
      uStack_47e = 0;
      sStack_47c = 0x822;
      local_47a = 0xe6c1;
      uStack_478 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_488,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    local_490 = lVar17;
    if (((param_1 == 0) || (lVar18 = *(long *)(param_1 + 8), lVar18 == 0)) ||
       (*(long *)(lVar18 + 0x10) == 0)) {
      uVar16 = FUN_1001cc310();
      cVar13 = _os_log_type_enabled(uVar16,0x10);
      if (cVar13 != '\0') {
        local_488 = 0x8220202;
        local_484 = 0x7a0a90;
        uStack_480 = 1;
        uStack_47e = 0;
        sStack_47c = 0x822;
        local_47a = 0xe6e7;
        uStack_478 = 0x1007b;
        __os_log_error_impl(0x100000000,uVar16,0x10,"%{public}s: (%{public}s)",&local_488,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      local_498 = lVar18;
      if (param_5 != '\0') {
        uVar16 = 0;
        if ((*(int *)(param_2 + 0x3c) == 0x48545450) || (*(int *)(param_2 + 0x3c) == 0x53485244))
        goto LAB_1003028d6;
      }
      if ((*(int *)(lVar18 + 0xc2) < 0) || (*(int *)(lVar17 + 0xc2) < 0)) {
        FUN_10047edcd(&local_488);
        FUN_10047edcd(&local_468,local_490);
        cVar13 = FUN_1001b8428(&local_488);
        if (((cVar13 == '\0') && (cVar13 = FUN_1001b8428(&local_468), cVar13 == '\0')) &&
           (iVar14 = FUN_1001b9c66(&local_488,&local_468), iVar14 == 0)) {
          FUN_1001b7a50(&local_468);
          FUN_1001b7a50(&local_488);
          uVar16 = 1;
          goto LAB_1003028d6;
        }
        FUN_1001b7a50(&local_468);
        FUN_1001b7a50(&local_488);
      }
      if ((*(long *)(*(long *)(param_2 + 0x10) + 0xa8) == 0) ||
         (*(long *)(*(long *)(param_1 + 0x10) + 0xa8) == 0)) {
LAB_100302a64:
        lVar17 = FUN_1002b44c2(param_1);
        if ((lVar17 - 1U < 0xfffffffffffffffc) &&
           (*(int *)(*(long *)(local_490 + 0x10) + 0x84) == 0x646f5069)) {
          lVar17 = FUN_1002b44c2(param_1);
          lVar18 = FUN_1002b44c2(param_2);
          if (lVar17 == lVar18) {
            lVar17 = FUN_1002b71b5(param_1);
            lVar18 = FUN_1002b71b5(param_2);
            uVar16 = 1;
            if (lVar17 == lVar18) goto LAB_1003028d6;
          }
        }
        lVar17 = local_498;
        sVar5 = *(short *)(param_1 + 0x58);
        if (((sVar5 == 0) || (sVar5 == 0x1f6)) || (sVar5 == 0x196)) {
          uVar8 = *(uint *)(param_1 + 100);
          uVar9 = uVar8 - 500;
          if (uVar8 < 500) {
            uVar9 = 0;
          }
          uVar15 = 0xffffffff;
          if (uVar8 < 0xfffffe0c) {
            uVar15 = uVar8 + 500;
          }
        }
        else {
          uVar9 = *(uint *)(param_1 + 100);
          uVar15 = uVar9;
        }
        if ((param_6 == '\0') || ((*(byte *)(param_2 + 0x4a) & 1) == 0)) {
          if ((*(uint *)(param_2 + 100) < uVar9) || (uVar15 < *(uint *)(param_2 + 100))) {
            if (param_7 != '\0') {
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar16 = DAT_1008c75b8;
              cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar13 != '\0') {
                uVar8 = *(uint *)(param_2 + 100);
                uVar10 = *(undefined4 *)(param_1 + 100);
                FUN_100476ac1(&local_468,local_490);
                uVar19 = FUN_1001b83ae(&local_468);
                uStack_47e = (ushort)uVar10;
                sStack_47c = (short)((uint)uVar10 >> 0x10);
                uStack_478 = (undefined6)uVar19;
                uStack_472 = (undefined2)((ulong)uVar19 >> 0x30);
                pcVar21 = "sync> total time does not match (%u vs. %u) for track \"%{public}s\"";
                local_484 = uVar8;
                goto LAB_100302cea;
              }
            }
          }
          else if (((*(short *)(param_2 + 0x54) == *(short *)(param_1 + 0x54)) ||
                   (*(int *)(local_490 + 0xc2) < 0)) || (*(int *)(local_498 + 0xc2) < 0)) {
            if (*(long *)(*(long *)(param_2 + 0x10) + 0x20) ==
                *(long *)(*(long *)(param_1 + 0x10) + 0x20)) {
              if ((*(float *)(param_2 + 0x50) != *(float *)(param_1 + 0x50)) ||
                 (NAN(*(float *)(param_2 + 0x50)) || NAN(*(float *)(param_1 + 0x50)))) {
                if (param_7 != '\0') {
                  if (DAT_1008c75c0 != -1) {
                    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                  }
                  uVar16 = DAT_1008c75b8;
                  cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                  if (cVar13 != '\0') {
                    local_498 = CONCAT44(local_498._4_4_,*(undefined4 *)(param_2 + 0x50));
                    fVar2 = *(float *)(param_1 + 0x50);
                    FUN_100476ac1(&local_468,local_490);
                    local_470 = FUN_1001b83ae(&local_468);
                    dVar11 = (double)(float)local_498;
                    local_484 = SUB84(dVar11,0);
                    uStack_480 = (undefined2)((ulong)dVar11 >> 0x20);
                    uStack_47e = (ushort)((ulong)dVar11 >> 0x30);
                    local_47a = SUB82((double)fVar2,0);
                    uStack_478 = (undefined6)((ulong)(double)fVar2 >> 0x10);
                    pcVar21 = 
                    "sync> sample rate does not match (%f vs. %f) for track \"%{public}s\"";
                    goto LAB_10030301d;
                  }
                }
              }
              else {
                if (((*(short *)(param_1 + 0x56) == 0) || (*(short *)(param_2 + 0x56) == 0)) ||
                   (*(short *)(param_2 + 0x56) == *(short *)(param_1 + 0x56))) goto LAB_100303100;
                if (param_7 != '\0') {
                  if (DAT_1008c75c0 != -1) {
                    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                  }
                  uVar16 = DAT_1008c75b8;
                  cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                  if (cVar13 != '\0') {
                    uVar6 = *(ushort *)(param_2 + 0x56);
                    uVar7 = *(ushort *)(param_1 + 0x56);
                    FUN_100476ac1(&local_468,local_490);
                    uVar19 = FUN_1001b83ae(&local_468);
                    sStack_47c = 0;
                    uStack_478 = (undefined6)uVar19;
                    uStack_472 = (undefined2)((ulong)uVar19 >> 0x30);
                    pcVar21 = 
                    "sync> num channels does not match (%u vs. %u) for track \"%{public}s\"";
                    local_484 = (uint)uVar6;
                    uStack_47e = uVar7;
                    goto LAB_100302cea;
                  }
                }
              }
            }
            else if (param_7 != '\0') {
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar16 = DAT_1008c75b8;
              cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar13 != '\0') {
                uVar19 = *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x20);
                uVar20 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
                FUN_100476ac1(&local_468,local_490);
                local_470 = FUN_1001b83ae(&local_468);
                local_484 = (uint)uVar19;
                uStack_480 = (undefined2)((ulong)uVar19 >> 0x20);
                uStack_47e = (ushort)((ulong)uVar19 >> 0x30);
                local_47a = (undefined2)uVar20;
                uStack_478 = (undefined6)((ulong)uVar20 >> 0x10);
                pcVar21 = 
                "sync> non-drm user id (%llu vs. %llu) does not match for track \"%{public}s\"";
LAB_10030301d:
                uStack_472 = 0x822;
                sStack_47c = 0x800;
                local_488 = 0x8000302;
                uVar19 = 0x20;
LAB_10030302b:
                __os_log_impl(0x100000000,uVar16,1,pcVar21,&local_488,uVar19);
LAB_100303030:
                puVar22 = &local_468;
                goto LAB_100303037;
              }
            }
          }
          else if (param_7 != '\0') {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar16 = DAT_1008c75b8;
            cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar13 != '\0') {
              uVar6 = *(ushort *)(param_2 + 0x54);
              uVar7 = *(ushort *)(param_1 + 0x54);
              FUN_100476ac1(&local_468,local_490);
              uVar19 = FUN_1001b83ae(&local_468);
              sStack_47c = 0;
              uStack_478 = (undefined6)uVar19;
              uStack_472 = (undefined2)((ulong)uVar19 >> 0x30);
              pcVar21 = "sync> bit rate does not match (%u vs. %u) for track \"%{public}s\"";
              local_484 = (uint)uVar6;
              uStack_47e = uVar7;
              goto LAB_100302cea;
            }
          }
        }
        else {
LAB_100303100:
          if (local_490 != local_498) {
            if (*(int *)(param_2 + 0x3c) == *(int *)(param_1 + 0x3c)) {
              if (*(short *)(local_490 + 0x136) == *(short *)(local_498 + 0x136)) {
                if (*(short *)(local_490 + 0x138) == *(short *)(local_498 + 0x138)) {
                  if (*(short *)(local_490 + 0x13a) == *(short *)(local_498 + 0x13a)) {
                    if (*(short *)(local_490 + 0x13c) == *(short *)(local_498 + 0x13c)) {
                      if (*(short *)(local_490 + 0x142) == *(short *)(local_498 + 0x142)) {
                        if (*(long *)(*(long *)(param_2 + 0x10) + 8) ==
                            *(long *)(*(long *)(param_1 + 0x10) + 8)) {
                          if (((*(uint *)(local_498 + 0xc2) ^ *(uint *)(local_490 + 0xc2)) >> 10 & 1
                              ) == 0) {
                            if (*(int *)(param_2 + 0x7c) == *(int *)(param_1 + 0x7c)) {
                              if ((int)*(uint *)(local_490 + 0xc2) < 0) {
LAB_100303210:
                                FUN_100476928(local_498,local_238);
                                FUN_100476928(local_490,local_438);
                                cVar13 = FUN_1001e3edc(local_238,local_438,0);
                                if (cVar13 == '\0') {
                                  if (param_7 != '\0') {
                                    if (DAT_1008c75c0 != -1) {
                                      _dispatch_once(&DAT_1008c75c0,
                                                     &PTR___NSConcreteGlobalBlock_100857068);
                                    }
                                    uVar16 = DAT_1008c75b8;
                                    cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                    if (cVar13 != '\0') {
                                      FUN_1001b8dfc(&local_468,local_438);
                                      uVar19 = FUN_1001b83ae(&local_468);
                                      FUN_1001b8dfc(local_4b8,local_238);
                                      uVar20 = FUN_1001b83ae(local_4b8);
                                      FUN_100476ac1(local_4a8,local_490);
                                      local_470 = FUN_1001b83ae(local_4a8);
                                      local_484 = (uint)uVar19;
                                      uStack_480 = (undefined2)((ulong)uVar19 >> 0x20);
                                      uStack_47e = (ushort)((ulong)uVar19 >> 0x30);
                                      local_47a = (undefined2)uVar20;
                                      uStack_478 = (undefined6)((ulong)uVar20 >> 0x10);
                                      pcVar21 = 
                                      "sync> name does not match (\"%{public}s\" vs. \"%{public}s\") for track \"%{public}s\""
                                      ;
                                      goto LAB_100302f58;
                                    }
                                  }
                                }
                                else {
                                  FUN_1004779ac(local_498,local_238);
                                  FUN_1004779ac(local_490,local_438);
                                  cVar13 = FUN_1001e3edc(local_238,local_438,0);
                                  if (cVar13 == '\0') {
                                    if (param_7 != '\0') {
                                      if (DAT_1008c75c0 != -1) {
                                        _dispatch_once(&DAT_1008c75c0,
                                                       &PTR___NSConcreteGlobalBlock_100857068);
                                      }
                                      uVar16 = DAT_1008c75b8;
                                      cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                      if (cVar13 != '\0') {
                                        FUN_1001b8dfc(&local_468,local_438);
                                        uVar19 = FUN_1001b83ae(&local_468);
                                        FUN_1001b8dfc(local_4b8,local_238);
                                        uVar20 = FUN_1001b83ae(local_4b8);
                                        FUN_100476ac1(local_4a8,local_490);
                                        local_470 = FUN_1001b83ae(local_4a8);
                                        local_484 = (uint)uVar19;
                                        uStack_480 = (undefined2)((ulong)uVar19 >> 0x20);
                                        uStack_47e = (ushort)((ulong)uVar19 >> 0x30);
                                        local_47a = (undefined2)uVar20;
                                        uStack_478 = (undefined6)((ulong)uVar20 >> 0x10);
                                        pcVar21 = 
                                        "sync> artist does not match (\"%{public}s\" vs. \"%{public}s\") for track \"%{public}s\""
                                        ;
                                        goto LAB_100302f58;
                                      }
                                    }
                                  }
                                  else {
                                    FUN_1004772c4(local_498,local_238);
                                    FUN_1004772c4(local_490,local_438);
                                    cVar13 = FUN_1001e3edc(local_238,local_438,0);
                                    if (cVar13 == '\0') {
                                      if (param_7 != '\0') {
                                        if (DAT_1008c75c0 != -1) {
                                          _dispatch_once(&DAT_1008c75c0,
                                                         &PTR___NSConcreteGlobalBlock_100857068);
                                        }
                                        uVar16 = DAT_1008c75b8;
                                        cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                        if (cVar13 != '\0') {
                                          FUN_1001b8dfc(&local_468,local_438);
                                          uVar19 = FUN_1001b83ae(&local_468);
                                          FUN_1001b8dfc(local_4b8,local_238);
                                          uVar20 = FUN_1001b83ae(local_4b8);
                                          FUN_100476ac1(local_4a8,local_490);
                                          local_470 = FUN_1001b83ae(local_4a8);
                                          local_484 = (uint)uVar19;
                                          uStack_480 = (undefined2)((ulong)uVar19 >> 0x20);
                                          uStack_47e = (ushort)((ulong)uVar19 >> 0x30);
                                          local_47a = (undefined2)uVar20;
                                          uStack_478 = (undefined6)((ulong)uVar20 >> 0x10);
                                          pcVar21 = 
                                          "sync> album does not match (\"%{public}s\" vs. \"%{public}s\") for track \"%{public}s\""
                                          ;
                                          goto LAB_100302f58;
                                        }
                                      }
                                    }
                                    else {
                                      FUN_10047a7b5(local_498,local_238);
                                      FUN_10047a7b5(local_490,local_438);
                                      cVar13 = FUN_1001e3edc(local_238,local_438,0);
                                      if (cVar13 == '\0') {
                                        if (param_7 != '\0') {
                                          if (DAT_1008c75c0 != -1) {
                                            _dispatch_once(&DAT_1008c75c0,
                                                           &PTR___NSConcreteGlobalBlock_100857068);
                                          }
                                          uVar16 = DAT_1008c75b8;
                                          cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                          if (cVar13 != '\0') {
                                            FUN_1001b8dfc(&local_468,local_438);
                                            uVar19 = FUN_1001b83ae(&local_468);
                                            FUN_1001b8dfc(local_4b8,local_238);
                                            uVar20 = FUN_1001b83ae(local_4b8);
                                            FUN_100476ac1(local_4a8,local_490);
                                            local_470 = FUN_1001b83ae(local_4a8);
                                            local_484 = (uint)uVar19;
                                            uStack_480 = (undefined2)((ulong)uVar19 >> 0x20);
                                            uStack_47e = (ushort)((ulong)uVar19 >> 0x30);
                                            local_47a = (undefined2)uVar20;
                                            uStack_478 = (undefined6)((ulong)uVar20 >> 0x10);
                                            pcVar21 = 
                                            "sync> genre does not match (\"%{public}s\" vs. \"%{public}s\") for track \"%{public}s\""
                                            ;
                                            goto LAB_100302f58;
                                          }
                                        }
                                      }
                                      else {
                                        FUN_10047b307(local_498,local_238);
                                        FUN_10047b307(local_490,local_438);
                                        cVar13 = FUN_1001e3edc(local_238,local_438,0);
                                        if (cVar13 == '\0') {
                                          if (param_7 != '\0') {
                                            if (DAT_1008c75c0 != -1) {
                                              _dispatch_once(&DAT_1008c75c0,
                                                             &PTR___NSConcreteGlobalBlock_100857068)
                                              ;
                                            }
                                            uVar16 = DAT_1008c75b8;
                                            cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                            if (cVar13 != '\0') {
                                              FUN_1001b8dfc(&local_468,local_438);
                                              uVar19 = FUN_1001b83ae(&local_468);
                                              FUN_1001b8dfc(local_4b8,local_238);
                                              uVar20 = FUN_1001b83ae(local_4b8);
                                              FUN_100476ac1(local_4a8,local_490);
                                              local_470 = FUN_1001b83ae(local_4a8);
                                              local_484 = (uint)uVar19;
                                              uStack_480 = (undefined2)((ulong)uVar19 >> 0x20);
                                              uStack_47e = (ushort)((ulong)uVar19 >> 0x30);
                                              local_47a = (undefined2)uVar20;
                                              uStack_478 = (undefined6)((ulong)uVar20 >> 0x10);
                                              pcVar21 = 
                                              "sync> eq preset does not match (\"%{public}s\" vs. \"%{public}s\") for track \"%{public}s\""
                                              ;
                                              goto LAB_100302f58;
                                            }
                                          }
                                        }
                                        else {
                                          FUN_10047a0d2(local_498,local_238);
                                          FUN_10047a0d2(local_490,local_438);
                                          cVar13 = FUN_1001e3edc(local_238,local_438,0);
                                          puVar12 = PTR_cf_unique_id_100853698;
                                          if (cVar13 == '\0') {
                                            if (param_7 != '\0') {
                                              if (DAT_1008c75c0 != -1) {
                                                _dispatch_once(&DAT_1008c75c0,
                                                               &
                                                  PTR___NSConcreteGlobalBlock_100857068);
                                              }
                                              uVar16 = DAT_1008c75b8;
                                              cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                              if (cVar13 != '\0') {
                                                FUN_1001b8dfc(&local_468,local_438);
                                                uVar19 = FUN_1001b83ae(&local_468);
                                                FUN_1001b8dfc(local_4b8,local_238);
                                                uVar20 = FUN_1001b83ae(local_4b8);
                                                FUN_100476ac1(local_4a8,local_490);
                                                local_470 = FUN_1001b83ae(local_4a8);
                                                local_484 = (uint)uVar19;
                                                uStack_480 = (undefined2)((ulong)uVar19 >> 0x20);
                                                uStack_47e = (ushort)((ulong)uVar19 >> 0x30);
                                                local_47a = (undefined2)uVar20;
                                                uStack_478 = (undefined6)((ulong)uVar20 >> 0x10);
                                                pcVar21 = 
                                                "sync> composer does not match (\"%{public}s\" vs. \"%{public}s\") for track \"%{public}s\""
                                                ;
                                                goto LAB_100302f58;
                                              }
                                            }
                                          }
                                          else {
                                            lVar17 = *(long *)(*(long *)(param_1 + 0x10) + 0x98);
                                            if ((lVar17 != 0) &&
                                               (*(long *)(*(long *)(param_2 + 0x10) + 0x98) != 0)) {
                                              lVar17 = FUN_100167d88(lVar17,
                                                  PTR_cf_unique_id_100853698);
                                              lVar18 = FUN_100167d88(*(undefined8 *)
                                                                      (*(long *)(param_2 + 0x10) +
                                                                      0x98),puVar12);
                                              if (lVar17 != lVar18) {
                                                if (param_7 != '\0') {
                                                  if (DAT_1008c75c0 != -1) {
                                                    _dispatch_once(&DAT_1008c75c0,
                                                                   &
                                                  PTR___NSConcreteGlobalBlock_100857068);
                                                  }
                                                  uVar16 = DAT_1008c75b8;
                                                  cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                                  if (cVar13 != '\0') {
                                                    FUN_100476ac1(&local_488,local_490);
                                                    local_464 = FUN_1001b83ae(&local_488);
                                                    pcVar21 = 
                                                  "sync> book unique id does not match for track \"%{public}s\""
                                                  ;
                                                  goto LAB_10030348b;
                                                  }
                                                }
                                                goto LAB_1003028d3;
                                              }
                                            }
                                            if (param_3 == (undefined4 *)0x0) {
                                              FUN_1001c62d9(&local_458,0x20);
                                            }
                                            else {
                                              local_458 = *param_3;
                                              uStack_454 = param_3[1];
                                              uStack_450 = param_3[2];
                                              uStack_44c = param_3[3];
                                              local_448 = *(undefined8 *)(param_3 + 4);
                                              uStack_440 = *(undefined8 *)(param_3 + 6);
                                            }
                                            if ((((-1 < *(int *)(local_490 + 0xc2)) &&
                                                 (-1 < *(int *)(local_498 + 0xc2))) &&
                                                (*(long *)(*(long *)(param_2 + 0x10) + 0xa8) == 0))
                                               && (*(long *)(*(long *)(param_1 + 0x10) + 0xa8) == 0)
                                               ) {
                                              FUN_1005389ba(&local_458,0x20);
                                            }
                                            cVar13 = FUN_10053916d(&local_458,0x23);
                                            if ((cVar13 == '\0') ||
                                               (*(short *)(local_490 + 0x15c) ==
                                                *(short *)(local_498 + 0x15c))) {
                                              cVar13 = FUN_10053916d(&local_458,0x3f);
                                              if ((cVar13 == '\0') ||
                                                 (*(int *)(*(long *)(local_490 + 0x78) + 0xc) ==
                                                  *(int *)(*(long *)(local_498 + 0x78) + 0xc))) {
                                                cVar13 = FUN_10053916d(&local_458,0x41);
                                                if (cVar13 == '\0') {
LAB_1003044e1:
                                                  cVar13 = FUN_10053916d(&local_458,0xa7);
                                                  if ((cVar13 == '\0') ||
                                                     (*(char *)(*(long *)(local_490 + 0x78) + 0x22)
                                                      == *(char *)(*(long *)(local_498 + 0x78) +
                                                                  0x22))) {
                                                    cVar13 = FUN_10053916d(&local_458,0xa6);
                                                    if ((cVar13 == '\0') ||
                                                       (*(char *)(*(long *)(local_490 + 0x78) + 0x21
                                                                 ) ==
                                                        *(char *)(*(long *)(local_498 + 0x78) + 0x21
                                                                 ))) {
                                                      cVar13 = FUN_10053916d(&local_458,0x20);
                                                      if ((cVar13 == '\0') ||
                                                         (*(int *)(*(long *)(param_2 + 0x10) + 0x88)
                                                          == *(int *)(*(long *)(param_1 + 0x10) +
                                                                     0x88))) {
                                                        cVar13 = FUN_10053916d(&local_458,0xe);
                                                        if (cVar13 != '\0') {
                                                          FUN_10047b65a(local_498,local_238);
                                                          FUN_10047b65a(local_490,local_438);
                                                          cVar13 = FUN_1001e3edc(local_238,local_438
                                                                                 ,0);
                                                          if (cVar13 == '\0') {
                                                            if (param_7 != '\0') {
                                                              if (DAT_1008c75c0 != -1) {
                                                                _dispatch_once(&DAT_1008c75c0,
                                                                               &
                                                  PTR___NSConcreteGlobalBlock_100857068);
                                                  }
                                                  uVar16 = DAT_1008c75b8;
                                                  cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                                  if (cVar13 != '\0') {
                                                    FUN_1001b8dfc(&local_468,local_438);
                                                    uVar19 = FUN_1001b83ae(&local_468);
                                                    FUN_1001b8dfc(local_4b8,local_238);
                                                    uVar20 = FUN_1001b83ae(local_4b8);
                                                    FUN_100476ac1(local_4a8,local_490);
                                                    local_470 = FUN_1001b83ae(local_4a8);
                                                    local_484 = (uint)uVar19;
                                                    uStack_480 = (undefined2)((ulong)uVar19 >> 0x20)
                                                    ;
                                                    uStack_47e = (ushort)((ulong)uVar19 >> 0x30);
                                                    local_47a = (undefined2)uVar20;
                                                    uStack_478 = (undefined6)((ulong)uVar20 >> 0x10)
                                                    ;
                                                    pcVar21 = 
                                                  "sync> comment does not match (\"%{public}s\" vs. \"%{public}s\") for track \"%{public}s\""
                                                  ;
                                                  goto LAB_100302f58;
                                                  }
                                                  }
                                                  goto LAB_1003028d3;
                                                  }
                                                  }
                                                  cVar13 = FUN_10053916d(&local_458,0x27);
                                                  if (cVar13 != '\0') {
                                                    FUN_100478a09(local_498,local_238);
                                                    FUN_100478a09(local_490,local_438);
                                                    cVar13 = FUN_1001e3edc(local_238,local_438,0);
                                                    if (cVar13 == '\0') {
                                                      if (param_7 != '\0') {
                                                        if (DAT_1008c75c0 != -1) {
                                                          _dispatch_once(&DAT_1008c75c0,
                                                                         &
                                                  PTR___NSConcreteGlobalBlock_100857068);
                                                  }
                                                  uVar16 = DAT_1008c75b8;
                                                  cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                                  if (cVar13 != '\0') {
                                                    FUN_1001b8dfc(&local_468,local_438);
                                                    uVar19 = FUN_1001b83ae(&local_468);
                                                    FUN_1001b8dfc(local_4b8,local_238);
                                                    uVar20 = FUN_1001b83ae(local_4b8);
                                                    FUN_100476ac1(local_4a8,local_490);
                                                    local_470 = FUN_1001b83ae(local_4a8);
                                                    local_484 = (uint)uVar19;
                                                    uStack_480 = (undefined2)((ulong)uVar19 >> 0x20)
                                                    ;
                                                    uStack_47e = (ushort)((ulong)uVar19 >> 0x30);
                                                    local_47a = (undefined2)uVar20;
                                                    uStack_478 = (undefined6)((ulong)uVar20 >> 0x10)
                                                    ;
                                                    pcVar21 = 
                                                  "sync> grouping does not match (\"%{public}s\" vs. \"%{public}s\") for track \"%{public}s\""
                                                  ;
                                                  goto LAB_100302f58;
                                                  }
                                                  }
                                                  goto LAB_1003028d3;
                                                  }
                                                  }
                                                  cVar13 = FUN_10053916d(&local_458,0x9f);
                                                  if (cVar13 != '\0') {
                                                    FUN_100478ed2(local_498,local_238);
                                                    FUN_100478ed2(local_490,local_438);
                                                    cVar13 = FUN_1001e3edc(local_238,local_438,0);
                                                    if (cVar13 == '\0') {
                                                      if (param_7 != '\0') {
                                                        if (DAT_1008c75c0 != -1) {
                                                          _dispatch_once(&DAT_1008c75c0,
                                                                         &
                                                  PTR___NSConcreteGlobalBlock_100857068);
                                                  }
                                                  uVar16 = DAT_1008c75b8;
                                                  cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                                  if (cVar13 != '\0') {
                                                    FUN_1001b8dfc(&local_468,local_438);
                                                    uVar19 = FUN_1001b83ae(&local_468);
                                                    FUN_1001b8dfc(local_4b8,local_238);
                                                    uVar20 = FUN_1001b83ae(local_4b8);
                                                    FUN_100476ac1(local_4a8,local_490);
                                                    local_470 = FUN_1001b83ae(local_4a8);
                                                    local_484 = (uint)uVar19;
                                                    uStack_480 = (undefined2)((ulong)uVar19 >> 0x20)
                                                    ;
                                                    uStack_47e = (ushort)((ulong)uVar19 >> 0x30);
                                                    local_47a = (undefined2)uVar20;
                                                    uStack_478 = (undefined6)((ulong)uVar20 >> 0x10)
                                                    ;
                                                    pcVar21 = 
                                                  "sync> work does not match (\"%{public}s\" vs. \"%{public}s\") for track \"%{public}s\""
                                                  ;
                                                  goto LAB_100302f58;
                                                  }
                                                  }
                                                  goto LAB_1003028d3;
                                                  }
                                                  }
                                                  cVar13 = FUN_10053916d(&local_458,0xa0);
                                                  if (cVar13 != '\0') {
                                                    FUN_1004793b3(local_498,local_238);
                                                    FUN_1004793b3(local_490,local_438);
                                                    cVar13 = FUN_1001e3edc(local_238,local_438,0);
                                                    if (cVar13 == '\0') {
                                                      if (param_7 != '\0') {
                                                        if (DAT_1008c75c0 != -1) {
                                                          _dispatch_once(&DAT_1008c75c0,
                                                                         &
                                                  PTR___NSConcreteGlobalBlock_100857068);
                                                  }
                                                  uVar16 = DAT_1008c75b8;
                                                  cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                                  if (cVar13 != '\0') {
                                                    FUN_1001b8dfc(&local_468,local_438);
                                                    uVar19 = FUN_1001b83ae(&local_468);
                                                    FUN_1001b8dfc(local_4b8,local_238);
                                                    uVar20 = FUN_1001b83ae(local_4b8);
                                                    FUN_100476ac1(local_4a8,local_490);
                                                    local_470 = FUN_1001b83ae(local_4a8);
                                                    local_484 = (uint)uVar19;
                                                    uStack_480 = (undefined2)((ulong)uVar19 >> 0x20)
                                                    ;
                                                    uStack_47e = (ushort)((ulong)uVar19 >> 0x30);
                                                    local_47a = (undefined2)uVar20;
                                                    uStack_478 = (undefined6)((ulong)uVar20 >> 0x10)
                                                    ;
                                                    pcVar21 = 
                                                  "sync> movement name does not match (\"%{public}s\" vs. \"%{public}s\") for track \"%{public}s\""
                                                  ;
                                                  goto LAB_100302f58;
                                                  }
                                                  }
                                                  goto LAB_1003028d3;
                                                  }
                                                  }
                                                  cVar13 = FUN_10053916d(&local_458,0xa1);
                                                  if ((cVar13 == '\0') ||
                                                     (*(short *)(*(long *)(local_490 + 0x70) + 0x10)
                                                      == *(short *)(*(long *)(local_498 + 0x70) +
                                                                   0x10))) {
                                                    cVar13 = FUN_10053916d(&local_458,0xa2);
                                                    if ((cVar13 == '\0') ||
                                                       (*(short *)(*(long *)(local_490 + 0x70) +
                                                                  0x12) ==
                                                        *(short *)(*(long *)(local_498 + 0x70) +
                                                                  0x12))) {
                                                      cVar13 = FUN_10053916d(&local_458,0x3e);
                                                      if (cVar13 != '\0') {
                                                        FUN_10047dc87(local_498,local_238);
                                                        FUN_10047dc87(local_490,local_438);
                                                        cVar13 = FUN_1001e3edc(local_238,local_438,0
                                                                              );
                                                        if (cVar13 == '\0') {
                                                          if (param_7 != '\0') {
                                                            if (DAT_1008c75c0 != -1) {
                                                              _dispatch_once(&DAT_1008c75c0,
                                                                             &
                                                  PTR___NSConcreteGlobalBlock_100857068);
                                                  }
                                                  uVar16 = DAT_1008c75b8;
                                                  cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                                  if (cVar13 != '\0') {
                                                    FUN_1001b8dfc(&local_468,local_438);
                                                    uVar19 = FUN_1001b83ae(&local_468);
                                                    FUN_1001b8dfc(local_4b8,local_238);
                                                    uVar20 = FUN_1001b83ae(local_4b8);
                                                    FUN_100476ac1(local_4a8,local_490);
                                                    local_470 = FUN_1001b83ae(local_4a8);
                                                    local_484 = (uint)uVar19;
                                                    uStack_480 = (undefined2)((ulong)uVar19 >> 0x20)
                                                    ;
                                                    uStack_47e = (ushort)((ulong)uVar19 >> 0x30);
                                                    local_47a = (undefined2)uVar20;
                                                    uStack_478 = (undefined6)((ulong)uVar20 >> 0x10)
                                                    ;
                                                    pcVar21 = 
                                                  "sync> series name does not match (\"%{public}s\" vs. \"%{public}s\") for track \"%{public}s\""
                                                  ;
                                                  goto LAB_100302f58;
                                                  }
                                                  }
                                                  goto LAB_1003028d3;
                                                  }
                                                  }
                                                  cVar13 = FUN_10053916d(&local_458,0xbc);
                                                  if (cVar13 != '\0') {
                                                    FUN_10047e42d(local_498,local_238);
                                                    FUN_10047e42d(local_490,local_438);
                                                    cVar13 = FUN_1001e3edc(local_238,local_438,0);
                                                    if (cVar13 == '\0') {
                                                      if (param_7 != '\0') {
                                                        if (DAT_1008c75c0 != -1) {
                                                          _dispatch_once(&DAT_1008c75c0,
                                                                         &
                                                  PTR___NSConcreteGlobalBlock_100857068);
                                                  }
                                                  uVar16 = DAT_1008c75b8;
                                                  cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                                  if (cVar13 != '\0') {
                                                    FUN_1001b8dfc(&local_468,local_438);
                                                    uVar19 = FUN_1001b83ae(&local_468);
                                                    FUN_1001b8dfc(local_4b8,local_238);
                                                    uVar20 = FUN_1001b83ae(local_4b8);
                                                    FUN_100476ac1(local_4a8,local_490);
                                                    local_470 = FUN_1001b83ae(local_4a8);
                                                    local_484 = (uint)uVar19;
                                                    uStack_480 = (undefined2)((ulong)uVar19 >> 0x20)
                                                    ;
                                                    uStack_47e = (ushort)((ulong)uVar19 >> 0x30);
                                                    local_47a = (undefined2)uVar20;
                                                    uStack_478 = (undefined6)((ulong)uVar20 >> 0x10)
                                                    ;
                                                    pcVar21 = 
                                                  "sync> season titles does not match (\"%{public}s\" vs. \"%{public}s\") for track \"%{public}s\""
                                                  ;
                                                  goto LAB_100302f58;
                                                  }
                                                  }
                                                  goto LAB_1003028d3;
                                                  }
                                                  }
                                                  cVar13 = FUN_10053916d(&local_458,0x40);
                                                  if (cVar13 != '\0') {
                                                    FUN_10047e782(local_498,local_238);
                                                    FUN_10047e782(local_490,local_438);
                                                    cVar13 = FUN_1001e3edc(local_238,local_438,0);
                                                    if (cVar13 == '\0') {
                                                      if (param_7 != '\0') {
                                                        if (DAT_1008c75c0 != -1) {
                                                          _dispatch_once(&DAT_1008c75c0,
                                                                         &
                                                  PTR___NSConcreteGlobalBlock_100857068);
                                                  }
                                                  uVar16 = DAT_1008c75b8;
                                                  cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                                  if (cVar13 != '\0') {
                                                    FUN_1001b8dfc(&local_468,local_438);
                                                    uVar19 = FUN_1001b83ae(&local_468);
                                                    FUN_1001b8dfc(local_4b8,local_238);
                                                    uVar20 = FUN_1001b83ae(local_4b8);
                                                    FUN_100476ac1(local_4a8,local_490);
                                                    local_470 = FUN_1001b83ae(local_4a8);
                                                    local_484 = (uint)uVar19;
                                                    uStack_480 = (undefined2)((ulong)uVar19 >> 0x20)
                                                    ;
                                                    uStack_47e = (ushort)((ulong)uVar19 >> 0x30);
                                                    local_47a = (undefined2)uVar20;
                                                    uStack_478 = (undefined6)((ulong)uVar20 >> 0x10)
                                                    ;
                                                    pcVar21 = 
                                                  "sync> episode id does not match (\"%{public}s\" vs. \"%{public}s\") for track \"%{public}s\""
                                                  ;
                                                  goto LAB_100302f58;
                                                  }
                                                  }
                                                  goto LAB_1003028d3;
                                                  }
                                                  }
                                                  cVar13 = FUN_10053916d(&local_458,0x47);
                                                  if (cVar13 != '\0') {
                                                    FUN_100478022(local_498,local_238);
                                                    FUN_100478022(local_490,local_438);
                                                    cVar13 = FUN_1001e3edc(local_238,local_438,0);
                                                    if (cVar13 == '\0') {
                                                      if (param_7 != '\0') {
                                                        if (DAT_1008c75c0 != -1) {
                                                          _dispatch_once(&DAT_1008c75c0,
                                                                         &
                                                  PTR___NSConcreteGlobalBlock_100857068);
                                                  }
                                                  uVar16 = DAT_1008c75b8;
                                                  cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                                  if (cVar13 != '\0') {
                                                    FUN_1001b8dfc(&local_468,local_438);
                                                    uVar19 = FUN_1001b83ae(&local_468);
                                                    FUN_1001b8dfc(local_4b8,local_238);
                                                    uVar20 = FUN_1001b83ae(local_4b8);
                                                    FUN_100476ac1(local_4a8,local_490);
                                                    local_470 = FUN_1001b83ae(local_4a8);
                                                    local_484 = (uint)uVar19;
                                                    uStack_480 = (undefined2)((ulong)uVar19 >> 0x20)
                                                    ;
                                                    uStack_47e = (ushort)((ulong)uVar19 >> 0x30);
                                                    local_47a = (undefined2)uVar20;
                                                    uStack_478 = (undefined6)((ulong)uVar20 >> 0x10)
                                                    ;
                                                    pcVar21 = 
                                                  "sync> album artist does not match (\"%{public}s\" vs. \"%{public}s\") for track \"%{public}s\""
                                                  ;
                                                  goto LAB_100302f58;
                                                  }
                                                  }
                                                  goto LAB_1003028d3;
                                                  }
                                                  }
                                                  cVar13 = FUN_10053916d(&local_458,0x50);
                                                  if (cVar13 != '\0') {
                                                    FUN_100477dec(local_498,local_238);
                                                    FUN_100477dec(local_490,local_438);
                                                    cVar13 = FUN_1001e3edc(local_238,local_438,0);
                                                    if (cVar13 == '\0') {
                                                      if (param_7 != '\0') {
                                                        if (DAT_1008c75c0 != -1) {
                                                          _dispatch_once(&DAT_1008c75c0,
                                                                         &
                                                  PTR___NSConcreteGlobalBlock_100857068);
                                                  }
                                                  uVar16 = DAT_1008c75b8;
                                                  cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                                  if (cVar13 != '\0') {
                                                    FUN_1001b8dfc(&local_468,local_438);
                                                    uVar19 = FUN_1001b83ae(&local_468);
                                                    FUN_1001b8dfc(local_4b8,local_238);
                                                    uVar20 = FUN_1001b83ae(local_4b8);
                                                    FUN_100476ac1(local_4a8,local_490);
                                                    local_470 = FUN_1001b83ae(local_4a8);
                                                    local_484 = (uint)uVar19;
                                                    uStack_480 = (undefined2)((ulong)uVar19 >> 0x20)
                                                    ;
                                                    uStack_47e = (ushort)((ulong)uVar19 >> 0x30);
                                                    local_47a = (undefined2)uVar20;
                                                    uStack_478 = (undefined6)((ulong)uVar20 >> 0x10)
                                                    ;
                                                    pcVar21 = 
                                                  "sync> sorting artist does not match (\"%{public}s\" vs. \"%{public}s\") for track \"%{public}s\""
                                                  ;
                                                  goto LAB_100302f58;
                                                  }
                                                  }
                                                  goto LAB_1003028d3;
                                                  }
                                                  }
                                                  cVar13 = FUN_10053916d(&local_458,0x52);
                                                  if (cVar13 != '\0') {
                                                    FUN_10047a452(local_498,local_238);
                                                    FUN_10047a452(local_490,local_438);
                                                    cVar13 = FUN_1001e3edc(local_238,local_438,0);
                                                    if (cVar13 == '\0') {
                                                      if (param_7 != '\0') {
                                                        if (DAT_1008c75c0 != -1) {
                                                          _dispatch_once(&DAT_1008c75c0,
                                                                         &
                                                  PTR___NSConcreteGlobalBlock_100857068);
                                                  }
                                                  uVar16 = DAT_1008c75b8;
                                                  cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                                  if (cVar13 != '\0') {
                                                    FUN_1001b8dfc(&local_468,local_438);
                                                    uVar19 = FUN_1001b83ae(&local_468);
                                                    FUN_1001b8dfc(local_4b8,local_238);
                                                    uVar20 = FUN_1001b83ae(local_4b8);
                                                    FUN_100476ac1(local_4a8,local_490);
                                                    local_470 = FUN_1001b83ae(local_4a8);
                                                    local_484 = (uint)uVar19;
                                                    uStack_480 = (undefined2)((ulong)uVar19 >> 0x20)
                                                    ;
                                                    uStack_47e = (ushort)((ulong)uVar19 >> 0x30);
                                                    local_47a = (undefined2)uVar20;
                                                    uStack_478 = (undefined6)((ulong)uVar20 >> 0x10)
                                                    ;
                                                    pcVar21 = 
                                                  "sync> sorting composer does not match (\"%{public}s\" vs. \"%{public}s\") for track \"%{public}s\""
                                                  ;
                                                  goto LAB_100302f58;
                                                  }
                                                  }
                                                  goto LAB_1003028d3;
                                                  }
                                                  }
                                                  cVar13 = FUN_10053916d(&local_458,0x51);
                                                  if (cVar13 != '\0') {
                                                    FUN_100478401(local_498,local_238);
                                                    FUN_100478401(local_490,local_438);
                                                    cVar13 = FUN_1001e3edc(local_238,local_438,0);
                                                    if (cVar13 == '\0') {
                                                      if (param_7 != '\0') {
                                                        if (DAT_1008c75c0 != -1) {
                                                          _dispatch_once(&DAT_1008c75c0,
                                                                         &
                                                  PTR___NSConcreteGlobalBlock_100857068);
                                                  }
                                                  uVar16 = DAT_1008c75b8;
                                                  cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                                  if (cVar13 != '\0') {
                                                    FUN_1001b8dfc(&local_468,local_438);
                                                    uVar19 = FUN_1001b83ae(&local_468);
                                                    FUN_1001b8dfc(local_4b8,local_238);
                                                    uVar20 = FUN_1001b83ae(local_4b8);
                                                    FUN_100476ac1(local_4a8,local_490);
                                                    local_470 = FUN_1001b83ae(local_4a8);
                                                    local_484 = (uint)uVar19;
                                                    uStack_480 = (undefined2)((ulong)uVar19 >> 0x20)
                                                    ;
                                                    uStack_47e = (ushort)((ulong)uVar19 >> 0x30);
                                                    local_47a = (undefined2)uVar20;
                                                    uStack_478 = (undefined6)((ulong)uVar20 >> 0x10)
                                                    ;
                                                    pcVar21 = 
                                                  "sync> sorting album artist does not match (\"%{public}s\" vs. \"%{public}s\") for track \"%{public}s\""
                                                  ;
                                                  goto LAB_100302f58;
                                                  }
                                                  }
                                                  goto LAB_1003028d3;
                                                  }
                                                  }
                                                  cVar13 = FUN_10053916d(&local_458,0x4f);
                                                  if (cVar13 != '\0') {
                                                    FUN_1004777d6(local_498,local_238);
                                                    FUN_1004777d6(local_490,local_438);
                                                    cVar13 = FUN_1001e3edc(local_238,local_438,0);
                                                    if (cVar13 == '\0') {
                                                      if (param_7 != '\0') {
                                                        if (DAT_1008c75c0 != -1) {
                                                          _dispatch_once(&DAT_1008c75c0,
                                                                         &
                                                  PTR___NSConcreteGlobalBlock_100857068);
                                                  }
                                                  uVar16 = DAT_1008c75b8;
                                                  cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                                  if (cVar13 != '\0') {
                                                    FUN_1001b8dfc(&local_468,local_438);
                                                    uVar19 = FUN_1001b83ae(&local_468);
                                                    FUN_1001b8dfc(local_4b8,local_238);
                                                    uVar20 = FUN_1001b83ae(local_4b8);
                                                    FUN_100476ac1(local_4a8,local_490);
                                                    local_470 = FUN_1001b83ae(local_4a8);
                                                    local_484 = (uint)uVar19;
                                                    uStack_480 = (undefined2)((ulong)uVar19 >> 0x20)
                                                    ;
                                                    uStack_47e = (ushort)((ulong)uVar19 >> 0x30);
                                                    local_47a = (undefined2)uVar20;
                                                    uStack_478 = (undefined6)((ulong)uVar20 >> 0x10)
                                                    ;
                                                    pcVar21 = 
                                                  "sync> sorting album does not match (\"%{public}s\" vs. \"%{public}s\") for track \"%{public}s\""
                                                  ;
                                                  goto LAB_100302f58;
                                                  }
                                                  }
                                                  goto LAB_1003028d3;
                                                  }
                                                  }
                                                  cVar13 = FUN_10053916d(&local_458,0x53);
                                                  if (cVar13 != '\0') {
                                                    FUN_10047e0c8(local_498,local_238);
                                                    FUN_10047e0c8(local_490,local_438);
                                                    cVar13 = FUN_1001e3edc(local_238,local_438,0);
                                                    if (cVar13 == '\0') {
                                                      if (param_7 != '\0') {
                                                        if (DAT_1008c75c0 != -1) {
                                                          _dispatch_once(&DAT_1008c75c0,
                                                                         &
                                                  PTR___NSConcreteGlobalBlock_100857068);
                                                  }
                                                  uVar16 = DAT_1008c75b8;
                                                  cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                                  if (cVar13 != '\0') {
                                                    FUN_1001b8dfc(&local_468,local_438);
                                                    uVar19 = FUN_1001b83ae(&local_468);
                                                    FUN_1001b8dfc(local_4b8,local_238);
                                                    uVar20 = FUN_1001b83ae(local_4b8);
                                                    FUN_100476ac1(local_4a8,local_490);
                                                    local_470 = FUN_1001b83ae(local_4a8);
                                                    local_484 = (uint)uVar19;
                                                    uStack_480 = (undefined2)((ulong)uVar19 >> 0x20)
                                                    ;
                                                    uStack_47e = (ushort)((ulong)uVar19 >> 0x30);
                                                    local_47a = (undefined2)uVar20;
                                                    uStack_478 = (undefined6)((ulong)uVar20 >> 0x10)
                                                    ;
                                                    pcVar21 = 
                                                  "sync> sorting series name does not match (\"%{public}s\" vs. \"%{public}s\") for track \"%{public}s\""
                                                  ;
                                                  goto LAB_100302f58;
                                                  }
                                                  }
                                                  goto LAB_1003028d3;
                                                  }
                                                  }
                                                  cVar13 = FUN_10053916d(&local_458,0x4e);
                                                  if (cVar13 != '\0') {
                                                    FUN_100476e65(local_498,local_238);
                                                    FUN_100476e65(local_490,local_438);
                                                    cVar13 = FUN_1001e3edc(local_238,local_438,0);
                                                    if (cVar13 == '\0') {
                                                      if (param_7 != '\0') {
                                                        if (DAT_1008c75c0 != -1) {
                                                          _dispatch_once(&DAT_1008c75c0,
                                                                         &
                                                  PTR___NSConcreteGlobalBlock_100857068);
                                                  }
                                                  uVar16 = DAT_1008c75b8;
                                                  cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                                  if (cVar13 != '\0') {
                                                    FUN_1001b8dfc(&local_468,local_438);
                                                    uVar19 = FUN_1001b83ae(&local_468);
                                                    FUN_1001b8dfc(local_4b8,local_238);
                                                    uVar20 = FUN_1001b83ae(local_4b8);
                                                    FUN_100476ac1(local_4a8,local_490);
                                                    local_470 = FUN_1001b83ae(local_4a8);
                                                    local_484 = (uint)uVar19;
                                                    uStack_480 = (undefined2)((ulong)uVar19 >> 0x20)
                                                    ;
                                                    uStack_47e = (ushort)((ulong)uVar19 >> 0x30);
                                                    local_47a = (undefined2)uVar20;
                                                    uStack_478 = (undefined6)((ulong)uVar20 >> 0x10)
                                                    ;
                                                    pcVar21 = 
                                                  "sync> sorting name does not match (\"%{public}s\" vs. \"%{public}s\") for track \"%{public}s\""
                                                  ;
                                                  goto LAB_100302f58;
                                                  }
                                                  }
                                                  goto LAB_1003028d3;
                                                  }
                                                  }
                                                  cVar13 = FUN_10053916d(&local_458,0x36);
                                                  if (cVar13 != '\0') {
                                                    FUN_10047c1d6(local_498,local_238);
                                                    FUN_10047c1d6(local_490,local_438);
                                                    cVar13 = FUN_1001e3edc(local_238,local_438,0);
                                                    if (cVar13 == '\0') {
                                                      if (param_7 != '\0') {
                                                        if (DAT_1008c75c0 != -1) {
                                                          _dispatch_once(&DAT_1008c75c0,
                                                                         &
                                                  PTR___NSConcreteGlobalBlock_100857068);
                                                  }
                                                  uVar16 = DAT_1008c75b8;
                                                  cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                                  if (cVar13 != '\0') {
                                                    FUN_1001b8dfc(&local_468,local_438);
                                                    uVar19 = FUN_1001b83ae(&local_468);
                                                    FUN_1001b8dfc(local_4b8,local_238);
                                                    uVar20 = FUN_1001b83ae(local_4b8);
                                                    FUN_100476ac1(local_4a8,local_490);
                                                    local_470 = FUN_1001b83ae(local_4a8);
                                                    local_484 = (uint)uVar19;
                                                    uStack_480 = (undefined2)((ulong)uVar19 >> 0x20)
                                                    ;
                                                    uStack_47e = (ushort)((ulong)uVar19 >> 0x30);
                                                    local_47a = (undefined2)uVar20;
                                                    uStack_478 = (undefined6)((ulong)uVar20 >> 0x10)
                                                    ;
                                                    pcVar21 = 
                                                  "sync> description does not match (\"%{public}s\" vs. \"%{public}s\") for track \"%{public}s\""
                                                  ;
                                                  goto LAB_100302f58;
                                                  }
                                                  }
                                                  goto LAB_1003028d3;
                                                  }
                                                  }
                                                  cVar13 = FUN_10053916d(&local_458,0x80);
                                                  if (cVar13 != '\0') {
                                                    FUN_10030666b(param_1,local_238,0);
                                                    FUN_10030666b(param_2,local_438,0);
                                                    cVar13 = FUN_1001e3edc(local_238,local_438,0);
                                                    if (cVar13 == '\0') {
                                                      if (param_7 != '\0') {
                                                        if (DAT_1008c75c0 != -1) {
                                                          _dispatch_once(&DAT_1008c75c0,
                                                                         &
                                                  PTR___NSConcreteGlobalBlock_100857068);
                                                  }
                                                  uVar16 = DAT_1008c75b8;
                                                  cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                                  if (cVar13 != '\0') {
                                                    FUN_1001b8dfc(&local_468,local_438);
                                                    uVar19 = FUN_1001b83ae(&local_468);
                                                    FUN_1001b8dfc(local_4b8,local_238);
                                                    uVar20 = FUN_1001b83ae(local_4b8);
                                                    FUN_100476ac1(local_4a8,local_490);
                                                    local_470 = FUN_1001b83ae(local_4a8);
                                                    local_484 = (uint)uVar19;
                                                    uStack_480 = (undefined2)((ulong)uVar19 >> 0x20)
                                                    ;
                                                    uStack_47e = (ushort)((ulong)uVar19 >> 0x30);
                                                    local_47a = (undefined2)uVar20;
                                                    uStack_478 = (undefined6)((ulong)uVar20 >> 0x10)
                                                    ;
                                                    pcVar21 = 
                                                  "sync> flavor does not match (\"%{public}s\" vs. \"%{public}s\") for track \"%{public}s\""
                                                  ;
                                                  goto LAB_100302f58;
                                                  }
                                                  }
                                                  goto LAB_1003028d3;
                                                  }
                                                  }
                                                  cVar13 = FUN_10053916d(&local_458,0x9e);
                                                  if ((cVar13 == '\0') ||
                                                     (((*(ushort *)(local_498 + 0xc6) ^
                                                       *(ushort *)(local_490 + 0xc6)) >> 0xb & 1) ==
                                                      0)) {
                                                    cVar13 = FUN_10053916d(&local_458,0x8b);
                                                    if ((cVar13 == '\0') ||
                                                       (*(long *)(*(long *)(param_2 + 0x10) + 0xa8)
                                                        == *(long *)(*(long *)(param_1 + 0x10) +
                                                                    0xa8))) {
                                                      uVar16 = 1;
                                                      if (((param_4 == '\0') ||
                                                          ((byte)(*(char *)(param_2 + 0x45) - 3U) <
                                                           2)) || (iVar14 = FUN_1002b0559(param_2,
                                                  0x42), iVar14 == 0)) goto LAB_1003028d6;
                                                  if (param_7 != '\0') {
                                                    if (DAT_1008c75c0 != -1) {
                                                      _dispatch_once(&DAT_1008c75c0,
                                                                     &
                                                  PTR___NSConcreteGlobalBlock_100857068);
                                                  }
                                                  uVar16 = DAT_1008c75b8;
                                                  cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                                  if (cVar13 != '\0') {
                                                    FUN_100476ac1(&local_488,local_490);
                                                    local_464 = FUN_1001b83ae(&local_488);
                                                    pcVar21 = 
                                                  "sync> PrepareTrackInstanceLocation failed for track \"%{public}s\""
                                                  ;
                                                  goto LAB_10030348b;
                                                  }
                                                  }
                                                  }
                                                  else if (param_7 != '\0') {
                                                    if (DAT_1008c75c0 != -1) {
                                                      _dispatch_once(&DAT_1008c75c0,
                                                                     &
                                                  PTR___NSConcreteGlobalBlock_100857068);
                                                  }
                                                  uVar16 = DAT_1008c75b8;
                                                  cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                                  if (cVar13 != '\0') {
                                                    uVar19 = *(undefined8 *)
                                                              (*(long *)(param_2 + 0x10) + 0xa8);
                                                    uVar20 = *(undefined8 *)
                                                              (*(long *)(param_1 + 0x10) + 0xa8);
                                                    FUN_100476ac1(&local_468,local_490);
                                                    local_470 = FUN_1001b83ae(&local_468);
                                                    local_484 = (uint)uVar19;
                                                    uStack_480 = (undefined2)((ulong)uVar19 >> 0x20)
                                                    ;
                                                    uStack_47e = (ushort)((ulong)uVar19 >> 0x30);
                                                    local_47a = (undefined2)uVar20;
                                                    uStack_478 = (undefined6)((ulong)uVar20 >> 0x10)
                                                    ;
                                                    pcVar21 = 
                                                  "sync> store version does not match (%llu vs. %llu) for track \"%{public}s\""
                                                  ;
                                                  goto LAB_10030301d;
                                                  }
                                                  }
                                                  }
                                                  else if (param_7 != '\0') {
                                                    if (DAT_1008c75c0 != -1) {
                                                      _dispatch_once(&DAT_1008c75c0,
                                                                     &
                                                  PTR___NSConcreteGlobalBlock_100857068);
                                                  }
                                                  uVar16 = DAT_1008c75b8;
                                                  cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                                  if (cVar13 != '\0') {
                                                    uVar6 = *(ushort *)(local_490 + 0xc6);
                                                    uVar7 = *(ushort *)(local_498 + 0xc6);
                                                    FUN_100476ac1(&local_468);
                                                    uVar19 = FUN_1001b83ae(&local_468);
                                                    uStack_47e = uVar7 >> 0xb & 1;
                                                    sStack_47c = 0;
                                                    uStack_478 = (undefined6)uVar19;
                                                    uStack_472 = (undefined2)((ulong)uVar19 >> 0x30)
                                                    ;
                                                    pcVar21 = 
                                                  "sync> show composer does not match (%u vs %u) for track \"%{public}s\""
                                                  ;
                                                  local_484 = uVar6 >> 0xb & 1;
                                                  goto LAB_100302cea;
                                                  }
                                                  }
                                                  }
                                                  else if (param_7 != '\0') {
                                                    if (DAT_1008c75c0 != -1) {
                                                      _dispatch_once(&DAT_1008c75c0,
                                                                     &
                                                  PTR___NSConcreteGlobalBlock_100857068);
                                                  }
                                                  uVar16 = DAT_1008c75b8;
                                                  cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                                  if (cVar13 != '\0') {
                                                    uVar6 = *(ushort *)
                                                             (*(long *)(local_490 + 0x70) + 0x12);
                                                    uVar7 = *(ushort *)
                                                             (*(long *)(local_498 + 0x70) + 0x12);
                                                    FUN_100476ac1(&local_468);
                                                    uVar19 = FUN_1001b83ae(&local_468);
                                                    sStack_47c = 0;
                                                    uStack_478 = (undefined6)uVar19;
                                                    uStack_472 = (undefined2)((ulong)uVar19 >> 0x30)
                                                    ;
                                                    pcVar21 = 
                                                  "sync> movement count does not match (%u vs. %u) for track \"%{public}s\""
                                                  ;
                                                  local_484 = (uint)uVar6;
                                                  uStack_47e = uVar7;
                                                  goto LAB_100302cea;
                                                  }
                                                  }
                                                  }
                                                  else if (param_7 != '\0') {
                                                    if (DAT_1008c75c0 != -1) {
                                                      _dispatch_once(&DAT_1008c75c0,
                                                                     &
                                                  PTR___NSConcreteGlobalBlock_100857068);
                                                  }
                                                  uVar16 = DAT_1008c75b8;
                                                  cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                                  if (cVar13 != '\0') {
                                                    uVar6 = *(ushort *)
                                                             (*(long *)(local_490 + 0x70) + 0x10);
                                                    uVar7 = *(ushort *)
                                                             (*(long *)(local_498 + 0x70) + 0x10);
                                                    FUN_100476ac1(&local_468);
                                                    uVar19 = FUN_1001b83ae(&local_468);
                                                    sStack_47c = 0;
                                                    uStack_478 = (undefined6)uVar19;
                                                    uStack_472 = (undefined2)((ulong)uVar19 >> 0x30)
                                                    ;
                                                    pcVar21 = 
                                                  "sync> movement number does not match (%u vs. %u) for track \"%{public}s\""
                                                  ;
                                                  local_484 = (uint)uVar6;
                                                  uStack_47e = uVar7;
LAB_100302cea:
                                                  local_47a = 0x822;
                                                  uStack_480 = 0x400;
                                                  local_488 = 0x4000302;
                                                  uVar19 = 0x18;
                                                  goto LAB_10030302b;
                                                  }
                                                  }
                                                  }
                                                  else if (param_7 != '\0') {
                                                    if (DAT_1008c75c0 != -1) {
                                                      _dispatch_once(&DAT_1008c75c0,
                                                                     &
                                                  PTR___NSConcreteGlobalBlock_100857068);
                                                  }
                                                  uVar16 = DAT_1008c75b8;
                                                  cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                                  if (cVar13 != '\0') {
                                                    FUN_1001e2489(&local_468,
                                                                  *(undefined4 *)
                                                                   (*(long *)(param_2 + 0x10) + 0x88
                                                                   ),0x32);
                                                    uVar19 = FUN_1001b83ae(&local_468);
                                                    FUN_1001e2489(local_4b8,
                                                                  *(undefined4 *)
                                                                   (*(long *)(param_1 + 0x10) + 0x88
                                                                   ),0x32);
                                                    uVar20 = FUN_1001b83ae(local_4b8);
                                                    FUN_100476ac1(local_4a8,local_490);
                                                    local_470 = FUN_1001b83ae(local_4a8);
                                                    local_484 = (uint)uVar19;
                                                    uStack_480 = (undefined2)((ulong)uVar19 >> 0x20)
                                                    ;
                                                    uStack_47e = (ushort)((ulong)uVar19 >> 0x30);
                                                    local_47a = (undefined2)uVar20;
                                                    uStack_478 = (undefined6)((ulong)uVar20 >> 0x10)
                                                    ;
                                                    pcVar21 = 
                                                  "sync> purchase date does not match (%{public}s vs. %{public}s) for track \"%{public}s\""
                                                  ;
LAB_100302f58:
                                                  uStack_472 = 0x822;
                                                  sStack_47c = 0x822;
                                                  local_488 = 0x8220302;
                                                  __os_log_impl(0x100000000,uVar16,1,pcVar21,
                                                                &local_488,0x20);
                                                  FUN_1001b7a50(local_4a8);
                                                  FUN_1001b7a50(local_4b8);
                                                  goto LAB_100303030;
                                                  }
                                                  }
                                                  }
                                                  else if (param_7 != '\0') {
                                                    if (DAT_1008c75c0 != -1) {
                                                      _dispatch_once(&DAT_1008c75c0,
                                                                     &
                                                  PTR___NSConcreteGlobalBlock_100857068);
                                                  }
                                                  uVar16 = DAT_1008c75b8;
                                                  cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                                  if (cVar13 != '\0') {
                                                    bVar3 = *(byte *)(*(long *)(local_490 + 0x78) +
                                                                     0x21);
                                                    bVar4 = *(byte *)(*(long *)(local_498 + 0x78) +
                                                                     0x21);
                                                    FUN_100476ac1(&local_468);
                                                    uVar19 = FUN_1001b83ae(&local_468);
                                                    uStack_47e = (ushort)bVar4;
                                                    sStack_47c = 0;
                                                    uStack_478 = (undefined6)uVar19;
                                                    uStack_472 = (undefined2)((ulong)uVar19 >> 0x30)
                                                    ;
                                                    pcVar21 = 
                                                  "sync> episode type does not match (%u vs %u) for track \"%{public}s\""
                                                  ;
                                                  local_484 = (uint)bVar3;
                                                  goto LAB_100302cea;
                                                  }
                                                  }
                                                  }
                                                  else if (param_7 != '\0') {
                                                    if (DAT_1008c75c0 != -1) {
                                                      _dispatch_once(&DAT_1008c75c0,
                                                                     &
                                                  PTR___NSConcreteGlobalBlock_100857068);
                                                  }
                                                  uVar16 = DAT_1008c75b8;
                                                  cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                                  if (cVar13 != '\0') {
                                                    bVar3 = *(byte *)(*(long *)(local_490 + 0x78) +
                                                                     0x22);
                                                    bVar4 = *(byte *)(*(long *)(local_498 + 0x78) +
                                                                     0x22);
                                                    FUN_100476ac1(&local_468);
                                                    uVar19 = FUN_1001b83ae(&local_468);
                                                    uStack_47e = (ushort)bVar4;
                                                    sStack_47c = 0;
                                                    uStack_478 = (undefined6)uVar19;
                                                    uStack_472 = (undefined2)((ulong)uVar19 >> 0x30)
                                                    ;
                                                    pcVar21 = 
                                                  "sync> episode sort order does not match (%u vs %u) for track \"%{public}s\""
                                                  ;
                                                  local_484 = (uint)bVar3;
                                                  goto LAB_100302cea;
                                                  }
                                                  }
                                                }
                                                else if (*(int *)(*(long *)(local_490 + 0x78) + 4)
                                                         == *(int *)(*(long *)(local_498 + 0x78) + 4
                                                                    )) {
                                                  fVar2 = *(float *)(*(long *)(local_490 + 0x78) + 8
                                                                    );
                                                  pfVar1 = (float *)(*(long *)(local_498 + 0x78) + 8
                                                                    );
                                                  if ((fVar2 == *pfVar1) &&
                                                     (!NAN(fVar2) && !NAN(*pfVar1)))
                                                  goto LAB_1003044e1;
                                                  if (param_7 != '\0') {
                                                    if (DAT_1008c75c0 != -1) {
                                                      _dispatch_once(&DAT_1008c75c0,
                                                                     &
                                                  PTR___NSConcreteGlobalBlock_100857068);
                                                  }
                                                  uVar16 = DAT_1008c75b8;
                                                  cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                                  if (cVar13 != '\0') {
                                                    fVar2 = *(float *)(*(long *)(local_490 + 0x78) +
                                                                      8);
                                                    local_498 = CONCAT44(local_498._4_4_,
                                                                         *(undefined4 *)
                                                                          (*(long *)(local_498 +
                                                                                    0x78) + 8));
                                                    FUN_100476ac1(&local_468);
                                                    local_470 = FUN_1001b83ae(&local_468);
                                                    dVar11 = (double)fVar2;
                                                    local_484 = SUB84(dVar11,0);
                                                    uStack_480 = (undefined2)((ulong)dVar11 >> 0x20)
                                                    ;
                                                    uStack_47e = (ushort)((ulong)dVar11 >> 0x30);
                                                    local_47a = SUB82((double)(float)local_498,0);
                                                    uStack_478 = (undefined6)
                                                                 ((ulong)(double)(float)local_498 >>
                                                                 0x10);
                                                    pcVar21 = 
                                                  "sync> fractional episode sort id does not match (%f vs %f) for track \"%{public}s\""
                                                  ;
                                                  goto LAB_10030301d;
                                                  }
                                                  }
                                                }
                                                else if (param_7 != '\0') {
                                                  if (DAT_1008c75c0 != -1) {
                                                    _dispatch_once(&DAT_1008c75c0,
                                                                   &
                                                  PTR___NSConcreteGlobalBlock_100857068);
                                                  }
                                                  uVar16 = DAT_1008c75b8;
                                                  cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                                  if (cVar13 != '\0') {
                                                    uVar8 = *(uint *)(*(long *)(local_490 + 0x78) +
                                                                     4);
                                                    uVar10 = *(undefined4 *)
                                                              (*(long *)(local_498 + 0x78) + 4);
                                                    FUN_100476ac1(&local_468);
                                                    uVar19 = FUN_1001b83ae(&local_468);
                                                    uStack_47e = (ushort)uVar10;
                                                    sStack_47c = (short)((uint)uVar10 >> 0x10);
                                                    uStack_478 = (undefined6)uVar19;
                                                    uStack_472 = (undefined2)((ulong)uVar19 >> 0x30)
                                                    ;
                                                    pcVar21 = 
                                                  "sync> episode sort id does not match (%u vs %u) for track \"%{public}s\""
                                                  ;
                                                  local_484 = uVar8;
                                                  goto LAB_100302cea;
                                                  }
                                                }
                                              }
                                              else if (param_7 != '\0') {
                                                if (DAT_1008c75c0 != -1) {
                                                  _dispatch_once(&DAT_1008c75c0,
                                                                 &
                                                  PTR___NSConcreteGlobalBlock_100857068);
                                                }
                                                uVar16 = DAT_1008c75b8;
                                                cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                                if (cVar13 != '\0') {
                                                  uVar8 = *(uint *)(*(long *)(local_490 + 0x78) +
                                                                   0xc);
                                                  uVar10 = *(undefined4 *)
                                                            (*(long *)(local_498 + 0x78) + 0xc);
                                                  FUN_100476ac1(&local_468);
                                                  uVar19 = FUN_1001b83ae(&local_468);
                                                  uStack_47e = (ushort)uVar10;
                                                  sStack_47c = (short)((uint)uVar10 >> 0x10);
                                                  uStack_478 = (undefined6)uVar19;
                                                  uStack_472 = (undefined2)((ulong)uVar19 >> 0x30);
                                                  pcVar21 = 
                                                  "sync> season number does not match (%u vs %u) for track \"%{public}s\""
                                                  ;
                                                  local_484 = uVar8;
                                                  goto LAB_100302cea;
                                                }
                                              }
                                            }
                                            else if (param_7 != '\0') {
                                              if (DAT_1008c75c0 != -1) {
                                                _dispatch_once(&DAT_1008c75c0,
                                                               &
                                                  PTR___NSConcreteGlobalBlock_100857068);
                                              }
                                              uVar16 = DAT_1008c75b8;
                                              cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                              if (cVar13 != '\0') {
                                                uVar6 = *(ushort *)(local_490 + 0x15c);
                                                uVar7 = *(ushort *)(local_498 + 0x15c);
                                                FUN_100476ac1(&local_468);
                                                uVar19 = FUN_1001b83ae(&local_468);
                                                sStack_47c = 0;
                                                uStack_478 = (undefined6)uVar19;
                                                uStack_472 = (undefined2)((ulong)uVar19 >> 0x30);
                                                pcVar21 = 
                                                "sync> beats per minute does not match (%u vs %u) for track \"%{public}s\""
                                                ;
                                                local_484 = (uint)uVar6;
                                                uStack_47e = uVar7;
                                                goto LAB_100302cea;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              else if (*(int *)(*(long *)(param_2 + 0x10) + 0x8c) ==
                                       *(int *)(*(long *)(param_1 + 0x10) + 0x8c)) {
                                if (*(short *)(local_490 + 0x12a) == *(short *)(local_498 + 0x12a))
                                goto LAB_100303210;
                                if (param_7 != '\0') {
                                  if (DAT_1008c75c0 != -1) {
                                    _dispatch_once(&DAT_1008c75c0,
                                                   &PTR___NSConcreteGlobalBlock_100857068);
                                  }
                                  uVar16 = DAT_1008c75b8;
                                  cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                  if (cVar13 != '\0') {
                                    sVar5 = *(short *)(local_490 + 0x12a);
                                    uVar6 = *(ushort *)(local_498 + 0x12a);
                                    FUN_100476ac1(&local_468);
                                    uVar19 = FUN_1001b83ae(&local_468);
                                    sStack_47c = (short)uVar6 >> 0xf;
                                    uStack_478 = (undefined6)uVar19;
                                    uStack_472 = (undefined2)((ulong)uVar19 >> 0x30);
                                    pcVar21 = 
                                    "sync> volume adjustment does not match (%d vs. %d) for track \"%{public}s\""
                                    ;
                                    local_484 = (int)sVar5;
                                    uStack_47e = uVar6;
                                    goto LAB_100302cea;
                                  }
                                }
                              }
                              else if (param_7 != '\0') {
                                if (DAT_1008c75c0 != -1) {
                                  _dispatch_once(&DAT_1008c75c0,
                                                 &PTR___NSConcreteGlobalBlock_100857068);
                                }
                                uVar16 = DAT_1008c75b8;
                                cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                                if (cVar13 != '\0') {
                                  FUN_1001e2489(&local_468,
                                                *(undefined4 *)(*(long *)(param_2 + 0x10) + 0x8c),
                                                0x32);
                                  uVar19 = FUN_1001b83ae(&local_468);
                                  FUN_1001e2489(local_4b8,
                                                *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x8c),
                                                0x32);
                                  uVar20 = FUN_1001b83ae(local_4b8);
                                  FUN_100476ac1(local_4a8,local_490);
                                  local_470 = FUN_1001b83ae(local_4a8);
                                  local_484 = (uint)uVar19;
                                  uStack_480 = (undefined2)((ulong)uVar19 >> 0x20);
                                  uStack_47e = (ushort)((ulong)uVar19 >> 0x30);
                                  local_47a = (undefined2)uVar20;
                                  uStack_478 = (undefined6)((ulong)uVar20 >> 0x10);
                                  pcVar21 = 
                                  "sync> release date does not match (%{public}s vs. %{public}s) for track \"%{public}s\""
                                  ;
                                  goto LAB_100302f58;
                                }
                              }
                            }
                            else if (param_7 != '\0') {
                              if (DAT_1008c75c0 != -1) {
                                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068
                                              );
                              }
                              uVar16 = DAT_1008c75b8;
                              cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                              if (cVar13 != '\0') {
                                FUN_100476ac1(&local_488,local_490);
                                local_464 = FUN_1001b83ae(&local_488);
                                pcVar21 = 
                                "sync> lyrics checksum does not match for track \"%{public}s\"";
                                goto LAB_10030348b;
                              }
                            }
                          }
                          else if (param_7 != '\0') {
                            if (DAT_1008c75c0 != -1) {
                              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                            }
                            uVar16 = DAT_1008c75b8;
                            cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                            if (cVar13 != '\0') {
                              uVar8 = *(uint *)(local_490 + 0xc2);
                              uVar9 = *(uint *)(local_498 + 0xc2);
                              FUN_100476ac1(&local_468);
                              uVar19 = FUN_1001b83ae(&local_468);
                              uStack_47e = (ushort)(uVar9 >> 10) & 1;
                              sStack_47c = 0;
                              uStack_478 = (undefined6)uVar19;
                              uStack_472 = (undefined2)((ulong)uVar19 >> 0x30);
                              pcVar21 = 
                              "sync> is compilation track does not match (%u vs. %u) for track \"%{public}s\""
                              ;
                              local_484 = uVar8 >> 10 & 1;
                              goto LAB_100302cea;
                            }
                          }
                        }
                        else if (param_7 != '\0') {
                          if (DAT_1008c75c0 != -1) {
                            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                          }
                          uVar16 = DAT_1008c75b8;
                          cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                          if (cVar13 != '\0') {
                            uVar19 = *(undefined8 *)(*(long *)(param_2 + 0x10) + 8);
                            uVar20 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 8);
                            FUN_100476ac1(&local_468,local_490);
                            local_470 = FUN_1001b83ae(&local_468);
                            local_484 = (uint)uVar19;
                            uStack_480 = (undefined2)((ulong)uVar19 >> 0x20);
                            uStack_47e = (ushort)((ulong)uVar19 >> 0x30);
                            local_47a = (undefined2)uVar20;
                            uStack_478 = (undefined6)((ulong)uVar20 >> 0x10);
                            pcVar21 = 
                            "sync> drm user id does not match (%llu vs. %llu) for track \"%{public}s\""
                            ;
                            goto LAB_10030301d;
                          }
                        }
                      }
                      else if (param_7 != '\0') {
                        if (DAT_1008c75c0 != -1) {
                          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                        }
                        uVar16 = DAT_1008c75b8;
                        cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                        if (cVar13 != '\0') {
                          uVar6 = *(ushort *)(local_490 + 0x142);
                          uVar7 = *(ushort *)(local_498 + 0x142);
                          FUN_100476ac1(&local_468);
                          uVar19 = FUN_1001b83ae(&local_468);
                          sStack_47c = 0;
                          uStack_478 = (undefined6)uVar19;
                          uStack_472 = (undefined2)((ulong)uVar19 >> 0x30);
                          pcVar21 = "sync> year does not match (%u vs. %u) for track \"%{public}s\""
                          ;
                          local_484 = (uint)uVar6;
                          uStack_47e = uVar7;
                          goto LAB_100302cea;
                        }
                      }
                    }
                    else if (param_7 != '\0') {
                      if (DAT_1008c75c0 != -1) {
                        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                      }
                      uVar16 = DAT_1008c75b8;
                      cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                      if (cVar13 != '\0') {
                        uVar6 = *(ushort *)(local_490 + 0x13a);
                        uVar7 = *(ushort *)(local_498 + 0x13a);
                        FUN_100476ac1(&local_468);
                        uVar19 = FUN_1001b83ae(&local_468);
                        sStack_47c = 0;
                        uStack_478 = (undefined6)uVar19;
                        uStack_472 = (undefined2)((ulong)uVar19 >> 0x30);
                        pcVar21 = 
                        "sync> max disc number does not match (%u vs. %u) for track \"%{public}s\"";
                        local_484 = (uint)uVar6;
                        uStack_47e = uVar7;
                        goto LAB_100302cea;
                      }
                    }
                  }
                  else if (param_7 != '\0') {
                    if (DAT_1008c75c0 != -1) {
                      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                    }
                    uVar16 = DAT_1008c75b8;
                    cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                    if (cVar13 != '\0') {
                      uVar6 = *(ushort *)(local_490 + 0x13a);
                      uVar7 = *(ushort *)(lVar17 + 0x13a);
                      FUN_100476ac1(&local_468);
                      uVar19 = FUN_1001b83ae(&local_468);
                      sStack_47c = 0;
                      uStack_478 = (undefined6)uVar19;
                      uStack_472 = (undefined2)((ulong)uVar19 >> 0x30);
                      pcVar21 = 
                      "sync> disc number does not match (%u vs. %u) for track \"%{public}s\"";
                      local_484 = (uint)uVar6;
                      uStack_47e = uVar7;
                      goto LAB_100302cea;
                    }
                  }
                }
                else if (param_7 != '\0') {
                  if (DAT_1008c75c0 != -1) {
                    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                  }
                  lVar18 = local_490;
                  uVar16 = DAT_1008c75b8;
                  cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                  if (cVar13 != '\0') {
                    uVar6 = *(ushort *)(lVar18 + 0x138);
                    uVar7 = *(ushort *)(lVar17 + 0x138);
                    FUN_100476ac1(&local_468,lVar18);
                    uVar19 = FUN_1001b83ae(&local_468);
                    sStack_47c = 0;
                    uStack_478 = (undefined6)uVar19;
                    uStack_472 = (undefined2)((ulong)uVar19 >> 0x30);
                    pcVar21 = 
                    "sync> max track number does not match (%u vs. %u) for track \"%{public}s\"";
                    local_484 = (uint)uVar6;
                    uStack_47e = uVar7;
                    goto LAB_100302cea;
                  }
                }
              }
              else if (param_7 != '\0') {
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                lVar18 = local_490;
                uVar16 = DAT_1008c75b8;
                cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
                if (cVar13 != '\0') {
                  uVar6 = *(ushort *)(lVar18 + 0x136);
                  uVar7 = *(ushort *)(lVar17 + 0x136);
                  FUN_100476ac1(&local_468,lVar18);
                  uVar19 = FUN_1001b83ae(&local_468);
                  sStack_47c = 0;
                  uStack_478 = (undefined6)uVar19;
                  uStack_472 = (undefined2)((ulong)uVar19 >> 0x30);
                  pcVar21 = "sync> track number does not match (%u vs. %u) for track \"%{public}s\""
                  ;
                  local_484 = (uint)uVar6;
                  uStack_47e = uVar7;
                  goto LAB_100302cea;
                }
              }
            }
            else if (param_7 != '\0') {
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              lVar17 = local_490;
              uVar16 = DAT_1008c75b8;
              cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar13 != '\0') {
                FUN_100476ac1(&local_488,lVar17);
                local_464 = FUN_1001b83ae(&local_488);
                pcVar21 = "sync> track kind does not match for track \"%{public}s\"";
LAB_10030348b:
                local_468 = 0x8220102;
                __os_log_impl(0x100000000,uVar16,1,pcVar21,&local_468,0xc);
                puVar22 = &local_488;
LAB_100303037:
                FUN_1001b7a50(puVar22);
              }
            }
          }
        }
      }
      else {
        if ((*(long *)(param_2 + 8) == 0) || (*(long *)(*(long *)(param_2 + 8) + 0x10) == 0)) {
          lVar17 = 0;
        }
        else {
          lVar17 = *(long *)(*(long *)(param_2 + 0x10) + 0x38);
        }
        if ((*(long *)(param_1 + 8) == 0) || (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
          lVar18 = 0;
        }
        else {
          lVar18 = *(long *)(*(long *)(param_1 + 0x10) + 0x38);
        }
        if (lVar17 == lVar18) {
          FUN_10030666b(param_1,local_238,1);
          FUN_10030666b(param_2,local_438,1);
          cVar13 = FUN_1001e3edc(local_238,local_438,0);
          if (cVar13 == '\0') {
            if (param_7 != '\0') {
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar16 = DAT_1008c75b8;
              cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar13 != '\0') {
                FUN_1001b8dfc(&local_468,local_438);
                uVar19 = FUN_1001b83ae(&local_468);
                FUN_1001b8dfc(local_4b8,local_238);
                lVar17 = local_490;
                uVar20 = FUN_1001b83ae(local_4b8);
                FUN_100476ac1(local_4a8,lVar17);
                local_470 = FUN_1001b83ae(local_4a8);
                local_484 = (uint)uVar19;
                uStack_480 = (undefined2)((ulong)uVar19 >> 0x20);
                uStack_47e = (ushort)((ulong)uVar19 >> 0x30);
                local_47a = (undefined2)uVar20;
                uStack_478 = (undefined6)((ulong)uVar20 >> 0x10);
                pcVar21 = 
                "sync> flavor does not match (\"%{public}s\" vs. \"%{public}s\") for track \"%{public}s\""
                ;
                goto LAB_100302f58;
              }
            }
          }
          else {
            if (((param_3 == (undefined4 *)0x0) ||
                (cVar13 = FUN_10053916d(param_3,0x8b), cVar13 == '\0')) ||
               (*(long *)(*(long *)(param_2 + 0x10) + 0xa8) ==
                *(long *)(*(long *)(param_1 + 0x10) + 0xa8))) goto LAB_100302a64;
            if (param_7 != '\0') {
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar16 = DAT_1008c75b8;
              cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
              if (cVar13 != '\0') {
                uVar19 = *(undefined8 *)(*(long *)(param_2 + 0x10) + 0xa8);
                uVar20 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0xa8);
                FUN_100476ac1(&local_468,local_490);
                local_470 = FUN_1001b83ae(&local_468);
                local_484 = (uint)uVar19;
                uStack_480 = (undefined2)((ulong)uVar19 >> 0x20);
                uStack_47e = (ushort)((ulong)uVar19 >> 0x30);
                local_47a = (undefined2)uVar20;
                uStack_478 = (undefined6)((ulong)uVar20 >> 0x10);
                pcVar21 = 
                "sync> store version does not match (%llu vs. %llu) for track \"%{public}s\"";
                goto LAB_10030301d;
              }
            }
          }
        }
        else if (param_7 != '\0') {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar16 = DAT_1008c75b8;
          cVar13 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar13 != '\0') {
            if ((*(long *)(param_2 + 8) == 0) || (*(long *)(*(long *)(param_2 + 8) + 0x10) == 0)) {
              uVar19 = 0;
            }
            else {
              uVar19 = *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x38);
            }
            if ((*(long *)(param_1 + 8) == 0) || (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
              uVar20 = 0;
            }
            else {
              uVar20 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x38);
            }
            FUN_100476ac1(&local_468,local_490);
            local_470 = FUN_1001b83ae(&local_468);
            local_484 = (uint)uVar19;
            uStack_480 = (undefined2)((ulong)uVar19 >> 0x20);
            uStack_47e = (ushort)((ulong)uVar19 >> 0x30);
            local_47a = (undefined2)uVar20;
            uStack_478 = (undefined6)((ulong)uVar20 >> 0x10);
            pcVar21 = "sync> song id does not match (%llu vs. %llu) for track \"%{public}s\"";
            goto LAB_10030301d;
          }
        }
      }
    }
  }
LAB_1003028d3:
  uVar16 = 0;
LAB_1003028d6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar16;
}

