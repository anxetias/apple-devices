// name: FUN_100385b97
// address: 100385b97

void FUN_100385b97(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *op;
  undefined *op_00;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ID IVar8;
  undefined8 uVar9;
  ID IVar10;
  ID IVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  IVar8 = _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_10082dfa0);
  IVar8 = NSMutableArray::initWithCapacity_
                    (IVar8,PTR_s_initWithCapacity__10088c9d8,
                     (param_1[1] - *param_1 >> 3) * -0x3333333333333333);
  puVar7 = PTR_s_setPersistentIDs__10088c9e8;
  puVar6 = PTR_s_setUuid__10088c9b8;
  puVar5 = PTR_s_setDbID__10088c990;
  op = PTR_s_addObject__10088c218;
  puVar1 = (undefined8 *)param_1[1];
  pcVar3 = (code *)PTR__objc_msgSend_10082c770;
  for (puVar13 = (undefined8 *)*param_1; puVar13 != puVar1; puVar13 = puVar13 + 5) {
    uVar9 = _objc_opt_new(PTR__OBJC_CLASS___AMPRemoveArtworkRequest_10082b4e8);
    IVar10 = _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_10082dfa0);
    IVar10 = NSMutableArray::initWithCapacity_
                       (IVar10,PTR_s_initWithCapacity__10088c9d8,
                        (long)(puVar13[3] - puVar13[2]) >> 3);
    (*pcVar3)(uVar9,puVar5,*puVar13);
    (*pcVar3)(uVar9,puVar6,puVar13[1]);
    op_00 = PTR_s_addObject__10088c218;
    puVar4 = PTR_s_initWithUnsignedLongLong__10088bb08;
    puVar2 = (undefined8 *)puVar13[3];
    pcVar3 = (code *)PTR__objc_msgSend_10082c770;
    for (puVar12 = (undefined8 *)puVar13[2]; PTR__objc_msgSend_10082c770 = pcVar3, puVar12 != puVar2
        ; puVar12 = puVar12 + 1) {
      IVar11 = _objc_alloc(PTR__OBJC_CLASS___NSNumber_10082c690);
      IVar11 = NSNumber::initWithUnsignedLongLong_(IVar11,puVar4,*puVar12);
      NSMutableArray::addObject_(IVar10,op_00,IVar11);
      (*(code *)PTR__objc_release_10082c7b0)(IVar11);
      pcVar3 = (code *)PTR__objc_msgSend_10082c770;
    }
    (*pcVar3)(uVar9,puVar7,IVar10);
    puVar4 = PTR__objc_release_10082c7b0;
    (*(code *)PTR__objc_release_10082c7b0)(IVar10);
    NSMutableArray::addObject_(IVar8,op,uVar9);
    (*(code *)puVar4)(uVar9);
  }
  _objc_autoreleaseReturnValue(IVar8);
  return;
}

