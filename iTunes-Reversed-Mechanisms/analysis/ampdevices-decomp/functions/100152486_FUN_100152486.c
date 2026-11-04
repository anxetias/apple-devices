// name: FUN_100152486
// address: 100152486

void FUN_100152486(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)*param_1;
  IVar2 = NSNumber::numberWithUnsignedChar_
                    ((ID)PTR__OBJC_CLASS___NSNumber_10082c690,
                     PTR_s_numberWithUnsignedChar__10088be10,param_2 & 0xffffffff);
  uVar3 = _objc_retainAutoreleasedReturnValue(IVar2);
  FUN_10015222d(uVar1,&cf_enrolledinmatch,uVar3,*param_1 + 8);
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  return;
}

