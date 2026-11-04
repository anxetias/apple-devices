// name: FUN_10015153c
// address: 10015153c

undefined8 FUN_10015153c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _objc_autoreleasePoolPush();
  uVar2 = (*(code *)PTR__objc_msgSend_10082c770)(*(undefined8 *)*param_2,PTR_s_username_10088be90);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  FUN_1001bdca6(param_1,uVar2);
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  _objc_autoreleasePoolPop(uVar1);
  return param_1;
}

