// name: FUN_100281b77
// address: 100281b77

void FUN_100281b77(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined1 local_c0 [8];
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined8 local_80;
  uint local_78;
  undefined8 uStack_74;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined4 uStack_68;
  undefined2 uStack_64;
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined8 local_48;
  long local_38;
  
  puVar3 = PTR__objc_retain_10082c7b8;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar5 = (*(code *)PTR__objc_retain_10082c7b8)(param_2);
  lVar6 = (*(code *)puVar3)(param_3);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  if (*(long *)(lVar2 + 0x38) != 0) {
    plVar7 = (long *)std::__shared_weak_count::lock();
    if (plVar7 != (long *)0x0) {
      lVar2 = *(long *)(lVar2 + 0x30);
      if (lVar2 != 0) {
        local_d8 = 0;
        uStack_d0 = 0;
        local_c8 = 0;
        FUN_1001aa318();
        FUN_1001aa318(local_b8);
        FUN_1001aa318(local_b0);
        local_a8 = 0;
        local_a0 = 0;
        FUN_1001aa318();
        local_90 = 0;
        local_a0 = 0;
        if (lVar6 == 0) {
          if (lVar5 == 0) {
            local_a0 = 0xffffff94;
            if (DAT_1008c7568 != -1) {
              _dispatch_once(&DAT_1008c7568,&PTR___NSConcreteGlobalBlock_100855dc0);
            }
            uVar8 = (*(code *)PTR__objc_retain_10082c7b8)(DAT_1008c7560);
            cVar4 = _os_log_type_enabled(uVar8,0x10);
            if (cVar4 != '\0') {
              local_78 = local_78 & 0xffff0000;
              __os_log_impl(0x100000000,uVar8,0x10,"add failed! - No AMPAddArtworkResponse returned"
                            ,&local_78,2);
            }
            (*(code *)PTR__objc_release_10082c7b0)(uVar8);
          }
          else {
            uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(lVar5,PTR_s_info_10088c5c8);
            local_80 = _objc_retainAutoreleasedReturnValue(uVar8);
            FUN_1003848b4(&local_78,local_80);
            local_c8 = uStack_68;
            local_d8 = CONCAT44((undefined4)uStack_74,local_78);
            uStack_d0 = CONCAT44(CONCAT22(uStack_6a,uStack_6c),uStack_74._4_4_);
            FUN_1001aaadc(local_c0);
            FUN_1001aaadc(local_b8,local_58);
            FUN_1001aaadc(local_b0,local_50);
            local_a8 = local_48;
            FUN_1001ab006(local_50);
            FUN_1001ab006(local_58);
            FUN_1001ab006(local_60);
            (*(code *)PTR__objc_release_10082c7b0)(local_80);
            uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(lVar5,PTR_s_uuid_10088c5d8);
            lVar9 = _objc_retainAutoreleasedReturnValue(uVar8);
            (*(code *)PTR__objc_release_10082c7b0)(lVar9);
            if (lVar9 == 0) {
              local_a0 = 0xffff87cb;
              if (DAT_1008c7568 != -1) {
                _dispatch_once(&DAT_1008c7568,&PTR___NSConcreteGlobalBlock_100855dc0);
              }
              uVar8 = (*(code *)PTR__objc_retain_10082c7b8)(DAT_1008c7560);
              cVar4 = _os_log_type_enabled(uVar8,0x10);
              if (cVar4 != '\0') {
                uStack_74 = **(long **)(param_1 + 0x38);
                lVar9 = (*(long **)(param_1 + 0x38))[1];
                local_78 = 0x8000200;
                uStack_6c = 0x800;
                uStack_6a = (undefined2)lVar9;
                uStack_68 = (undefined4)((ulong)lVar9 >> 0x10);
                uStack_64 = (undefined2)((ulong)lVar9 >> 0x30);
                __os_log_impl(0x100000000,uVar8,0x10,
                              "add - missing uuid for successful repsonse! src db:%llu id:%llu",
                              &local_78,0x16);
              }
              (*(code *)PTR__objc_release_10082c7b0)(uVar8);
            }
            else {
              uVar8 = (*(code *)PTR__objc_msgSend_10082c770)(lVar5,PTR_s_uuid_10088c5d8);
              uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
              FUN_1001aaef6(&local_78,uVar8);
              FUN_1001aaadc(local_98,&local_78);
              FUN_1001ab006(&local_78);
              (*(code *)PTR__objc_release_10082c7b0)(uVar8);
              local_90 = (*(code *)PTR__objc_msgSend_10082c770)(lVar5,PTR_s_imageDataHash_10088c5e0)
              ;
            }
          }
        }
        else {
          local_a0 = (*(code *)PTR__objc_msgSend_10082c770)(lVar6,PTR_s_code_10088bb40);
          if (DAT_1008c7568 != -1) {
            _dispatch_once(&DAT_1008c7568,&PTR___NSConcreteGlobalBlock_100855dc0);
          }
          uVar8 = (*(code *)PTR__objc_retain_10082c7b8)(DAT_1008c7560);
          cVar4 = _os_log_type_enabled(uVar8,0x10);
          if (cVar4 != '\0') {
            local_78 = 0x8400102;
            uStack_74 = lVar6;
            __os_log_impl(0x100000000,uVar8,0x10,"add failed! status:%@",&local_78,0xc);
          }
          (*(code *)PTR__objc_release_10082c7b0)(uVar8);
        }
        FUN_100386bec(lVar2,&local_d8,*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30,
                      *(long *)(*(long *)(param_1 + 0x30) + 8) + 0x30);
        FUN_1001ab006(local_98);
        FUN_1001ab006(local_b0);
        FUN_1001ab006(local_b8);
        FUN_1001ab006(local_c0);
      }
      LOCK();
      plVar1 = plVar7 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  (*(code *)PTR__objc_release_10082c7b0)(lVar6);
  (*(code *)PTR__objc_release_10082c7b0)(lVar5);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

