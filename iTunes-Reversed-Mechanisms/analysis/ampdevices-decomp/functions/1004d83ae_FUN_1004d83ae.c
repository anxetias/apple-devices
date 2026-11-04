// name: FUN_1004d83ae
// address: 1004d83ae

undefined4 FUN_1004d83ae(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined4 local_28;
  
  uVar3 = (*(code *)PTR__objc_retain_10082c7b8)(param_2);
  local_38 = &local_40;
  local_40 = 0;
  local_30 = 0x2020000000;
  local_28 = 0;
  FUN_1001e9de0(param_1 + 0x18);
  if (DAT_1008bfc18 == 0) {
    lVar4 = _objc_opt_new(&objc::class_t::AMPDiscoveryDevicesAgentEventsClient);
    lVar2 = DAT_1008bfc18;
    DAT_1008bfc18 = lVar4;
    (*(code *)PTR__objc_release_10082c7b0)(lVar2);
  }
  FUN_1001e9eb9(param_1 + 0x18);
  (*(code *)PTR__objc_msgSend_10082c770)
            (DAT_1008bfc18,PTR_s_devicesAgentDidStartSoftwareUpda_10088c568,uVar3);
  uVar1 = *(undefined4 *)(local_38 + 3);
  __Block_object_dispose(&local_40,8);
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  return uVar1;
}

