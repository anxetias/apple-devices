// name: FUN_10041f6be
// address: 10041f6be

ulong FUN_10041f6be(long param_1,char *param_2,undefined8 param_3,char *param_4)

{
  long *plVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  ushort uVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  int iVar14;
  undefined1 *puVar15;
  char *pcVar16;
  ulong uVar17;
  bool bVar18;
  undefined8 in_stack_fffffffffffff7c8;
  undefined4 *puVar19;
  undefined4 uVar20;
  undefined8 in_stack_fffffffffffff7d8;
  undefined4 uVar21;
  undefined8 in_stack_fffffffffffff7e0;
  undefined4 uVar22;
  undefined1 local_7e8 [16];
  undefined1 local_7d8 [8];
  long *local_7d0;
  undefined1 local_7c8 [16];
  undefined1 local_7b8 [16];
  undefined1 local_7a8 [16];
  undefined1 local_798 [16];
  undefined1 local_788 [16];
  ulong local_778 [2];
  undefined1 local_761;
  undefined8 local_760;
  undefined4 local_754;
  undefined8 local_750;
  undefined4 local_748;
  undefined4 local_744;
  undefined4 local_740;
  short local_73a;
  long local_738 [4];
  long *local_718;
  undefined4 local_708;
  undefined4 local_704;
  undefined4 uStack_700;
  undefined2 local_6fc;
  undefined2 local_6fa;
  undefined2 uStack_6f8;
  undefined4 uStack_6f6;
  undefined2 local_6f2;
  undefined8 local_6f0;
  undefined1 local_6e0 [32];
  undefined8 local_6c0 [2];
  undefined1 local_6b0 [68];
  undefined2 local_66c;
  undefined4 local_628;
  undefined1 local_90 [8];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined2 uStack_78;
  undefined4 uStack_76;
  long local_38;
  
  uVar20 = (undefined4)((ulong)in_stack_fffffffffffff7c8 >> 0x20);
  uVar21 = (undefined4)((ulong)in_stack_fffffffffffff7d8 >> 0x20);
  uVar22 = (undefined4)((ulong)in_stack_fffffffffffff7e0 >> 0x20);
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_73a = 0;
  lVar8 = FUN_100279b99();
  cVar2 = '\x01';
  if ((*(char *)(lVar8 + 0x1b) == '\0') && (*(int *)(param_1 + 0x58) != 0x57617463)) {
    if (*param_2 == '\0') {
      cVar2 = param_2[4];
    }
    else {
      cVar2 = '\0';
    }
  }
  *(undefined2 *)(param_1 + 0x1357) = 0;
  if (param_2[2] == '\0' && param_2[1] == '\0') {
    *(undefined2 *)(param_1 + 0x1354) = 0;
  }
  lVar8 = FUN_10041dd48(param_1 + 0x1310,param_3);
  if (((*(char *)(param_1 + 0x5c) == '\x01') && (*(int *)(param_1 + 0x80) != 0)) &&
     (*(char *)(param_1 + 0x1354) == '\0')) {
    lVar8 = FUN_1004de449();
    if (lVar8 == 0) {
      uVar9 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar9,0x10);
      if (cVar4 != '\0') {
        local_708 = 0x8220202;
        local_704 = 0x7a0a90;
        uStack_700 = 1;
        local_6fc = 0x822;
        local_6fa = 0xde6a;
        uStack_6f8 = 0x7a;
        uStack_6f6 = 1;
        param_4 = "%{public}s: (%{public}s)";
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_708,0x16);
      }
      lVar8 = FUN_1001782e9(0,0);
    }
    else if ((*(long *)(lVar8 + 0x7168) != 0) && (lVar8 = FUN_1005c43fa(), (char)lVar8 != '\0')) {
      FUN_1005462f1(*(undefined4 *)(param_1 + 0x58),param_1 + 0x60,param_1 + 0x4c8);
      uVar17 = 0xffffff80;
      goto LAB_100420971;
    }
  }
  if (cVar2 == '\0') {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    uVar10 = CONCAT71((int7)((ulong)lVar8 >> 8),param_2[2] | param_2[1]);
    if ((byte)(param_2[2] | param_2[1]) == 0) {
      uVar20 = 0;
      uVar10 = 0;
      uVar7 = FUN_10024f5ea(param_1 + 0x4c8,*(undefined4 *)(param_1 + 0x58),
                            *(int *)(param_1 + 0x554) != 0,0,0,0,0,0);
      uVar17 = (ulong)uVar7;
      if (uVar7 != 0xffffff80) {
        if (uVar7 == 0) {
          bVar3 = *(byte *)(param_1 + 0x5c);
          if (bVar3 == 1) {
            puVar19 = &local_88;
            FUN_10024f22a(puVar19);
            FUN_100249e02(&local_708,param_1 + 0x4c0);
            FUN_10017060f(local_6c0[0]);
            local_6c0[0] = FUN_1001705fc(PTR_cf_Unlocked_10083eff8);
            uVar22 = 0;
            uVar10 = 0;
            uVar21 = 0;
            cVar2 = FUN_10024d72a(0,2,&local_708,0,1,0,puVar19,0,0,0,0,0,0,0);
            uVar20 = (undefined4)((ulong)puVar19 >> 0x20);
            FUN_100249ea6(&local_708);
            FUN_10024f3ba(&local_88);
            if (cVar2 == '\0') {
              sVar5 = FUN_1004174a0(*(undefined4 *)(param_1 + 0x58),0x10f1,0x10f3,0x10f2,0x10f4,
                                    0x111b,CONCAT44(uVar20,0x112d),uVar10 & 0xffffffff00000000,
                                    CONCAT44(uVar21,0x1132),CONCAT44(uVar22,0x1135));
              uVar17 = 0;
              FUN_100243ece((int)sVar5,0,0x64a,param_1 + 0x4c8);
              goto LAB_100420969;
            }
            bVar3 = *(byte *)(param_1 + 0x5c);
          }
          if (((bVar3 & 1) == 0) || (*(int *)(param_1 + 0x84) == 0)) goto LAB_10041f9ef;
          uVar9 = CONCAT44(uVar20,0x1114);
          local_73a = FUN_1004174a0(*(undefined4 *)(param_1 + 0x58),0x10e6,0x10e7,0x10e5,0x10e8,
                                    0x1107,uVar9,uVar10 & 0xffffffff00000000,CONCAT44(uVar21,0x1117)
                                    ,CONCAT44(uVar22,0x1119));
          uVar20 = (undefined4)((ulong)uVar9 >> 0x20);
          uVar9 = FUN_1005e9a2c();
          uVar7 = FUN_1005ed8b2(uVar9,*(undefined4 *)(param_1 + 0x84),&local_88);
          uVar17 = (ulong)uVar7;
          if (uVar7 == 0xffffff80) goto LAB_100420957;
          if (uVar7 != 0) {
            uVar9 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar9,0x10);
            if (cVar2 == '\0') goto LAB_100420957;
            local_6fa = (undefined2)uVar7;
            uStack_6f8 = (undefined2)(uVar7 >> 0x10);
            goto LAB_1004209f6;
          }
          if ((char)local_88 == '\x01') {
            uVar9 = FUN_1005e9a2c();
            uVar7 = FUN_1005ed98c(uVar9,*(undefined4 *)(param_1 + 0x84));
            uVar17 = (ulong)uVar7;
            if (uVar7 != 0xffffff80) {
              if (uVar7 == 0) goto LAB_10041f9ef;
              uVar9 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar9,0x10);
              if (cVar2 != '\0') {
                local_6fa = (undefined2)uVar7;
                uStack_6f8 = (undefined2)(uVar7 >> 0x10);
                goto LAB_1004209f6;
              }
            }
            goto LAB_100420957;
          }
LAB_10041f9ef:
          if (*(int *)(param_1 + 0x80) == 0) {
            iVar14 = *(int *)(param_1 + 0x84);
            if (iVar14 == 0) {
              uVar9 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar9,0x10);
              if (cVar2 != '\0') {
                local_708 = 0x8220202;
                local_704 = 0x7a0a90;
                uStack_700 = 1;
                local_6fc = 0x822;
                local_6fa = 0xd73e;
                uStack_6f8 = 0x7c;
                uStack_6f6 = 1;
                __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_708,
                                    0x16);
              }
              FUN_1001782e9(0,0);
              iVar14 = *(int *)(param_1 + 0x84);
            }
            lVar8 = 0;
LAB_10041fdbc:
            uVar7 = FUN_10025a150(2,lVar8,1,iVar14);
            uVar17 = (ulong)uVar7;
            if (uVar7 != 0xffffff80) {
              if (uVar7 == 0) {
                param_4 = (char *)0x0;
                uVar10 = FUN_10041b42a(param_1,0,1,1,&local_73a);
                uVar17 = uVar10 & 0xffffffff;
                if ((int)uVar10 != -0x80) {
                  if ((int)uVar10 == 0) goto LAB_10041fe10;
                  uVar9 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar9,0x10);
                  if (cVar2 != '\0') {
                    local_6fa = (undefined2)uVar10;
                    uStack_6f8 = (undefined2)(uVar10 >> 0x10);
                    goto LAB_1004209f6;
                  }
                }
              }
              else {
                uVar9 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar9,0x10);
                if (cVar2 != '\0') {
                  local_6fa = (undefined2)uVar7;
                  uStack_6f8 = (undefined2)(uVar7 >> 0x10);
LAB_1004209f6:
                  local_6fc = 0x400;
                  uStack_700 = 1;
                  local_704 = 0x7a0a90;
                  local_708 = 0x8220202;
                  __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_708,
                                      0x12);
                }
              }
            }
            goto LAB_100420957;
          }
          lVar8 = FUN_1004de449();
          if (lVar8 != 0) {
            iVar14 = 0;
            goto LAB_10041fdbc;
          }
          uVar9 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar9,0x10);
          if (cVar2 != '\0') {
            local_708 = 0x8220202;
            local_704 = 0x7a0a90;
            uStack_700 = 1;
            local_6fc = 0x822;
            local_6fa = 0xde6a;
            uStack_6f8 = 0x7a;
            uStack_6f6 = 1;
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_708,0x16);
          }
          FUN_1001782e9(0,0);
