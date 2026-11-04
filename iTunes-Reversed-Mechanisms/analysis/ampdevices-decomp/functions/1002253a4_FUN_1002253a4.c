// name: FUN_1002253a4
// address: 1002253a4

int FUN_1002253a4(char param_1,ulong param_2,undefined8 param_3,char *param_4,undefined4 param_5,
                 undefined4 *param_6,void *param_7)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  void *pvVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  void *pvVar13;
  size_t sVar14;
  ulong uVar15;
  void *pvVar16;
  undefined4 *puVar17;
  long lVar18;
  void *pvVar19;
  bool bVar20;
  undefined1 auVar21 [16];
  undefined1 *local_1570;
  undefined1 *local_1568;
  undefined2 local_155c;
  undefined1 *local_1540;
  undefined4 local_1538;
  undefined4 uStack_1534;
  undefined4 uStack_1530;
  undefined4 uStack_152c;
  undefined4 local_1528;
  undefined4 uStack_1524;
  undefined4 uStack_1520;
  undefined4 uStack_151c;
  undefined1 local_1510 [16];
  undefined1 local_1500 [20];
  undefined4 local_14ec;
  undefined4 *local_14e8;
  undefined4 local_14dc;
  undefined1 local_14d8 [1056];
  undefined1 local_10b8 [1056];
  undefined4 local_c98;
  char *local_c94;
  undefined2 local_c8c;
  char *local_c8a;
  undefined1 local_878 [1056];
  undefined4 local_458;
  char *local_454;
  undefined2 local_44c;
  int local_44a;
  undefined1 local_438 [512];
  undefined1 local_238 [504];
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x1002253bc;
  local_14ec = param_5;
  auVar21 = FUN_100108310();
  pvVar13 = auVar21._8_8_;
  lVar4 = -auVar21._0_8_;
  cVar7 = (char)param_4;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *(undefined8 *)((long)&local_38 + lVar4) = 0x1002253f0;
  FUN_1001b7a44(local_1510);
  if (param_7 == (void *)0x0) {
    *(undefined8 *)((long)&local_38 + lVar4) = 0x100225484;
    uVar10 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar4) = 0x100225494;
    cVar7 = _os_log_type_enabled(uVar10,0x10);
    if (cVar7 != '\0') {
      local_c8a = "outFolderSpec != nullptr";
LAB_10022554e:
      local_c8c = 0x822;
      local_c94 = "Assertion failure";
      local_c98 = 0x8220202;
      *(undefined8 *)((long)&local_38 + lVar4) = 0x100225573;
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_c98,0x16);
    }
  }
  else {
    *(undefined8 *)((long)&local_38 + lVar4) = 0x100225407;
    FUN_1001c62d9(param_7,0x420);
    if (pvVar13 == (void *)0x0) {
      *(undefined8 *)((long)&local_38 + lVar4) = 0x1002254cd;
      uVar10 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar4) = 0x1002254dd;
      cVar7 = _os_log_type_enabled(uVar10,0x10);
      if (cVar7 != '\0') {
        local_c8a = "bundleFileSpec != nullptr";
        goto LAB_10022554e;
      }
    }
    else {
      *(undefined8 *)((long)&local_38 + lVar4) = 0x100225418;
      cVar6 = FUN_100247c62(param_2 & 0xffffffff);
      if (cVar6 != '\0') {
        *(undefined8 *)((long)&local_38 + lVar4) = 0x10022542d;
        uVar10 = FUN_100416f20(param_2 & 0xffffffff,0x10cc007b);
        *(undefined8 *)((long)&local_38 + lVar4) = 0x10022543c;
        FUN_1001b81f2(local_1510,uVar10);
        pvVar5 = DAT_1008a2db0;
        pvVar16 = DAT_1008a2da8;
        local_14e8 = param_6;
        if (param_1 != '\0') {
          for (; pvVar16 != pvVar5; pvVar16 = (void *)((long)pvVar16 + 0x840)) {
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10022546e;
            cVar6 = FUN_10017f77e(pvVar13,pvVar16);
            if (cVar6 != '\0') {
              *(undefined8 *)((long)&local_38 + lVar4) = 0x1002255d2;
              _memcpy(local_14d8,(void *)((long)pvVar16 + 0x420),0x420);
              plVar2 = *(long **)(local_14e8 + 2);
              local_1538 = *local_14e8;
              uStack_1534 = local_14e8[1];
              uStack_1530 = local_14e8[2];
              uStack_152c = local_14e8[3];
              if (plVar2 != (long *)0x0) {
                LOCK();
                plVar2[1] = plVar2[1] + 1;
                UNLOCK();
              }
              param_4 = (char *)&local_1538;
              *(undefined8 *)((long)&local_38 + lVar4) = 0x10022560d;
              iVar8 = FUN_100225f55(pvVar13,local_14d8,1,param_4);
              if (plVar2 != (long *)0x0) {
                LOCK();
                plVar1 = plVar2 + 1;
                lVar18 = *plVar1;
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (lVar18 == 0) {
                  pcVar3 = *(code **)(*plVar2 + 0x10);
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100225632;
                  (*pcVar3)(plVar2);
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x10022563a;
                  std::__shared_weak_count::__release_weak();
                }
              }
              if (iVar8 == 0) {
                *(undefined8 *)((long)&local_38 + lVar4) = 0x100225943;
                _memcpy(param_7,local_14d8,0x420);
                iVar8 = 0;
                goto LAB_100225582;
              }
              *(undefined8 *)((long)&local_38 + lVar4) = 0x100225654;
              iVar8 = FUN_100182d59(local_14d8,1);
              if ((iVar8 != -0x80) && (iVar8 != 0)) {
                *(undefined8 *)((long)&local_38 + lVar4) = 0x100225666;
                uVar10 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar4) = 0x100225676;
                cVar6 = _os_log_type_enabled(uVar10,0x10);
                if (cVar6 != '\0') {
                  local_c98 = 0x8220202;
                  local_c94 = "Assertion failure";
                  local_c8c = 0x400;
                  local_c8a = (char *)CONCAT44(local_c8a._4_4_,iVar8);
                  param_4 = "%{public}s: err == (%d)";
                  *(undefined8 *)((long)&local_38 + lVar4) = 0x100225ede;
                  __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_c98,
                                      0x12);
                }
              }
              break;
            }
          }
        }
        if (cVar7 == '\0') {
          local_14dc = 0;
          puVar17 = local_14e8;
LAB_10022571c:
          *(undefined8 *)((long)&local_38 + lVar4) = 0x100225728;
          FUN_1001b7a44(local_1500);
          *(undefined8 *)((long)&local_38 + lVar4) = 0x100225739;
          FUN_1001c62d9(local_14d8,0x420);
          *(undefined8 *)((long)&local_38 + lVar4) = 0x100225746;
          uVar10 = FUN_100416f20(param_2 & 0xffffffff,0x10cc007b);
          *(undefined8 *)((long)&local_38 + lVar4) = 0x100225755;
          FUN_1001b81f2(local_1500,uVar10);
          *(undefined8 *)((long)&local_38 + lVar4) = 0x100225761;
          iVar8 = FUN_10018e9e7(&local_c98);
          if (iVar8 == -0x80) {
LAB_100225843:
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10022584f;
            FUN_1001b7a50(local_1500);
            iVar8 = -0x80;
            goto LAB_100225582;
          }
          if (iVar8 == 0) {
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100225789;
            FUN_1001bb41a(local_1500,local_238);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10022579f;
            FUN_1001e26e1("-Temporary-Files",local_238);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x1002257b5;
            FUN_1001e04f5(".noindex",local_438);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x1002257c6;
            FUN_1001c62d9(&local_1570,0x38);
            local_155c = 0x2d;
            *(undefined8 *)((long)&local_38 + lVar4) = 0x1002257ea;
            local_1570 = local_238;
            local_1568 = local_438;
            local_1540 = local_238;
            iVar8 = FUN_10018166a(&local_c98);
            if (iVar8 == -0x80) goto LAB_100225843;
            if (iVar8 != 0) {
              *(undefined8 *)((long)&local_38 + lVar4) = 0x1002258e2;
              uVar10 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar4) = 0x1002258f2;
              cVar7 = _os_log_type_enabled(uVar10,0x10);
              goto joined_r0x000100225871;
            }
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100225815;
            iVar8 = FUN_100181256(&local_c98,local_238,local_14d8);
            if (iVar8 == -0x80) goto LAB_100225843;
            if (iVar8 != 0) {
              *(undefined8 *)((long)&local_38 + lVar4) = 0x100225950;
              uVar10 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar4) = 0x100225960;
              cVar7 = _os_log_type_enabled(uVar10,0x10);
              goto joined_r0x000100225871;
            }
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100225832;
            FUN_10018e077(local_14d8);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10022583e;
            FUN_1001b7a50(local_1500);
          }
          else {
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10022585f;
            uVar10 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10022586f;
            cVar7 = _os_log_type_enabled(uVar10,0x10);
joined_r0x000100225871:
            if (cVar7 != '\0') {
              local_44c = 0x400;
              local_454 = "Assertion failure";
              local_458 = 0x8220202;
              *(undefined8 *)((long)&local_38 + lVar4) = 0x1002259a9;
              local_44a = iVar8;
              __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_458,0x12)
              ;
            }
            *(undefined8 *)((long)&local_38 + lVar4) = 0x1002259b5;
            FUN_1001b7a50(local_1500);
            if (iVar8 != 0) {
              *(undefined8 *)((long)&local_38 + lVar4) = 0x1002259bf;
              uVar10 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar4) = 0x1002259cf;
              cVar7 = _os_log_type_enabled(uVar10,0x10);
              if (cVar7 != '\0') {
                local_c98 = 0x8220202;
                local_c94 = "Assertion failure";
                local_c8c = 0x400;
                local_c8a = (char *)CONCAT44(local_c8a._4_4_,iVar8);
                *(undefined8 *)((long)&local_38 + lVar4) = 0x100225d18;
                __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_c98,
                                    0x12);
              }
              bVar20 = false;
              goto LAB_100225a92;
            }
          }
          plVar2 = *(long **)(puVar17 + 2);
          local_1528 = *puVar17;
          uStack_1524 = puVar17[1];
          uStack_1520 = puVar17[2];
          uStack_151c = puVar17[3];
          if (plVar2 != (long *)0x0) {
            LOCK();
            plVar2[1] = plVar2[1] + 1;
            UNLOCK();
          }
          *(undefined8 *)((long)&local_38 + lVar4) = 0x100225a11;
          iVar9 = FUN_100225f55(pvVar13,local_14d8,0,&local_1528);
          if (plVar2 != (long *)0x0) {
            LOCK();
            plVar1 = plVar2 + 1;
            lVar18 = *plVar1;
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (lVar18 == 0) {
              pcVar3 = *(code **)(*plVar2 + 0x10);
              *(undefined8 *)((long)&local_38 + lVar4) = 0x100225a36;
              (*pcVar3)(plVar2);
              *(undefined8 *)((long)&local_38 + lVar4) = 0x100225a3e;
              std::__shared_weak_count::__release_weak();
            }
          }
          if (iVar9 + 0x80U != 0) {
            if (iVar9 != 0) {
              *(undefined8 *)((long)&local_38 + lVar4) = 0x100225a55;
              uVar10 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar4) = 0x100225a65;
              cVar7 = _os_log_type_enabled(uVar10,0x10);
              if (cVar7 != '\0') {
                local_c98 = 0x8220202;
                local_c94 = "Assertion failure";
                local_c8c = 0x400;
                local_c8a = (char *)CONCAT44(local_c8a._4_4_,iVar9);
                *(undefined8 *)((long)&local_38 + lVar4) = 0x100225e94;
                __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_c98,
                                    0x12);
              }
              if (iVar9 != 0) goto LAB_100225a76;
            }
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100225b57;
            _memcpy(param_7,local_14d8,0x420);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100225b6b;
            _memcpy(&local_c98,pvVar13,0x420);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100225b7f;
            _memcpy(local_878,local_14d8,0x420);
            pvVar13 = DAT_1008a2db0;
            if (DAT_1008a2db0 < DAT_1008a2db8) {
              *(undefined8 *)((long)&local_38 + lVar4) = 0x100225ba6;
              _memcpy(DAT_1008a2db0,&local_c98,0x840);
              pvVar13 = (void *)((long)pvVar13 + 0x840);
            }
            else {
              sVar14 = (long)DAT_1008a2db0 - (long)DAT_1008a2da8;
              lVar18 = (long)sVar14 >> 6;
              uVar12 = lVar18 * 0xf83e0f83e0f83e1 + 1;
              if (0x1f07c1f07c1f07 < uVar12) {
                *(undefined8 *)((long)&local_38 + lVar4) = 0x100225eed;
                FUN_10022ab82();
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              lVar11 = (long)DAT_1008a2db8 - (long)DAT_1008a2da8 >> 6;
              uVar15 = lVar11 * 0x1f07c1f07c1f07c2;
              if (uVar12 < uVar15) {
                uVar12 = uVar15;
              }
              uVar15 = 0x1f07c1f07c1f07;
              if ((ulong)(lVar11 * 0xf83e0f83e0f83e1) < 0xf83e0f83e0f83) {
                uVar15 = uVar12;
              }
              if (uVar15 == 0) {
                auVar21 = ZEXT816(0);
              }
              else {
                *(undefined8 *)((long)&local_38 + lVar4) = 0x100225c1c;
                auVar21 = FUN_10022ab92();
                sVar14 = (long)DAT_1008a2db0 - (long)DAT_1008a2da8;
              }
              pvVar5 = DAT_1008a2da8;
              pvVar19 = (void *)(lVar18 * 0x40 + auVar21._0_8_);
              pvVar16 = (void *)(auVar21._8_8_ * 0x840 + auVar21._0_8_);
              *(undefined8 *)((long)&local_38 + lVar4) = 0x100225c61;
              _memcpy(pvVar19,&local_c98,0x840);
              pvVar13 = (void *)((long)pvVar19 + 0x840);
              pvVar19 = (void *)((long)pvVar19 - sVar14);
              *(undefined8 *)((long)&local_38 + lVar4) = 0x100225c75;
              _memcpy(pvVar19,pvVar5,sVar14);
              pvVar5 = DAT_1008a2da8;
              bVar20 = DAT_1008a2da8 != (void *)0x0;
              DAT_1008a2da8 = pvVar19;
              DAT_1008a2db8 = pvVar16;
              if (bVar20) {
                *(undefined8 *)((long)&local_38 + lVar4) = 0x100225c9b;
                DAT_1008a2db0 = pvVar13;
                operator_delete(pvVar5);
              }
            }
            iVar8 = 0;
            DAT_1008a2db0 = pvVar13;
            if (DAT_1008a2dc0 == 0) {
              iVar8 = 0;
              *(undefined8 *)((long)&local_38 + lVar4) = 0x100225cce;
              FUN_1001c0fbe(FUN_10022637c,0,0,0,&DAT_1008a2dc0);
            }
            goto LAB_100225582;
          }
