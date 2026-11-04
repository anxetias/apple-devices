// name: FUN_10015222d
// address: 10015222d

void FUN_10015222d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__objc_retain_10082c7b8;
  uVar3 = (*(code *)PTR__objc_retain_10082c7b8)();
  uVar4 = (*(code *)puVar1)(param_2);
  uVar5 = (*(code *)puVar1)(param_3);
  uVar6 = (*(code *)PTR__objc_msgSend_10082c770)(uVar3,PTR_s_accountPropertyForKey__10088bc88,uVar4)
  ;
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  cVar2 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_isEqual__10088bde8,uVar6);
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  if (cVar2 == '\0') {
    (*(code *)PTR__objc_msgSend_10082c770)
              (uVar3,PTR_s_setAccountProperty_forKey__10088be50,uVar5,uVar4);
    LOCK();
    *param_4 = 1;
    UNLOCK();
  }
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  (*(code *)puVar1)(uVar4);
  (*(code *)puVar1)(uVar3);
  return;
}

