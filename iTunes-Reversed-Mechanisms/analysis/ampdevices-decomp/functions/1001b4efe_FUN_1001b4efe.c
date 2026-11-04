// name: FUN_1001b4efe
// address: 1001b4efe

undefined8 FUN_1001b4efe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ID IVar1;
  undefined8 uVar2;
  
  IVar1 = NSColor::colorFromUserInterfaceColor_
                    ((ID)PTR__OBJC_CLASS___NSColor_10082d300,
                     PTR_s_colorFromUserInterfaceColor__10088c150);
  uVar2 = _objc_retainAutoreleasedReturnValue(IVar1);
  FUN_1001b4f70(param_1,param_2,param_3,uVar2);
  (*(code *)PTR__objc_release_10082c7b0)(uVar2);
  return param_2;
}

