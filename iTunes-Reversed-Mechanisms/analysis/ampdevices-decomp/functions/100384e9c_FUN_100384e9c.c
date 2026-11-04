// name: FUN_100384e9c
// address: 100384e9c

void FUN_100384e9c(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *op;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  IVar5 = _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_10082dfa0);
  IVar5 = NSMutableArray::initWithCapacity_
                    (IVar5,PTR_s_initWithCapacity__10088c9d8,
                     (param_1[1] - *param_1 >> 3) * -0x5555555555555555);
  puVar4 = PTR_s_setSize__10088c9c0;
  puVar3 = PTR_s_setUuid__10088c9b8;
  op = PTR_s_addObject__10088c218;
  puVar2 = PTR__objc_msgSend_10082c770;
  puVar1 = (undefined8 *)param_1[1];
  for (puVar7 = (undefined8 *)*param_1; puVar7 != puVar1; puVar7 = puVar7 + 3) {
    uVar6 = _objc_opt_new(PTR__OBJC_CLASS___AMPArtworkRequest_10082b4d0);
    (*(code *)puVar2)(uVar6,puVar3,*puVar7);
    (*(code *)puVar2)(puVar7[1],puVar7[2],uVar6,puVar4);
    NSMutableArray::addObject_(IVar5,op,uVar6);
    (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  }
  _objc_autoreleaseReturnValue(IVar5);
  return;
}

