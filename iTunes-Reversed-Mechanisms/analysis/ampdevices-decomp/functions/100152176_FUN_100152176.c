// name: FUN_100152176
// address: 100152176

void FUN_100152176(long *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_1001bdcb0(param_2,0);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                    (*(undefined8 *)*param_1,PTR_s_ams_lastName_10088bd18);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  cVar1 = (*(code *)PTR__objc_msgSend_10082c770)(uVar2,PTR_s_isEqualToString__10088bb98,uVar3);
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  if (cVar1 == '\0') {
    (*(code *)PTR__objc_msgSend_10082c770)
              (*(undefined8 *)*param_1,PTR_s_ams_setLastName__10088bd78,uVar2);
    LOCK();
    *(undefined1 *)(*param_1 + 8) = 1;
    UNLOCK();
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  return;
}

