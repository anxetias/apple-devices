// name: FUN_10041dfee
// address: 10041dfee

int FUN_10041dfee(long *param_1,char *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  char *pcVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  byte bVar11;
  byte bVar12;
  undefined8 local_778;
  undefined8 uStack_770;
  undefined1 local_760 [16];
  undefined1 local_750 [16];
  undefined1 local_740 [16];
  char *local_730;
  undefined8 local_728;
  undefined4 local_720;
  byte local_71b;
  short local_71a;
  long local_718 [4];
  long *local_6f8;
  long local_6e8 [4];
  long *local_6c8;
  uint local_6b8;
  char *local_6b4;
  undefined2 local_6ac;
  char *local_6aa;
  undefined2 local_6a2;
  undefined8 local_6a0;
  undefined1 local_40 [8];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_71a = 0;
  lVar6 = FUN_100279b99();
  if ((*(char *)(lVar6 + 0x1b) == '\0') &&
     (((param_2[6] != '\x01' || (param_2[1] != '\0')) && ((int)param_1[0xb] != 0x57617463)))) {
    FUN_10041dd48(param_1 + 0x262,param_3);
    bVar12 = *(int *)((long)param_1 + 0x84) != 0;
    local_730 = (char *)CONCAT71(local_730._1_7_,param_2[7]);
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    if ((*param_2 == '\0') || (param_2[5] == '\x01')) {
      if ((char)param_1[0xab] == '\0') {
        uVar4 = 1;
        if ((*(uint *)((long)param_1 + 0x54c) & 4) == 0) {
          uVar4 = (*(uint *)((long)param_1 + 0x54c) & 8) >> 3;
        }
      }
      else {
        uVar4 = 0;
      }
      local_71b = bVar12;
      iVar3 = FUN_10024f5ea(param_1 + 0x99,(int)param_1[0xb],uVar4,param_2[2],0,0,0,0);
      bVar12 = local_71b;
      if (iVar3 != -0x80) {
        if (iVar3 == 0) {
          if ((int)param_1[0x10] == 0) {
LAB_10041e1e3:
            iVar3 = FUN_10041b42a(param_1,0,1,1,&local_71a);
            if (iVar3 != -0x80) {
              if (iVar3 == 0) goto LAB_10041e213;
              uVar9 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar9,0x10);
              if (cVar2 != '\0') {
                local_6aa = (char *)CONCAT44(local_6aa._4_4_,iVar3);
LAB_10041e9ce:
                local_6ac = 0x400;
                local_6b4 = "Assertion failure";
                local_6b8 = 0x8220202;
                __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_6b8,0x12
                                   );
              }
            }
          }
          else {
            lVar6 = FUN_1004de449();
            if (lVar6 == 0) {
              uVar9 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar9,0x10);
              if (cVar2 != '\0') {
                local_6b8 = 0x8220202;
                local_6b4 = "Assertion failure";
                local_6ac = 0x822;
                local_6aa = "handlerData != nullptr";
                __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_6b8,
                                    0x16);
              }
              FUN_1001782e9(0,0);
              iVar3 = 0x45f;
            }
            else {
              iVar3 = FUN_10025a150(1,lVar6,1,0);
              if (iVar3 != -0x80) {
                if (iVar3 == 0) goto LAB_10041e1e3;
                uVar9 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar9,0x10);
                if (cVar2 != '\0') {
                  local_6aa = (char *)CONCAT44(local_6aa._4_4_,iVar3);
                  goto LAB_10041e9ce;
                }
              }
            }
          }
          goto LAB_10041eb21;
        }
        if ((char)uVar4 == '\0') {
          if (iVar3 == 0x5ca) {
            uVar9 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar9,0x10);
            if (cVar2 != '\0') {
              local_6b8 = 0x8220202;
              local_6b4 = "Assertion failure";
              local_6ac = 0x822;
              local_6aa = "status != kIPodUpdaterUserDeclinedInternetConnectionErr";
              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_6b8,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
          *(undefined4 *)(param_1 + 0x260) = 7;
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar9 = DAT_1008c75b8;
          cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar2 != '\0') {
            local_730 = (char *)FUN_1001b83ae(param_1 + 0xc);
            cVar2 = FUN_1001df957("setting","",0);
            pcVar7 = "in";
            if (cVar2 == '\0') {
              pcVar7 = "setting";
            }
            local_6a0 = FUN_1004194cc((int)param_1[0x260]);
            local_6b8 = 0x8200302;
            local_6b4 = local_730;
            local_6ac = 0x820;
            local_6a2 = 0x820;
            local_6aa = pcVar7;
            __os_log_impl(0x100000000,uVar9,1,"\"%s\" %s state %s",&local_6b8,0x20);
          }
          FUN_10041c7bc(param_1,0x10e5,iVar3,0);
        }
        else {
          lVar6 = FUN_100249f90(param_1 + 0xac);
          if ((lVar6 == 0) || ((*(byte *)((long)param_1 + 0x54c) & 8) == 0)) {
            *(undefined4 *)(param_1 + 0x260) = 7;
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar9 = DAT_1008c75b8;
            cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar2 != '\0') {
              pcVar7 = (char *)FUN_1001b83ae(param_1 + 0xc);
              cVar2 = FUN_1001df957("setting","",0);
              local_6aa = "in";
              if (cVar2 == '\0') {
                local_6aa = "setting";
              }
              local_6a0 = FUN_1004194cc((int)param_1[0x260]);
              local_6b8 = 0x8200302;
              local_6ac = 0x820;
              local_6a2 = 0x820;
              local_6b4 = pcVar7;
              __os_log_impl(0x100000000,uVar9,1,"\"%s\" %s state %s",&local_6b8,0x20);
            }
            FUN_10041c7bc(param_1,0x10e5,iVar3,0);
          }
          else {
            *(undefined4 *)(param_1 + 0x260) = 2;
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar9 = DAT_1008c75b8;
            cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar2 != '\0') {
              pcVar7 = (char *)FUN_1001b83ae(param_1 + 0xc);
              cVar2 = FUN_1001df957("setting","",0);
              local_6aa = "in";
              if (cVar2 == '\0') {
                local_6aa = "setting";
              }
              local_6a0 = FUN_1004194cc((int)param_1[0x260]);
              local_6b8 = 0x8200302;
              local_6ac = 0x820;
              local_6a2 = 0x820;
              local_6b4 = pcVar7;
              __os_log_impl(0x100000000,uVar9,1,"\"%s\" %s state %s",&local_6b8,0x20);
            }
            iVar3 = FUN_10041de9c(param_1,1);
            if (iVar3 == 0) {
              iVar3 = FUN_10041c30c(param_1,param_1 + 0xcc,param_1 + 200,0,
                                    *(undefined1 *)((long)param_1 + 0x1356));
              if (iVar3 == 0) {
                plVar8 = (long *)FUN_10039a28c();
                if ((long *)param_1[0x266] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_10016bf14();
                }
                (**(code **)(*(long *)param_1[0x266] + 0x30))(local_760);
                iVar3 = (**(code **)(*plVar8 + 0x18))(plVar8,local_760);
                FUN_100205d70(local_760);
              }
              FUN_10041aad0(param_1,iVar3,0);
            }
          }
        }
      }
      goto LAB_10041eb44;
    }
