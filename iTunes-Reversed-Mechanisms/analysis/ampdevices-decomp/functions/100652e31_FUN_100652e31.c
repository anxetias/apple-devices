// name: FUN_100652e31
// address: 100652e31

void FUN_100652e31(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double local_38;
  double local_30;
  char local_21;
  
  FUN_100503e83(param_2,&local_21,&local_38,&local_30);
  if ((local_38 != 0.0) || (NAN(local_38))) {
    uVar2 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSDate_10082df88,
                       PTR_s_dateWithTimeIntervalSinceReferen_10088c448);
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  }
  else {
    uVar2 = 0;
  }
  if ((local_30 != 0.0) || (NAN(local_30))) {
    uVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                      (PTR__OBJC_CLASS___NSDate_10082df88,
                       PTR_s_dateWithTimeIntervalSinceReferen_10088c448);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  }
  else {
    uVar3 = 0;
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),(int)local_21,uVar2,uVar3,0);
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  (*(code *)puVar1)(uVar2);
  return;
}

