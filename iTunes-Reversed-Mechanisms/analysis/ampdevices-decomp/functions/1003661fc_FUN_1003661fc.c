// name: FUN_1003661fc
// address: 1003661fc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003661fc(long *param_1)

{
  double dVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  undefined8 uVar6;
  byte *pbVar7;
  byte local_568 [16];
  byte local_558 [16];
  byte local_548 [8];
  byte local_540 [8];
  byte local_538 [16];
  byte local_528 [16];
  byte local_518 [16];
  undefined1 local_508 [8];
  undefined1 local_500 [8];
  long local_4f8;
  byte local_4f0 [16];
  byte local_4e0 [16];
  byte local_4d0 [16];
  undefined1 local_4c0 [16];
  double local_4b0;
  long local_4a8;
  long local_4a0 [2];
  double local_490 [2];
  long local_480 [2];
  cfstringStruct *local_470 [2];
  double local_460;
  undefined4 local_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined2 local_44c;
  char *local_44a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar5 = (long *)(**(code **)(*param_1 + 0x10))();
  if (*plVar5 == 0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_458 = 0x8220202;
      uStack_454 = 0x7a0a90;
      uStack_450 = 1;
      local_44c = 0x822;
      local_44a = "eventDict.IsValid()";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_100366fc8;
  }
  if ((*(uint *)(param_1 + 3) & 0xfffffffe) == 2) {
    local_460 = DAT_10070f3a8;
LAB_100366d4a:
    if (DAT_1008bddc8 == '\0') {
      DAT_1008bddc8 = '\x01';
      iVar3 = FUN_10018dd66("/Library/Application Support/CrashReporter/DiagnosticMessagesHistory.plist"
                            ,&local_458,0);
      if (iVar3 == 0) {
        uVar6 = FUN_10016aa24(0,&local_458,0,0);
        FUN_1001a8d40(local_480,uVar6);
        if (local_480[0] != 0) {
          local_470[0] = &cf_AutoSubmit;
          FUN_1001a7b90(local_490);
          cVar2 = FUN_1001a957a(local_480,local_490,local_4e0);
          FUN_1001ab240(local_490);
          if ((cVar2 != '\0') && ((local_4e0[0] & 1) == 0)) {
            DAT_1008bddc8 = '\x02';
          }
        }
        FUN_1001a8fac(local_480);
      }
    }
    if (DAT_1008bddc8 != '\x01') goto LAB_100366fc8;
  }
  else {
    iVar3 = FUN_1001cd9a6("user-events-frequency",0,0);
    if (iVar3 == 0) {
      if ((int)param_1[3] == 1) {
        FUN_100365770(local_4e0);
        FUN_1001a7b90(local_538,&PTR_cf_sampling_1008558e0);
        FUN_10032f0f2(local_4d0);
        FUN_10032f0f2(&local_458);
        cVar2 = FUN_1001a9164(local_4e0,local_538,&local_458);
        pbVar7 = local_4d0;
        if (cVar2 != '\0') {
          pbVar7 = (byte *)&local_458;
        }
        FUN_1001a7a9e(local_470,pbVar7);
        FUN_1001a8fac(&local_458);
        FUN_1001a7b90(local_528,&PTR_cf_custom_1008558e8);
        FUN_10032f0f2(local_568);
        FUN_10032f0f2(&local_458);
        cVar2 = FUN_1001a9164(local_470,local_528,&local_458);
        pbVar7 = local_568;
        if (cVar2 != '\0') {
          pbVar7 = (byte *)&local_458;
        }
        FUN_1001a7a9e(local_490,pbVar7);
        FUN_1001a8fac(&local_458);
        (**(code **)(*param_1 + 0x38))(local_4f0,param_1);
        FUN_1001a7bac(local_4a0,local_4f0);
        FUN_10032f0f2(local_558);
        FUN_10032f0f2(&local_458);
        cVar2 = FUN_1001a9164(local_490,local_4a0,&local_458);
        pbVar7 = local_558;
        if (cVar2 != '\0') {
          pbVar7 = (byte *)&local_458;
        }
        FUN_1001a7a9e(local_480,pbVar7);
        FUN_1001a8fac(&local_458);
        FUN_1001a8fac(local_558);
        FUN_1001ab240(local_4a0);
        FUN_1001ab006(local_4f0);
        FUN_1001a8fac(local_490);
        FUN_1001a8fac(local_568);
        FUN_1001ab240(local_528);
        FUN_1001a8fac(local_470);
        FUN_1001a8fac(local_4d0);
        FUN_1001ab240(local_538);
        FUN_1001a8fac(local_4e0);
        local_490[0] = -1.0;
        FUN_1001a7b90(&local_458,&PTR_cf_percentage_1008558f0);
        cVar2 = FUN_1001a98e2(local_480,&local_458,local_490);
        FUN_1001ab240(&local_458);
        if (cVar2 != '\0') {
          local_490[0] = local_490[0] * DAT_10070f3a8;
        }
        if ((local_490[0] == DAT_100700af8) && (!NAN(local_490[0]) && !NAN(DAT_100700af8))) {
LAB_10036658b:
          FUN_1001a8fac(local_480);
          goto LAB_100366597;
        }
        if ((local_490[0] < 0.0) || (dVar1 = local_490[0], DAT_10070f3a8 < local_490[0])) {
          uVar6 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar6,0x10);
          if (cVar2 != '\0') {
            local_458 = 0x8220202;
            uStack_454 = 0x7a0a90;
            uStack_450 = 1;
            local_44c = 0x822;
            local_44a = 
            "samplingFrequency == kSamplingFrequency_Invalid || ( samplingFrequency >= 0 && samplingFrequency <= 100 )"
            ;
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
          }
          FUN_1001782e9(0,1);
          goto LAB_10036658b;
        }
      }
      else {
LAB_100366597:
        local_4b0 = -1.0;
        FUN_100365770(local_480);
        dVar1 = DAT_100700af8;
        if (local_480[0] != 0) {
          FUN_1001a7b90(local_4a0,&PTR_cf_iTunes_1008558f8);
          FUN_10032f0f2(local_568);
          FUN_10032f0f2(&local_458);
          cVar2 = FUN_1001a9164(local_480,local_4a0,&local_458);
          pbVar7 = local_568;
          if (cVar2 != '\0') {
            pbVar7 = (byte *)&local_458;
          }
          FUN_1001a7a9e(local_4d0,pbVar7);
          FUN_1001a8fac(&local_458);
          FUN_1001a7b90(local_4f0,&PTR_cf_sampling_1008558e0);
          FUN_10032f0f2(local_558);
          FUN_10032f0f2(&local_458);
          cVar2 = FUN_1001a9164(local_4d0,local_4f0,&local_458);
          pbVar7 = local_558;
          if (cVar2 != '\0') {
            pbVar7 = (byte *)&local_458;
          }
          FUN_1001a7a9e(local_4e0,pbVar7);
          FUN_1001a8fac(&local_458);
          FUN_1001a7b90(local_4c0,&PTR_cf_custom_1008558e8);
          FUN_10032f0f2(local_538);
          FUN_10032f0f2(&local_458);
          cVar2 = FUN_1001a9164(local_4e0,local_4c0,&local_458);
          pbVar7 = local_538;
          if (cVar2 != '\0') {
            pbVar7 = (byte *)&local_458;
          }
          FUN_1001a7a9e(local_470,pbVar7);
          FUN_1001a8fac(&local_458);
          (**(code **)(*param_1 + 0x38))(&local_4a8,param_1);
          FUN_1001a7bac(local_518,&local_4a8);
          FUN_10032f0f2(local_528);
          FUN_10032f0f2(&local_458);
          cVar2 = FUN_1001a9164(local_470,local_518,&local_458);
          pbVar7 = local_528;
          if (cVar2 != '\0') {
            pbVar7 = (byte *)&local_458;
          }
          FUN_1001a7a9e(local_490,pbVar7);
          FUN_1001a8fac(&local_458);
          FUN_1001a8fac(local_528);
          FUN_1001ab240(local_518);
          FUN_1001ab006(&local_4a8);
          FUN_1001a8fac(local_470);
          FUN_1001a8fac(local_538);
          FUN_1001ab240(local_4c0);
          FUN_1001a8fac(local_4e0);
          FUN_1001a8fac(local_558);
          FUN_1001ab240(local_4f0);
          FUN_1001a8fac(local_4d0);
          FUN_1001a8fac(local_568);
          FUN_1001ab240(local_4a0);
          FUN_1001a7b90(&local_458,&PTR_cf_percentage_1008558f0);
          cVar2 = FUN_1001a98e2(local_490,&local_458,&local_4b0);
          FUN_1001ab240(&local_458);
          if (cVar2 != '\0') {
            local_4b0 = local_4b0 * DAT_10070f3a8;
          }
          FUN_1001a7b90(local_470,&PTR_cf_eventType_100855a30);
          FUN_1001aa318(local_548);
          FUN_1001aa318(&local_458);
          cVar2 = FUN_1001a921a(plVar5,local_470,&local_458);
          pbVar7 = local_548;
          if (cVar2 != '\0') {
            pbVar7 = (byte *)&local_458;
          }
          FUN_1001a8c1c(&local_4a8,pbVar7);
          FUN_1001ab006(&local_458);
          FUN_1001ab006(local_548);
          FUN_1001ab240(local_470);
          if (local_4a8 != 0) {
            FUN_1001a7b90(local_4d0,&local_4a8);
            FUN_10032f0f2(local_4e0);
            FUN_10032f0f2(&local_458);
            cVar2 = FUN_1001a9164(local_480,local_4d0,&local_458);
            pbVar7 = local_4e0;
            if (cVar2 != '\0') {
              pbVar7 = (byte *)&local_458;
            }
            FUN_1001a7a9e(local_470,pbVar7);
            FUN_1001a8fac(&local_458);
            FUN_1001a7b90(local_4a0,&PTR_cf_frequency_100855900);
            local_460 = local_4b0;
            cVar2 = FUN_1001a98e2(local_470,local_4a0,&local_458);
            local_4b0 = local_460;
            if (cVar2 != '\0') {
              local_4b0 = (double)CONCAT44(uStack_454,local_458);
            }
            FUN_1001ab240(local_4a0);
            FUN_1001a8fac(local_470);
            FUN_1001a8fac(local_4e0);
            FUN_1001ab240(local_4d0);
          }
          FUN_1001a7b90(local_470,&PTR_cf_machineRegion_1008558a0);
          FUN_1001aa318(local_540);
          FUN_1001aa318(&local_458);
          cVar2 = FUN_1001a921a(plVar5,local_470,&local_458);
          pbVar7 = local_540;
          if (cVar2 != '\0') {
            pbVar7 = (byte *)&local_458;
          }
          FUN_1001a8c1c(&local_4f8,pbVar7);
          FUN_1001ab006(&local_458);
          FUN_1001ab006(local_540);
          FUN_1001ab240(local_470);
          FUN_1001a7b90(local_4a0,&PTR_cf_regions_100855908);
          FUN_10032f0f2(local_4d0);
          FUN_10032f0f2(&local_458);
          cVar2 = FUN_1001a9164(local_480,local_4a0,&local_458);
          pbVar7 = local_4d0;
          if (cVar2 != '\0') {
            pbVar7 = (byte *)&local_458;
          }
          FUN_1001a7a9e(local_470,pbVar7);
          FUN_1001a8fac(&local_458);
          FUN_1001a8fac(local_4d0);
          FUN_1001ab240(local_4a0);
          if ((local_470[0] != (cfstringStruct *)0x0) && (local_4f8 != 0)) {
            FUN_1001a7b90(local_4c0,&local_4f8);
            FUN_10032f0f2(local_4f0);
            FUN_10032f0f2(&local_458);
            cVar2 = FUN_1001a9164(local_470,local_4c0,&local_458);
            pbVar7 = local_4f0;
            if (cVar2 != '\0') {
              pbVar7 = (byte *)&local_458;
            }
            FUN_1001a7a9e(local_4a0,pbVar7);
            FUN_1001a8fac(&local_458);
            FUN_1001a8fac(local_4f0);
            FUN_1001ab240(local_4c0);
            if (local_4a0[0] != 0) {
              FUN_1001a7b90(local_4c0,&PTR_cf_frequency_100855900);
              local_460 = local_4b0;
              cVar2 = FUN_1001a98e2(local_4a0,local_4c0,&local_458);
              local_4b0 = local_460;
              if (cVar2 != '\0') {
                local_4b0 = (double)CONCAT44(uStack_454,local_458);
              }
              FUN_1001ab240(local_4c0);
              if (local_4a8 != 0) {
                FUN_1001a7b90(local_508,&local_4a8);
                FUN_10032f0f2(local_518);
                FUN_10032f0f2(&local_458);
                cVar2 = FUN_1001a9164(local_4a0,local_508,&local_458);
                pbVar7 = local_518;
                if (cVar2 != '\0') {
                  pbVar7 = (byte *)&local_458;
                }
                FUN_1001a7a9e(local_4c0,pbVar7);
                FUN_1001a8fac(&local_458);
                FUN_1001a7b90(local_500,&PTR_cf_frequency_100855900);
                local_460 = local_4b0;
                cVar2 = FUN_1001a98e2(local_4c0,local_500,&local_458);
                local_4b0 = local_460;
                if (cVar2 != '\0') {
                  local_4b0 = (double)CONCAT44(uStack_454,local_458);
                }
                FUN_1001ab240(local_500);
                FUN_1001a8fac(local_4c0);
                FUN_1001a8fac(local_518);
                FUN_1001ab240(local_508);
              }
            }
            FUN_1001a8fac(local_4a0);
          }
          FUN_1001a8fac(local_470);
          FUN_1001ab006(&local_4f8);
          FUN_1001ab006(&local_4a8);
          FUN_1001a8fac(local_490);
          dVar1 = local_4b0;
        }
      }
      local_460 = dVar1;
      FUN_1001a8fac(local_480);
    }
    else {
      local_460 = (double)iVar3;
    }
    if ((local_460 != 0.0) || (NAN(local_460))) goto LAB_100366d4a;
  }
  if ((local_460 != DAT_100700af8) || (NAN(local_460) || NAN(DAT_100700af8))) {
    if (((local_460 != 0.0) || (NAN(local_460))) &&
       ((DAT_10070f3a8 <= local_460 ||
        (uVar4 = FUN_1001ebdc3(), (double)(uVar4 % 100000000) / _DAT_100745538 <= local_460)))) {
      FUN_1001b7a44(&local_458);
      cVar2 = FUN_1001cd7eb("canary",&local_458);
      if (cVar2 != '\0') {
        FUN_1001a8c1c(local_490,&PTR_cf_canary_100855910);
        FUN_1001a7bac(local_480,local_490);
        FUN_1001aaf14(local_470,&local_458);
        FUN_100367584(plVar5,local_480,local_470);
        FUN_1001ab006(local_470);
        FUN_1001ab240(local_480);
        FUN_1001ab006(local_490);
      }
      FUN_1001a7b90(local_490,&PTR_cf_frequency_100855900);
      FUN_1001aa318(local_480);
      FUN_1001aae20(local_460,local_480);
      FUN_1001a9c84(plVar5,local_490,local_480);
      FUN_1001aae6c(local_480);
      FUN_1001ab240(local_490);
      FUN_1004d747e(param_1,1);
      FUN_1001b7a50(&local_458);
    }
  }
  else {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_458 = 0x8220202;
      uStack_454 = 0x7a0a90;
      uStack_450 = 1;
      local_44c = 0x822;
      local_44a = "samplingFrequency != kSamplingFrequency_Invalid";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0x800,0);
  }
LAB_100366fc8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

