// name: FUN_10013f7c4
// address: 10013f7c4

void FUN_10013f7c4(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  double dVar10;
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  long *local_e0;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  long *local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  long local_78 [2];
  undefined8 local_68;
  undefined4 local_60;
  undefined2 local_5c;
  undefined4 local_5a;
  undefined2 local_56;
  undefined8 local_54;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_a0 = param_3;
  FUN_10015095e(local_d8);
  lVar6 = FUN_100150dd2(local_d8);
  if (lVar6 != param_1[6]) {
    FUN_10015146c(&local_68);
    if (local_5a._2_1_ == 1) {
      FUN_100151524(local_d8,&local_68);
    }
    if ((local_5a._2_1_ & 1) != 0) {
      FUN_100150de8(&local_68);
    }
    lVar6 = param_1[6];
  }
  if ((lVar6 != 0) && (cVar3 = (**(code **)*param_1)(param_1), cVar3 == '\0')) {
    iVar4 = (**(code **)(*param_1 + 8))(param_1);
    if (iVar4 != 0) {
      if (iVar4 != 1) goto LAB_10013fb1c;
      if (param_1[8] == 0) {
        uVar7 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar7,0x10);
        if (cVar3 != '\0') {
          FUN_10014a500(uVar7);
        }
        cVar3 = FUN_1001782e9(0,0);
        if (cVar3 == '\0') goto LAB_10013fb1c;
      }
      FUN_1001a7a9e(local_88,param_1 + 8);
      (**(code **)(*param_1 + 0x108))(local_100,param_1);
      if (*local_a0 == 0) {
LAB_10013fb07:
        FUN_1001b7a50(local_100);
        FUN_1001a8fac(local_88);
        goto LAB_10013fb1c;
      }
      cVar3 = FUN_1001b8428(local_100);
      if (cVar3 == '\0') {
        FUN_1001aaf14(local_f0,local_100);
        FUN_1001a7bac(local_98,local_f0);
        local_b8 = 0;
        uStack_b0 = 0;
        FUN_10032f0f2(&local_b8);
        FUN_10032f0f2(&local_68);
        cVar3 = FUN_1001484cc(local_88,local_98,&local_68);
        puVar9 = &local_b8;
        if (cVar3 != '\0') {
          puVar9 = &local_68;
        }
        FUN_1001a7a9e(local_78,puVar9);
        FUN_1001a7a94(&local_68);
        cVar3 = FUN_1001ac1ba(local_a0,local_78);
        FUN_1001a7a94(local_78);
        FUN_1001a7a94(&local_b8);
        FUN_1001ab240(local_98);
        FUN_1001ab006(local_f0);
        if (cVar3 == '\0') goto LAB_10013f9c4;
      }
      else {
LAB_10013f9c4:
        FUN_1001a7b90(local_98,&PTR_cf_dsid_domains_10083a760);
        local_c8 = 0;
        uStack_c0 = 0;
        FUN_10032f0f2(&local_c8);
        FUN_10032f0f2(&local_68);
        cVar3 = FUN_1001484cc(local_88,local_98,&local_68);
        puVar9 = &local_c8;
        if (cVar3 != '\0') {
          puVar9 = &local_68;
        }
        FUN_1001a7a9e(local_78,puVar9);
        FUN_1001a7a94(&local_68);
        cVar3 = FUN_1001ac1ba(local_a0,local_78);
        FUN_1001a7a94(local_78);
        FUN_1001a7a94(&local_c8);
        FUN_1001ab240(local_98);
        if (cVar3 == '\0') goto LAB_10013fb07;
      }
      FUN_1001b7a50(local_100);
      FUN_1001a8fac(local_88);
    }
    FUN_1001b7b04(&local_68,"X-Dsid");
    FUN_1001bb832(local_78,param_1[6]);
    (**(code **)(*param_2 + 0x10))(param_2,&local_68,local_78);
    FUN_1001b7a50(local_78);
    FUN_1001b7a50(&local_68);
    FUN_1004578b6(&local_68);
    cVar3 = FUN_1001b8428(&local_68);
    if (cVar3 == '\0') {
      FUN_1001b7b04(local_78,"iCloud-DSID");
      (**(code **)(*param_2 + 0x10))(param_2,local_78,&local_68);
      FUN_1001b7a50(local_78);
    }
    FUN_1001b7a50(&local_68);
  }
