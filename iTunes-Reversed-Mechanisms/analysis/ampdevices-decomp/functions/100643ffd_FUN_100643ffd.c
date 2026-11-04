// name: FUN_100643ffd
// address: 100643ffd

void FUN_100643ffd(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__objc_msgSend_10082c770;
  uVar2 = (*(code *)PTR__objc_msgSend_10082c770)(param_1,PTR_s_pathComponents_10088d978);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)puVar1)(uVar2,PTR_s_count_10088bdc0);
  if (uVar3 < 2) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(uVar2,PTR_s_objectAtIndex__10088bf78,1);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  _objc_autoreleaseReturnValue(uVar4);
  return;
}

