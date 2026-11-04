// name: FUN_1004a5a74
// address: 1004a5a74

undefined8 FUN_1004a5a74(undefined8 param_1,undefined4 param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  long local_88 [4];
  long *local_68;
  long local_58 [4];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008bfa20 == 0) {
    uVar4 = FUN_1004a4efe();
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_88[0]._0_2_ = 0;
      __os_log_error_impl(0x100000000,uVar4,0x10,"No import initiated yet (video)!",local_88,2);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  }
  else {
    plVar1 = (long *)param_3[4];
    if (plVar1 == (long *)0x0) {
      uVar4 = FUN_1004a4efe();
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_88[0]._0_2_ = 0;
        __os_log_error_impl(0x100000000,uVar4,0x10,"No video completion proc provided!",local_88,2);
      }
      (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    }
    else {
      if (plVar1 == param_3) {
        local_68 = local_88;
        (**(code **)(*plVar1 + 0x18))(plVar1,local_88);
      }
      else {
        local_68 = (long *)(**(code **)(*plVar1 + 0x10))();
      }
      plVar1 = local_68;
      if (local_68 == local_88) {
        if (DAT_1008bfa50 == &DAT_1008bfa30) {
          (**(code **)(*local_68 + 0x18))(local_68,local_58);
          (**(code **)(*local_68 + 0x20))();
          local_68 = (long *)0x0;
          (**(code **)(*DAT_1008bfa50 + 0x18))(DAT_1008bfa50,local_88);
          (**(code **)(*DAT_1008bfa50 + 0x20))();
          DAT_1008bfa50 = (long *)0x0;
          local_68 = local_88;
          (**(code **)(local_58[0] + 0x18))(local_58,&DAT_1008bfa30);
          (**(code **)(local_58[0] + 0x20))();
          DAT_1008bfa50 = &DAT_1008bfa30;
        }
        else {
          (**(code **)(*local_68 + 0x18))(local_68,&DAT_1008bfa30);
          (**(code **)(*local_68 + 0x20))();
          local_68 = DAT_1008bfa50;
          DAT_1008bfa50 = &DAT_1008bfa30;
        }
LAB_1004a5c4e:
        if (local_68 == local_88) goto LAB_1004a5c5f;
        lVar3 = 0x28;
        if (local_68 != (long *)0x0) goto LAB_1004a5c64;
      }
      else {
        if (DAT_1008bfa50 != &DAT_1008bfa30) {
          local_68 = DAT_1008bfa50;
          DAT_1008bfa50 = plVar1;
          goto LAB_1004a5c4e;
        }
        (**(code **)(DAT_1008bfa30 + 0x18))(&DAT_1008bfa30,local_88);
        (**(code **)(*DAT_1008bfa50 + 0x20))();
        DAT_1008bfa50 = local_68;
        local_68 = local_88;
LAB_1004a5c5f:
        lVar3 = 0x20;
LAB_1004a5c64:
        (**(code **)(*local_68 + lVar3))(local_68);
      }
      uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                        (DAT_1008bfa20,PTR_s_beginDownloadVideoAsset_withQual_10088d580,param_1,
                         param_2);
      plVar1 = DAT_1008bfa50;
      if ((int)uVar4 != 0) goto LAB_1004a5cc2;
      DAT_1008bfa50 = (long *)0x0;
      if (plVar1 == &DAT_1008bfa30) {
        lVar3 = 0x20;
      }
      else {
        lVar3 = 0x28;
        if (plVar1 == (long *)0x0) goto LAB_1004a5cc0;
      }
      (**(code **)(*plVar1 + lVar3))();
    }
  }
LAB_1004a5cc0:
  uVar4 = 0;
LAB_1004a5cc2:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}

