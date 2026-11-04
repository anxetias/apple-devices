// name: FUN_1005c6eae
// address: 1005c6eae

/* WARNING: Type propagation algorithm not settling */

int FUN_1005c6eae(undefined8 param_1,undefined4 param_2,long param_3,cfstringStruct *param_4,
                 undefined8 param_5)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  cfstringStruct **ppcVar6;
  cfstringStruct **ppcVar7;
  undefined1 local_b0 [8];
  undefined4 local_a8;
  int local_a4;
  undefined2 uStack_a0;
  undefined2 uStack_9e;
  undefined2 uStack_9c;
  undefined4 uStack_9a;
  undefined2 uStack_96;
  undefined2 uStack_94;
  undefined6 uStack_92;
  cfstringStruct *local_88 [2];
  undefined8 local_78 [4];
  cfstringStruct *local_58 [5];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_58[0] = &cf_ApplicationType;
  iVar2 = -0x32;
  switch(param_2) {
  case 1:
    local_88[0] = &cf_System;
    break;
  case 2:
    local_88[0] = &cf_User;
    break;
  default:
    goto switchD_1005c6efe_caseD_3;
  case 4:
    local_88[0] = &cf_Internal;
    break;
  case 7:
    local_88[0] = &cf_Any;
  }
  if (param_3 == 0) {
    ppcVar6 = local_88 + 1;
    ppcVar7 = local_58 + 1;
    iVar2 = 1;
  }
  else {
    ppcVar6 = local_88 + 2;
    ppcVar7 = local_58 + 2;
    local_58[1] = &cf_Attribute;
    iVar2 = 2;
    local_88[1] = (cfstringStruct *)param_3;
  }
  if (param_4 != (cfstringStruct *)0x0) {
    *ppcVar7 = &cf_ReturnAttributes;
    *ppcVar6 = param_4;
    iVar2 = iVar2 + 1;
  }
  uVar5 = (ulong)(uint)(iVar2 * 8);
  *(cfstringStruct **)((long)local_58 + uVar5) = &cf_ShowLaunchProhibitedApps;
  uVar4 = *(undefined8 *)PTR__kCFBooleanTrue_10082e038;
  *(undefined8 *)((long)local_88 + uVar5) = uVar4;
  *(cfstringStruct **)((long)local_58 + uVar5 + 8) = &cf_ShowPlaceholders;
  *(undefined8 *)((long)local_88 + uVar5 + 8) = uVar4;
  lVar3 = FUN_1001713ff(DAT_1008c4d90,local_58,local_88,iVar2 + 2,
                        PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                        PTR__kCFTypeDictionaryValueCallBacks_10082e140);
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_a8 = 0x8220202;
      local_a4 = 0x7a0a90;
      uStack_a0 = 1;
      uStack_9e = 0;
      uStack_9c = 0x822;
      uStack_9a = 0x7ef177;
      uStack_96 = 1;
      uStack_94 = 0;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar2 = _AMDeviceLookupApplications(param_1,lVar3,param_5);
  if ((iVar2 != 0) &&
     (cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10), cVar1 != '\0')) {
    uVar4 = _AMDeviceCopyDeviceIdentifier(param_1);
    FUN_1001aaedc(local_b0,uVar4);
    local_a8 = 0x4000302;
    uStack_a0 = 0x842;
    uStack_9e = local_b0._0_2_;
    uStack_9c = local_b0._2_2_;
    uStack_9a = local_b0._4_4_;
    uStack_96 = 0x800;
    uStack_94 = (undefined2)param_1;
    uStack_92 = (undefined6)((ulong)param_1 >> 0x10);
    local_a4 = iVar2;
    __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                        "AMDeviceLookupApplications failed (0x%08X) for device %{public}@ (%p)",
                        &local_a8,0x1c);
    FUN_1001ab006(local_b0);
  }
  FUN_10017060f(lVar3);
switchD_1005c6efe_caseD_3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

