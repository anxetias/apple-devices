// name: FUN_10017c529
// address: 10017c529

undefined8 FUN_10017c529(undefined8 param_1,long param_2,long param_3,undefined1 param_4)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 local_88 [80];
  long local_38;
  
  local_38 = param_3;
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
    FUN_10017c7be(local_88,lVar4,param_4,0x95);
    if (local_38 - 0x7d1U < 0xfffffffffffff86f || param_2 - 0x7d1U < 0xfffffffffffff86f) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_10017c88a(local_88,param_2);
    }
    FUN_10017cba6(local_88);
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar1);
  return uVar3;
}

