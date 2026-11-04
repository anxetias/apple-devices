// name: FUN_1001b5cd2
// address: 1001b5cd2

void FUN_1001b5cd2(undefined4 param_1,long param_2,long param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *op;
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_3 != 0) {
    IVar1 = NSGraphicsContext::currentContext
                      ((ID)PTR__OBJC_CLASS___NSGraphicsContext_10082d308,
                       PTR_s_currentContext_10088bf60);
    uVar2 = _objc_retainAutoreleasedReturnValue(IVar1);
    IVar1 = NSGraphicsContext::graphicsContextWithCGContext_flipped_
                      ((ID)PTR__OBJC_CLASS___NSGraphicsContext_10082d308,
                       PTR_s_graphicsContextWithCGContext_fli_10088c258,param_3,1);
    uVar3 = _objc_retainAutoreleasedReturnValue(IVar1);
    op = PTR_s_setCurrentContext__10088c260;
    NSGraphicsContext::setCurrentContext_
              ((ID)PTR__OBJC_CLASS___NSGraphicsContext_10082d308,PTR_s_setCurrentContext__10088c260,
               uVar3);
    (*(code *)PTR__objc_release_10082c7b0)(uVar3);
    (*(code *)PTR__objc_msgSend_10082c770)
              (param_1,*(undefined8 *)(param_2 + 0x48),
               PTR_s_drawInRect_fromRect_operation_fr_10088c250,2,1,0,param_7,*param_4,param_4[1],
               *(undefined4 *)(param_4 + 2),*(undefined4 *)(param_4 + 3),
               *(undefined8 *)PTR__NSZeroRect_10082c628,
               *(undefined8 *)(PTR__NSZeroRect_10082c628 + 8),
               *(undefined8 *)(PTR__NSZeroRect_10082c628 + 0x10),
               *(undefined8 *)(PTR__NSZeroRect_10082c628 + 0x18));
    NSGraphicsContext::setCurrentContext_
              ((ID)PTR__OBJC_CLASS___NSGraphicsContext_10082d308,op,uVar2);
    (*(code *)PTR__objc_release_10082c7b0)(uVar2);
    return;
  }
  return;
}

