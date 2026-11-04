// name: FUN_1004d82aa
// address: 1004d82aa

void FUN_1004d82aa(long param_1,undefined1 param_2)

{
  long lVar1;
  long lVar2;
  
  FUN_1001e9de0(param_1 + 0x18);
  if (DAT_1008bfc18 == 0) {
    lVar2 = _objc_opt_new(&objc::class_t::AMPDiscoveryDevicesAgentEventsClient);
    lVar1 = DAT_1008bfc18;
    DAT_1008bfc18 = lVar2;
    (*(code *)PTR__objc_release_10082c7b0)(lVar1);
  }
  FUN_1001e9eb9(param_1 + 0x18);
  (*(code *)PTR__objc_msgSend_10082c770)
            (DAT_1008bfc18,PTR_s_devicesAgentDidChangeState_withR_10088c500,param_2,
             &PTR___NSConcreteGlobalBlock_10085ecd8);
  return;
}

