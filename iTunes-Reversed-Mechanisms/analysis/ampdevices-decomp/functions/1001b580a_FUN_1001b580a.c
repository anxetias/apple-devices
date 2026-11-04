// name: FUN_1001b580a
// address: 1001b580a

void FUN_1001b580a(double param_1,long *param_2,long param_3,undefined8 *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  ID IVar2;
  long lVar3;
  
  IVar2 = NSGraphicsContext::currentContext
                    ((ID)PTR__OBJC_CLASS___NSGraphicsContext_10082d308,
                     PTR_s_currentContext_10088bf60);
  lVar3 = _objc_retainAutoreleasedReturnValue(IVar2);
  (*(code *)PTR__objc_release_10082c7b0)(lVar3);
  if (lVar3 != 0) {
    (*(code *)PTR__objc_msgSend_10082c770)
              (SUB84(param_1,0),param_2[9],PTR_s_drawInRect_fromRect_operation_fr_10088c250,2,1,0,
               param_7,*param_4,param_4[1],*(undefined4 *)(param_4 + 2),*(undefined4 *)(param_4 + 3)
               ,*(undefined8 *)PTR__NSZeroRect_10082c628,
               *(undefined8 *)(PTR__NSZeroRect_10082c628 + 8),
               *(undefined8 *)(PTR__NSZeroRect_10082c628 + 0x10),
               *(undefined8 *)(PTR__NSZeroRect_10082c628 + 0x18));
    return;
  }
  uVar1 = *(undefined8 *)(param_3 + 8);
  if ((param_1 == DAT_100700458) && (!NAN(param_1) && !NAN(DAT_100700458))) {
                    /* WARNING: Could not recover jumptable at 0x0001001b592b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0xf8))(SUB84(DAT_100700458,0),param_2,uVar1,param_4);
    return;
  }
  _CGContextSaveGState(uVar1);
  _CGContextSetAlpha(SUB84(param_1,0),uVar1);
  (**(code **)(*param_2 + 0xf8))(SUB84(DAT_100700458,0),param_2,uVar1,param_4);
  _CGContextRestoreGState(uVar1);
  return;
}