LAB_10041e213:
    bVar12 = bVar12 | (byte)local_730;
    iVar3 = 0;
    if ((*(char *)((long)param_1 + 0x5c) == '\x01') &&
       ((param_2[3] == '\0' && (int)param_1[0x10] != 0) && (bVar12 & 1) == 0)) {
      local_720 = 0;
      local_728 = 0;
      lVar6 = FUN_1004de449();
      uVar9 = local_728;
      if (lVar6 == 0) {
        uVar9 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar9,0x10);
        if (cVar2 != '\0') {
          local_6b8 = 0x8220202;
          local_6b4 = "Assertion failure";
          local_6ac = 0x822;
          local_6aa = "handlerData != nullptr";
          __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_6b8,0x16);
        }
        FUN_1001782e9(0,0);
        iVar3 = 0x45f;
      }
      else {
        local_728 = CONCAT53(local_728._3_5_,0x10101);
        uVar1 = local_728;
        local_728._6_2_ = SUB82(uVar9,6);
        local_728._0_6_ = CONCAT15(1,(int5)uVar1);
        local_778 = 0;
        uStack_770 = 0;
        iVar5 = FUN_100256606(lVar6,0,&local_728,&local_71a);
        FUN_100205d70(&local_778);
        iVar3 = -0x80;
        if ((((iVar5 != -0x80) && (iVar3 = iVar5, local_728._6_1_ == '\0')) &&
            (local_728._7_1_ == '\0')) && ((local_720._1_1_ == '\0' && (local_720._2_1_ == '\0'))))
        goto LAB_10041e244;
      }