LAB_10013fb1c:
  cVar3 = (**(code **)(*param_1 + 0x18))(param_1);
  if (cVar3 != '\0') {
    FUN_1001b7b04(&local_68,"X-Guid");
    FUN_10032f174(local_78);
    (**(code **)(*param_2 + 0x10))(param_2,&local_68,local_78);
    FUN_1001b7a50(local_78);
    FUN_1001b7a50(&local_68);
    FUN_1001b7b04(&local_68,"X-Apple-Uuid");
    FUN_1001eb76c(local_78);
    (**(code **)(*param_2 + 0x10))(param_2,&local_68,local_78);
    FUN_1001b7a50(local_78);
    FUN_1001b7a50(&local_68);
  }
  cVar3 = FUN_10028b692();
  if ((cVar3 != '\0') && (param_1[8] != 0)) {
    cVar3 = (**(code **)(*param_1 + 0x28))(param_1);
    plVar1 = param_1 + 8;
    if (cVar3 != '\0') {
      FUN_1001a8c1c(&local_68,&PTR_cf_md_finish_provisioning_10083a6e8);
      cVar3 = FUN_100140b9e(plVar1,&local_68);
      if (cVar3 == '\0') {
        FUN_1001ab006(&local_68);
      }
      else {
        FUN_1001a8c1c(local_78,&PTR_cf_md_sync_machine_10083a6f0);
        cVar3 = FUN_100140b9e(plVar1,local_78);
        FUN_1001ab006(local_78);
        FUN_1001ab006(&local_68);
        if (cVar3 != '\0') {
          cVar3 = FUN_1001b8428(param_1 + 10);
          if ((cVar3 == '\0') && ((int)param_1[0xc] == 0)) {
            FUN_1001b7b04(&local_68,PTR_s_X_Apple_MD_S_100845150);
            (**(code **)(*param_2 + 0x10))(param_2,&local_68,param_1 + 10);
            FUN_1001b7a50(&local_68);
          }
          FUN_10028b460(&local_68,param_1[6]);
          local_68._0_4_ = 0x83a778;
          local_68._4_4_ = 1;
          cVar3 = FUN_1001b8428();
          if (cVar3 == '\0') {
            FUN_1001b7b04(local_78,PTR_s_X_Apple_MD_1008450a0);
            (**(code **)(*param_2 + 0x10))(param_2,local_78,&local_60);
            FUN_1001b7a50(local_78);
          }
          lVar6 = (long)&local_54 + 4;
          cVar3 = FUN_1001b8428(lVar6);
          if (cVar3 == '\0') {
            FUN_1001b7b04(local_78,PTR_s_X_Apple_MD_M_1008450a8);
            (**(code **)(*param_2 + 0x10))(param_2,local_78,lVar6);
            FUN_1001b7a50(local_78);
          }
          local_68._0_4_ = 0x83a7c0;
          local_68._4_4_ = 1;
          FUN_1001b7a50(lVar6);
          FUN_1001b7a50(&local_60);
        }
      }
    }
    iVar4 = (**(code **)(*param_1 + 0x30))(param_1);
    if (iVar4 == 1) {
LAB_10013fe7d:
      cVar3 = FUN_1001b8428(param_1 + 10);
      if ((cVar3 == '\0') && ((int)param_1[0xc] == 1)) {
        FUN_1001b7b04(&local_68,PTR_s_X_Apple_AMD_S_100845178);
        (**(code **)(*param_2 + 0x10))(param_2,&local_68,param_1 + 10);
        FUN_1001b7a50(&local_68);
      }
      FUN_10028b66c(&local_68);
      cVar3 = FUN_1001b8428();
      if (cVar3 == '\0') {
        FUN_1001b7b04(local_78,PTR_s_X_Apple_AMD_1008450d8);
        (**(code **)(*param_2 + 0x10))(param_2,local_78,&local_60);
        FUN_1001b7a50(local_78);
      }
      lVar6 = (long)&local_54 + 4;
      cVar3 = FUN_1001b8428(lVar6);
      if (cVar3 == '\0') {
        FUN_1001b7b04(local_78,PTR_s_X_Apple_AMD_M_1008450e0);
        (**(code **)(*param_2 + 0x10))(param_2,local_78,lVar6);
        FUN_1001b7a50(local_78);
      }
      local_68._0_4_ = 0x83a7c0;
      local_68._4_4_ = 1;
      FUN_1001b7a50(lVar6);
      FUN_1001b7a50(&local_60);
    }
    else if (iVar4 == 0) {
      FUN_1001a7a9e(&local_c8,plVar1);
      if (*local_a0 != 0) {
        local_e0 = plVar1;
        FUN_1001a7b90(local_88,&PTR_cf_amd_domains_10083a7d0);
        local_b8 = 0;
        uStack_b0 = 0;
        FUN_10032f0f2(&local_b8);
        FUN_10032f0f2(&local_68);
        cVar3 = FUN_1001484cc(&local_c8,local_88,&local_68);
        puVar9 = &local_b8;
        if (cVar3 != '\0') {
          puVar9 = &local_68;
        }
        FUN_1001a7a9e(local_78,puVar9);
        FUN_1001a7a94(&local_68);
        cVar3 = FUN_1001ac1ba(local_a0,local_78);
        FUN_1001a7a94(local_78);
        FUN_1001a7a94(&local_b8);
        FUN_1001ab240(local_88);
        if (cVar3 != '\0') {
          FUN_1001a8c1c(&local_68,&PTR_cf_amd_finish_provisioning_10083a6f8);
          plVar1 = local_e0;
          cVar3 = FUN_100140b9e(local_e0,&local_68);
          if (cVar3 != '\0') {
            FUN_1001a8c1c(local_78,&PTR_cf_amd_sync_machine_10083a700);
            cVar3 = FUN_100140b9e(plVar1,local_78);
            FUN_1001ab006(local_78);
            FUN_1001ab006(&local_68);
            FUN_1001a8fac(&local_c8);
            if (cVar3 != '\0') goto LAB_10013fe7d;
            goto LAB_10013ff75;
          }
          FUN_1001ab006(&local_68);
        }
      }
      FUN_1001a8fac(&local_c8);
    }
  }
