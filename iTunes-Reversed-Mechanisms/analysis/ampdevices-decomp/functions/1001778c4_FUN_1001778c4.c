// name: FUN_1001778c4
// address: 1001778c4

void FUN_1001778c4(undefined8 param_1)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__objc_msgSend_10082c770;
  IVar2 = NSNotificationCenter::defaultCenter
                    ((ID)PTR__OBJC_CLASS___NSNotificationCenter_10082c688,
                     PTR_s_defaultCenter_10088bb58);
  uVar3 = _objc_retainAutoreleasedReturnValue(IVar2);
  (*(code *)puVar1)(uVar3,PTR_s_postNotificationName_object__10088bf00,param_1,0);
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  return;
}

