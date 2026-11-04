// name: FUN_10017c470
// address: 10017c470

undefined8 FUN_10017c470(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = (*(code *)PTR__objc_retain_10082c7b8)();
  IVar2 = NSGraphicsContext::currentContext
                    ((ID)PTR__OBJC_CLASS___NSGraphicsContext_10082d308,
                     PTR_s_currentContext_10088bf60);
  uVar3 = _objc_retainAutoreleasedReturnValue(IVar2);
  lVar4 = (*(code *)PTR__objc_msgSend_10082c770)
                    (uVar1,PTR_s_CGImageForProposedRect_context_h_10088bf68,0,uVar3,0);
  (*(code *)PTR__objc_release_10082c7b0)(uVar3);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_10017c3dc(lVar4,param_2,param_3);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar1);
  return uVar3;
}

