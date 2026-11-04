// name: FUN_1001c1c41
// address: 1001c1c41

void FUN_1001c1c41(void)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)&DAT_1008a20c0;
  lVar4 = -0x2580;
  do {
    plVar1 = (long *)plVar3[4];
    if (plVar3 == plVar1) {
      lVar2 = 0x20;
LAB_1001c1c70:
      (**(code **)(*plVar1 + lVar2))();
    }
    else {
      lVar2 = 0x28;
      if (plVar1 != (long *)0x0) goto LAB_1001c1c70;
    }
    plVar3 = plVar3 + -0xc;
    lVar4 = lVar4 + 0x60;
    if (lVar4 == 0) {
      return;
    }
  } while( true );
}

