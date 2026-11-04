// name: FUN_10027ed58
// address: 10027ed58

void FUN_10027ed58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  ulong uVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 local_2d8;
  long lStack_2d0;
  long *local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  long lStack_290;
  long *local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  long local_258;
  long *local_250;
  long local_248;
  long local_240;
  undefined *local_238;
  undefined *local_230;
  long local_228;
  long *local_220;
  undefined *local_218;
  long local_210;
  undefined *local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  ulong uStack_1f0;
  ulong local_1e8;
  long local_1e0;
  undefined *local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8 [128];
  undefined4 local_148;
  undefined8 uStack_144;
  undefined2 uStack_13c;
  undefined2 uStack_13a;
  undefined4 uStack_138;
  undefined2 uStack_134;
  undefined1 local_130 [8];
  undefined1 local_128 [8];
  undefined1 local_120 [8];
  undefined8 local_118;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined1 local_f0 [8];
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined1 local_b8 [128];
  long local_38;
  
  puVar2 = PTR__objc_retain_10082c7b8;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_200 = (*(code *)PTR__objc_retain_10082c7b8)(param_2);
  lVar5 = (*(code *)puVar2)(param_3);
  lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  local_210 = param_1;
  if (*(long *)(lVar7 + 0x38) != 0) {
    local_1e0 = lVar5;
    local_250 = (long *)std::__shared_weak_count::lock();
    lVar5 = local_1e0;
    if (local_250 != (long *)0x0) {
      local_258 = *(long *)(lVar7 + 0x30);
      plVar9 = local_250;
      if (local_258 != 0) {
        local_1f8 = 0;
        uStack_1f0 = 0;
        local_1e8 = 0;
        local_228 = local_258;
        local_220 = local_250;
        if (local_1e0 == 0) {
          local_2a8 = 0;
          uStack_2a0 = 0;
          local_2b8 = 0;
          uStack_2b0 = 0;
          local_2c8 = (long *)0x0;
          uStack_2c0 = 0;
          local_2d8 = 0;
          lStack_2d0 = 0;
          local_1d0 = (*(code *)PTR__objc_retain_10082c7b8)(local_200);
          lVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                            (local_1d0,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_2d8,
                             local_b8,0x10);
          if (lVar7 != 0) {
            local_240 = *local_2c8;
            do {
              local_208 = PTR_s_info_10088c5c8;
              local_1d8 = PTR_s_error_10088c5d0;
              local_238 = PTR_s_code_10088bb40;
              local_218 = PTR_s_uuid_10088c5d8;
              local_230 = PTR_s_imageDataHash_10088c5e0;
              lVar5 = 0;
              local_248 = lVar7;
              do {
                if (*local_2c8 != local_240) {
                  _objc_enumerationMutation(local_1d0);
                }
                uVar6 = *(undefined8 *)(lStack_2d0 + lVar5 * 8);
                local_108._0_4_ = 0;
                local_108._4_4_ = 0;
                uStack_100 = 0;
                uStack_fc = 0;
                local_f8 = 0;
                FUN_1001aa318(local_f0);
                FUN_1001aa318(local_e8);
                FUN_1001aa318(local_e0);
                local_d8 = 0;
                local_d0 = 0;
                FUN_1001aa318(local_c8);
                local_c0 = 0;
                uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(uVar6,local_208);
                uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
                FUN_1003848b4(&local_148,uVar8);
                local_f8 = uStack_138;
                uStack_fc = CONCAT22(uStack_13a,uStack_13c);
                local_108._0_4_ = local_148;
                local_108._4_4_ = (undefined4)uStack_144;
                uStack_100 = uStack_144._4_4_;
                FUN_1001aaadc(local_f0,local_130);
                FUN_1001aaadc(local_e8,local_128);
                FUN_1001aaadc(local_e0,local_120);
                local_d8 = local_118;
                FUN_1001ab006(local_120);
                FUN_1001ab006(local_128);
                FUN_1001ab006(local_130);
                (*(code *)PTR__objc_release_10082c7b0)(uVar8);
                uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(uVar6,local_1d8);
                lVar7 = _objc_retainAutoreleasedReturnValue(uVar8);
                (*(code *)PTR__objc_release_10082c7b0)(lVar7);
                if (lVar7 == 0) {
                  uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(uVar6,local_218);
                  lVar7 = _objc_retainAutoreleasedReturnValue(uVar8);
                  (*(code *)PTR__objc_release_10082c7b0)(lVar7);
                  if (lVar7 == 0) {
                    local_d0 = 0xffff87cb;
                    if (DAT_1008c7568 != -1) {
                      _dispatch_once(&DAT_1008c7568,&PTR___NSConcreteGlobalBlock_100855dc0);
                    }
                    uVar6 = (*(code *)PTR__objc_retain_10082c7b8)(DAT_1008c7560);
                    cVar4 = _os_log_type_enabled(uVar6,0x10);
                    if (cVar4 != '\0') {
                      uStack_144 = CONCAT44(local_108._4_4_,(undefined4)local_108);
                      local_148 = 0x8000200;
                      uStack_13c = 0x800;
                      uStack_13a = (undefined2)uStack_100;
                      uStack_138 = (undefined4)(CONCAT44(uStack_fc,uStack_100) >> 0x10);
                      uStack_134 = (undefined2)((uint)uStack_fc >> 0x10);
                      __os_log_impl(0x100000000,uVar6,0x10,
                                    "lookup artwork - missing uuid for successful repsonse! src db:%llu id:%llu"
                                    ,&local_148,0x16);
                    }
                    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
                  }
                  else {
                    uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(uVar6,local_218);
                    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
                    FUN_1001aaef6(&local_148,uVar8);
                    FUN_1001aaadc(local_c8,&local_148);
                    FUN_1001ab006(&local_148);
                    (*(code *)PTR__objc_release_10082c7b0)(uVar8);
                    local_c0 = (*(code *)PTR__objc_msgSend_10082c770)(uVar6,local_230);
                  }
                }
                else {
                  uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar6,local_1d8);
                  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
                  local_d0 = (*(code *)PTR__objc_msgSend_10082c770)(uVar6,local_238);
                  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
                }
                uVar3 = uStack_1f0;
                if (uStack_1f0 < local_1e8) {
                  FUN_100284a15(uStack_1f0,&local_108);
                  uStack_1f0 = uVar3 + 0x50;
                }
                else {
                  uStack_1f0 = FUN_10028483e(&local_1f8,&local_108);
                }
                FUN_1001ab006(local_c8);
                FUN_1001ab006(local_e0);
                FUN_1001ab006(local_e8);
                FUN_1001ab006(local_f0);
                lVar5 = lVar5 + 1;
              } while (local_248 != lVar5);
              lVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                                (local_1d0,PTR_s_countByEnumeratingWithState_obje_10088bb48,
                                 &local_2d8,local_b8,0x10);
            } while (lVar7 != 0);
          }
          local_1d8 = (undefined *)0x0;
        }
        else {
          local_1d8 = (undefined *)
                      (*(code *)PTR__objc_msgSend_10082c770)(local_1e0,PTR_s_code_10088bb40);
          if (DAT_1008c7568 != -1) {
            _dispatch_once(&DAT_1008c7568,&PTR___NSConcreteGlobalBlock_100855dc0);
          }
          uVar6 = (*(code *)PTR__objc_retain_10082c7b8)(DAT_1008c7560);
          cVar4 = _os_log_type_enabled(uVar6,0x10);
          if (cVar4 != '\0') {
            local_108._0_4_ = 0x8400102;
            local_108._4_4_ = (undefined4)local_1e0;
            uStack_100 = (undefined4)((ulong)local_1e0 >> 0x20);
            __os_log_impl(0x100000000,uVar6,0x10,"lookup artwork failed! status:%@",&local_108,0xc);
          }
          (*(code *)PTR__objc_release_10082c7b0)(uVar6);
          local_268 = 0;
          uStack_260 = 0;
          local_278 = 0;
          uStack_270 = 0;
          local_288 = (long *)0x0;
          uStack_280 = 0;
          local_298 = 0;
          lStack_290 = 0;
          local_1d0 = (*(code *)PTR__objc_retain_10082c7b8)
                                (*(undefined8 *)(*(long *)(*(long *)(local_210 + 0x28) + 8) + 0x28))
          ;
          lVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                            (local_1d0,PTR_s_countByEnumeratingWithState_obje_10088bb48,&local_298,
                             local_1c8,0x10);
          if (lVar7 != 0) {
            local_208 = (undefined *)*local_288;
            do {
              lVar5 = 0;
              do {
                if ((undefined *)*local_288 != local_208) {
                  _objc_enumerationMutation(local_1d0);
                }
                uVar6 = *(undefined8 *)(lStack_290 + lVar5 * 8);
                local_108._0_4_ = 0;
                local_108._4_4_ = 0;
                uStack_100 = 0;
                uStack_fc = 0;
                local_f8 = 0;
                FUN_1001aa318(local_f0);
                FUN_1001aa318(local_e8);
                FUN_1001aa318(local_e0);
                local_d8 = 0;
                local_d0 = 0;
                FUN_1001aa318(local_c8);
                local_c0 = 0;
                FUN_1003848b4(&local_148,uVar6);
                local_f8 = uStack_138;
                uStack_fc = CONCAT22(uStack_13a,uStack_13c);
                local_108._0_4_ = local_148;
                local_108._4_4_ = (undefined4)uStack_144;
                uStack_100 = uStack_144._4_4_;
                FUN_1001aaadc(local_f0,local_130);
                FUN_1001aaadc(local_e8,local_128);
                FUN_1001aaadc(local_e0,local_120);
                local_d8 = local_118;
                FUN_1001ab006(local_120);
                FUN_1001ab006(local_128);
                FUN_1001ab006(local_130);
                uVar3 = uStack_1f0;
                local_d0 = SUB84(local_1d8,0);
                if (uStack_1f0 < local_1e8) {
                  FUN_100284a15(uStack_1f0,&local_108);
                  uStack_1f0 = uVar3 + 0x50;
                }
                else {
                  uStack_1f0 = FUN_10028483e(&local_1f8,&local_108);
                }
                FUN_1001ab006(local_c8);
                FUN_1001ab006(local_e0);
                FUN_1001ab006(local_e8);
                FUN_1001ab006(local_f0);
                lVar5 = lVar5 + 1;
              } while (lVar7 != lVar5);
              lVar7 = (*(code *)PTR__objc_msgSend_10082c770)
                                (local_1d0,PTR_s_countByEnumeratingWithState_obje_10088bb48,
                                 &local_298,local_1c8,0x10);
            } while (lVar7 != 0);
          }
        }
        (*(code *)PTR__objc_release_10082c7b0)(local_1d0);
        FUN_100386c72(local_228,local_1d8,&local_1f8,
                      *(long *)(*(long *)(local_210 + 0x30) + 8) + 0x30,
                      *(long *)(*(long *)(local_210 + 0x38) + 8) + 0x30);
        local_108 = &local_1f8;
        FUN_100284afc();
        plVar9 = local_220;
      }
      LOCK();
      plVar1 = plVar9 + 1;
      lVar7 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      lVar5 = local_1e0;
      if (lVar7 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        std::__shared_weak_count::__release_weak();
        lVar5 = local_1e0;
      }
    }
  }
  (*(code *)PTR__objc_release_10082c7b0)(lVar5);
  (*(code *)PTR__objc_release_10082c7b0)(local_200);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

