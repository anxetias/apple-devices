// name: FUN_10064363d
// address: 10064363d

void FUN_10064363d(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7a44(local_a0);
  FUN_1001b7a44(local_90);
  FUN_1001b7a44(local_80);
  FUN_1005c8bbe(local_b0,param_4,param_3,local_90,local_80);
  FUN_1001b80b2(local_a0,local_b0);
  FUN_1001b7a50(local_b0);
  puVar1 = PTR__OBJC_CLASS___NSError_10082c660;
  local_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_10082c5f8;
  uVar2 = FUN_1001bdcb0(local_a0,0);
  local_70 = _objc_retainAutoreleasedReturnValue(uVar2);
  local_60 = *(undefined8 *)PTR__NSLocalizedRecoverySuggestionErrorKey_10082c600;
  local_50 = local_70;
  uVar2 = FUN_1001bdcb0(local_90,0);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar2);
  local_58 = *(undefined8 *)PTR__AMPDeviceErrorMoreInfoURLKey_10082b7e8;
  local_48 = uVar3;
  uVar2 = FUN_1001bdcb0(local_80,0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar2);
  local_40 = uVar4;
  uVar2 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSDictionary_10082df90,
                     PTR_s_dictionaryWithObjects_forKeys_co_10088bc30,&local_50,&local_68,3);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                    (puVar1,PTR_s_errorWithDomain_code_userInfo__10088c9f8,
                     *(undefined8 *)PTR__AMPDeviceMobileBackupErrorDomain_10082b808,(long)param_3,
                     uVar2);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  uVar2 = local_70;
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  FUN_1001b7a50(local_80);
  FUN_1001b7a50(local_90);
  FUN_1001b7a50(local_a0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    _objc_autoreleaseReturnValue(uVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

