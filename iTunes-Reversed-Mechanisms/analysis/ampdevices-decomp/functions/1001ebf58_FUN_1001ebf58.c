// name: FUN_1001ebf58
// address: 1001ebf58

undefined8 FUN_1001ebf58(undefined8 param_1)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__objc_msgSend_10082c770;
  IVar2 = UTType::_typeOfCurrentDevice
                    ((ID)PTR__OBJC_CLASS___UTType_10082c398,PTR_s__typeOfCurrentDevice_10088c2a8);
  uVar3 = _objc_retainAutoreleasedReturnValue(IVar2);
  uVar4 = (*(code *)puVar1)(uVar3,PTR_s_localizedDescription_10088c2b0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  FUN_1001bdca6(param_1,uVar4);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  (*(code *)puVar1)(uVar3);
  return param_1;
}

