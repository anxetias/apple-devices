// name: FUN_1003dc014
// address: 1003dc014

int FUN_1003dc014(undefined8 *param_1,int param_2,uint param_3,ulong param_4,double *param_5,
                 long *param_6,undefined4 *param_7)

{
  double *pdVar1;
  ushort *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  double dVar14;
  uint *puVar15;
  char *pcVar16;
  uint *puVar17;
  long *plVar18;
  int iVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined4 uVar22;
  ulong uVar23;
  ushort uVar24;
  ulong uVar25;
  ushort *puVar26;
  uint uVar27;
  long *plVar28;
  bool bVar29;
  undefined4 local_558;
  undefined4 uStack_554;
  undefined4 uStack_550;
  uint uStack_54c;
  undefined4 local_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  double local_538;
  long *local_530;
  long *local_528;
  uint local_51c;
  long local_518;
  long *local_510;
  long *local_508;
  undefined8 local_500;
  long *local_4f8;
  long local_4f0;
  long *local_4e8;
  ulong local_4e0;
  long *local_4d8;
  long *local_4d0;
  uint local_4c4;
  undefined4 local_4c0;
  undefined4 uStack_4bc;
  int local_4b4;
  long *local_4b0;
  long *local_4a8;
  long *local_4a0;
  long **local_498;
  ulong local_490;
  uint local_488;
  uint uStack_484;
  ulong local_480;
  uint local_474;
  long *local_470;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined2 uStack_45c;
  undefined2 uStack_45a;
  undefined2 uStack_458;
  undefined2 uStack_456;
  undefined2 uStack_454;
  undefined2 uStack_452;
  undefined4 uStack_450;
  int iStack_44c;
  double local_448;
  undefined4 local_68;
  uint local_64;
  ushort uStack_60;
  ushort uStack_5e;
  ushort uStack_5c;
  ushort local_5a;
  undefined2 uStack_58;
  ushort uStack_56;
  undefined2 uStack_54;
  undefined2 uStack_52;
  uint local_4e;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_4f0 = 0;
  local_51c = param_3;
  local_4e8 = param_6;
  local_480 = param_4;
  if (param_7 != (undefined4 *)0x0) {
    FUN_1001c62d9(param_7,0x28);
  }
  if (local_4e8 != (long *)0x0) {
    *local_4e8 = 0;
  }
  if (param_2 == 0x57415645) {
    plVar28 = (long *)*param_1;
    local_4d0 = (long *)param_1[1];
    if (local_4d0 != (long *)0x0) {
      LOCK();
      local_4d0[1] = local_4d0[1] + 1;
      UNLOCK();
    }
    local_4d8 = plVar28;
    local_470 = local_4d0;
    FUN_1001c62d9(param_5,0x60);
    iVar7 = (**(code **)(*plVar28 + 0x168))(plVar28);
    bVar29 = true;
    if (iVar7 != 2) {
      iVar7 = (**(code **)(*plVar28 + 0x168))(plVar28);
      bVar29 = iVar7 == 4;
    }
    iVar7 = (**(code **)(*plVar28 + 0xf8))(plVar28,&local_518);
    plVar18 = local_470;
    if (iVar7 != -0x80) {
      if (iVar7 == 0) {
        local_508 = local_470;
        if (local_470 != (long *)0x0) {
          LOCK();
          local_470[1] = local_470[1] + 1;
          UNLOCK();
        }
        local_510 = plVar28;
        iVar7 = FUN_1003e22ad(plVar28,&local_4b4,local_480);
        if (local_470 != (long *)0x0) {
          LOCK();
          plVar28 = local_470 + 1;
          lVar20 = *plVar28;
          *plVar28 = *plVar28 + -1;
          UNLOCK();
          if (lVar20 == 0) {
            (**(code **)(*local_470 + 0x10))(local_470);
            std::__shared_weak_count::__release_weak();
          }
        }
        plVar28 = local_4d0;
        plVar18 = local_470;
        if (iVar7 != -0x80) {
          if (iVar7 == 0) {
            if (local_4b4 == 0x52494646) {
              local_500 = local_4d8;
              local_4f8 = local_4d0;
              if (local_4d0 != (long *)0x0) {
                LOCK();
                local_4d0[1] = local_4d0[1] + 1;
                UNLOCK();
              }
              local_498 = &local_4b0;
              local_4b0 = (long *)0x4;
              iVar7 = (**(code **)(*local_4d8 + 0xb8))(local_4d8,local_498,&local_4b4,local_480);
              if (iVar7 != -0x80) {
                if (iVar7 == 0) {
                  iVar7 = 0;
                  if (local_4b0 != (long *)0x4) {
                    uVar13 = FUN_1001cc310();
                    cVar6 = _os_log_type_enabled(uVar13,0x10);
                    if (cVar6 != '\0') {
                      local_468 = 0x8220202;
                      uStack_464 = 0x7a0a90;
                      uStack_460 = 1;
                      uStack_45c = 0x822;
                      uStack_45a = 0x22e0;
                      uStack_458 = 0x7b;
                      uStack_456 = 1;
                      uStack_454 = 0;
                      __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",
                                          &local_468,0x16);
                    }
                    iVar7 = -0x27;
                    FUN_1001782e9(0,0);
                  }
                }
                else {
                  uVar13 = FUN_1001cc310();
                  cVar6 = _os_log_type_enabled(uVar13,0x10);
                  if (cVar6 != '\0') {
                    local_468 = 0x8220202;
                    uStack_464 = 0x7a0a90;
                    uStack_460 = 1;
                    uStack_45c = 0x400;
                    uStack_45a = (undefined2)iVar7;
                    uStack_458 = (undefined2)((uint)iVar7 >> 0x10);
                    __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_468
                                        ,0x12);
                  }
                }
              }
              if (plVar28 != (long *)0x0) {
                LOCK();
                plVar18 = plVar28 + 1;
                lVar20 = *plVar18;
                *plVar18 = *plVar18 + -1;
                UNLOCK();
                if (lVar20 == 0) {
                  (**(code **)(*plVar28 + 0x10))(plVar28);
                  std::__shared_weak_count::__release_weak();
                }
              }
              plVar28 = local_4d0;
              plVar18 = local_470;
              if (iVar7 != -0x80) {
                if (iVar7 == 0) {
                  local_4b0 = local_4d8;
                  local_4a8 = local_4d0;
                  if (local_4d0 != (long *)0x0) {
                    LOCK();
                    local_4d0[1] = local_4d0[1] + 1;
                    UNLOCK();
                  }
                  iVar7 = FUN_1003e22ad(local_4d8,&local_4b4,local_480);
                  if (plVar28 != (long *)0x0) {
                    LOCK();
                    plVar18 = plVar28 + 1;
                    lVar20 = *plVar18;
                    *plVar18 = *plVar18 + -1;
                    UNLOCK();
                    if (lVar20 == 0) {
                      (**(code **)(*plVar28 + 0x10))(plVar28);
                      std::__shared_weak_count::__release_weak();
                    }
                  }
                  plVar28 = local_4d8;
                  plVar18 = local_470;
                  if (iVar7 != -0x80) {
                    if (iVar7 == 0) {
                      if (local_4b4 != 0x57415645) {
                        uVar13 = FUN_1001cc310();
                        cVar6 = _os_log_type_enabled(uVar13,0x10);
                        if (cVar6 != '\0') {
                          pcVar16 = "tempLong == \'WAVE\'";
                          goto LAB_1003dd392;
                        }
                        goto LAB_1003dcb25;
                      }
                      local_490 = 8;
                      iVar8 = (**(code **)(*local_4d8 + 0xb8))
                                        (local_4d8,&local_490,&local_488,local_480);
                      if (iVar8 == 0) {
                        local_474 = 0x6c70636d;
                        uVar25 = 0;
                        local_498 = (long **)0x0;
                        local_4e0 = local_4e0 & 0xffffffff00000000;
                        do {
                          if (local_490 != 8) {
                            uVar13 = FUN_1001cc310();
                            cVar6 = _os_log_type_enabled(uVar13,0x10);
                            if (cVar6 != '\0') {
                              pcVar16 = "count == sizeof(chunk)";
LAB_1003de03b:
                              uStack_45c = 0x822;
                              uStack_460 = 1;
                              uStack_464 = 0x7a0a90;
                              local_468 = 0x8220202;
                              uStack_45a = SUB82(pcVar16,0);
                              uStack_458 = (undefined2)((ulong)pcVar16 >> 0x10);
                              uStack_456 = (undefined2)((ulong)pcVar16 >> 0x20);
                              uStack_454 = 0;
                              __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)"
                                                  ,&local_468,0x16);
                            }
LAB_1003dde53:
                            iVar8 = -0x27;
                            FUN_1001782e9(0,0);
                            break;
                          }
                          uVar23 = (ulong)uStack_484;
                          local_488 = local_488 >> 0x18 | (local_488 & 0xff0000) >> 8 |
                                      (local_488 & 0xff00) << 8 | local_488 << 0x18;
                          local_4a0 = (long *)(ulong)((uStack_484 & 1) + uStack_484);
                          if (local_488 == 0x666d7420) {
                            if (uStack_484 < 0x10) {
                              uVar13 = FUN_1001cc310();
                              cVar6 = _os_log_type_enabled(uVar13,0x10);
                              if (cVar6 != '\0') {
                                pcVar16 = "chunk.ckSize >= __builtin_offsetof(WAVEFORMATEX, cbSize)"
                                ;
LAB_1003ddf99:
                                uStack_45c = 0x822;
                                uStack_460 = 1;
                                uStack_464 = 0x7a0a90;
                                local_468 = 0x8220202;
                                uStack_45a = SUB82(pcVar16,0);
                                uStack_458 = (undefined2)((ulong)pcVar16 >> 0x10);
                                uStack_456 = (undefined2)((ulong)pcVar16 >> 0x20);
                                uStack_454 = 0;
                                __os_log_error_impl(0x100000000,uVar13,0x10,
                                                    "%{public}s: (%{public}s)",&local_468,0x16);
                              }
LAB_1003ddde9:
                              iVar8 = -0xd0;
                              FUN_1001782e9(0,0);
                            }
                            else {
                              FUN_1001c62d9(&local_68,0x28);
                              *(uint *)(param_5 + 0xb) = uStack_484 + 0x1c;
                              dVar14 = (double)FUN_1001c63e1();
                              param_5[10] = dVar14;
                              if (dVar14 == 0.0) {
                                uVar13 = FUN_1001cc310();
                                cVar6 = _os_log_type_enabled(uVar13,0x10);
                                if (cVar6 != '\0') {
                                  local_468 = 0x8220202;
                                  uStack_464 = 0x7a0a90;
                                  uStack_460 = 1;
                                  uStack_45c = 0x822;
                                  uStack_45a = 0xaf19;
                                  uStack_458 = 0x7c;
                                  uStack_456 = 1;
                                  uStack_454 = 0;
                                  __os_log_error_impl(0x100000000,uVar13,0x10,
                                                      "%{public}s: (%{public}s)",&local_468,0x16);
                                }
                                iVar8 = -0x6c;
                                FUN_1001782e9(0,0);
                              }
                              else {
                                local_490 = (ulong)uStack_484;
                                iVar8 = (**(code **)(*plVar28 + 0xb8))
                                                  (plVar28,&local_490,(long)dVar14 + 0x14,local_480)
                                ;
                                uVar25 = local_490;
                                if (iVar8 == 0) {
                                  if (local_490 != uStack_484) {
                                    uVar13 = FUN_1001cc310();
                                    cVar6 = _os_log_type_enabled(uVar13,0x10);
                                    if (cVar6 != '\0') {
                                      pcVar16 = "count == chunk.ckSize";
                                      goto LAB_1003de03b;
                                    }
                                    goto LAB_1003dde53;
                                  }
                                  FUN_1001c631b((long)dVar14 + 0x14,&local_68,0x10);
                                  if (uStack_484 < 0x12 || (local_68 & 0xffff) == 1) {
                                    puVar26 = (ushort *)((long)dVar14 + 0x24);
                                  }
                                  else {
                                    uStack_58 = *(undefined2 *)((long)dVar14 + 0x24);
                                    puVar26 = (ushort *)((long)dVar14 + 0x26);
                                  }
                                  uVar23 = 9;
                                  uVar9 = local_68 & 0xffff;
                                  if ((local_68 & 0xffff) < 6) {
                                    if (uVar9 == 1) {
                                      uVar23 = (ulong)((uint)(8 < (short)local_5a) * 4 + 8);
                                    }
                                    else if (uVar9 != 3) goto LAB_1003dd840;
LAB_1003dd627:
                                    uVar22 = (undefined4)uVar23;
                                    FUN_10015d7ff((float)local_64,(int)local_68._2_2_,
                                                  (int)(short)local_5a,uVar23,param_5);
                                    *(uint *)(param_5 + 1) = local_474;
                                    FUN_1001c64c1(param_5[10]);
                                    param_5[10] = 0.0;
                                    *(undefined4 *)(param_5 + 0xb) = 0;
                                  }
                                  else {
                                    if ((local_68 & 0xffff) - 6 < 2) {
                                      local_474 = 0x756c6177;
                                      if ((short)local_68 == 6) {
                                        local_474 = 0x616c6177;
                                      }
                                      uVar23 = local_4e0 & 0xffffffff;
                                      goto LAB_1003dd627;
                                    }
                                    if (uVar9 == 0xfffe) {
                                      if (uStack_484 < 0x28) {
                                        uVar13 = FUN_1001cc310();
                                        cVar6 = _os_log_type_enabled(uVar13,0x10);
                                        if (cVar6 != '\0') {
                                          pcVar16 = "chunk.ckSize >= sizeof( WAVEFORMATEXTENSIBLE )"
                                          ;
                                          goto LAB_1003ddf99;
                                        }
                                        goto LAB_1003ddde9;
                                      }
                                      uStack_56 = *puVar26;
                                      puVar2 = puVar26 + 1;
                                      puVar26 = puVar26 + 3;
                                      uStack_54 = (undefined2)*(undefined4 *)puVar2;
                                      uStack_52 = (undefined2)((uint)*(undefined4 *)puVar2 >> 0x10);
                                      cVar6 = FUN_1001c5630(&DAT_100747d20,puVar26,0x10);
                                      if (cVar6 == '\0') {
                                        cVar6 = FUN_1001c5630(&DAT_100747d30,puVar26,0x10);
                                        if (cVar6 == '\0') {
                                          cVar6 = FUN_1001c5630(&DAT_100747d40,puVar26,0x10);
                                          local_474 = 0x616c6177;
                                          uVar23 = 0;
                                          if (cVar6 == '\0') {
                                            cVar6 = FUN_1001c5630(&DAT_100747d40,puVar26,0x10);
                                            local_474 = 0x756c6177;
                                            if (cVar6 == '\0') {
                                              goto LAB_1003dd840;
                                            }
                                          }
                                        }
                                      }
                                      else {
                                        uVar23 = 0xc;
                                      }
                                      goto LAB_1003dd627;
                                    }
LAB_1003dd840:
                                    uVar9 = (uint)(short)local_68;
                                    local_474 = uVar9 | 0x6d730000;
                                    *param_5 = (double)local_64;
                                    *(uint *)(param_5 + 1) = local_474;
                                    *(undefined8 *)((long)param_5 + 0xc) = 0;
                                    *(undefined4 *)((long)param_5 + 0x14) = 0;
                                    *(int *)((long)param_5 + 0x1c) = (int)local_68._2_2_;
                                    uVar24 = local_5a;
                                    if (local_5a == 0) {
                                      uVar24 = uStack_56;
                                    }
                                    *(int *)(param_5 + 4) = (int)(short)uVar24;
                                    *(uint *)(param_5 + 3) =
                                         ((int)(short)uVar24 + 7U >> 3) * (int)local_68._2_2_;
                                    if ((short)local_68 == -2 && local_5a == 0) {
                                      *(int *)((long)param_5 + 0x14) = (int)(short)uStack_56;
                                    }
                                    puVar21 = (undefined8 *)param_5[10];
                                    *puVar21 = 0x616d72660c000000;
                                    uVar9 = local_474 >> 0x18 | (local_474 & 0xff0000) >> 8 |
                                            (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
                                    *(uint *)(puVar21 + 1) = uVar9;
                                    local_490 = (ulong)uStack_484 + 8;
                                    uVar27 = (uint)local_490;
                                    *(uint *)((long)puVar21 + 0xc) =
                                         uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 |
                                         (uVar27 & 0xff00) << 8 | uVar27 << 0x18;
                                    *(uint *)(puVar21 + 2) = uVar9;
                                    lVar20 = (long)puVar21 + (ulong)uStack_484 + 0x1c;
                                    *(undefined8 *)(lVar20 + -8) = 0x8000000;
                                    uVar23 = (ulong)*(uint *)(param_5 + 0xb);
                                    if (lVar20 != (long)puVar21 + uVar23) {
                                      uVar13 = FUN_1001cc310();
                                      cVar6 = _os_log_type_enabled(uVar13,0x10);
                                      if (cVar6 != '\0') {
                                        local_468 = 0x8220202;
                                        uStack_464 = 0x7a0a90;
                                        uStack_460 = 1;
                                        uStack_45c = 0x822;
                                        uStack_45a = 0xb05c;
                                        uStack_458 = 0x7c;
                                        uStack_456 = 1;
                                        uStack_454 = 0;
                                        __os_log_error_impl(0x100000000,uVar13,0x10,
                                                            "%{public}s: (%{public}s)",&local_468,
                                                            0x16);
                                      }
                                      FUN_1001782e9(0,0);
                                      uVar23 = (ulong)*(uint *)(param_5 + 0xb);
                                      puVar21 = (undefined8 *)param_5[10];
                                    }
                                    *(undefined4 *)(param_5 + 5) = *(undefined4 *)(param_5 + 4);
                                    local_468 = *(undefined4 *)param_5;
                                    uStack_464 = *(undefined4 *)((long)param_5 + 4);
                                    uStack_460 = *(undefined4 *)(param_5 + 1);
                                    uStack_450 = *(undefined4 *)(param_5 + 3);
                                    iStack_44c = *(int *)((long)param_5 + 0x1c);
                                    uStack_45c = (undefined2)*(undefined4 *)((long)param_5 + 0xc);
                                    uStack_45a = (undefined2)
                                                 ((uint)*(undefined4 *)((long)param_5 + 0xc) >> 0x10
                                                 );
                                    uStack_458 = (undefined2)*(undefined4 *)(param_5 + 2);
                                    uStack_456 = (undefined2)
                                                 ((uint)*(undefined4 *)(param_5 + 2) >> 0x10);
                                    uStack_454 = (undefined2)*(undefined4 *)((long)param_5 + 0x14);
                                    uStack_452 = (undefined2)
                                                 ((uint)*(undefined4 *)((long)param_5 + 0x14) >>
                                                 0x10);
                                    local_448 = param_5[4];
                                    local_4c0 = 0x28;
                                    iVar7 = _AudioFormatGetProperty
                                                      (0x666d7469,uVar23,puVar21,&local_4c0,
                                                       &local_468);
                                    if (iVar7 != 0) {
                                      iVar8 = -0xce;
                                      break;
                                    }
                                    param_5[4] = local_448;
                                    param_5[2] = (double)CONCAT26(uStack_452,
                                                                  CONCAT24(uStack_454,
                                                                           CONCAT22(uStack_456,
                                                                                    uStack_458)));
                                    param_5[3] = (double)CONCAT44(iStack_44c,uStack_450);
                                    *(undefined4 *)param_5 = local_468;
                                    *(undefined4 *)((long)param_5 + 4) = uStack_464;
                                    *(undefined4 *)(param_5 + 1) = uStack_460;
                                    *(uint *)((long)param_5 + 0xc) = CONCAT22(uStack_45a,uStack_45c)
                                    ;
                                    uVar22 = 0;
                                  }
                                  if (*(int *)((long)param_5 + 0x1c) - 1U < 2) {
                                    local_4a0 = (long *)(ulong)(uint)((int)local_4a0 - (int)uVar25);
                                    uVar25 = CONCAT71((int7)((ulong)puVar26 >> 8),1);
                                    local_498 = (long **)0x0;
                                    local_4e0 = CONCAT44(local_4e0._4_4_,uVar22);
                                    goto LAB_1003dd698;
                                  }
                                  uVar13 = FUN_1001cc310();
                                  cVar6 = _os_log_type_enabled(uVar13,0x10);
                                  if (cVar6 != '\0') {
                                    local_468 = 0x8220202;
                                    uStack_464 = 0x7a0a90;
                                    uStack_460 = 1;
                                    uStack_45c = 0x822;
                                    uStack_45a = 0xaf3c;
                                    uStack_458 = 0x7c;
                                    uStack_456 = 1;
                                    uStack_454 = 0;
                                    __os_log_error_impl(0x100000000,uVar13,0x10,
                                                        "%{public}s: (%{public}s)",&local_468,0x16);
                                  }
                                  iVar8 = -0x842;
                                  FUN_1001782e9(0,0);
                                }
                                else if (iVar8 != -0x80) {
                                  uVar13 = FUN_1001cc310();
                                  cVar6 = _os_log_type_enabled(uVar13,0x10);
                                  if (cVar6 != '\0') {
                                    uStack_45a = (undefined2)iVar8;
                                    uStack_458 = (undefined2)((uint)iVar8 >> 0x10);
LAB_1003ddcdc:
                                    uStack_460 = 1;
                                    uStack_464 = 0x7a0a90;
                                    uStack_45c = 0x400;
                                    local_468 = 0x8220202;
                                    __os_log_error_impl(0x100000000,uVar13,0x10,
                                                        "%{public}s: err == (%d)",&local_468,0x12);
                                  }
                                }
                              }
                            }
                            break;
                          }
                          if (local_488 == 0x64617461) {
                            iVar8 = -0x27;
                            local_480 = uVar23;
                            if ((bool)(bVar29 & (char)uVar25 == '\0')) break;
                            if ((char)uVar25 == '\0') {
                              uVar13 = FUN_1001cc310();
                              cVar6 = _os_log_type_enabled(uVar13,0x10);
                              iVar8 = -0xd0;
                              if (cVar6 != '\0') {
                                pcVar16 = "foundFormat && foundData";
LAB_1003de128:
                                uStack_45c = 0x822;
                                uStack_460 = 1;
                                uStack_464 = 0x7a0a90;
                                local_468 = 0x8220202;
                                uStack_45a = SUB82(pcVar16,0);
                                uStack_458 = (undefined2)((ulong)pcVar16 >> 0x10);
                                uStack_456 = (undefined2)((ulong)pcVar16 >> 0x20);
                                uStack_454 = 0;
                                __os_log_error_impl(0x100000000,uVar13,0x10,
                                                    "%{public}s: (%{public}s)",&local_468,0x16);
                              }
                            }
                            else {
                              pdVar1 = param_5 + 7;
                              iVar8 = (**(code **)(*plVar28 + 0xf8))(plVar28,pdVar1);
                              if (iVar8 == -0x80) goto LAB_1003dcd38;
                              if (iVar8 != 0) {
                                uVar13 = FUN_1001cc310();
                                cVar6 = _os_log_type_enabled(uVar13,0x10);
                                if (cVar6 != '\0') {
                                  uStack_45a = (undefined2)iVar8;
                                  uStack_458 = (undefined2)((uint)iVar8 >> 0x10);
                                  goto LAB_1003ddcdc;
                                }
                                break;
                              }
                              if (bVar29) {
                                *pdVar1 = (double)((long)*pdVar1 - local_518);
                              }
                              if (*(uint *)(param_5 + 2) != 0) {
                                param_5[8] = (double)(local_480 + (long)param_5[7]);
                                param_5[6] = (double)((local_480 & 0xffffffff) /
                                                     (ulong)*(uint *)(param_5 + 2));
                                plVar18 = local_470;
                                iVar7 = 0;
                                goto LAB_1003dce6b;
                              }
                              uVar13 = FUN_1001cc310();
                              cVar6 = _os_log_type_enabled(uVar13,0x10);
                              iVar8 = -0xd5;
                              if (cVar6 != '\0') {
                                pcVar16 = "formatInfo->audioFormat.mBytesPerPacket != 0";
                                goto LAB_1003de128;
                              }
                            }
                            FUN_1001782e9(0,0);
                            goto LAB_1003dcd38;
                          }
LAB_1003dd698:
                          plVar28 = local_4d8;
                          if (bVar29) {
                            if (0x1000 < (uint)((int)local_498 + (int)local_4a0)) {
                              iVar8 = -0x27;
                              break;
                            }
                            if ((int)local_4a0 != 0) {
                              local_4c4 = (uint)uVar25;
                              plVar18 = local_4a0;
                              do {
                                uVar25 = 0x400;
                                if ((uint)plVar18 < 0x400) {
                                  uVar25 = (ulong)plVar18;
                                }
                                local_490 = uVar25;
                                iVar8 = (**(code **)(*plVar28 + 0xb8))
                                                  (plVar28,&local_490,&local_468,local_480);
                                if (iVar8 != 0) goto LAB_1003dcd15;
                                if (local_490 != uVar25) {
                                  iVar8 = -0x24;
                                  goto LAB_1003dcd15;
                                }
                                local_498 = (long **)(ulong)(uint)((int)local_498 + (int)uVar25);
                                uVar9 = (uint)plVar18 - (int)uVar25;
                                plVar18 = (long *)(ulong)uVar9;
                              } while (uVar9 != 0);
                              uVar25 = (ulong)local_4c4;
                            }
                          }
                          else if ((int)local_4a0 != 0) {
                            iVar8 = (**(code **)(*local_4d8 + 0xf8))(local_4d8,&local_4c0);
                            if (iVar8 != 0) break;
                            iVar8 = (**(code **)(*plVar28 + 0xf0))
                                              (plVar28,((ulong)local_4a0 & 0xffffffff) +
                                                       CONCAT44(uStack_4bc,local_4c0));
                            if (iVar8 != 0) {
                              if (iVar8 != -0x80) {
                                uVar13 = FUN_1001cc310();
                                cVar6 = _os_log_type_enabled(uVar13,0x10);
                                if (cVar6 != '\0') {
                                  uStack_45a = (undefined2)iVar8;
                                  uStack_458 = (undefined2)((uint)iVar8 >> 0x10);
                                  goto LAB_1003ddcdc;
                                }
                              }
                              break;
                            }
                          }
                          local_490 = 8;
                          iVar8 = (**(code **)(*plVar28 + 0xb8))
                                            (plVar28,&local_490,&local_488,local_480);
                          if (iVar8 != 0) break;
                        } while( true );
                      }
LAB_1003dcd15:
                      plVar18 = local_470;
                      iVar7 = iVar8;
                      if ((iVar8 != 0) &&
                         (((iVar8 != -0x27 || (iVar8 = -0x27, *(int *)(param_5 + 1) == 0)) ||
                          (iVar7 = 0, param_5[6] == 0.0)))) {
LAB_1003dcd38:
                        plVar18 = local_470;
                        iVar7 = iVar8;
                        if (param_5[10] != 0.0) {
                          FUN_1001c64c1();
                          param_5[10] = 0.0;
                          plVar18 = local_470;
                        }
                      }
                    }
                    else {
                      uVar13 = FUN_1001cc310();
                      cVar6 = _os_log_type_enabled(uVar13,0x10);
                      plVar18 = local_470;
                      if (cVar6 != '\0') {
                        uStack_45a = (undefined2)iVar7;
                        uStack_458 = (undefined2)((uint)iVar7 >> 0x10);
                        goto LAB_1003dcae6;
                      }
                    }
                  }
                }
                else {
                  uVar13 = FUN_1001cc310();
                  cVar6 = _os_log_type_enabled(uVar13,0x10);
                  plVar18 = local_470;
                  if (cVar6 != '\0') {
                    uStack_45a = (undefined2)iVar7;
                    uStack_458 = (undefined2)((uint)iVar7 >> 0x10);
                    goto LAB_1003dcae6;
                  }
                }
              }
            }
            else {
              uVar13 = FUN_1001cc310();
              cVar6 = _os_log_type_enabled(uVar13,0x10);
              if (cVar6 != '\0') {
                pcVar16 = "tempLong == \'RIFF\'";
LAB_1003dd392:
                uStack_460 = 1;
                uStack_464 = 0x7a0a90;
                uStack_45c = 0x822;
                local_468 = 0x8220202;
                uStack_45a = SUB82(pcVar16,0);
                uStack_458 = (undefined2)((ulong)pcVar16 >> 0x10);
                uStack_456 = (undefined2)((ulong)pcVar16 >> 0x20);
                uStack_454 = 0;
                __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_468,
                                    0x16);
              }
LAB_1003dcb25:
              FUN_1001782e9(0,0);
              plVar18 = local_470;
              iVar7 = -0xd0;
            }
          }
          else {
            uVar13 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar13,0x10);
            plVar18 = local_470;
            if (cVar6 != '\0') {
              uStack_45a = (undefined2)iVar7;
              uStack_458 = (undefined2)((uint)iVar7 >> 0x10);
              goto LAB_1003dcae6;
            }
          }
        }
      }
      else {
        uVar13 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar13,0x10);
        plVar18 = local_470;
        if (cVar6 != '\0') {
          uStack_45a = (undefined2)iVar7;
          uStack_458 = (undefined2)((uint)iVar7 >> 0x10);
LAB_1003dcae6:
          uStack_460 = 1;
          uStack_464 = 0x7a0a90;
          uStack_45c = 0x400;
          local_468 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_468,0x12);
          plVar18 = local_470;
        }
      }
    }
  }
  else {
    iVar7 = -0xce;
    if (param_2 != 0x41494646) goto LAB_1003dd21d;
    plVar28 = (long *)*param_1;
    plVar18 = (long *)param_1[1];
    if (plVar18 != (long *)0x0) {
      LOCK();
      plVar18[1] = plVar18[1] + 1;
      UNLOCK();
    }
    local_530 = plVar28;
    local_528 = plVar18;
    FUN_1001c62d9(param_5,0x60);
    iVar7 = (**(code **)(*plVar28 + 0x168))(plVar28);
    bVar29 = true;
    if (iVar7 != 2) {
      iVar7 = (**(code **)(*plVar28 + 0x168))(plVar28);
      bVar29 = iVar7 == 4;
    }
    iVar7 = (**(code **)(*plVar28 + 0xf8))(plVar28,&local_518);
    if (iVar7 != -0x80) {
      if (iVar7 == 0) {
        local_498 = (long **)CONCAT71(local_498._1_7_,bVar29);
        local_4c4 = CONCAT31(local_4c4._1_3_,bVar29) ^ 1;
        local_4a0 = (long *)0x0;
        local_4e0 = 0;
        local_474 = 0;
        iVar7 = 0;
        local_470 = plVar18;
LAB_1003dc15a:
        plVar28 = local_530;
        local_4b0 = (long *)0x8;
        iVar8 = (**(code **)(*local_530 + 0xb8))(local_530,&local_4b0,&local_500);
        plVar18 = local_470;
        if (iVar8 != 0) goto LAB_1003dcb71;
        if (local_4b0 != (long *)0x8) {
          uVar13 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar13,0x10);
          if (cVar6 != '\0') {
            local_68 = 0x8220202;
            local_64 = 0x7a0a90;
            uStack_60 = 1;
            uStack_5e = 0;
            uStack_5c = 0x822;
            local_5a = 0xaf00;
            uStack_58 = 0x7c;
            uStack_56 = 1;
            uStack_54 = 0;
            __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
          }
          FUN_1001782e9(0,0);
          iVar8 = -0x27;
          goto LAB_1003dcb71;
        }
        uVar9 = (uint)local_500 >> 0x18 | ((uint)local_500 & 0xff0000) >> 8 |
                ((uint)local_500 & 0xff00) << 8 | (uint)local_500 << 0x18;
        uVar27 = local_500._4_4_ >> 0x18 | (local_500._4_4_ & 0xff0000) >> 8 |
                 (local_500._4_4_ & 0xff00) << 8 | local_500._4_4_ << 0x18;
        local_500 = (long *)CONCAT44(uVar27,uVar9);
        if ((int)uVar9 < 0x53534e44) {
          if (uVar9 != 0x434f4d4d) {
            if (uVar9 != 0x464f524d) {
LAB_1003dc32b:
              uVar9 = uVar27 + 1 & 0xfffffffe;
              goto LAB_1003dc71d;
            }
            local_68 = 0x464f524d;
            local_4b0 = (long *)0x4;
            local_64 = uVar27;
            uVar13 = (**(code **)(*plVar28 + 0xb8))(plVar28,&local_4b0,&uStack_60,local_480);
            iVar12 = 4;
            iVar10 = (int)uVar13;
            if (iVar10 == 0) {
              uVar9 = (uint)(uStack_5e >> 8) | (uStack_5e & 0xff) << 8 | (uStack_60 & 0xff00) << 8 |
                      CONCAT22(uStack_5e,uStack_60) << 0x18;
              if (uVar9 == 0x41494646) {
                local_474 = 0;
              }
              else {
                if (uVar9 != 0x41494643) {
                  iVar7 = -0x32;
                  iVar12 = 1;
                  goto LAB_1003dc7f4;
                }
                uVar13 = CONCAT71((int7)((ulong)uVar13 >> 8),1);
                local_474 = (uint)uVar13;
              }
              local_4e0 = CONCAT71((int7)((ulong)uVar13 >> 8),1);
              goto LAB_1003dc7b2;
            }
            goto LAB_1003dc7f4;
          }
          local_68 = 0x434f4d4d;
          if ((local_474 & 1) == 0) {
            local_4b0 = (long *)0x12;
            local_64 = uVar27;
            iVar8 = (**(code **)(*plVar28 + 0xb8))(plVar28,&local_4b0,&uStack_60,local_480);
            plVar18 = local_470;
            if (iVar8 != 0) goto LAB_1003dcb71;
            local_4e = 0x454e4f4e;
          }
          else {
            local_4b0 = (long *)0x16;
            local_64 = uVar27;
            iVar8 = (**(code **)(*plVar28 + 0xb8))(plVar28,&local_4b0,&uStack_60,local_480);
            plVar18 = local_470;
            if (iVar8 != 0) goto LAB_1003dcb71;
          }
          uStack_60 = uStack_60 << 8 | uStack_60 >> 8;
          uVar9 = (uint)(uStack_5c >> 8) | (uStack_5c & 0xff) << 8;
          uVar11 = uVar9 | (uStack_5e & 0xff00) << 8 | CONCAT22(uStack_5c,uStack_5e) << 0x18;
          uStack_5e = (ushort)uVar9;
          uStack_5c = (ushort)(uVar11 >> 0x10);
          local_5a = local_5a << 8 | local_5a >> 8;
          local_4e = local_4e >> 0x18 | (local_4e & 0xff0000) >> 8 | (local_4e & 0xff00) << 8 |
                     local_4e << 0x18;
          param_5[6] = (double)(ulong)uVar11;
          local_4a0 = local_4b0;
          FUN_1001c62d9(param_5,0x28);
          uVar24 = local_5a;
          iVar12 = (int)(short)local_5a;
          *(undefined4 *)(param_5 + 1) = 0x6c70636d;
          *(undefined4 *)((long)param_5 + 0x14) = 1;
          dVar14 = (double)_x80tod(&uStack_58);
          *param_5 = dVar14;
          iVar8 = (int)(short)uStack_60;
          *(int *)((long)param_5 + 0x1c) = iVar8;
          if ((int)local_4e < 0x696e3234) {
            if (0x666c3331 < (int)local_4e) {
              if (local_4e == 0x666c3332) {
                iVar19 = 0xb;
                iVar10 = 0x20;
              }
              else {
                if (local_4e != 0x666c3634) goto LAB_1003dc801;
                iVar19 = 3;
                iVar10 = 0x40;
              }
              goto LAB_1003dc66b;
            }
            if (local_4e == 0x32336e69) {
              iVar10 = 0x20;
LAB_1003dc647:
              iVar19 = 0xc;
              goto LAB_1003dc66b;
            }
            if (local_4e == 0x4e4f4e45) {
              iVar19 = (uint)(8 < uVar24) * 2 + 0xc;
              iVar10 = iVar12;
              goto LAB_1003dc66b;
            }
LAB_1003dc801:
            *(uint *)(param_5 + 1) = local_4e;
            *(undefined8 *)((long)param_5 + 0xc) = 0;
            *(undefined4 *)((long)param_5 + 0x14) = 0;
            iVar8 = (iVar12 + 7U >> 3) * iVar8;
            dVar14 = 1.18575755001899e-322;
            uVar9 = local_4e;
          }
          else {
            iVar19 = 0xe;
            if ((int)local_4e < 0x72617720) {
              if (local_4e == 0x696e3234) {
                iVar10 = 0x18;
              }
              else {
                if (local_4e != 0x696e3332) goto LAB_1003dc801;
                iVar10 = 0x20;
              }
            }
            else if (local_4e == 0x72617720) {
              iVar19 = 8;
              iVar10 = 8;
            }
            else {
              iVar10 = 0x10;
              if (local_4e == 0x736f7774) goto LAB_1003dc647;
              if (local_4e != 0x74776f73) goto LAB_1003dc801;
            }
LAB_1003dc66b:
            iVar12 = iVar10;
            *(int *)((long)param_5 + 0xc) = iVar19;
            iVar8 = (iVar12 + 7U >> 3) * iVar8;
            *(int *)(param_5 + 3) = iVar8;
            uVar9 = *(uint *)(param_5 + 1);
            dVar14 = 7.90505033345994e-323;
          }
          *(int *)((long)param_5 + (long)dVar14) = iVar8;
          *(int *)(param_5 + 4) = iVar12;
          if (uVar9 != 0x6c70636d) {
            local_448 = param_5[4];
            local_468 = *(undefined4 *)param_5;
            uStack_464 = *(undefined4 *)((long)param_5 + 4);
            uStack_460 = *(undefined4 *)(param_5 + 1);
            uStack_450 = *(undefined4 *)(param_5 + 3);
            iStack_44c = *(int *)((long)param_5 + 0x1c);
            uStack_458 = (undefined2)*(undefined4 *)(param_5 + 2);
            uStack_456 = (undefined2)((uint)*(undefined4 *)(param_5 + 2) >> 0x10);
            uStack_454 = (undefined2)*(undefined4 *)((long)param_5 + 0x14);
            uStack_452 = (undefined2)((uint)*(undefined4 *)((long)param_5 + 0x14) >> 0x10);
            uStack_45c = (undefined2)*(undefined4 *)((long)param_5 + 0xc);
            uStack_45a = (undefined2)((uint)*(undefined4 *)((long)param_5 + 0xc) >> 0x10);
            local_4c0 = 0x28;
            dVar14 = (double)_AudioFormatGetProperty(0x666d7469,0,0,&local_4c0,&local_468);
            if (SUB84(dVar14,0) == 0) {
              param_5[4] = local_448;
              param_5[2] = (double)CONCAT26(uStack_452,
                                            CONCAT24(uStack_454,CONCAT22(uStack_456,uStack_458)));
              param_5[3] = (double)CONCAT44(iStack_44c,uStack_450);
              *(undefined4 *)param_5 = local_468;
              *(undefined4 *)((long)param_5 + 4) = uStack_464;
              *(undefined4 *)(param_5 + 1) = uStack_460;
              *(uint *)((long)param_5 + 0xc) = CONCAT22(uStack_45a,uStack_45c);
              dVar14 = local_448;
            }
          }
          uVar9 = (uVar27 + 1 & 0xfffffffe) - (int)local_4a0;
          local_4a0 = (long *)CONCAT71((int7)((ulong)dVar14 >> 8),1);
LAB_1003dc71d:
          plVar18 = local_528;
          if ((int)uVar9 < 1) {
LAB_1003dc7b2:
            iVar10 = 0;
            iVar12 = 0;
            goto LAB_1003dc7f4;
          }
          if ((char)local_498 != '\0') {
            if (uVar9 < 0x1001) {
              local_510 = plVar28;
              local_508 = local_528;
              if (local_528 != (long *)0x0) {
                LOCK();
                local_528[1] = local_528[1] + 1;
                UNLOCK();
              }
              iVar8 = FUN_1003def4c(&local_510,uVar9,local_480);
              if (plVar18 != (long *)0x0) {
                LOCK();
                plVar28 = plVar18 + 1;
                lVar20 = *plVar28;
                *plVar28 = *plVar28 + -1;
                UNLOCK();
                if (lVar20 == 0) {
                  (**(code **)(*plVar18 + 0x10))(plVar18);
                  std::__shared_weak_count::__release_weak();
                }
              }
              goto joined_r0x0001003dc7ee;
            }
            plVar18 = local_470;
            iVar8 = -0x27;
            goto LAB_1003dcb71;
          }
          iVar8 = (**(code **)(*plVar28 + 0xf8))(plVar28,&local_488);
          plVar18 = local_470;
          if (iVar8 != 0) goto LAB_1003dcb71;
          iVar8 = (**(code **)(*plVar28 + 0xf0))
                            (plVar28,(ulong)uVar9 + CONCAT44(uStack_484,local_488));
        }
        else {
          if (uVar9 != 0x53534e44) {
            if (uVar9 != 0x77617665) goto LAB_1003dc32b;
            local_4b0 = (long *)(ulong)uVar27;
            dVar14 = (double)FUN_1001c63e1();
            plVar18 = local_470;
            param_5[10] = dVar14;
            if (dVar14 == 0.0) {
              uVar13 = FUN_1001cc310();
              cVar6 = _os_log_type_enabled(uVar13,0x10);
              if (cVar6 != '\0') {
                local_68 = 0x8220202;
                local_64 = 0x7a0a90;
                uStack_60 = 1;
                uStack_5e = 0;
                uStack_5c = 0x822;
                local_5a = 0xaf19;
                uStack_58 = 0x7c;
                uStack_56 = 1;
                uStack_54 = 0;
                __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_68,
                                    0x16);
              }
              FUN_1001782e9(0,0);
              iVar8 = -0x6c;
            }
            else {
              *(undefined4 *)(param_5 + 0xb) = local_4b0._0_4_;
              iVar8 = (**(code **)(*plVar28 + 0xb8))(plVar28,&local_4b0,dVar14,local_480);
              plVar18 = local_470;
              if (iVar8 == 0) {
                *(undefined4 *)(param_5 + 5) = *(undefined4 *)(param_5 + 4);
                local_448 = param_5[4];
                local_468 = *(undefined4 *)param_5;
                uStack_464 = *(undefined4 *)((long)param_5 + 4);
                uStack_460 = *(undefined4 *)(param_5 + 1);
                uStack_450 = *(undefined4 *)(param_5 + 3);
                iStack_44c = *(int *)((long)param_5 + 0x1c);
                uStack_458 = (undefined2)*(undefined4 *)(param_5 + 2);
                uStack_456 = (undefined2)((uint)*(undefined4 *)(param_5 + 2) >> 0x10);
                uStack_454 = (undefined2)*(undefined4 *)((long)param_5 + 0x14);
                uStack_452 = (undefined2)((uint)*(undefined4 *)((long)param_5 + 0x14) >> 0x10);
                uStack_45c = (undefined2)*(undefined4 *)((long)param_5 + 0xc);
                uStack_45a = (undefined2)((uint)*(undefined4 *)((long)param_5 + 0xc) >> 0x10);
                local_4c0 = 0x28;
                iVar8 = _AudioFormatGetProperty
                                  (0x666d7469,*(undefined4 *)(param_5 + 0xb),param_5[10],&local_4c0,
                                   &local_468);
                if (iVar8 == 0) {
                  param_5[4] = local_448;
                  param_5[2] = (double)CONCAT26(uStack_452,
                                                CONCAT24(uStack_454,CONCAT22(uStack_456,uStack_458))
                                               );
                  param_5[3] = (double)CONCAT44(iStack_44c,uStack_450);
                  *(undefined4 *)param_5 = local_468;
                  *(undefined4 *)((long)param_5 + 4) = uStack_464;
                  *(undefined4 *)(param_5 + 1) = uStack_460;
                  *(uint *)((long)param_5 + 0xc) = CONCAT22(uStack_45a,uStack_45c);
                  goto LAB_1003dc7b2;
                }
                plVar18 = local_470;
                iVar8 = -0xce;
              }
            }
            goto LAB_1003dcb71;
          }
          iVar8 = -0x27;
          if ((((byte)local_4e0 & (byte)local_4a0 | (byte)local_4c4) & 1) == 0) goto LAB_1003dcb71;
          local_68 = 0x53534e44;
          local_4b0 = (long *)0x8;
          local_64 = uVar27;
          iVar8 = (**(code **)(*plVar28 + 0xb8))(plVar28,&local_4b0,&uStack_60,local_480);
          plVar18 = local_470;
          if ((iVar8 != 0) ||
             (iVar8 = (**(code **)(*plVar28 + 0xf8))(plVar28,&local_490), uVar9 = local_64,
             plVar18 = local_470, iVar8 != 0)) goto LAB_1003dcb71;
          if ((char)local_498 != '\0') {
            local_490 = local_490 - local_518;
          }
          uVar27 = (uint)(uStack_5e >> 8) | (uStack_5e & 0xff) << 8;
          uVar11 = uVar27 | (uStack_60 & 0xff00) << 8 | CONCAT22(uStack_5e,uStack_60) << 0x18;
          uStack_60 = (ushort)uVar27;
          uStack_5e = (ushort)(uVar11 >> 0x10);
          param_5[7] = (double)(uVar11 + local_490);
          param_5[8] = (double)((local_64 - 8) + local_490);
          iVar8 = -0x27;
          if (((char)local_498 != '\0') ||
             (iVar8 = (**(code **)(*plVar28 + 0xf8))(plVar28,&local_488), plVar18 = local_470,
             iVar8 != 0)) goto LAB_1003dcb71;
          iVar8 = (**(code **)(*plVar28 + 0xf0))
                            (plVar28,(ulong)(uVar9 - 7 & 0xfffffffe) +
                                     CONCAT44(uStack_484,local_488));
        }
joined_r0x0001003dc7ee:
        iVar10 = 0;
        iVar12 = 0;
        plVar18 = local_470;
        if (iVar8 != 0) goto LAB_1003dcb71;
LAB_1003dc7f4:
        if (iVar12 != 0) goto LAB_1003dcafe;
        goto LAB_1003dc15a;
      }
      uVar13 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar13,0x10);
      if (cVar6 != '\0') {
        local_68 = 0x8220202;
        local_64 = 0x7a0a90;
        uStack_60 = 1;
        uStack_5e = 0;
        uStack_5c = 0x400;
        local_5a = (ushort)iVar7;
        uStack_58 = (undefined2)((uint)iVar7 >> 0x10);
        __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: err == (%d)",&local_68,0x12);
      }
    }
  }
