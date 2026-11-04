// name: FUN_100659e4a
// address: 100659e4a

void FUN_100659e4a(long param_1,ulong param_2)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  char *pcVar10;
  undefined1 local_67a8 [16];
  undefined1 local_6798 [16];
  undefined1 local_6788 [16];
  char local_6778;
  undefined1 local_6770 [16];
  undefined1 local_6760 [16];
  undefined1 local_6750 [16];
  undefined2 local_6740;
  undefined1 local_6738 [16];
  char local_6728;
  undefined1 local_6720 [16];
  undefined1 local_6710 [16];
  char local_6700;
  long local_66f8;
  undefined1 local_66f0 [16];
  undefined1 local_66e0 [16];
  undefined1 local_66d0 [16];
  undefined1 local_66c0 [16];
  undefined1 local_66b0 [16];
  int local_66a0;
  int local_669c;
  undefined4 local_6698;
  char *local_6694;
  undefined2 local_668c;
  undefined8 local_668a;
  char local_6682 [32];
  char local_6662 [64];
  char local_6622 [32];
  char local_6602 [66];
  int local_65c0;
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x100659e62;
  lVar4 = FUN_100108310();
  lVar4 = -lVar4;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *(undefined8 *)((long)&local_38 + lVar4) = 0x100659e8a;
  local_66f8 = param_1;
  FUN_1001b7a44(local_67a8);
  *(undefined8 *)((long)&local_38 + lVar4) = 0x100659e96;
  FUN_1001b7a44(local_6798);
  *(undefined8 *)((long)&local_38 + lVar4) = 0x100659ea2;
  FUN_1001b7a44(local_6788);
  local_6778 = '\0';
  *(undefined8 *)((long)&local_38 + lVar4) = 0x100659eb2;
  FUN_1001b7a44();
  *(undefined8 *)((long)&local_38 + lVar4) = 0x100659ebe;
  FUN_1001b7a44(local_6760);
  *(undefined8 *)((long)&local_38 + lVar4) = 0x100659eca;
  FUN_1001b7a44(local_6750);
  local_6740 = 0;
  *(undefined8 *)((long)&local_38 + lVar4) = 0x100659ee0;
  FUN_1001b7a44(local_6738);
  local_6728 = '\0';
  *(undefined8 *)((long)&local_38 + lVar4) = 0x100659ef3;
  FUN_1001b7a44(local_6720);
  *(undefined8 *)((long)&local_38 + lVar4) = 0x100659eff;
  FUN_1001b7a44(local_6710);
  local_6700 = '\0';
  local_669c = 0;
  *(undefined8 *)((long)&local_38 + lVar4) = 0x100659f2a;
  plVar5 = (long *)(*(code *)PTR__objc_msgSend_10082c770)
                             (&objc::class_t::AMPDevicesClientConnection,
                              PTR_s_softwareUpdateRestoreDelegateFor_10088dcb8,param_2 & 0xffffffff)
  ;
  if (plVar5 == (long *)0x0) {
    if (local_669c == 0) {
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a045;
      uVar6 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a04d;
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a05d;
      cVar2 = _os_log_type_enabled(uVar6,0x10);
      if (cVar2 != '\0') {
        local_6698 = 0x8220202;
        local_6694 = "Assertion failure";
        local_668c = 0x822;
        local_668a = "status != noErr";
        *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a693;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_6698,0x16);
      }
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a06e;
      (*(code *)PTR__objc_release_10082c7b0)(uVar6);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a077;
      FUN_1001782e9(0,0);
      goto LAB_100659f4e;
    }
  }
  else {
    pcVar1 = *(code **)(*plVar5 + 0x90);
    *(undefined8 *)((long)&local_38 + lVar4) = 0x100659f46;
    local_669c = (*pcVar1)(plVar5,local_67a8);
LAB_100659f4e:
    if (local_669c == 0) {
      *(undefined8 *)((long)&local_38 + lVar4) = 0x100659f62;
      uVar6 = _objc_alloc_init(PTR__OBJC_CLASS___AMPDeviceSoftwareInfo_10082b9c0);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x100659f76;
      ___bzero(&local_6698,0x6660);
      local_66a0 = 0;
      *(undefined8 *)((long)&local_38 + lVar4) = 0x100659f8c;
      FUN_1001b7a44(local_66e0);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x100659f98;
      FUN_1001b7a44(local_66f0);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x100659f9d;
      lVar7 = FUN_1005e9a2c();
      lVar7 = *(long *)(lVar7 + 0x60);
      if (lVar7 != 0 && (int)param_2 != 0) {
        do {
          if (*(int *)(lVar7 + 0x6884) == (int)param_2) {
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a087;
            uVar8 = FUN_1005e9a2c();
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a099;
            local_669c = FUN_1005e79a6(uVar8,param_2 & 0xffffffff,&local_66a0);
            if (local_669c != 0) goto LAB_10065a27b;
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a0ac;
            uVar8 = FUN_1005e9a2c();
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a0be;
            local_669c = FUN_1005e7a82(uVar8,param_2 & 0xffffffff,&local_6698);
            goto LAB_10065a0be;
          }
          lVar7 = *(long *)(lVar7 + 0x6878);
        } while (lVar7 != 0);
      }
      *(undefined8 *)((long)&local_38 + lVar4) = 0x100659fd9;
      local_669c = FUN_100502578(param_2 & 0xffffffff,&local_66a0);
      if (local_669c == 0) {
        *(undefined8 *)((long)&local_38 + lVar4) = 0x100659ff6;
        local_669c = FUN_1005027ed(param_2 & 0xffffffff,&local_6698);
LAB_10065a0be:
        if (local_669c == 0) {
          pcVar10 = local_6682;
          if (local_6662[0] != '\0') {
            pcVar10 = local_6662;
          }
          if (local_6682[(ulong)(local_6662[0] != '\0') * 0x20] != '\0') {
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a103;
            FUN_1001b7a44(local_66b0);
            if (local_66a0 == 0x69506f64) {
              *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a121;
              FUN_1001c334a(local_66c0,0x10d3000a);
              *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a134;
              FUN_1001b80b2(local_66b0,local_66c0);
              *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a140;
              FUN_1001b7a50(local_66c0);
            }
            else {
              iVar9 = 0x6950686e;
              if (0xcff < local_668a._6_2_) {
                iVar9 = local_66a0;
              }
              if (local_66a0 != 0x69506164) {
                iVar9 = local_66a0;
              }
              *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a169;
              uVar8 = FUN_100416f20(iVar9,0x10cc00b9);
              *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a178;
              FUN_1001b81f2(local_66b0,uVar8);
            }
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a187;
            FUN_1001b7b04(local_66d0,pcVar10);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a1a1;
            FUN_1001bbec4(local_66c0,local_66b0,local_66d0);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a1b4;
            FUN_1001b80b2(local_66e0,local_66c0);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a1c0;
            FUN_1001b7a50(local_66c0);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a1cc;
            FUN_1001b7a50(local_66d0);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a1d8;
            FUN_1001b7a50(local_66b0);
          }
          pcVar10 = local_6622;
          if (local_6602[0] != '\0') {
            pcVar10 = local_6602;
          }
          if (local_6622[(ulong)(local_6602[0] != '\0') * 0x20] != '\0') {
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a214;
            FUN_1001c334a(local_66c0,0x10d3000d);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a223;
            FUN_1001b7b04(local_66d0,pcVar10);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a244;
            FUN_1001bbf68(local_66b0,local_66c0,local_66e0,local_66d0);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a257;
            FUN_1001b80b2(local_66f0,local_66b0);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a263;
            FUN_1001b7a50(local_66b0);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a26f;
            FUN_1001b7a50(local_66d0);
            *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a27b;
            FUN_1001b7a50(local_66c0);
          }
        }
      }
LAB_10065a27b:
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a287;
      cVar2 = FUN_1001b8428(local_66e0);
      if (cVar2 != '\0') {
        *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a29c;
        FUN_1001c334a(local_66b0,0x10d30001);
        *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a2af;
        FUN_1001b80b2(local_66e0,local_66b0);
        *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a2bb;
        FUN_1001b7a50(local_66b0);
      }
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a2c7;
      cVar2 = FUN_1001b8428(local_66f0);
      if (cVar2 != '\0') {
        *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a2dc;
        FUN_1001c334a(local_66b0,0x10d30001);
        *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a2ef;
        FUN_1001b80b2(local_66f0,local_66b0);
        *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a2fb;
        FUN_1001b7a50(local_66b0);
      }
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a309;
      uVar8 = FUN_1001bdcb0(local_66e0,0);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a311;
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a327;
      (*(code *)PTR__objc_msgSend_10082c770)(uVar6,PTR_s_setSoftwareVersion__10088dcc0,uVar8);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a330;
      (*(code *)PTR__objc_release_10082c7b0)(uVar8);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a33e;
      uVar8 = FUN_1001bdcb0(local_66f0,0);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a346;
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a35c;
      (*(code *)PTR__objc_msgSend_10082c770)(uVar6,PTR_s_setBuildVersion__10088c878,uVar8);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a365;
      (*(code *)PTR__objc_release_10082c7b0)(uVar8);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a373;
      uVar8 = FUN_1001bdcb0(local_67a8,0);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a37b;
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a391;
      (*(code *)PTR__objc_msgSend_10082c770)(uVar6,PTR_s_setStatusMessage__10088dcc8,uVar8);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a39a;
      (*(code *)PTR__objc_release_10082c7b0)(uVar8);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a3a8;
      uVar8 = FUN_1001bdcb0(local_6798,0);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a3b0;
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a3c6;
      (*(code *)PTR__objc_msgSend_10082c770)(uVar6,PTR_s_setDisabledMessage__10088dcd0,uVar8);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a3cf;
      (*(code *)PTR__objc_release_10082c7b0)(uVar8);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a3dd;
      uVar8 = FUN_1001bdcb0(local_6788,0);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a3e5;
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a3fb;
      (*(code *)PTR__objc_msgSend_10082c770)(uVar6,PTR_s_setUpdateCaptionMessage__10088dcd8,uVar8);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a404;
      (*(code *)PTR__objc_release_10082c7b0)(uVar8);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a41b;
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar6,PTR_s_setUpdateCaptionEnabled__10088dce0,(int)local_6778);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a429;
      uVar8 = FUN_1001bdcb0(local_6770,0);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a431;
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a447;
      (*(code *)PTR__objc_msgSend_10082c770)(uVar6,PTR_s_setUpdateButtonTitle__10088dce8,uVar8);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a450;
      (*(code *)PTR__objc_release_10082c7b0)(uVar8);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a467;
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar6,PTR_s_setHasCheckForUpdates__10088dcf0,(int)(char)local_6740);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a47e;
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar6,PTR_s_setUpdateButtonEnabled__10088dcf8,(int)local_6740._1_1_);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a488;
      uVar8 = FUN_1001bdcb0(local_6738,0);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a490;
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a4a6;
      (*(code *)PTR__objc_msgSend_10082c770)(uVar6,PTR_s_setRestoreCaptionMessage__10088dd00,uVar8);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a4af;
      (*(code *)PTR__objc_release_10082c7b0)(uVar8);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a4c6;
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar6,PTR_s_setRestoreCaptionEnabled__10088dd08,(int)local_6728);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a4d0;
      uVar8 = FUN_1001bdcb0(local_6720,0);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a4d8;
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a4ee;
      (*(code *)PTR__objc_msgSend_10082c770)(uVar6,PTR_s_setRestoreButtonTitle__10088dd10,uVar8);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a4f7;
      (*(code *)PTR__objc_release_10082c7b0)(uVar8);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a50e;
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar6,PTR_s_setRestoreButtonEnabled__10088dd18,(int)local_6700);
      if (local_6682[0] == '\0') {
        *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a535;
        uVar8 = FUN_100416f20(local_66a0,0x10cc012e - (uint)(local_65c0 == 0));
      }
      else {
        uVar8 = 0;
      }
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a548;
      (*(code *)PTR__objc_msgSend_10082c770)(uVar6,PTR_s_setRecoveryModeTitle__10088dd20,uVar8);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a558;
      uVar8 = FUN_100416f20(local_66a0,0x10cc012f);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a56b;
      (*(code *)PTR__objc_msgSend_10082c770)(uVar6,PTR_s_setEjectButtonTitle__10088dd28,uVar8);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a57a;
      uVar3 = FUN_10039e077(param_2 & 0xffffffff,1,0);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a58d;
      (*(code *)PTR__objc_msgSend_10082c770)
                (uVar6,PTR_s_setSoftwareUpdateRestoreInProgre_10088dd30,uVar3);
      lVar7 = *(long *)(local_66f8 + 0x20);
      pcVar1 = *(code **)(lVar7 + 0x10);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a5a0;
      (*pcVar1)(lVar7,uVar6,0);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a5ac;
      FUN_1001b7a50(local_66f0);
      *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a5b8;
      FUN_1001b7a50(local_66e0);
      goto LAB_10065a5b8;
    }
  }
  lVar7 = *(long *)(local_66f8 + 0x20);
  *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a024;
  uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958);
  *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a02c;
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  pcVar1 = *(code **)(lVar7 + 0x10);
  *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a03b;
  (*pcVar1)(lVar7,0,uVar6);
LAB_10065a5b8:
  *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a5c1;
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a5cd;
  FUN_1001b7a50(local_6710);
  *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a5d5;
  FUN_1001b7a50(local_6720);
  *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a5dd;
  FUN_1001b7a50(local_6738);
  *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a5e9;
  FUN_1001b7a50(local_6750);
  *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a5f5;
  FUN_1001b7a50(local_6760);
  *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a601;
  FUN_1001b7a50(local_6770);
  *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a60d;
  FUN_1001b7a50(local_6788);
  *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a619;
  FUN_1001b7a50(local_6798);
  *(undefined8 *)((long)&local_38 + lVar4) = 0x10065a625;
  FUN_1001b7a50(local_67a8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)&local_38 + lVar4) = &UNK_10065a69d;
  ___stack_chk_fail();
}

