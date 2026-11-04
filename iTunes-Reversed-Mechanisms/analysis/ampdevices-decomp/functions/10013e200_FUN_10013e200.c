// name: FUN_10013e200
// address: 10013e200

undefined8 FUN_10013e200(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _objc_autoreleasePoolPush();
  uVar2 = (*(code *)PTR__objc_msgSend_10082c770)
                    (param_2,PTR_s_appleIDHeadersForRequest__10088baf8,param_3);
  FUN_1001a8d5a(param_1,uVar2,1);
  _objc_autoreleasePoolPop(uVar1);
  return param_1;
}