LAB_1003dce6b:
  if (plVar18 != (long *)0x0) {
    LOCK();
    plVar28 = plVar18 + 1;
    lVar20 = *plVar28;
    *plVar28 = *plVar28 + -1;
    UNLOCK();
    if (lVar20 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (iVar7 != 0) goto LAB_1003dd21d;
  local_538 = param_5[4];
  local_558 = *(undefined4 *)param_5;
  uStack_554 = *(undefined4 *)((long)param_5 + 4);
  uStack_550 = *(undefined4 *)(param_5 + 1);
  uStack_54c = *(uint *)((long)param_5 + 0xc);
  local_548 = *(undefined4 *)(param_5 + 2);
  uStack_544 = *(undefined4 *)((long)param_5 + 0x14);
  uStack_540 = *(undefined4 *)(param_5 + 3);
  uStack_53c = *(undefined4 *)((long)param_5 + 0x1c);
  iVar7 = *(int *)(param_5 + 1);
  if (iVar7 == 0x6c70636d) {
    bVar29 = (local_51c & 0x2100048) != 0 && (local_51c & 0x20) == 0;
    puVar15 = (uint *)param_5[10];
    if (puVar15 != (uint *)0x0) {
LAB_1003dcf3a:
      if ((0xb < (ulong)(long)*(int *)(param_5 + 0xb)) && (puVar15[1] == 0x616d7266)) {
        uVar9 = *puVar15;
        uVar27 = puVar15[2];
        uVar27 = uVar27 >> 0x18 | (uVar27 & 0xff0000) >> 8 | (uVar27 & 0xff00) << 8 | uVar27 << 0x18
        ;
        if ((int)uVar27 < 0x696e3332) {
          if ((int)uVar27 < 0x666c3332) {
            if ((uVar27 == 0x32336e69) || (uVar27 == 0x4e4f4e45)) goto LAB_1003dcfd7;
          }
          else if ((uVar27 == 0x666c3332) || ((uVar27 == 0x666c3634 || (uVar27 == 0x696e3234)))) {
LAB_1003dcfd7:
            puVar17 = (uint *)((ulong)(uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 |
                                       (uVar9 & 0xff00) << 8 | uVar9 << 0x18) + (long)puVar15);
            puVar15 = (uint *)((long)*(int *)(param_5 + 0xb) + (long)puVar15);
            if (puVar17 < puVar15) {
              local_480 = local_480 & 0xffffffff00000000;
              bVar3 = 0;
              bVar4 = 0;
              do {
                uVar25 = (long)puVar15 - (long)puVar17;
                if (uVar25 < 8) {
                  local_470 = (long *)FUN_1001cc310();
                  cVar6 = _os_log_type_enabled(local_470,0x10);
                  if (cVar6 != '\0') {
                    pcVar16 = "(end - cur) >= sizeof( *atom )";
LAB_1003ddb16:
                    uStack_45c = 0x822;
                    uStack_460 = 1;
                    uStack_464 = 0x7a0a90;
                    local_468 = 0x8220202;
                    uStack_45a = SUB82(pcVar16,0);
                    uStack_458 = (undefined2)((ulong)pcVar16 >> 0x10);
                    uStack_456 = (undefined2)((ulong)pcVar16 >> 0x20);
                    uStack_454 = 0;
                    __os_log_error_impl(0x100000000,local_470,0x10,"%{public}s: (%{public}s)",
                                        &local_468,0x16);
                  }
LAB_1003dd0bb:
                  FUN_1001782e9(0,0);
                  break;
                }
                uVar9 = *puVar17;
                if ((uVar9 == 0) ||
                   (lVar20 = (long)(int)(uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 |
                                         (uVar9 & 0xff00) << 8 | uVar9 << 0x18),
                   (long)uVar25 < lVar20)) {
                  local_470 = (long *)FUN_1001cc310();
                  cVar6 = _os_log_type_enabled(local_470,0x10);
                  if (cVar6 != '\0') {
                    pcVar16 = "atomSize != 0 && (atomSize <= (end - cur))";
                    goto LAB_1003ddb16;
                  }
                  goto LAB_1003dd0bb;
                }
                if (puVar17[1] == 0x61646e65) {
                  local_480 = CONCAT44(local_480._4_4_,
                                       (int)CONCAT71((int7)(uVar25 >> 8),(short)puVar17[2] != 0));
                  bVar3 = 1;
                  bVar5 = bVar4;
                }
                else {
                  bVar5 = 1;
                  if (puVar17[1] == 0) break;
                }
                bVar4 = bVar5;
                puVar17 = (uint *)((long)puVar17 + lVar20);
              } while (puVar17 < puVar15);
              if ((bool)(~bVar4 & bVar3)) {
                uVar9 = *(uint *)((long)param_5 + 0xc);
                *(uint *)((long)param_5 + 0xc) = uVar9 & 0xfffffffd;
                uVar27 = uStack_54c & 0xfffffffd;
                if ((char)local_480 == '\0') {
                  *(uint *)((long)param_5 + 0xc) = uVar9 | 2;
                  uVar27 = uStack_54c | 2;
                }
                uStack_54c = uVar27;
                FUN_1001c64c1(param_5[10]);
                param_5[10] = 0.0;
                *(undefined4 *)(param_5 + 0xb) = 0;
                goto LAB_1003dcef0;
              }
            }
          }
        }
        else if ((int)uVar27 < 0x72617720) {
          if ((uVar27 == 0x696e3332) || (uVar27 == 0x6c70636d)) goto LAB_1003dcfd7;
        }
        else if ((uVar27 == 0x72617720) || ((uVar27 == 0x74776f73 || (uVar27 == 0x736f7774))))
        goto LAB_1003dcfd7;
      }
      goto LAB_1003dd128;
    }
LAB_1003dcef0:
    if (bVar29) goto LAB_1003dd128;
  }
  else {
    puVar15 = (uint *)param_5[10];
    if (puVar15 != (uint *)0x0) {
      if ((iVar7 != 0x756c6177) && (bVar29 = true, iVar7 != 0x616c6177)) goto LAB_1003dcf3a;
      FUN_1001c64c1();
      param_5[10] = 0.0;
      *(undefined4 *)(param_5 + 0xb) = 0;
    }
LAB_1003dd128:
    FUN_10015d841((float)*param_5,*(undefined4 *)((long)param_5 + 0x1c),1,&local_558);
  }
  if (param_7 != (undefined4 *)0x0) {
    *(double *)(param_7 + 8) = local_538;
    *(ulong *)(param_7 + 4) = CONCAT44(uStack_544,local_548);
    *(ulong *)(param_7 + 6) = CONCAT44(uStack_53c,uStack_540);
    *param_7 = local_558;
    param_7[1] = uStack_554;
    param_7[2] = uStack_550;
    param_7[3] = uStack_54c;
  }
  cVar6 = FUN_1001c5630(&local_558,param_5,0x28);
  iVar7 = 0;
  if (cVar6 == '\0') {
    local_448 = param_5[4];
    local_468 = *(undefined4 *)param_5;
    uStack_464 = *(undefined4 *)((long)param_5 + 4);
    uStack_460 = *(undefined4 *)(param_5 + 1);
    uStack_450 = *(undefined4 *)(param_5 + 3);
    iStack_44c = *(int *)((long)param_5 + 0x1c);
    uStack_458 = (undefined2)*(undefined4 *)(param_5 + 2);
    uStack_456 = (undefined2)((uint)*(undefined4 *)(param_5 + 2) >> 0x10);
    uStack_454 = (undefined2)*(undefined4 *)((long)param_5 + 0x14);
    uStack_452 = (undefined2)((uint)*(undefined4 *)((long)param_5 + 0x14) >> 0x10);
    uStack_45c = (undefined2)*(undefined4 *)((long)param_5 + 0xc);
    uStack_45a = (undefined2)((uint)*(undefined4 *)((long)param_5 + 0xc) >> 0x10);
    if (*(int *)(param_5 + 1) != 0x6c70636d) {
      uStack_450 = 0;
      local_448 = (double)((ulong)local_448 & 0xffffffff00000000);
    }
    iVar7 = _AudioConverterNew(&local_468,&local_558,&local_4f0);
    if (iVar7 == 0) {
      iVar8 = 0;
      iVar7 = 0;
      if (((param_5[10] != 0.0) && (*(int *)(param_5 + 0xb) != 0)) &&
         (iVar7 = _AudioConverterSetProperty(local_4f0,0x646d6763), iVar7 == 0)) {
        local_510 = (long *)CONCAT44(local_510._4_4_,0x28);
        iVar12 = _AudioConverterGetProperty(local_4f0,0x61636964,&local_510,&local_468);
        iVar7 = iVar8;
        if ((iVar12 == 0) && (cVar6 = FUN_1001c5630(&local_468,param_5,0x28), cVar6 == '\0')) {
          if (((double)CONCAT44(uStack_464,local_468) != *param_5) ||
             (NAN((double)CONCAT44(uStack_464,local_468)) || NAN(*param_5))) {
            uVar13 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar13,0x10);
            if (cVar6 != '\0') {
              local_68 = 0x8220202;
              local_64 = 0x7a0a90;
              uStack_60 = 1;
              uStack_5e = 0;
              uStack_5c = 0x822;
              local_5a = 0xb0eb;
              uStack_58 = 0x7c;
              uStack_56 = 1;
              uStack_54 = 0;
              __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_68,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
          if (iStack_44c != *(int *)((long)param_5 + 0x1c)) {
            uVar13 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar13,0x10);
            if (cVar6 != '\0') {
              local_68 = 0x8220202;
              local_64 = 0x7a0a90;
              uStack_60 = 1;
              uStack_5e = 0;
              uStack_5c = 0x822;
              local_5a = 0xb129;
              uStack_58 = 0x7c;
              uStack_56 = 1;
              uStack_54 = 0;
              __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_68,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
          iVar8 = CONCAT22(uStack_456,uStack_458);
          if ((iVar8 != 0) && (iVar8 != *(int *)(param_5 + 2))) {
            *(int *)(param_5 + 2) = iVar8;
          }
          iVar8 = CONCAT22(uStack_452,uStack_454);
          if ((iVar8 != 0) && (iVar8 != *(int *)((long)param_5 + 0x14))) {
            *(int *)((long)param_5 + 0x14) = iVar8;
          }
          param_5[6] = (double)((ulong)((long)param_5[8] - (long)param_5[7]) /
                               (ulong)*(uint *)(param_5 + 2));
        }
      }
    }
  }
  if (local_4f0 == 0) {
LAB_1003dd207:
    if (local_4e8 == (long *)0x0) goto LAB_1003dd21d;
    lVar20 = 0;
  }
  else if ((local_4e8 == (long *)0x0) || (lVar20 = local_4f0, iVar7 != 0)) {
    _AudioConverterDispose();
    goto LAB_1003dd207;
  }
  *local_4e8 = lVar20;
LAB_1003dd21d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar7;
LAB_1003dcafe:
  plVar18 = local_470;
  iVar8 = iVar10;
  if (iVar12 == 4) {
LAB_1003dcb71:
    if (*(int *)((long)param_5 + 0x1c) - 1U < 2) {
      if (iVar8 == -0x27) {
        if ((*(int *)(param_5 + 1) != 0) && (iVar7 = 0, param_5[6] != 0.0)) goto LAB_1003dce6b;
LAB_1003dcbcf:
        if (param_5[10] != 0.0) {
          FUN_1001c64c1();
          param_5[10] = 0.0;
        }
      }
      else if (iVar8 != 0) goto LAB_1003dcbcf;
      iVar7 = -0xd0;
      if (iVar8 != -0x27) {
        iVar7 = iVar8;
      }
    }
    else {
      uVar13 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar13,0x10);
      if (cVar6 != '\0') {
        local_68 = 0x8220202;
        local_64 = 0x7a0a90;
        uStack_60 = 1;
        uStack_5e = 0;
        uStack_5c = 0x822;
        local_5a = 0xaf3c;
        uStack_58 = 0x7c;
        uStack_56 = 1;
        uStack_54 = 0;
        __os_log_error_impl(0x100000000,uVar13,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
      }
      FUN_1001782e9(0,0);
      iVar7 = -0x842;
    }
  }
  goto LAB_1003dce6b;
}