LAB_1004205b3:
          uVar17 = 0x45f;
          goto LAB_100420957;
        }
        if (*(int *)(param_1 + 0x554) == 0) {
          if (uVar7 == 0x5ca) {
            uVar9 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar9,0x10);
            if (cVar2 != '\0') {
              local_708 = 0x8220202;
              local_704 = 0x7a0a90;
              uStack_700 = 1;
              local_6fc = 0x822;
              local_6fa = 0xd669;
              uStack_6f8 = 0x7c;
              uStack_6f6 = 1;
              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_708,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
          *(undefined4 *)(param_1 + 0x1300) = 6;
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar9 = DAT_1008c75b8;
          cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar2 != '\0') {
            local_750 = FUN_1001b83ae(param_1 + 0x60);
            cVar2 = FUN_1001df957("setting","",0);
            pcVar16 = "in";
            if (cVar2 == '\0') {
              pcVar16 = "setting";
            }
            local_6f0 = FUN_1004194cc(*(undefined4 *)(param_1 + 0x1300));
            local_708 = 0x8200302;
            local_704 = (undefined4)local_750;
            uStack_700 = (undefined4)((ulong)local_750 >> 0x20);
            local_6fc = 0x820;
            local_6fa = SUB82(pcVar16,0);
            uStack_6f8 = (undefined2)((ulong)pcVar16 >> 0x10);
            uStack_6f6 = (undefined4)((ulong)pcVar16 >> 0x20);
            local_6f2 = 0x820;
            __os_log_impl(0x100000000,uVar9,1,"\"%s\" %s state %s",&local_708,0x20);
          }
          FUN_10041c7bc(param_1,0x10e5,uVar17,0);
        }
        else {
          *(undefined4 *)(param_1 + 0x1300) = 6;
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar9 = DAT_1008c75b8;
          cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar2 != '\0') {
            local_750 = FUN_1001b83ae(param_1 + 0x60);
            cVar2 = FUN_1001df957("setting","",0);
            pcVar16 = "in";
            if (cVar2 == '\0') {
              pcVar16 = "setting";
            }
            local_6f0 = FUN_1004194cc(*(undefined4 *)(param_1 + 0x1300));
            local_708 = 0x8200302;
            local_704 = (undefined4)local_750;
            uStack_700 = (undefined4)((ulong)local_750 >> 0x20);
            local_6fc = 0x820;
            local_6fa = SUB82(pcVar16,0);
            uStack_6f8 = (undefined2)((ulong)pcVar16 >> 0x10);
            uStack_6f6 = (undefined4)((ulong)pcVar16 >> 0x20);
            local_6f2 = 0x820;
            __os_log_impl(0x100000000,uVar9,1,"\"%s\" %s state %s",&local_708,0x20);
          }
          FUN_10041c7bc(param_1,0x10e5,uVar17,1);
        }
      }
    }
    else {
LAB_10041fe10:
      if (*(int *)(param_1 + 0x550) == 0) {
        local_760 = (ulong)local_760._4_4_ << 0x20;
        uVar10 = CONCAT71((int7)(uVar10 >> 8),param_2[2] | param_2[1]);
        local_740 = 0;
        if ((byte)(param_2[2] | param_2[1]) == 0) goto LAB_10041fe65;
LAB_10041feab:
        bVar3 = *(byte *)(param_1 + 0x5c);
        if ((bVar3 == 1) &&
           (uVar10 = FUN_100247cdd(*(undefined4 *)(param_1 + 0x58)), (char)uVar10 == '\0')) {
          uVar10 = CONCAT71((int7)(uVar10 >> 8),1);
          local_754 = (undefined4)uVar10;
          if (*(char *)(param_1 + 0x1356) == '\0') {
            uVar9 = FUN_1005033a5(*(undefined4 *)(param_1 + 0x80));
            uVar10 = CONCAT71((int7)((ulong)uVar9 >> 8),(char)uVar9 == '\0');
            local_754 = (undefined4)uVar10;
            bVar3 = *(byte *)(param_1 + 0x5c);
          }
        }
        else {
          local_754 = 0;
        }
        uVar7 = local_750._4_4_;
        local_750 = (ulong)local_750._4_4_ << 0x20;
        if (((bVar3 & 1) != 0) && (param_2[3] == '\0')) {
          puVar15 = (undefined1 *)(param_1 + 0x63c);
          if (((param_2[2] | param_2[1]) & 1U) != 0) {
            puVar15 = (undefined1 *)(param_1 + 0x5a4);
          }
          local_750 = CONCAT44(uVar7,(int)CONCAT71((int7)(uVar10 >> 8),*puVar15));
        }
        iVar14 = *(int *)(param_1 + 0x80);
        if (iVar14 == 0) {
          if (param_2[2] == '\0') goto LAB_10042030b;
LAB_10042006c:
          if ((byte)local_750 == '\0') {
            if ((*(int *)(param_1 + 0x84) != 0) &&
               (cVar2 = FUN_100421501(param_1 + 0x4c8,*(undefined4 *)(param_1 + 0x58)),
               cVar2 == '\0')) goto LAB_1004204b5;
          }
          else {
            FUN_1001b7a5c(local_7e8,param_1 + 0x4c8);
            uVar21 = *(undefined4 *)(param_1 + 0x58);
            if (*(int *)(param_1 + 0x84) == 0) {
              bVar18 = false;
            }
            else {
              cVar2 = FUN_100247cdd(uVar21);
              bVar18 = cVar2 == '\0';
            }
            uVar17 = 0;
            cVar2 = FUN_100258d18(local_7e8,uVar21,param_1 + 0x570,0,bVar18);
            FUN_1001b7a50(local_7e8);
            if (cVar2 == '\0') goto LAB_100420957;
          }
LAB_10042030b:
          bVar3 = param_2[2];
          if ((param_2[1] == '\0') && ((((byte)local_760 | bVar3) & 1) == 0)) {
            cVar2 = FUN_10041d3eb(param_1 + 0x4c8,*(undefined4 *)(param_1 + 0x58),param_1 + 0x60,
                                  *(undefined4 *)(param_1 + 0x80),(undefined1)local_740,
                                  (undefined1)local_754,CONCAT44(uVar20,(uint)(byte)local_750));
            if (cVar2 == '\0') goto LAB_1004204b5;
            bVar3 = param_2[2];
          }
          if ((bVar3 == 0) && (*(int *)(param_1 + 0x80) != 0)) {
            lVar8 = FUN_1004de449();
            if (lVar8 == 0) {
              uVar9 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar9,0x10);
              if (cVar2 != '\0') {
                local_708 = 0x8220202;
                local_704 = 0x7a0a90;
                uStack_700 = 1;
                local_6fc = 0x822;
                local_6fa = 0xde6a;
                uStack_6f8 = 0x7a;
                uStack_6f6 = 1;
                __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_708,
                                    0x16);
              }
              FUN_1001782e9(0,0);
              goto LAB_1004205b3;
            }
            FUN_100315cf3(*(undefined8 *)(lVar8 + 0x30));
          }
          if (*param_2 == '\x01') {
            *(undefined4 *)(param_1 + 0x1300) = 6;
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar9 = DAT_1008c75b8;
            cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar2 != '\0') {
              local_750 = FUN_1001b83ae(param_1 + 0x60);
              cVar2 = FUN_1001df957("setting","",0);
              pcVar16 = "in";
              if (cVar2 == '\0') {
                pcVar16 = "setting";
              }
              local_6f0 = FUN_1004194cc(*(undefined4 *)(param_1 + 0x1300));
              local_708 = 0x8200302;
              local_704 = (undefined4)local_750;
              uStack_700 = (undefined4)((ulong)local_750 >> 0x20);
              local_6fc = 0x820;
              local_6fa = SUB82(pcVar16,0);
              uStack_6f8 = (undefined2)((ulong)pcVar16 >> 0x10);
              uStack_6f6 = (undefined4)((ulong)pcVar16 >> 0x20);
              local_6f2 = 0x820;
              __os_log_impl(0x100000000,uVar9,1,"\"%s\" %s state %s",&local_708,0x20);
            }
            if (*(long **)(param_1 + 0x1330) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_10016bf14();
            }
            cVar2 = *param_2;
            (**(code **)(**(long **)(param_1 + 0x1330) + 0x30))(local_7d8);
            uVar7 = FUN_100419d7e(param_1,cVar2,0,0,local_7d8,&local_73a);
            uVar17 = (ulong)uVar7;
            if (local_7d0 != (long *)0x0) {
              LOCK();
              plVar13 = local_7d0 + 1;
              lVar8 = *plVar13;
              *plVar13 = *plVar13 + -1;
              UNLOCK();
              if (lVar8 == 0) {
                (**(code **)(*local_7d0 + 0x10))(local_7d0);
                std::__shared_weak_count::__release_weak();
              }
            }
          }
          else {
            uVar7 = *(uint *)(param_1 + 0x554);
            if (*(int *)(param_1 + 0x550) == 0) {
              if ((uVar7 & 8) == 0) {
                uVar7 = FUN_10041f4c8(param_1,6,&local_73a);
              }
              else {
                if (*(char *)(param_1 + 0x1355) != '\0') {
                  uVar9 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar9,0x10);
                  if (cVar2 != '\0') {
                    local_708 = 0x8220202;
                    local_704 = 0x7a0a90;
                    uStack_700 = 1;
                    local_6fc = 0x822;
                    local_6fa = 0xd750;
                    uStack_6f8 = 0x7c;
                    uStack_6f6 = 1;
                    __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_708
                                        ,0x16);
                  }
                  FUN_1001782e9(0,0);
                }
                uVar7 = FUN_10041f4c8(param_1,1,&local_73a);
              }
            }
            else if (uVar7 == 8) {
              uVar7 = FUN_10041f4c8(param_1,1,&local_73a);
            }
            else {
              if (uVar7 != 0) {
                if (*(char *)(param_1 + 0x5c) != '\0') {
                  uVar9 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar9,0x10);
                  if (cVar2 != '\0') {
                    local_708 = 0x8220202;
                    local_704 = 0x7a0a90;
                    uStack_700 = 1;
                    local_6fc = 0x822;
                    local_6fa = 0xd771;
                    uStack_6f8 = 0x7c;
                    uStack_6f6 = 1;
                    __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_708
                                        ,0x16);
                  }
                  FUN_1001782e9(0,0);
                  uVar17 = 0x668;
                  goto LAB_100420957;
                }
                local_760 = param_1 + 0xec0;
                if ((uVar7 & 8) == 0) {
                  if ((uVar7 & 2) == 0) {
                    if ((uVar7 & 4) == 0) {
                      local_740 = 0x10cc00ef;
                      if ((uVar7 & 1) == 0) {
LAB_1004207f6:
                        uVar9 = FUN_1001cc310();
                        cVar2 = _os_log_type_enabled(uVar9,0x10);
                        if (cVar2 != '\0') {
                          local_708 = 0x8220202;
                          local_704 = 0x7a0a90;
                          uStack_700 = 1;
                          local_6fc = 0x822;
                          local_6fa = 0xd78f;
                          uStack_6f8 = 0x7c;
                          uStack_6f6 = 1;
                          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",
                                              &local_708,0x16);
                        }
                        FUN_1001782e9(0,0);
                        uVar9 = FUN_1001cc310();
                        cVar2 = _os_log_type_enabled(uVar9,0x10);
                        if (cVar2 != '\0') {
                          local_708 = 0x8220202;
                          local_704 = 0x7a0a90;
                          uStack_700 = 1;
                          local_6fc = 0x822;
                          local_6fa = 0xd7ce;
                          uStack_6f8 = 0x7c;
                          uStack_6f6 = 1;
                          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",
                                              &local_708,0x16);
                        }
                        FUN_1001782e9(0,0);
                        local_748 = 0x10cf0000;
                        local_744 = 0x10cf0000;
                        goto LAB_100420d47;
                      }
                      local_744 = 0x10cc00f3;
                    }
                    else {
                      local_744 = 0x10cc00f2;
                    }
                    local_760 = param_1 + 0xa80;
                    local_740 = 0x10cc00ef;
                    local_748 = 0x10cf0017;
                  }
                  else {
                    local_740 = 0x10cc00ef;
LAB_100420aa6:
                    local_744 = 0x10cc00f0;
                    local_748 = 0x10cf0016;
                  }
                }
                else {
                  if ((uVar7 & 2) != 0) {
                    local_740 = 0x10cc00ee;
                    goto LAB_100420aa6;
                  }
                  if ((uVar7 & 4) == 0) {
                    local_740 = 0x10cc00ee;
                    if ((uVar7 & 1) == 0) goto LAB_1004207f6;
                    local_744 = 0x10cc00f3;
                  }
                  else {
                    local_744 = 0x10cc00f1;
                  }
                  local_748 = 0x10cf0017;
                  local_740 = 0x10cc00ee;
                }
