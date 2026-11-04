// name: FUN_1001b5484
// address: 1001b5484

undefined8 * FUN_1001b5484(undefined8 *param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = (*(code *)PTR__objc_msgSend_10082c770)
                    (*(undefined8 *)(param_2 + 0x48),
                     PTR_s_CGImageForProposedRect_context_h_10088bf68,0,0,0);
  lVar3 = _CGImageCreateWithImageInRect(uVar2);
  if (lVar3 == 0) {
    uVar2 = FUN_1001cc310();
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006a12d6(uVar2);
    }
    (*(code *)PTR__objc_release_10082c7b0)(uVar2);
    FUN_1001782e9(0,0);
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_1001b2dff((int)DAT_100700458,param_1,lVar3);
    FUN_10017060f(lVar3);
  }
  return param_1;
}