LAB_10013ff75:
  cVar3 = (**(code **)(*param_1 + 0x50))(param_1);
  if ((cVar3 != '\0') && (cVar3 = FUN_10041520b(), cVar3 != '\0')) {
    FUN_10014cd50(&local_68);
    (**(code **)(*param_2 + 0x20))(param_2,&local_68);
    FUN_1001a8fac(&local_68);
    if (param_1[0xd] != 0) {
      FUN_10014d572(&local_68);
      (**(code **)(*param_2 + 0x20))(param_2,&local_68);
      FUN_1001a8fac(&local_68);
      *(undefined1 *)(param_1[0xd] + 0x31) = 1;
    }
  }
  FUN_1001b7a5c(&local_c8,param_1 + 4);
  cVar3 = FUN_1001b8428(&local_c8);
  if (((cVar3 != '\0') && (cVar3 = FUN_1001ab57e(local_a0), cVar3 != '\0')) &&
     (lVar6 = FUN_100150dd2(local_d8), lVar6 != 0)) {
    FUN_1001515b0(&local_68,local_d8);
    FUN_1001b80b2(&local_c8,&local_68);
    FUN_1001b7a50(&local_68);
  }
  cVar3 = FUN_1001b8428(&local_c8);
  if (cVar3 != '\0') goto LAB_10014019e;
  cVar3 = (**(code **)(*param_1 + 0x10))(param_1);
  if (cVar3 == '\0') {
    if (param_1[8] == 0) goto LAB_10014019e;
    FUN_1001a7a9e(local_88,param_1 + 8);
    if (*local_a0 == 0) {
      FUN_1001a8fac(local_88);
      goto LAB_10014019e;
    }
    cVar3 = FUN_1001ab554();
    if (cVar3 == '\0') {
      FUN_1001a7b90(local_98,&PTR_cf_trustedDomains_10083a7d8);
      local_b8 = 0;
      uStack_b0 = 0;
      FUN_10032f0f2(&local_b8);
      FUN_10032f0f2(&local_68);
      cVar3 = FUN_1001484cc(local_88,local_98,&local_68);
      puVar9 = &local_b8;
      if (cVar3 != '\0') {
        puVar9 = &local_68;
      }
      FUN_1001a7a9e(local_78,puVar9);
      FUN_1001a7a94(&local_68);
      FUN_1001a7a94(&local_b8);
      FUN_1001ab240(local_98);
      if (local_78[0] != 0) {
        cVar3 = FUN_1001ac1ba(local_a0,local_78);
        FUN_1001a7a94(local_78);
        FUN_1001a8fac(local_88);
        if (cVar3 == '\0') goto LAB_10014019e;
        goto LAB_100140171;
      }
      FUN_1001a7a94(local_78);
    }
    FUN_1001a8fac(local_88);
  }
