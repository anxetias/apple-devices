// name: FUN_10050eff9
// address: 10050eff9

undefined8 FUN_10050eff9(long param_1)

{
  int *piVar1;
  int *piVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  char *local_70;
  undefined8 local_68;
  char local_59;
  undefined4 local_58;
  int local_54;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(char *)(param_1 + 0x3b2) == '\0') {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4e = 0;
      uStack_4c = 0x822;
      local_4a = "handlerData->deviceInfo.requiresActivation";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    uVar6 = 0xffffffce;
    goto switchD_10050f10f_caseD_3;
  }
  uVar7 = 0;
  uVar6 = 0;
  if (*(long *)(param_1 + 0x7168) == 0) goto switchD_10050f10f_caseD_3;
  piVar1 = (int *)(param_1 + 0x151f8);
  local_70 = (char *)(param_1 + 0x151fc);
  piVar2 = (int *)(param_1 + 0x15200);
  iVar5 = FUN_1005be428(*(long *)(param_1 + 0x7168),piVar1,local_70,piVar2);
  if ((iVar5 != -0x80) && (iVar5 != 0)) {
    local_68 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(local_68,0x10);
    if (cVar4 != '\0') {
      local_58 = 0x8220202;
      local_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4e = 0;
      uStack_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
      __os_log_error_impl(0x100000000,local_68,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
  }
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar3 = DAT_1008c75b8;
  cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar4 != '\0') {
    local_54 = *piVar1;
    local_58 = 0x4000200;
    uStack_50 = 0x400;
    uStack_4e = (undefined2)*piVar2;
    uStack_4c = (undefined2)((uint)*piVar2 >> 0x10);
    __os_log_impl(0x100000000,uVar3,1,"activation> activation state %d, SIM status %d",&local_58,0xe
                 );
  }
  switch(*piVar1) {
  case 1:
  case 4:
    iVar5 = FUN_1005bbcf4(*(undefined8 *)(param_1 + 0x7168),0,&cf_AirplaneMode,&local_59);
    if ((iVar5 == 0) && (local_59 != '\0')) {
      uVar6 = FUN_100416f20(*(undefined4 *)(param_1 + 0x66b0),0x10cc02b6);
      FUN_1001b7eb0(&local_58,uVar6);
      uVar6 = FUN_100416f20(*(undefined4 *)(param_1 + 0x66b0),0x10cc02b7);
      FUN_1001b7eb0(local_90,uVar6);
      FUN_1004fda52(local_80,*(undefined4 *)(param_1 + 0x28));
      FUN_100450ae1(&local_58,local_90,local_80);
      FUN_1001b7a50(local_80);
      FUN_1001b7a50(local_90);
      FUN_1001b7a50(&local_58);
    }
    else {
      *(undefined1 *)(param_1 + 0x6af2) = 1;
      if ((*(ushort *)(param_1 + 100) < 0xa00) && (cVar4 = FUN_1005128b9(param_1,1), cVar4 == '\0'))
      {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar6 = DAT_1008c75b8;
        cVar4 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar4 != '\0') {
          uVar7 = *(undefined8 *)(param_1 + 0x152c8);
          local_58 = 0x8420102;
          local_54 = (int)uVar7;
          uStack_50 = (undefined2)((ulong)uVar7 >> 0x20);
          uStack_4e = (undefined2)((ulong)uVar7 >> 0x30);
          __os_log_impl(0x100000000,uVar6,1,
                        "activation> failed to read activation info from device %{public}@",
                        &local_58,0xc);
        }
      }
    }
    goto LAB_10050f320;
  case 2:
  case 8:
  case 9:
    if (*local_70 != '\0') {
      uVar6 = uVar7;
      if ((*piVar1 == 9) && (*piVar2 == 9)) {
        *(undefined1 *)(param_1 + 0x6af2) = 1;
        *(undefined1 *)(param_1 + 0x151fc) = 0;
      }
      break;
    }
    iVar5 = FUN_1005bbcf4(*(undefined8 *)(param_1 + 0x7168),0,&cf_TelephonyCapability,&local_58);
    if ((iVar5 == 0) && ((char)local_58 == '\0')) {
      FUN_1005bedad(*(undefined8 *)(param_1 + 0x7168));
      *(undefined1 *)(param_1 + 0x151fc) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x6af2) = 1;
    }
LAB_10050f320:
    uVar6 = 0;
    break;
  case 5:
    FUN_100512e8b(*(undefined4 *)(param_1 + 0x28),5);
    uVar6 = 0x469;
    break;
  case 6:
    *(undefined1 *)(param_1 + 0x6af2) = 1;
    uVar6 = uVar7;
    break;
  case 10:
    FUN_100512e8b(*(undefined4 *)(param_1 + 0x28),10);
    uVar6 = uVar7;
  }
switchD_10050f10f_caseD_3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

