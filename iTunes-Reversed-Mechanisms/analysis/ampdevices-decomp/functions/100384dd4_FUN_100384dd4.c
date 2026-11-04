// name: FUN_100384dd4
// address: 100384dd4

void FUN_100384dd4(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  IVar3 = NSMutableArray::arrayWithCapacity_
                    ((ID)PTR__OBJC_CLASS___NSMutableArray_10082dfa0,
                     PTR_s_arrayWithCapacity__10088c9b0,
                     (param_1[1] - *param_1 >> 3) * 0x6db6db6db6db6db7);
  uVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
  puVar2 = PTR_s_addObject__10088c218;
  lVar1 = param_1[1];
  for (lVar6 = *param_1; lVar6 != lVar1; lVar6 = lVar6 + 0x38) {
    uVar5 = FUN_100384b7c(lVar6);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)PTR__objc_msgSend_10082c770)(uVar4,puVar2,uVar5);
    (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  }
  _objc_autoreleaseReturnValue(uVar4);
  return;
}