LAB_100420d47:
                uVar20 = *(undefined4 *)(param_1 + 0x58);
                FUN_10024a49a(&local_708,param_1 + 0x608);
                puVar19 = &local_88;
                FUN_10024a49a(puVar19,local_760 + 0x10);
                uVar6 = FUN_100421653(param_1 + 0x4c8,uVar20,local_740,local_744,local_748,
                                      &local_708,puVar19);
                uVar20 = (undefined4)((ulong)puVar19 >> 0x20);
                FUN_1001b7a50(&local_88);
                FUN_1001b7a50(&local_708);
                uVar17 = 0xffffff80;
                if ((uVar6 | 2) == 3) {
                  lVar8 = param_1 + 0x60;
                  cVar2 = FUN_10041d3eb(param_1 + 0x4c8,*(undefined4 *)(param_1 + 0x58),lVar8,
                                        *(undefined4 *)(param_1 + 0x80),0,(undefined1)local_754,
                                        CONCAT44(uVar20,(uint)(byte)local_750));
                  if (cVar2 != '\0') {
                    if (uVar6 == 1) {
                      if ((*(byte *)(param_1 + 0x554) & 8) == 0) {
                        *(undefined4 *)(param_1 + 0x1300) = 6;
                        if (DAT_1008c75c0 != -1) {
                          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                        }
                        uVar9 = DAT_1008c75b8;
                        cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
                        if (cVar2 != '\0') {
                          uVar12 = FUN_1001b83ae(lVar8);
                          cVar2 = FUN_1001df957("setting","",0);
                          pcVar16 = "in";
                          if (cVar2 == '\0') {
                            pcVar16 = "setting";
                          }
                          local_6f0 = FUN_1004194cc(*(undefined4 *)(param_1 + 0x1300));
                          local_708 = 0x8200302;
                          local_704 = (undefined4)uVar12;
                          uStack_700 = (undefined4)((ulong)uVar12 >> 0x20);
                          local_6fc = 0x820;
                          local_6fa = SUB82(pcVar16,0);
                          uStack_6f8 = (undefined2)((ulong)pcVar16 >> 0x10);
                          uStack_6f6 = (undefined4)((ulong)pcVar16 >> 0x20);
                          local_6f2 = 0x820;
                          __os_log_impl(0x100000000,uVar9,1,"\"%s\" %s state %s",&local_708,0x20);
                        }
                        if (*(long **)(param_1 + 0x1330) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_10016bf14();
                        }
                        (**(code **)(**(long **)(param_1 + 0x1330) + 0x30))(local_7b8);
                        uVar7 = FUN_100419d7e(param_1,0,0,0,local_7b8,&local_73a);
                        uVar17 = (ulong)uVar7;
                        puVar15 = local_7b8;
                      }
                      else {
                        *(undefined4 *)(param_1 + 0x1300) = 1;
                        if (DAT_1008c75c0 != -1) {
                          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                        }
                        uVar9 = DAT_1008c75b8;
                        cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
                        if (cVar2 != '\0') {
                          local_750 = FUN_1001b83ae(lVar8);
                          cVar2 = FUN_1001df957("setting","",0);
                          pcVar16 = "in";
                          if (cVar2 == '\0') {
                            pcVar16 = "setting";
                          }
                          local_6f0 = FUN_1004194cc(*(undefined4 *)(param_1 + 0x1300));
                          local_708 = 0x8200302;
                          local_704 = (undefined4)local_750;
                          uStack_700 = (undefined4)((ulong)local_750 >> 0x20);
                          local_6fc = 0x820;
                          local_6fa = SUB82(pcVar16,0);
                          uStack_6f8 = (undefined2)((ulong)pcVar16 >> 0x10);
                          uStack_6f6 = (undefined4)((ulong)pcVar16 >> 0x20);
                          local_6f2 = 0x820;
                          __os_log_impl(0x100000000,uVar9,1,"\"%s\" %s state %s",&local_708,0x20);
                        }
                        uVar7 = FUN_10041c30c(param_1,param_1 + 0xaa0,param_1 + 0xa80,param_2[2],
                                              *(undefined1 *)(param_1 + 0x1356));
                        uVar17 = (ulong)uVar7;
                        if (uVar7 != 0) goto LAB_100420957;
                        plVar13 = (long *)FUN_10039a28c();
                        if (*(long **)(param_1 + 0x1330) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_10016bf14();
                        }
                        (**(code **)(**(long **)(param_1 + 0x1330) + 0x30))(local_7c8);
                        uVar7 = (**(code **)(*plVar13 + 0x20))(plVar13,local_7c8,0);
                        uVar17 = (ulong)uVar7;
                        puVar15 = local_7c8;
                      }
                    }
                    else {
                      *(undefined4 *)(param_1 + 0x1300) = 1;
                      if (DAT_1008c75c0 != -1) {
                        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                      }
                      uVar9 = DAT_1008c75b8;
                      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
                      if (cVar2 != '\0') {
                        local_750 = FUN_1001b83ae(lVar8);
                        cVar2 = FUN_1001df957("setting","",0);
                        pcVar16 = "in";
                        if (cVar2 == '\0') {
                          pcVar16 = "setting";
                        }
                        local_6f0 = FUN_1004194cc(*(undefined4 *)(param_1 + 0x1300));
                        local_708 = 0x8200302;
                        local_704 = (undefined4)local_750;
                        uStack_700 = (undefined4)((ulong)local_750 >> 0x20);
                        local_6fc = 0x820;
                        local_6fa = SUB82(pcVar16,0);
                        uStack_6f8 = (undefined2)((ulong)pcVar16 >> 0x10);
                        uStack_6f6 = (undefined4)((ulong)pcVar16 >> 0x20);
                        local_6f2 = 0x820;
                        __os_log_impl(0x100000000,uVar9,1,"\"%s\" %s state %s",&local_708,0x20);
                      }
                      uVar7 = FUN_10041c30c(param_1,local_760 + 0x20,local_760,param_2[2],
                                            *(undefined1 *)(param_1 + 0x1356));
                      uVar17 = (ulong)uVar7;
                      if (uVar7 != 0) goto LAB_100420957;
                      plVar13 = (long *)FUN_10039a28c();
                      if (*(long **)(param_1 + 0x1330) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_10016bf14();
                      }
                      (**(code **)(**(long **)(param_1 + 0x1330) + 0x30))(local_7a8);
                      uVar7 = (**(code **)(*plVar13 + 0x20))(plVar13,local_7a8,0);
                      uVar17 = (ulong)uVar7;
                      puVar15 = local_7a8;
                    }
                    FUN_100205d70(puVar15);
                  }
                }
                goto LAB_100420957;
              }
              uVar7 = FUN_10041f4c8(param_1,6,&local_73a);
            }
            uVar17 = (ulong)uVar7;
          }
        }
        else if (param_2[1] == '\x01') {
          FUN_10024a49a(local_788,param_1 + 0x570);
          FUN_10024a186(param_1 + 0x560,&local_761);
          uVar21 = *(undefined4 *)(param_1 + 0x58);
          FUN_10044eef2(&local_708);
          uVar9 = FUN_100416f20(uVar21,0x10cc021e);
          FUN_1001b7eb0(local_778,uVar9);
          FUN_1001bbec4(&local_88,local_778,local_788);
          FUN_1001b80b2(local_6e0,&local_88);
          FUN_1001b7a50(&local_88);
          FUN_1001b7a50(local_778);
          FUN_1001b8172(&uStack_700,param_1 + 0x4c8);
          FUN_1001c334a(&local_88,0x10cf000d);
          FUN_1001b80b2(local_6c0,&local_88);
          FUN_1001b7a50(&local_88);
          FUN_1001c334a(&local_88,0x5db30004);
          FUN_1001b80b2(local_6b0,&local_88);
          FUN_1001b7a50(&local_88);
          local_66c = 2;
          local_628 = 3;
          sVar5 = FUN_10044f1a0();
          FUN_10020dfaa(&local_708);
          FUN_1001b7a50(local_788);
          if (sVar5 == 1) goto LAB_10042030b;
LAB_1004204b5:
          uVar17 = 0;
        }
        else {
          if (param_2[2] != '\x01') goto LAB_10042030b;
          FUN_10024a49a(local_798,param_1 + 0x570);
          lVar8 = FUN_1004de449(iVar14);
          if (lVar8 == 0) {
            uVar9 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar9,0x10);
            if (cVar2 != '\0') {
              local_88 = 0x8220202;
              uStack_84 = 0x7a0a90;
              uStack_80 = 1;
              uStack_7c = 0x822;
              uStack_7a = 0xde6a;
              uStack_78 = 0x7a;
              uStack_76 = 1;
              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_88,0x16);
            }
            uVar17 = 0x45f;
            FUN_1001782e9(0,0);
          }
          else {
            uVar7 = FUN_100189f61(lVar8 + 0x6b40,&local_708);
            uVar17 = (ulong)uVar7;
            if (uVar7 != 0xffffff80) {
              if (uVar7 != 0) {
                uVar9 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar9,0x10);
                if (cVar2 != '\0') {
                  local_88 = 0x8220202;
                  uStack_84 = 0x7a0a90;
                  uStack_80 = 1;
                  uStack_7c = 0x400;
                  uStack_7a = (undefined2)uVar7;
                  uStack_78 = (undefined2)(uVar7 >> 0x10);
                  __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_88,
                                      0x12);
                }
                FUN_1001b7a50(local_798);
                if (uVar7 == 0) goto LAB_10042006c;
                goto LAB_100420957;
              }
              lVar11 = FUN_1004de449(iVar14);
              if (lVar11 == 0) {
                uVar9 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar9,0x10);
                if (cVar2 != '\0') {
                  pcVar16 = "handlerData != nullptr";
LAB_1004211b4:
                  uStack_7c = 0x822;
                  uStack_80 = 1;
                  uStack_84 = 0x7a0a90;
                  local_88 = 0x8220202;
                  uStack_7a = SUB82(pcVar16,0);
                  uStack_78 = (undefined2)((ulong)pcVar16 >> 0x10);
                  uStack_76 = (undefined4)((ulong)pcVar16 >> 0x20);
                  __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_88,
                                      0x16);
                }
