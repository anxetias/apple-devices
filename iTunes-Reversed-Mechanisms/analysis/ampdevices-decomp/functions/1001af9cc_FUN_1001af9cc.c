// name: FUN_1001af9cc
// address: 1001af9cc

void FUN_1001af9cc(undefined8 *param_1)

{
  char cVar1;
  uint uVar2;
  ID IVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar2 = FUN_1001ad164();
  IVar3 = NSColor::colorFromUserInterfaceColor_
                    ((ID)PTR__OBJC_CLASS___NSColor_10082d300,
                     PTR_s_colorFromUserInterfaceColor__10088c150,(ulong)uVar2);
  lVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
  if (lVar4 == 0) {
    cVar1 = FUN_1001ad0b4(param_1);
    if (cVar1 == '\0') {
      uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                        (*param_1,param_1[1],param_1[2],param_1[3],
                         PTR__OBJC_CLASS___NSColor_10082d300,
                         PTR_s_colorWithSRGBRed_green_blue_alph_10088c158);
      lVar4 = _objc_retainAutoreleasedReturnValue(uVar5);
    }
    else {
      lVar4 = 0;
    }
  }
  _objc_autoreleaseReturnValue(lVar4);
  return;
}

