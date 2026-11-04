// name: FUN_1004185cc
// address: 1004185cc

void FUN_1004185cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  IVar3 = NSMutableSet::set((ID)PTR__OBJC_CLASS___NSMutableSet_10082dfb8,PTR_s_set_10088cad8);
  uVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
  puVar2 = PTR_s_addObject__10088c218;
  if (param_1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[1];
    for (param_1 = (undefined8 *)*param_1; param_1 != puVar1; param_1 = param_1 + 1) {
      IVar3 = NSNumber::numberWithUnsignedLongLong_
                        ((ID)PTR__OBJC_CLASS___NSNumber_10082c690,
                         PTR_s_numberWithUnsignedLongLong__10088be20,*param_1);
      uVar5 = _objc_retainAutoreleasedReturnValue(IVar3);
      (*(code *)PTR__objc_msgSend_10082c770)(uVar4,puVar2,uVar5);
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    }
  }
  _objc_autoreleaseReturnValue(uVar4);
  return;
}