LAB_100225a76:
          iVar8 = 0x57b;
          if (iVar9 == -0x22) {
            iVar8 = -0x22;
          }
          if ((iVar9 + 0x80U & 0xffffff7f) == 0) {
            iVar8 = iVar9;
          }
          bVar20 = true;
        }
        else {
          *(undefined8 *)((long)&local_38 + lVar4) = 0x100225696;
          iVar8 = FUN_1002e19de(pvVar13,local_10b8);
          puVar17 = local_14e8;
          if (iVar8 == -0x80) goto LAB_100225582;
          if (iVar8 == 0) {
            *(undefined8 *)((long)&local_38 + lVar4) = 0x1002256c3;
            cVar7 = FUN_1002e1295(pvVar13,local_10b8,0);
            local_14dc = (undefined4)CONCAT71((int7)((ulong)param_4 >> 8),1);
            if (cVar7 != '\0') goto LAB_10022571c;
            *(undefined8 *)((long)&local_38 + lVar4) = 0x1002256d4;
            uVar10 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar4) = 0x1002256e4;
            cVar7 = _os_log_type_enabled(uVar10,0x10);
            if (cVar7 != '\0') {
              local_c98 = 0x8220202;
              local_c94 = "Assertion failure";
              local_c8c = 0x822;
              local_c8a = "signatureVerified";
              *(undefined8 *)((long)&local_38 + lVar4) = 0x100225e00;
              __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_c98,0x16
                                 );
            }
            bVar20 = false;
            *(undefined8 *)((long)&local_38 + lVar4) = 0x1002256f8;
            uVar10 = FUN_1001782e9(0,0);
            iVar8 = 0x57b;
            local_14dc = (undefined4)CONCAT71((int7)((ulong)uVar10 >> 8),1);
          }
          else {
            *(undefined8 *)((long)&local_38 + lVar4) = 0x1002258b3;
            uVar10 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar4) = 0x1002258c3;
            cVar7 = _os_log_type_enabled(uVar10,0x10);
            if (cVar7 != '\0') {
              local_c98 = 0x8220202;
              local_c94 = "Assertion failure";
              local_c8c = 0x400;
              local_c8a = (char *)CONCAT44(local_c8a._4_4_,iVar8);
              *(undefined8 *)((long)&local_38 + lVar4) = 0x100225d62;
              __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_c98,0x12)
              ;
            }
            bVar20 = false;
            local_14dc = 0;
          }
        }