LAB_10041eb21:
      FUN_10041aad0(param_1,iVar3,(int)local_71a);
      FUN_10041b42a(param_1,0,0,0,0);
    }
    else {
LAB_10041e244:
      if (((int)param_1[0x10] != 0) &&
         (cVar2 = FUN_10041ed7b(param_1 + 0x99,(int)param_1[0xb],param_1 + 0xc,(int)param_1[0x10],0)
         , cVar2 == '\0')) goto LAB_10041eb21;
      if (((*(byte *)(param_1 + 0xab) | bVar12) & 1) == 0) {
        if ((int)param_1[0xa9] != 0) {
          if (((*(uint *)((long)param_1 + 0x54c) & 8) == 0) &&
             (((*(uint *)((long)param_1 + 0x54c) & 4) == 0 || (*param_2 == '\0')))) {
            *(undefined4 *)(param_1 + 0x260) = 7;
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar9 = DAT_1008c75b8;
            cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar2 != '\0') {
              pcVar7 = (char *)FUN_1001b83ae(param_1 + 0xc);
              cVar2 = FUN_1001df957("setting","",0);
              local_6aa = "in";
              if (cVar2 == '\0') {
                local_6aa = "setting";
              }
              local_6a0 = FUN_1004194cc((int)param_1[0x260]);
              local_6b8 = 0x8200302;
              local_6ac = 0x820;
              local_6a2 = 0x820;
              local_6b4 = pcVar7;
              __os_log_impl(0x100000000,uVar9,1,"\"%s\" %s state %s",&local_6b8,0x20);
            }
            iVar3 = FUN_10041de9c(param_1,1);
            if (iVar3 == 0) {
              if ((long *)param_1[0x266] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_10016bf14();
              }
              (**(code **)(*(long *)param_1[0x266] + 0x30))(local_740);
              iVar3 = FUN_100419d7e(param_1,0,0,0,local_740,&local_71a);
              puVar10 = local_740;
LAB_10041eb06:
              FUN_100205d70(puVar10);
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x260) = 2;
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar9 = DAT_1008c75b8;
            cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar2 != '\0') {
              pcVar7 = (char *)FUN_1001b83ae(param_1 + 0xc);
              cVar2 = FUN_1001df957("setting","",0);
              local_6aa = "in";
              if (cVar2 == '\0') {
                local_6aa = "setting";
              }
              local_6a0 = FUN_1004194cc((int)param_1[0x260]);
              local_6b8 = 0x8200302;
              local_6ac = 0x820;
              local_6a2 = 0x820;
              local_6b4 = pcVar7;
              __os_log_impl(0x100000000,uVar9,1,"\"%s\" %s state %s",&local_6b8,0x20);
            }
            iVar3 = FUN_10041de9c(param_1,1);
            if ((iVar3 == 0) &&
               (iVar3 = FUN_10041c30c(param_1,param_1 + 0xcc,param_1 + 200,0,
                                      *(undefined1 *)((long)param_1 + 0x1356)), iVar3 == 0)) {
              plVar8 = (long *)FUN_10039a28c();
              if ((long *)param_1[0x266] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_10016bf14();
              }
              (**(code **)(*(long *)param_1[0x266] + 0x30))(local_750);
              iVar3 = (**(code **)(*plVar8 + 0x18))(plVar8,local_750);
              puVar10 = local_750;
              goto LAB_10041eb06;
            }
          }
        }
        goto LAB_10041eb21;
      }
      if ((bVar12 & 1) != 0) {
        FUN_10024adb0(param_1 + 0xac,param_1 + 0xbf);
      }
      if ((*(char *)((long)param_1 + 0x5c) != '\x01') ||
         (cVar2 = FUN_10041f002(param_1,0,param_1 + 0xae), cVar2 == '\0')) {
        bVar11 = *(byte *)((long)param_1 + 0x559);
        if ((bVar11 == 0) && (*(int *)((long)param_1 + 0x84) == 0)) {
          iVar3 = FUN_10041de9c(param_1,1);
          if (iVar3 != 0) goto LAB_10041eb21;
          bVar11 = *(byte *)((long)param_1 + 0x559);
        }
        else {
          *(undefined1 *)((long)param_1 + 0x1356) = 0;
        }
        *(undefined1 *)((long)param_1 + 0x1354) = 1;
        bVar11 = ~bVar12 & bVar11;
        *(byte *)((long)param_1 + 0x1355) = bVar11 & 1;
        local_6b4 = (char *)((ulong)local_6b4 & 0xffffffffffffff00);
        local_6b8 = CONCAT13(param_2[4],CONCAT12(bVar11,CONCAT11(bVar11,param_2[1]))) & 0xff0101ff ^
                    0x10000;
        FUN_10028593a(local_718,param_1 + 0x262);
        iVar3 = (**(code **)(*param_1 + 0x20))(param_1,&local_6b8,local_718);
        if (local_6f8 == local_718) {
          lVar6 = 0x20;
        }
        else {
          lVar6 = 0x28;
          if (local_6f8 == (long *)0x0) goto LAB_10041eb44;
        }
        (**(code **)(*local_6f8 + lVar6))();
      }
    }
LAB_10041eb44:
    FUN_1001ceee0(param_1);
    goto LAB_10041e0cc;
  }
  lVar6 = param_1[0xb];
  FUN_10041c242(&local_6b8,param_1,0,0);
  FUN_10028593a(local_6e8,param_3);
  iVar3 = FUN_100259071((int)lVar6,1,param_1 + 0x98,param_1 + 0xa5,&local_6b8,local_6e8);
  if (local_6c8 == local_6e8) {
    lVar6 = 0x20;
LAB_10041e0bd:
    (**(code **)(*local_6c8 + lVar6))();
  }
  else {
    lVar6 = 0x28;
    if (local_6c8 != (long *)0x0) goto LAB_10041e0bd;
  }
  FUN_10026340c(local_40);
LAB_10041e0cc:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