LAB_10042087e:
                lVar11 = 0;
                FUN_1001782e9(0,0);
                uVar17 = 0x4e200000;
              }
              else {
                uVar9 = *(undefined8 *)(lVar11 + 0x7168);
                uVar12 = _CFDictionaryGetTypeID();
                lVar11 = FUN_1005ba383(uVar9,&cf_com_apple_disk_usage,0,uVar12,0);
                if (lVar11 == 0) {
                  uVar9 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar9,0x10);
                  if (cVar2 != '\0') {
                    pcVar16 = "diskUsageDictionary != nullptr";
                    goto LAB_1004211b4;
                  }
                  goto LAB_10042087e;
                }
                cVar2 = FUN_100167ab3(lVar11,&cf_TotalDiskCapacity,local_778);
                if (cVar2 == '\0') {
                  uVar9 = FUN_1001cc310();
                  cVar2 = _os_log_type_enabled(uVar9,0x10);
                  if (cVar2 != '\0') {
                    local_88 = 0x8220202;
                    uStack_84 = 0x7a0a90;
                    uStack_80 = 1;
                    uStack_7c = 0x822;
                    uStack_7a = 0xdefa;
                    uStack_78 = 0x7c;
                    uStack_76 = 1;
                    __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_88,
                                        0x16);
                  }
                  uVar17 = 0x4e200000;
                  FUN_1001782e9(0,0);
                }
                else {
                  uVar17 = 0x4e200000;
                  if (((local_778[0] < 0xf00000001) &&
                      (uVar17 = 0x3a200000, local_778[0] < 0x700000001)) &&
                     (uVar17 = 0x2b200000, 0x300000000 < local_778[0])) {
                    uVar17 = 0x30200000;
                  }
                }
              }
              FUN_10017060f(lVar11);
              if (uVar17 <= CONCAT26(local_6fa,CONCAT24(local_6fc,uStack_700))) {
                FUN_1001b7a50(local_798);
                goto LAB_10042006c;
              }
              uVar9 = FUN_100416f20(*(undefined4 *)(lVar8 + 0x66b0),0x10cc021f);
              FUN_1001b7eb0(local_778,uVar9);
              FUN_1001e17d3(local_788,uVar17,0,0);
              FUN_1001bbf68(&local_88,local_778,local_798,local_788);
              FUN_1001b7a50(local_788);
              FUN_1001b7a50(local_778);
              FUN_1004fda52(local_778,*(undefined4 *)(lVar8 + 0x28));
              FUN_100450b7c(&local_88,local_778);
              FUN_1001b7a50(local_778);
              FUN_1001b7a50(&local_88);
              uVar17 = 0xffffff80;
            }
          }
          FUN_1001b7a50(local_798);
        }
      }
      else {
        uVar7 = *(uint *)(param_1 + 0x554);
        uVar10 = (ulong)uVar7;
        local_740 = (undefined4)CONCAT71((int7)((ulong)param_4 >> 8),(uVar7 & 0xfffffff7) == 0);
        if (param_2[2] != '\0' || param_2[1] != '\0') {
          local_760 = (ulong)local_760._4_4_ << 0x20;
          goto LAB_10041feab;
        }
        local_760 = CONCAT44(local_760._4_4_,CONCAT31((int3)(uVar7 >> 8),(uVar7 & 0xfffffff7) != 0))
        ;
LAB_10041fe65:
        if (*(char *)(param_1 + 0x5c) == '\x01') {
          cVar2 = FUN_10041f002(param_1,1,param_1 + 0x608);
          uVar17 = 0;
          if (cVar2 != '\0') goto LAB_100420969;
        }
        uVar10 = FUN_10041de9c(param_1,0);
        uVar17 = uVar10 & 0xffffffff;
        if ((int)uVar10 == 0) goto LAB_10041feab;
      }