LAB_100225a92:
        if ((char)local_14ec == '\x01' && iVar8 == 0x57b) {
          *(undefined8 *)((long)&local_38 + lVar4) = 0x100225ab1;
          iVar9 = FUN_100182d4d(pvVar13);
          if ((iVar9 != -0x80) && (iVar9 != 0)) {
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100225ac1;
            uVar10 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100225ad1;
            cVar7 = _os_log_type_enabled(uVar10,0x10);
            if (cVar7 != '\0') {
              local_c98 = 0x8220202;
              local_c94 = "Assertion failure";
              local_c8c = 0x400;
              local_c8a = (char *)CONCAT44(local_c8a._4_4_,iVar9);
              *(undefined8 *)((long)&local_38 + lVar4) = 0x100225daf;
              __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_c98,0x12)
              ;
            }
          }
          if ((char)local_14dc != '\0') {
            *(undefined8 *)((long)&local_38 + lVar4) = 0x100225aee;
            iVar9 = FUN_100182d4d(local_10b8);
            if ((iVar9 != -0x80) && (iVar9 != 0)) {
              *(undefined8 *)((long)&local_38 + lVar4) = 0x100225afe;
              uVar10 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar4) = 0x100225b0e;
              cVar7 = _os_log_type_enabled(uVar10,0x10);
              if (cVar7 != '\0') {
                local_c98 = 0x8220202;
                local_c94 = "Assertion failure";
                local_c8c = 0x400;
                local_c8a = (char *)CONCAT44(local_c8a._4_4_,iVar9);
                *(undefined8 *)((long)&local_38 + lVar4) = 0x100225e4a;
                __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_c98,
                                    0x12);
              }
            }
          }
        }
        if (bVar20 && iVar8 != 0) {
          *(undefined8 *)((long)&local_38 + lVar4) = 0x100225b3a;
          FUN_100182d59(local_14d8,1);
        }
        goto LAB_100225582;
      }
      *(undefined8 *)((long)&local_38 + lVar4) = 0x100225513;
      uVar10 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar4) = 0x100225523;
      cVar7 = _os_log_type_enabled(uVar10,0x10);
      if (cVar7 != '\0') {
        local_c8a = "IsSoftwareUpdateRestoreDeviceClass(deviceClass)";
        goto LAB_10022554e;
      }
    }
  }
  iVar8 = -0x32;
  *(undefined8 *)((long)&local_38 + lVar4) = 0x100225582;
  FUN_1001782e9(0,0);
LAB_100225582:
  *(undefined8 *)((long)&local_38 + lVar4) = 0x10022558e;
  FUN_1001b7a50(local_1510);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)&local_38 + lVar4) = 0x100225ee8;
  ___stack_chk_fail();
}

