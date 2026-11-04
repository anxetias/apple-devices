// name: FUN_1001b592e
// address: 1001b592e

void FUN_1001b592e(undefined4 param_1,long param_2,long param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined1 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *op;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_3 + 8);
  if (lVar1 != 0) {
    IVar2 = NSGraphicsContext::currentContext
                      ((ID)PTR__OBJC_CLASS___NSGraphicsContext_10082d308,
                       PTR_s_currentContext_10088bf60);
    uVar3 = _objc_retainAutoreleasedReturnValue(IVar2);
    IVar2 = NSGraphicsContext::graphicsContextWithCGContext_flipped_
                      ((ID)PTR__OBJC_CLASS___NSGraphicsContext_10082d308,
                       PTR_s_graphicsContextWithCGContext_fli_10088c258,lVar1,1);
    uVar4 = _objc_retainAutoreleasedReturnValue(IVar2);
    op = PTR_s_setCurrentContext__10088c260;
    NSGraphicsContext::setCurrentContext_
              ((ID)PTR__OBJC_CLASS___NSGraphicsContext_10082d308,PTR_s_setCurrentContext__10088c260,
               uVar4);
    (*(code *)PTR__objc_release_10082c7b0)(uVar4);
    (*(code *)PTR__objc_msgSend_10082c770)
              (param_1,*(undefined8 *)(param_2 + 0x48),
               PTR_s_drawInRect_fromRect_operation_fr_10088c250,2,param_6,0,param_7,*param_5,
               param_5[1],*(undefined4 *)(param_5 + 2),*(undefined4 *)(param_5 + 3),*param_4,
               param_4[1],param_4[2],param_4[3]);
    NSGraphicsContext::setCurrentContext_
              ((ID)PTR__OBJC_CLASS___NSGraphicsContext_10082d308,op,uVar3);
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    return;
  }
  return;
}

