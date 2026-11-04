// name: FUN_10062f5e0
// address: 10062f5e0

void FUN_10062f5e0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                    (PTR__OBJC_CLASS___NSMutableArray_10082dfa0,PTR_s_array_10088c210);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  puVar3 = PTR_s_addObject__10088c218;
  puVar2 = PTR_s_numberWithUnsignedLongLong__10088be20;
  if ((param_1 != 0) && (iVar1 = *(int *)(*(long *)(param_1 + 0x78) + 0x18), iVar1 != 0)) {
    iVar7 = 0;
    do {
      puVar5 = (undefined8 *)FUN_100380761(param_1,1,0,iVar7);
      if (puVar5 != (undefined8 *)0x0) {
        uVar6 = (*(code *)PTR__objc_msgSend_10082c770)
                          (PTR__OBJC_CLASS___NSNumber_10082c690,puVar2,*puVar5);
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        (*(code *)PTR__objc_msgSend_10082c770)(uVar4,puVar3,uVar6);
        (*(code *)PTR__objc_release_10082c7b0)(uVar6);
      }
      iVar7 = iVar7 + 1;
    } while (iVar1 != iVar7);
  }
  _objc_autoreleaseReturnValue(uVar4);
  return;
}

