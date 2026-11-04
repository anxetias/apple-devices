// name: FUN_1001b5a70
// address: 1001b5a70

void FUN_1001b5a70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  double dVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = (*(code *)PTR__objc_msgSend_10082c770)
                    (*(undefined8 *)(param_1 + 0x48),
                     PTR_s_CGImageForProposedRect_context_h_10088bf68,0,0,0);
  if (lVar3 != 0) {
    dVar1 = (double)param_4[3];
    _CGContextSaveGState(param_2);
    _CGContextTranslateCTM((int)*param_4,SUB84((double)param_4[1] + dVar1,0),param_2);
    _CGContextScaleCTM((int)DAT_100700458,(int)DAT_100700af8,param_2);
    _CGContextDrawImage(param_2,lVar3);
    _CGContextRestoreGState(param_2);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

