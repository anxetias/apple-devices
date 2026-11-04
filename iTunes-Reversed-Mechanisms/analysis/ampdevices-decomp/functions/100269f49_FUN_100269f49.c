// name: FUN_100269f49
// address: 100269f49

void FUN_100269f49(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_10082c770)(uVar1,PTR_s_connectionInvalidated_10088c540);
  (*(code *)PTR__objc_release_10082c7b0)(uVar1);
  return;
}

