// name: FUN_10041c7bc
// address: 10041c7bc

void FUN_10041c7bc(long param_1,short param_2,int param_3,char param_4)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  bool bVar15;
  long lVar16;
  undefined1 *puVar17;
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined8 local_278;
  undefined1 local_270 [16];
  undefined1 local_260 [16];
  undefined1 local_250 [16];
  undefined1 local_240 [16];
  undefined8 local_230;
  long local_228;
  ulong local_220;
  undefined4 local_218;
  undefined8 local_214;
  undefined2 local_20c;
  char *local_20a;
  undefined2 local_202;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1f4;
  undefined2 local_1ec;
  char *local_1ea;
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [136];
  undefined4 local_118;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((((param_3 + 0x80U & 0xffffff7f) == 0) || (param_3 - 0x581U < 2)) || (param_3 == 0x462)) ||
     (param_3 == 0x465)) goto LAB_10041d0c6;
  iVar5 = FUN_1004c6512(&local_278);
  if (iVar5 != 0) goto LAB_10041d0c6;
  FUN_1001b7a44(local_250);
  FUN_1001b7a44(local_240);
  iVar5 = *(int *)(param_1 + 0x1300);
  if (iVar5 == 0) {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7);
    if (cVar3 != '\0') {
      local_1f8 = 0x8220202;
      local_1f4 = "Assertion failure";
      local_1ec = 0x822;
      local_1ea = "mState != kIdle";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_1f8,0x16);
    }
    FUN_1001782e9(0);
    iVar5 = *(int *)(param_1 + 0x1300);
  }
  if (iVar5 == 1) {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7);
    if (cVar3 != '\0') {
      local_1f8 = 0x8220202;
      local_1f4 = "Assertion failure";
      local_1ec = 0x822;
      local_1ea = "mState != kRestoring";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_1f8,0x16);
    }
    FUN_1001782e9(0);
    iVar5 = *(int *)(param_1 + 0x1300);
  }
  if (iVar5 == 2) {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7);
    if (cVar3 != '\0') {
      local_1f8 = 0x8220202;
      local_1f4 = "Assertion failure";
      local_1ec = 0x822;
      local_1ea = "mState != kUpdating";
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_1f8,0x16);
    }
    FUN_1001782e9(0);
    iVar5 = *(int *)(param_1 + 0x1300);
  }
  if (iVar5 == 6) {
    bVar15 = *(int *)(param_1 + 0x554) != 0;
  }
  else if (iVar5 == 7) {
    bVar15 = (bool)((*(byte *)(param_1 + 0x54c) & 4) >> 2);
  }
  else {
    bVar15 = false;
  }
  if (param_3 - 0x5cbU < 0xfffffffe) {
    FUN_1001c334a(&local_1f8,0x10cf005b);
    FUN_1001b80b2(local_250);
    FUN_1001b7a50(&local_1f8);
  }
  if (bVar15 == false) {
    local_228 = 0;
  }
  else {
    if (param_3 != 0x5ca) {
      FUN_1001b7b04(&local_1f8,"\r\r");
      FUN_1001bbcfe(local_250,&local_1f8);
      FUN_1001b7a50(&local_1f8);
    }
    if (*(int *)(param_1 + 0x1300) == 7) {
      if ((*(byte *)(param_1 + 0x54c) & 4) == 0) {
LAB_10041c9af:
        uVar7 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar7,0x10);
        if (cVar3 != '\0') {
          local_1f8 = 0x8220202;
          local_1f4 = "Assertion failure";
          local_1ec = 0x822;
          local_1ea = "proposalExplanationStrIndex != kIPodSpecificDeviceStringsID_BeginLess1";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_1f8,0x16);
        }
        FUN_1001782e9(0,0);
        uVar7 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar7,0x10);
        if (cVar3 != '\0') {
          local_1f8 = 0x8220202;
          local_1f4 = "Assertion failure";
          local_1ec = 0x822;
          local_1ea = "okButtonStrIndex != kIPodSpecificDeviceStringsID_BeginLess1";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_1f8,0x16);
        }
        FUN_1001782e9(0,0);
        uVar7 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar7);
        if (cVar3 != '\0') {
          local_1f8 = 0x8220202;
          local_1f4 = "Assertion failure";
          local_1ec = 0x822;
          local_1ea = "bundleInfoRef != nullptr";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_1f8,0x16);
        }
        local_228 = 0;
        FUN_1001782e9(0);
        goto LAB_10041cb8c;
      }
      local_220 = CONCAT44(local_220._4_4_,0x10cf0017);
      iVar5 = 0x10cc010a;
      lVar16 = 0x640;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x554);
      if ((uVar1 & 2) == 0) {
        lVar16 = 0xa80;
        if ((uVar1 & 8) == 0) {
          if ((uVar1 & 4) == 0) {
            if ((uVar1 & 1) == 0) goto LAB_10041c9af;
            local_220 = CONCAT44(local_220._4_4_,0x10cf0017);
            iVar5 = 0x10cc010d;
          }
          else {
            iVar5 = (param_2 == 0x10e5) + 0x10cc010b;
            local_220 = CONCAT44(local_220._4_4_,(uint)(param_2 != 0x10e5) * 2 + 0x10cf0015);
          }
        }
        else {
          local_220 = CONCAT44(local_220._4_4_,0x10cf0015);
          iVar5 = 0x10cc010c;
        }
      }
      else {
        local_220 = CONCAT44(local_220._4_4_,0x10cf0016);
        iVar5 = 0x10cc0109;
        lVar16 = 0xec0;
      }
    }
    uVar7 = FUN_100416f20(*(undefined4 *)(param_1 + 0x58),iVar5);
    FUN_1001b7eb0(&local_1f8,uVar7);
    local_228 = lVar16 + param_1;
    FUN_10024a49a(&local_218,local_228 + 0x10);
    FUN_1001bbec4(local_270,&local_1f8,&local_218);
    FUN_1001bbcfe(local_250,local_270);
    FUN_1001c334a(local_260,local_220 & 0xffffffff);
    FUN_1001b80b2(local_240);
    FUN_1001b7a50(local_260);
    FUN_1001b7a50(local_270);
    FUN_1001b7a50(&local_218);
    FUN_1001b7a50(&local_1f8);
  }