LAB_100420957:
      FUN_1004218c8(param_1,uVar17,(int)local_73a);
    }
LAB_100420969:
    FUN_1001ceee0(param_1);
    goto LAB_100420971;
  }
  if ((*(char *)(param_1 + 0x5c) == '\x01') &&
     (cVar2 = FUN_1001cd44e("have-restore-from-backup",0,0), cVar2 != '\0')) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    FUN_10024a528(param_1 + 0x538,&local_708,0x20);
    lVar8 = FUN_100544af0(*(undefined4 *)(param_1 + 0x80),&local_708);
    if (lVar8 == 0) {
      uVar17 = 0xffffff80;
    }
    else {
      local_88 = 0;
      uStack_84 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      uStack_7a = 0;
      uVar7 = FUN_1004fdc6e(*(undefined4 *)(param_1 + 0x80),lVar8,0,1,0,&local_88,0);
      uVar17 = (ulong)uVar7;
      plVar13 = (long *)CONCAT26(uStack_7a,CONCAT24(uStack_7c,uStack_80));
      if (plVar13 != (long *)0x0) {
        LOCK();
        plVar1 = plVar13 + 1;
        lVar11 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar11 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    FUN_10017060f(lVar8);
    FUN_1001ceee0(param_1);
    goto LAB_100420971;
  }
  uVar20 = *(undefined4 *)(param_1 + 0x58);
  FUN_10041c242(&local_708,param_1,0,0);
  FUN_10028593a(local_738,param_3);
  uVar7 = FUN_100259071(uVar20,2,param_1 + 0x4c0,param_1 + 0x528,&local_708,local_738);
  uVar17 = (ulong)uVar7;
  if (local_718 == local_738) {
    lVar8 = 0x20;
LAB_10041fa8a:
    (**(code **)(*local_718 + lVar8))();
  }
  else {
    lVar8 = 0x28;
    if (local_718 != (long *)0x0) goto LAB_10041fa8a;
  }
  FUN_10026340c(local_90);
LAB_100420971:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar17;
}

