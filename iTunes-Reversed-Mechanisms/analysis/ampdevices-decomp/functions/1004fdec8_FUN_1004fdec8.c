// name: FUN_1004fdec8
// address: 1004fdec8

undefined8 FUN_1004fdec8(undefined8 param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  cfstringStruct *pcVar9;
  undefined8 local_ed8;
  long local_ed0;
  undefined1 *local_ec8;
  undefined1 *local_ec0;
  undefined8 local_eb8 [4];
  undefined1 local_e98 [1056];
  undefined8 local_a78 [64];
  undefined1 local_878 [1056];
  uint local_458;
  char *local_454;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_ec0 = param_2;
  if (param_2 == (undefined1 *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "setupParams != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
    uVar6 = 0xffffffce;
    goto LAB_1004fe5ab;
  }
  lVar5 = FUN_1004de449();
  if (lVar5 == 0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_458 = 0x8220202;
      local_454 = "Assertion failure";
      local_44c = 0x822;
      local_44a = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
    uVar6 = 0x45f;
    goto LAB_1004fe5ab;
  }
  if (*(char *)(lVar5 + 0x6af6) != '\0') {
    local_ec8 = local_ec0 + 0x18;
    FUN_1001b811c();
    FUN_1001e04f5("License.rtf",local_a78);
    local_ed0 = lVar5 + 0x6b40;
    iVar3 = FUN_1002441f8(*(undefined4 *)(lVar5 + 0x66b0),local_ed0,0x6c69636e,0,local_878);
    if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001004fdf8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*(code *)((long)&DAT_1004fe67c + (long)DAT_1004fe67c))();
      return uVar6;
    }
    iVar3 = FUN_10017ecc9(local_ed0,local_a78,local_e98,0);
    if (iVar3 == 0) {
LAB_1004fe158:
      iVar4 = FUN_100180bd2(local_e98,local_eb8,&local_ed8,0);
      if (iVar4 == 0) {
        FUN_1001b7b34(&local_458,local_eb8[0],local_ed8);
        FUN_1001b80b2(local_ec8,&local_458);
        FUN_1001b7a50(&local_458);
        FUN_1001c64c1(local_eb8[0]);
        *local_ec0 = 1;
        goto LAB_1004fe2ab;
      }
      FUN_1001c64c1(local_eb8[0]);
    }
    else {
      iVar3 = *(int *)(lVar5 + 0x66b0);
      pcVar9 = &cf_iOSLicense_rtf;
      iVar4 = -0x2b;
      if (iVar3 < 0x69506f64) {
        if ((iVar3 == 0x69506164) || (iVar3 == 0x6950686e)) goto LAB_1004fe110;
      }
      else {
        if (iVar3 != 0x69506f74) {
          if (iVar3 != 0x69506f64) goto LAB_1004fe18b;
          pcVar9 = &cf_iPodLicense_rtf;
        }
LAB_1004fe110:
        uVar6 = _CFBundleGetBundleWithIdentifier(&cf_com_apple_amp_devices);
        FUN_1001b7eb0(&local_458,pcVar9);
        iVar4 = FUN_1001eb924(uVar6,&local_458,local_e98);
        FUN_1001b7a50(&local_458);
        if (iVar4 == 0) goto LAB_1004fe158;
      }
    }
LAB_1004fe18b:
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar6 = DAT_1008c75b8;
    cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar2 != '\0') {
      local_458 = 0x4000100;
      local_454 = (char *)CONCAT44(local_454._4_4_,iVar4);
      __os_log_impl(0x100000000,uVar6,1,"setup> failed to read License.rtf file (%d)",&local_458,8);
    }
    *(undefined1 *)(lVar5 + 0x6af6) = 0;
    iVar3 = FUN_1001893a7(lVar5 + 0x75e0,"ShowLicense");
    if (iVar3 == 0) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar6 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar2 != '\0') {
        local_458 = local_458 & 0xffff0000;
        __os_log_impl(0x100000000,uVar6,1,"setup> deleted ShowLicense file",&local_458,2);
      }
    }
  }
LAB_1004fe2ab:
  if (*(char *)(lVar5 + 0x6af7) != '\0') {
    puVar1 = local_ec0 + 0x28;
    FUN_1001b811c(puVar1);
    iVar3 = FUN_1002441f8(*(undefined4 *)(lVar5 + 0x66b0),lVar5 + 0x6b40,0x6974756e,0,&local_458);
    if (((iVar3 == 0) && (iVar3 = FUN_1001888ba(&local_458,"Warranty.html",local_878,0), iVar3 == 0)
        ) && (iVar3 = FUN_100180bd2(local_878,local_a78,local_eb8,0), iVar3 == 0)) {
      FUN_1001b7b34(local_e98,local_a78[0],local_eb8[0]);
      FUN_1001b80b2(puVar1,local_e98);
      FUN_1001b7a50(local_e98);
      FUN_1001c64c1(local_a78[0]);
      local_ec0[1] = 1;
    }
    else {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar6 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar2 != '\0') {
        local_458 = 0x4000100;
        local_454 = (char *)CONCAT44(local_454._4_4_,iVar3);
        __os_log_impl(0x100000000,uVar6,1,"setup> failed to read Warranty.html file (%d)",&local_458
                      ,8);
      }
      *(undefined1 *)(lVar5 + 0x6af7) = 0;
      iVar3 = FUN_1001893a7(lVar5 + 0x75e0,"ShowWarranty");
      if (iVar3 == 0) {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar6 = DAT_1008c75b8;
        cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar2 != '\0') {
          local_458 = local_458 & 0xffff0000;
          __os_log_impl(0x100000000,uVar6,1,"setup> deleted ShowWarranty file",&local_458,2);
        }
      }
    }
  }
  uVar6 = 0;
  if (*(char *)(lVar5 + 0x35a) != '\0') {
    *(undefined8 *)(local_ec0 + 8) = *(undefined8 *)(lVar5 + 0x152d0);
    uVar7 = FUN_1004fe690(lVar5);
    *(undefined8 *)(local_ec0 + 0x10) = uVar7;
    lVar8 = FUN_10017076e(*(undefined8 *)(local_ec0 + 8));
    if (lVar8 == 0) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar7 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar2 != '\0') {
        local_454 = *(char **)(lVar5 + 0x152c8);
        local_458 = 0x8420102;
        __os_log_impl(0x100000000,uVar7,1,"setup> no backups available for device %{public}@",
                      &local_458,0xc);
        uVar6 = 0;
      }
    }
  }
LAB_1004fe5ab:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6;
}

