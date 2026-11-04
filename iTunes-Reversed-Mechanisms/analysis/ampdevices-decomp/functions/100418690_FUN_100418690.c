// name: FUN_100418690
// address: 100418690

void FUN_100418690(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  IVar3 = NSMutableSet::set((ID)PTR__OBJC_CLASS___NSMutableSet_10082dfb8,PTR_s_set_10088cad8);
  uVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
  puVar2 = PTR_s_addObject__10088c218;
  if (param_1 != (long *)0x0) {
    lVar1 = param_1[1];
    for (lVar6 = *param_1; lVar6 != lVar1; lVar6 = lVar6 + 0x10) {
      uVar5 = FUN_1001bdcb0(lVar6,0);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      (*(code *)PTR__objc_msgSend_10082c770)(uVar4,puVar2,uVar5);
      (*(code *)PTR__objc_release_10082c7b0)(uVar5);
    }
  }
  _objc_autoreleaseReturnValue(uVar4);
  return;
}

