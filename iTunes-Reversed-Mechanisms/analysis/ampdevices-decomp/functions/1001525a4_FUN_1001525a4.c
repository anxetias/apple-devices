// name: FUN_1001525a4
// address: 1001525a4

void FUN_1001525a4(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)*param_1;
  IVar2 = NSNumber::numberWithUnsignedLongLong_
                    ((ID)PTR__OBJC_CLASS___NSNumber_10082c690,
                     PTR_s_numberWithUnsignedLongLong__10088be20,param_2);
  uVar3 = _objc_retainAutoreleasedReturnValue(IVar2);
  FUN_10015222d(uVar1,&cf_familyid,uVar3,*param_1 + 8);
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  return;
}

