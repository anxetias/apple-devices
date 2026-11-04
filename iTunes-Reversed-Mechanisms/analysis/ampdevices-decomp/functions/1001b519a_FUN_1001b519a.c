// name: FUN_1001b519a
// address: 1001b519a

undefined8 * FUN_1001b519a(undefined8 *param_1,long *param_2,uint param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ID IVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 local_50 [16];
  undefined4 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2);
  (**(code **)(*param_2 + 0x78))(local_50,param_2);
  IVar3 = NSColor::colorFromUserInterfaceColor_
                    ((ID)PTR__OBJC_CLASS___NSColor_10082d300,
                     PTR_s_colorFromUserInterfaceColor__10088c150,(ulong)param_3);
  lVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
  if (param_3 == 0x36 && lVar4 == 0) {
    IVar3 = NSColor::whiteColor((ID)PTR__OBJC_CLASS___NSColor_10082d300,PTR_s_whiteColor_10088c080);
    lVar4 = _objc_retainAutoreleasedReturnValue(IVar3);
  }
  uVar5 = (*(code *)PTR__objc_msgSend_10082c770)
                    (local_40,CONCAT44(uStack_34,uStack_38),uVar2,
                     PTR_s_coloredTemplateWithSize_fromRect_10088c230,lVar4);
  lVar6 = _objc_retainAutoreleasedReturnValue(uVar5);
  if (lVar6 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_1001b4e36(param_1,lVar6);
  }
  puVar1 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(lVar6);
  (*(code *)puVar1)(lVar4);
  (*(code *)puVar1)(uVar2);
  return param_1;
}

