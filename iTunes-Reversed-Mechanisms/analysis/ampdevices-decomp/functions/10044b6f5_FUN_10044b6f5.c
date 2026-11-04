// name: FUN_10044b6f5
// address: 10044b6f5

void FUN_10044b6f5(void)

{
  char cVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  IVar2 = NSAppearance::currentAppearance
                    ((ID)PTR__OBJC_CLASS___NSAppearance_10082d2f0,PTR_s_currentAppearance_10088d158)
  ;
  uVar3 = _objc_retainAutoreleasedReturnValue(IVar2);
  uVar6 = *(undefined8 *)PTR__NSAppearanceNameAqua_10082d2e0;
  uVar7 = *(undefined8 *)PTR__NSAppearanceNameDarkAqua_10082d2e8;
  local_48 = uVar6;
  local_40 = uVar7;
  IVar2 = NSArray::arrayWithObjects_count_
                    ((ID)PTR__OBJC_CLASS___NSArray_10082df78,PTR_s_arrayWithObjects_count__10088bda0
                     ,&local_48,2);
  uVar4 = _objc_retainAutoreleasedReturnValue(IVar2);
  uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                    (uVar3,PTR_s_bestMatchFromAppearancesWithName_10088c2d8,uVar4);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  cVar1 = (*(code *)PTR__objc_msgSend_10082c770)(uVar5,PTR_s_isEqualToString__10088bb98,uVar7);
  if (cVar1 == '\0') {
    uVar7 = uVar6;
  }
  IVar2 = NSAppearance::appearanceNamed_
                    ((ID)PTR__OBJC_CLASS___NSAppearance_10082d2f0,PTR_s_appearanceNamed__10088d160,
                     uVar7);
  uVar6 = _objc_retainAutoreleasedReturnValue(IVar2);
  NSAppearance::setCurrentAppearance_
            ((ID)PTR__OBJC_CLASS___NSAppearance_10082d2f0,PTR_s_setCurrentAppearance__10088c108,
             uVar6);
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  (*(code *)PTR__objc_release_10082c7b0)(uVar5);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    _objc_autoreleaseReturnValue(uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

