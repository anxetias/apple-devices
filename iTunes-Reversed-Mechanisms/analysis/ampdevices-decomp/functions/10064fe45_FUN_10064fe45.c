// name: FUN_10064fe45
// address: 10064fe45

void FUN_10064fe45(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_100502206(param_2);
  iVar1 = FUN_1002a94c0(uVar2);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSError_10082c660,PTR_s_errorWithOSStatus__10088d958,iVar1)
    ;
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar2);
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  return;
}

