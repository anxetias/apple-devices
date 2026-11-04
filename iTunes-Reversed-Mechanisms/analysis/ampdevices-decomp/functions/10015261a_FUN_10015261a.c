// name: FUN_10015261a
// address: 10015261a

void FUN_10015261a(long *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = _objc_autoreleasePoolPush();
  uVar3 = FUN_1001bdcb0(param_2,0);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                    (*(undefined8 *)*param_1,PTR_s_ams_storefront_10088bd98);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  cVar1 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_isEqualToString__10088bb98,uVar4);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  if (cVar1 == '\0') {
    (*(code *)PTR__objc_msgSend_10082c770)
              (*(undefined8 *)*param_1,PTR_s_ams_setStorefront__10088bd88,uVar3);
    LOCK();
    *(undefined1 *)(*param_1 + 8) = 1;
    UNLOCK();
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  _objc_autoreleasePoolPop(uVar2);
  return;
}

