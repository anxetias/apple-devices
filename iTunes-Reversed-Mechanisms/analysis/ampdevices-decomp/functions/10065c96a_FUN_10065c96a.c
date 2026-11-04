// name: FUN_10065c96a
// address: 10065c96a

void FUN_10065c96a(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = (*(code *)PTR__objc_msgSend_10082c770)
                    (&objc::class_t::AMPDevicesClientConnection,PTR_s_allDeviceIdentifiers_10088dd40
                    );
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2,0);
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  return;
}

