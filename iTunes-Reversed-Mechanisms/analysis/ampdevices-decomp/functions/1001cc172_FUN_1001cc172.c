// name: FUN_1001cc172
// address: 1001cc172

void FUN_1001cc172(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = 0;
  IVar2 = NSProcessInfo::processInfo
                    ((ID)PTR__OBJC_CLASS___NSProcessInfo_10082c6a0,PTR_s_processInfo_10088bad8);
  uVar3 = _objc_retainAutoreleasedReturnValue(IVar2);
  uVar4 = FUN_1001bdcb0(param_2,0);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                    (uVar3,PTR_s_beginActivityWithOptions_reason__10088c298,0x4000,uVar5);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar4 = *param_1;
  *param_1 = uVar6;
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(uVar4);
  (*(code *)puVar1)(uVar5);
  (*(code *)puVar1)(uVar3);
  return;
}

