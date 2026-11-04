// name: FUN_10051d3ac
// address: 10051d3ac

void FUN_10051d3ac(long param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 uVar6;
  cfstringStruct *local_a8;
  long *local_a0;
  long *local_98;
  cfstringStruct *local_90;
  long local_88 [2];
  cfstringStruct *local_78 [2];
  undefined4 local_68;
  char *local_64;
  undefined2 local_5c;
  char *local_5a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_10012bbe4(param_2);
  if (cVar2 == '\0') goto LAB_10051d73d;
  FUN_1004d603a(&local_a0);
  if (local_a0 == (long *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_68 = 0x8220202;
      local_64 = "Assertion failure (expected to be not NULL)";
      local_5c = 0x822;
      local_5a = "event";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    cVar2 = FUN_1001782e9(0,0);
    if (cVar2 != '\0') goto LAB_10051d428;
  }
  else {
LAB_10051d428:
    plVar5 = local_a0;
    FUN_1001aaf3c(&local_68,"deviceAttached");
    iVar3 = (**(code **)(*plVar5 + 0x28))(plVar5,&local_68,1);
    FUN_1001ab006(&local_68);
    plVar5 = local_a0;
    if (iVar3 == 0) {
      FUN_1001aaf3c(&local_68,"ipod_check_1");
      iVar3 = (**(code **)(*plVar5 + 0x30))(plVar5,&local_68);
      FUN_1001ab006(&local_68);
      if (iVar3 == 0) {
        (**(code **)(*local_a0 + 0x48))();
        plVar5 = (long *)(**(code **)(*local_a0 + 0x10))();
        if (*plVar5 != 0) {
          local_78[0] = &cf_sn;
          FUN_1001a7b90(local_88);
          FUN_1001a8c1c(&local_68,param_1 + 8);
          FUN_1001a9bbe(plVar5,local_88,&local_68);
          FUN_1001ab006(&local_68);
          FUN_1001ab240(local_88);
          FUN_1001c1ce9(&local_68,0x40);
          if ((char)local_68 != '\0') {
            local_90 = &cf_iTunesLanguage;
            FUN_1001a7b90(local_78);
            FUN_1001aaf3c(local_88,&local_68);
            FUN_1001a9bbe(plVar5,local_78,local_88);
            FUN_1001ab006(local_88);
            FUN_1001ab240(local_78);
          }
          local_a8 = &cf_storeFront;
          FUN_1001a7b90(&local_90);
          FUN_10015095e(local_78);
          FUN_10020e0d0(local_88,local_78,0);
          FUN_1004d7090(plVar5,&local_90,local_88);
          FUN_1001b7a50(local_88);
          FUN_100150de8(local_78);
          FUN_1001ab240(&local_90);
          uVar4 = FUN_1001cd685(&cf_iPodReplacementCheck,0,0);
          FUN_1001a8d40(local_88,uVar4);
          if (local_88[0] != 0) {
            FUN_1001a7b90(local_78,param_1 + 8);
            cVar2 = FUN_1001a9738(local_88,local_78,&local_90);
            uVar6 = 0;
            if (cVar2 != '\0') {
              uVar6 = local_90._0_4_;
            }
            FUN_1001ab240(local_78);
            local_a8 = (cfstringStruct *)CONCAT44(local_a8._4_4_,uVar6);
            local_90 = &cf_viewCount;
            FUN_1001a7b90(local_78);
            FUN_10036845a(plVar5,local_78,&local_a8);
            FUN_1001ab240(local_78);
          }
          FUN_1001a7b90(local_78,&PTR_cf_pixelRatio_100855a48);
          FUN_1001a9f38(plVar5,local_78);
          FUN_1001ab240(local_78);
          FUN_1001a7b90(local_78,&PTR_cf_screenHeight_100855a50);
          FUN_1001a9f38(plVar5,local_78);
          FUN_1001ab240(local_78);
          FUN_1001a7b90(local_78,&PTR_cf_screenWidth_100855a58);
          FUN_1001a9f38(plVar5,local_78);
          FUN_1001ab240(local_78);
          FUN_1001a7b90(local_78,&PTR_cf_isSignedIn_100855a40);
          FUN_1001a9f38(plVar5,local_78);
          FUN_1001ab240(local_78);
          FUN_1001a8fac(local_88);
        }
        (**(code **)(*local_a0 + 0x20))(local_a0,1);
      }
    }
  }
  if (local_98 != (long *)0x0) {
    LOCK();
    plVar5 = local_98 + 1;
    lVar1 = *plVar5;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*local_98 + 0x10))(local_98);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_10051d73d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

