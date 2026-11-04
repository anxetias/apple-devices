// name: FUN_1001b4ab0
// address: 1001b4ab0

void FUN_1001b4ab0(undefined4 param_1,long param_2,long param_3,undefined8 *param_4)

{
  double dVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_3 != 0) && (*(long *)(param_2 + 0x48) != 0)) {
    dVar1 = (double)param_4[3];
    _CGContextSaveGState(param_3);
    _CGContextSetAlpha(param_1,param_3);
    _CGContextTranslateCTM((int)*param_4,SUB84((double)param_4[1] + dVar1,0),param_3);
    _CGContextScaleCTM((int)DAT_100700458,(int)DAT_100700af8,param_3);
    _CGContextDrawImage(param_3,*(undefined8 *)(param_2 + 0x48));
    _CGContextRestoreGState(param_3);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