LAB_100140171:
  FUN_1001b7b04(&local_68,"X-Token");
  (**(code **)(*param_2 + 0x10))(param_2,&local_68,&local_c8);
  FUN_1001b7a50(&local_68);
LAB_10014019e:
  FUN_1001b7b04(&local_68,"X-Apple-Tz");
  FUN_1001ab1e4(&local_b8);
  FUN_1001711e2();
  dVar10 = (double)FUN_1001ab200(&local_b8);
  FUN_1001b90b6(local_78,(long)(int)dVar10);
  FUN_1001ab1da(&local_b8);
  (**(code **)(*param_2 + 0x10))(param_2,&local_68,local_78);
  FUN_1001b7a50(local_78);
  FUN_1001b7a50(&local_68);
  (**(code **)(*param_1 + 0xb8))(param_1);
  FUN_1001a7a9e(&local_68,param_1 + 8);
  FUN_100140c1c(&local_b8);
  FUN_1001a8fac(&local_68);
  cVar3 = FUN_1001b8428(&local_b8);
  if (cVar3 == '\0') {
    FUN_1001b7b04(&local_68,"X-Apple-Store-Front");
    (**(code **)(*param_2 + 0x10))(param_2,&local_68,&local_b8);
    FUN_1001b7a50(&local_68);
  }
  else {
    uVar7 = FUN_100135270();
    cVar3 = _os_log_type_enabled(uVar7,0);
    if (cVar3 != '\0') {
      local_e0 = param_4;
      (**(code **)(*param_1 + 0xd0))(local_78,param_1);
      uVar8 = FUN_1001b83ae(local_78);
      lVar6 = param_1[0x31];
      local_54 = FUN_100150dd2(local_d8);
      local_68._0_4_ = 0x8220302;
      local_68._4_4_ = (undefined4)uVar8;
      local_60 = (undefined4)((ulong)uVar8 >> 0x20);
      local_5c = 0x400;
      local_56 = 0x800;
      local_5a = (int)lVar6;
      __os_log_impl(0x100000000,uVar7,0,
                    "storereq> %{public}s(%d). Warning! Empty storefront for account %llu. No storefront header will be sent."
                    ,&local_68,0x1c);
      FUN_1001b7a50(local_78);
      param_4 = local_e0;
    }
  }
  cVar3 = (**(code **)(*param_1 + 0x58))(param_1);
  if ((cVar3 != '\0') && (cVar3 = (**(code **)*param_1)(param_1), cVar3 == '\0')) {
    FUN_10015190e(&local_68,local_d8,local_a0);
    puVar2 = PTR_cf_Cookie_10083c4e0;
    FUN_1001aaef6(local_98,PTR_cf_Cookie_10083c4e0);
    FUN_1001b7a44(local_78);
    FUN_100129b70(local_88,&local_68,local_98,local_78);
    FUN_1001b7a50(local_78);
    FUN_1001ab006(local_98);
    FUN_1001a8fac(&local_68);
    cVar3 = FUN_1001b8428(local_88);
    if (cVar3 == '\0') {
      FUN_1001b7eb0(&local_68,puVar2);
      (**(code **)(*param_2 + 0x10))(param_2,&local_68,local_88);
      FUN_1001b7a50(&local_68);
    }
    FUN_1001b7a50(local_88);
  }
  FUN_1001519d2(&local_68,local_d8);
  cVar3 = FUN_1001b8428(&local_68);
  if ((cVar3 == '\0') && (cVar3 = FUN_1001519f8(local_d8), cVar3 != '\0')) {
    FUN_1001b7b04(local_78,"X-Apple-Cuid");
    (**(code **)(*param_2 + 0x10))(param_2,local_78,&local_68);
    FUN_1001b7a50(local_78);
  }
  std::mutex::lock();
  std::mutex::unlock();
  FUN_1001b7a5c(local_78,param_1 + 0xf);
  cVar3 = FUN_1001b8428(local_78);
  if (cVar3 == '\0') {
    FUN_10056e070(local_88,local_78);
    cVar3 = FUN_1001ab554(local_88);
    if (cVar3 == '\0') {
      cVar3 = FUN_1001ab57e(local_a0);
      FUN_1001ab3c4(local_88);
      if (cVar3 != '\0') {
        FUN_1001b7eb0(local_88,PTR_cf_Referer_10083c508);
        (**(code **)(*param_2 + 0x10))(param_2,local_88,local_78);
        FUN_1001b7a50(local_88);
      }
    }
    else {
      FUN_1001ab3c4(local_88);
    }
  }
  FUN_1001b7eb0(local_88,PTR_cf_User_Agent_10083c510);
  FUN_100132900(local_98);
  (**(code **)(*param_2 + 0x10))(param_2,local_88,local_98);
  FUN_1001b7a50(local_98);
  FUN_1001b7a50(local_88);
  FUN_1001b7eb0(local_88,PTR_cf_Accept_Language_10083c4c0);
  lVar6 = FUN_100156d72();
  (**(code **)(*param_2 + 0x10))(param_2,local_88,lVar6 + 0x90);
  FUN_1001b7a50(local_88);
  iVar4 = (**(code **)(*param_1 + 0x80))(param_1);
  if (iVar4 != 1) {
    FUN_1001b7eb0(local_88,PTR_cf_Date_10083c4e8);
    uVar5 = FUN_100177d5c(0);
    FUN_1001a45c8(local_98,uVar5);
    (**(code **)(*param_2 + 0x10))(param_2,local_88,local_98);
    FUN_1001b7a50(local_98);
    FUN_1001b7a50(local_88);
  }
  cVar3 = (**(code **)(*param_1 + 0x68))(param_1);
  if (cVar3 != '\0') {
    cVar3 = FUN_1001b8428(param_1 + 0x2d);
    if (cVar3 == '\0') {
      FUN_1001b7b04(local_88,"Authorization");
      FUN_1001b7b04(local_f0,"Bearer ");
      FUN_1001b7a5c(local_98,local_f0);
      FUN_1001bbcfe(local_98,param_1 + 0x2d);
      (**(code **)(*param_2 + 0x10))(param_2,local_88,local_98);
      FUN_1001b7a50(local_98);
      FUN_1001b7a50(local_f0);
      FUN_1001b7a50(local_88);
    }
  }
  (**(code **)(*param_1 + 0xe0))(param_1,local_a0,param_2,param_4);
  FUN_10013f0a8(param_1,param_2,local_a0,param_4);
  FUN_1001b7a50(local_78);
  FUN_1001b7a50(&local_68);
  FUN_1001b7a50(&local_b8);
  FUN_1001b7a50(&local_c8);
  FUN_100150de8(local_d8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