LAB_10041cb8c:
  if ((*(uint *)(param_1 + 0x58) | 0x10) != 0x69506f74) {
    if (param_2 == 0x10e9) {
      uVar9 = 0x10ea;
      uVar10 = 0x10e9;
      uVar6 = 0;
      uVar13 = 0;
      uVar11 = 0;
      uVar12 = 0;
      uVar14 = 0;
    }
    else if (param_2 == 0x10e5) {
      uVar14 = 0x1119;
      uVar12 = 0x1117;
      uVar11 = 0x1114;
      uVar13 = 0x1107;
      uVar6 = 0x10e8;
      uVar9 = 0x10e7;
      uVar10 = 0x10e6;
    }
    else {
      if (param_2 != 0x10e1) goto LAB_10041cc4b;
      uVar14 = 0x111f;
      uVar12 = 0x111e;
      uVar11 = 0x111d;
      uVar13 = 0x111c;
      uVar6 = 0x10e4;
      uVar9 = 0x10e3;
      uVar10 = 0x10e2;
    }
    param_2 = FUN_1004174a0(*(uint *)(param_1 + 0x58),uVar10,uVar9,0,uVar6,uVar13,uVar11,0,uVar12,
                            uVar14);
  }
LAB_10041cc4b:
  local_220 = param_1 + 0x60;
  FUN_1004c659a(local_278,(int)param_2,param_3,local_220,0,local_250,1,0);
  FUN_10044eef2(&local_1f8);
  FUN_1004c673f(&local_218,local_278);
  FUN_1001b80b2(local_1d0,&local_218);
  FUN_1001b7a50(&local_218);
  FUN_1001b8172((long)&local_1f4 + 4,param_1 + 0x4c8);
  FUN_1004c6788(&local_218,local_278);
  FUN_1001b80b2(local_1c0,&local_218);
  FUN_1001b7a50(&local_218);
  local_118 = 1;
  cVar3 = FUN_1001b8428(local_240);
  if (cVar3 == '\0') {
    FUN_1001b7a5c(&local_218,local_240);
  }
  else {
    FUN_1001c334a(&local_218,0x5db30003);
  }
  FUN_1001b80b2(local_1b0,&local_218);
  FUN_1001b7a50(&local_218);
  cVar3 = FUN_1001b8428(local_240);
  if (cVar3 == '\0') {
    FUN_1001c334a(&local_218,0x5db30004);
  }
  else {
    FUN_1001b7a44(&local_218);
  }
  FUN_1001b80b2(local_1a0,&local_218);
  FUN_1001b7a50(&local_218);
  sVar4 = FUN_10044f1a0(&local_1f8);
  FUN_1004c6565(local_278);
  if (sVar4 == 1) {
    cVar3 = FUN_1001b8428(local_240);
    if (cVar3 == '\0' && local_228 != 0) {
      if (*(int *)(param_1 + 0x1300) == 7) {
        *(undefined4 *)(param_1 + 0x1300) = 2;
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar7 = DAT_1008c75b8;
        cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar3 != '\0') {
          local_230 = FUN_1001b83ae(local_220);
          cVar3 = FUN_1001df957("setting","",0);
          local_20a = "in";
          if (cVar3 == '\0') {
            local_20a = "setting";
          }
          local_200 = FUN_1004194cc(*(undefined4 *)(param_1 + 0x1300));
LAB_10041cf73:
          local_202 = 0x820;
          local_20c = 0x820;
          local_218 = 0x8200302;
          local_214 = local_230;
          __os_log_impl(0x100000000,uVar7,1,"\"%s\" %s state %s",&local_218,0x20);
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x1300) = 1;
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar7 = DAT_1008c75b8;
        cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar3 != '\0') {
          local_230 = FUN_1001b83ae(local_220);
          cVar3 = FUN_1001df957("setting","",0);
          local_20a = "in";
          if (cVar3 == '\0') {
            local_20a = "setting";
          }
          local_200 = FUN_1004194cc(*(undefined4 *)(param_1 + 0x1300));
          goto LAB_10041cf73;
        }
      }
      if (param_4 == '\x01' && *(int *)(param_1 + 0x1300) != 2) {
        uVar6 = *(undefined4 *)(param_1 + 0x58);
        uVar2 = *(undefined4 *)(param_1 + 0x80);
        bVar15 = true;
        if (*(char *)(param_1 + 0x1356) == '\0') {
          cVar3 = FUN_1005033a5(uVar2);
          bVar15 = cVar3 == '\0';
        }
        cVar3 = FUN_10041d3eb(param_1 + 0x4c8,uVar6,local_220,uVar2,0,bVar15,0);
        iVar5 = -0x80;
        if (cVar3 != '\0') goto LAB_10041cfed;
      }
      else {
LAB_10041cfed:
        iVar5 = FUN_10041c30c(param_1,local_228 + 0x20,local_228,0,*(undefined1 *)(param_1 + 0x1356)
                             );
        if (iVar5 == 0) {
          if (*(int *)(param_1 + 0x1300) == 2) {
            plVar8 = (long *)FUN_10039a28c();
            if (*(long **)(param_1 + 0x1330) == (long *)0x0) {
LAB_10041d307:
                    /* WARNING: Subroutine does not return */
              FUN_10016bf14();
            }
            puVar17 = local_298;
            (**(code **)(**(long **)(param_1 + 0x1330) + 0x30))(puVar17);
            iVar5 = (**(code **)(*plVar8 + 0x18))(plVar8,puVar17);
          }
          else {
            plVar8 = (long *)FUN_10039a28c();
            if (*(long **)(param_1 + 0x1330) == (long *)0x0) goto LAB_10041d307;
            puVar17 = local_288;
            (**(code **)(**(long **)(param_1 + 0x1330) + 0x30))(puVar17);
            iVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,puVar17,0);
          }
          FUN_100205d70(puVar17);
        }
      }
      FUN_10041aad0(param_1,iVar5,0);
    }
  }
  FUN_10020dfaa(&local_1f8);
  FUN_1001b7a50(local_240);
  FUN_1001b7a50(local_250);
LAB_10041d0c6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

