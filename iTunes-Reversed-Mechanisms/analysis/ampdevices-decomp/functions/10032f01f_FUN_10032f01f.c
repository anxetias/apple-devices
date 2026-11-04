// name: FUN_10032f01f
// address: 10032f01f

undefined4 FUN_10032f01f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_catalogNameComponent_10088c8f0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  cVar1 = (*(code *)PTR__objc_msgSend_10082c770)(uVar4,PTR_s_isEqualToString__10088bb98,&cf_System);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar4 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_colorNameComponent_10088c8f8);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar5 = _NSSelectorFromString(uVar4);
    uVar2 = FUN_1001ad1f2(uVar5);
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  return uVar2;
}

